using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using System.Runtime;
using UnityEngine.UI;
using TMPro;

public class MoveBall : MonoBehaviour
{
    int PLAYER_GOAL_OFFSET = -20;
    int RIVAL_GOAL_OFFSET = 20;
    string WIN_TEXT = "¡VICTORIA!\r\nEnhorabuena ";
    string LOSS_TEXT = "DERROTA\r\nMás suerte la siguiente";

    Rigidbody2D ball;
    Rigidbody2D player;
    Rigidbody2D rival;
    M2MqttUnityGame mqtt;
    Animator anim;
    MenuHandler mh;

    public TextMeshProUGUI playerScore;
    public TextMeshProUGUI rivalScore;
    public TextMeshProUGUI endText;

    float acc = 4f;
    float initVel = 25f;
    int initDirX = -1;
    int initDirY = 1;

    float vel;
    int dirX;
    int dirY;
    float cameraSize;
    float offset;

    void Start()
    {
        mh = GameObject.Find("Canvas").GetComponent<MenuHandler>();
        ball = this.GetComponent<Rigidbody2D>();
        player = GameObject.Find("Player").GetComponent<Rigidbody2D>();
        rival = GameObject.Find("Rival").GetComponent<Rigidbody2D>();
        cameraSize = GameObject.Find("Main Camera").GetComponent<Camera>().orthographicSize;
        mqtt = GameObject.Find("MQTTHandler").GetComponent<M2MqttUnityGame>();
        anim = GameObject.Find("Canvas").GetComponent<Animator>();

        offset = player.transform.lossyScale.y / 2;
        vel = initVel;
        initialShot(0, 2);
    }

    void FixedUpdate()
    {
        if (int.Parse(rivalScore.text) >= 5)
        {
            if (GameObject.Find("Rival").GetComponent<MoveRival>().deviceID != "" & mh.mode == 2)
                endText.text = WIN_TEXT + GameObject.Find("Rival").GetComponent<MoveRival>().deviceID;
            else
                endText.text = LOSS_TEXT;

            anim.SetBool("end", true);
            Time.timeScale = 0f;
        }
        else if (int.Parse(playerScore.text) >= 5)
        {
            endText.text = WIN_TEXT + GameObject.Find("Player").GetComponent<MovePlayer>().deviceID;
            anim.SetBool("end", true);
            Time.timeScale = 0f;
        }

        ball.velocity = new Vector2(dirX*vel, dirY*vel);

        if (ball.position.y >= (cameraSize - offset) & dirY > 0)
        {
            dirY *= -1;
            this.GetComponent<AudioSource>().Play();
        }
        else if (ball.position.y <= -(cameraSize - offset) & dirY < 0)
        {
            dirY *= -1;
            this.GetComponent<AudioSource>().Play();
        }

        if (ball.position.x <= player.position.x + PLAYER_GOAL_OFFSET)
        {
            anim.SetBool("goal", true);
            if (GameObject.Find("Rival").GetComponent<MoveRival>().deviceID != "")
                mqtt.Publish(GameObject.Find("Rival").GetComponent<MoveRival>().deviceID);

            Time.timeScale = 0f;

            rivalScore.text = (int.Parse(rivalScore.text) + 1).ToString();
            initialShot(1, 2);
            
        }
        else if (ball.position.x >= rival.position.x + RIVAL_GOAL_OFFSET)
        {
            anim.SetBool("goal", true);
            mqtt.Publish(GameObject.Find("Player").GetComponent<MovePlayer>().deviceID);
            Time.timeScale = 0f;

            playerScore.text = (int.Parse(playerScore.text) + 1).ToString();
            initialShot(0, 1);
            
        }
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.collider.name == "Player")
        {
            dirX *= -1;
            vel += acc;
            collision.gameObject.GetComponent<AudioSource>().Play();
        }
        else if (collision.collider.name == "Rival")
        {
            dirX *= -1;
            vel += acc;
            collision.gameObject.GetComponent<AudioSource>().Play();
        }
    }

    System.Random rnd = new System.Random();
    int diry, dirx;
    void initialShot(int ply, int rvl)
    {
        ball.position = Vector2.zero;
        vel = initVel;

        diry = rnd.Next(0, 2);
        if (diry == 0) diry = -1;
        dirY = initDirY * diry;

        dirx = rnd.Next(ply, rvl);
        if (dirx == 0) dirx = -1;
        dirX = initDirX * dirx;

    }

    public void reset()
    {
        rivalScore.text = "0";
        playerScore.text = "0";
        vel = initVel;
        initialShot(0, 2);
    }
}
