using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Windows;

public class MoveRival : MonoBehaviour
{
    float TOP_VALUE_POTENCIOMETER = 1024;
    float PLAYER_SPEED = 70f;

    float cameraSize;
    Rigidbody2D ball;
    Transform rival;

    float vel = 0.82f;
    int dir = 0;
    float convfactor;
    float offset;

    public string deviceID = "";
    public bool secondPlayer = false;
    public float rivalInput;

    void Start()
    {
        cameraSize = GameObject.Find("Main Camera").GetComponent<Camera>().orthographicSize;
        ball = GameObject.Find("Ball").GetComponent<Rigidbody2D>();
        rival = this.GetComponent<Transform>();
        convfactor = (TOP_VALUE_POTENCIOMETER / 2) / cameraSize;
        offset = rival.lossyScale.y / 2;
    }

    void FixedUpdate()
    {
        rivalControl();
    }

    void rivalControl()
    {
        if (secondPlayer)
        {
            float y = ((TOP_VALUE_POTENCIOMETER / 2) - rivalInput) / convfactor;

            if (y >= cameraSize - offset)
                y = cameraSize - offset;
            else if (y <= -(cameraSize - offset))
                y = -(cameraSize - offset);

            Vector3 target = new Vector3(rival.position.x, y, 0f);

            rival.position = Vector3.MoveTowards(rival.position, target, PLAYER_SPEED * Time.deltaTime);
        }
        else
        {
            if (ball.position.x >= 0)
            {
                if (ball.position.y > rival.position.y)
                {
                    dir = 1;
                    rival.Translate(new Vector2(0f, dir * vel));
                }
                else
                {
                    dir = -1;
                    rival.Translate(new Vector2(0f, dir * vel));
                }

            }
            else
            {
                rival.Translate(Vector2.zero);
            }
        }
    }

    public void reset()
    {
        rival.position = new Vector2(rival.position.x, 0f);
        deviceID = "";
        secondPlayer = false;
        dir = 0;
    }
}
