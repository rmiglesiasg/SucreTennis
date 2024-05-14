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
    Rigidbody2D rival;

    int vel = 40;
    int dir = 0;
    float convfactor;

    public string deviceID = "";
    public bool secondPlayer = false;
    public float rivalInput;

    // Start is called before the first frame update
    void Start()
    {
        cameraSize = GameObject.Find("Main Camera").GetComponent<Camera>().orthographicSize;
        ball = GameObject.Find("Ball").GetComponent<Rigidbody2D>();
        rival = this.GetComponent<Rigidbody2D>();
        convfactor = (TOP_VALUE_POTENCIOMETER / 2) / cameraSize;

    }

    // Update is called once per frame
    void FixedUpdate()
    {
        RivalControl();
    }

    void RivalControl()
    {
        if (secondPlayer)
        {
            float y = ((TOP_VALUE_POTENCIOMETER / 2) - rivalInput) / convfactor;

            if (y >= cameraSize - 3f)
                y = cameraSize - 3f;
            else if (y <= -(cameraSize - 3f))
                y = -(cameraSize - 3f);

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
                    rival.velocity = new Vector2(0f, dir * vel);
                }
                else
                {
                    dir = -1;
                    rival.velocity = new Vector2(0f, dir * vel);
                }

            }
            else
            {
                rival.velocity = Vector2.zero;
            }
        }
    }
}
