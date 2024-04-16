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

    Rigidbody2D ball;
    Rigidbody2D player;
    Rigidbody2D rival;

    public TextMeshProUGUI playerScore;
    public TextMeshProUGUI rivalScore;

    float acc = 4f;
    float initVel = 25f;
    int initDirX = -1;
    int initDirY = 1;

    float vel;
    int dirX;
    int dirY;
    float cameraSize;

    // Start is called before the first frame update
    void Start()
    {
        ball = this.GetComponent<Rigidbody2D>();
        player = GameObject.Find("Player").GetComponent<Rigidbody2D>();
        rival = GameObject.Find("Rival").GetComponent<Rigidbody2D>();
        cameraSize = GameObject.Find("Main Camera").GetComponent<Camera>().orthographicSize;

        vel = initVel;
        initialShot(0, 2);
        //dirX = initDirX;
        //dirY = initDirY;
    }

    // Update is called once per frame
    void Update()
    {
        ball.velocity = new Vector2(dirX*vel, dirY*vel);

        if (ball.position.y >= cameraSize - 3f & dirY > 0)
            dirY *= -1;
        else if (ball.position.y <= -(cameraSize - 3f) & dirY < 0)
            dirY *= -1;

        if (ball.position.x <= player.position.x + PLAYER_GOAL_OFFSET)
        {
            initialShot(1, 2);
            rivalScore.text = (int.Parse(rivalScore.text) + 1).ToString();
        }
        else if (ball.position.x >= rival.position.x + RIVAL_GOAL_OFFSET)
        {
            initialShot(0, 1);
            playerScore.text = (int.Parse(playerScore.text) + 1).ToString();
        }
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.collider.name == "Player")
        {
            dirX *= -1;
            vel += acc;
        }
        else if (collision.collider.name == "Rival")
        {
            dirX *= -1;
            vel += acc;
        }
    }

    System.Random rnd = new();
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
}
