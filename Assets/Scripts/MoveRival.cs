using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveRival : MonoBehaviour
{
    float cameraSize;
    Rigidbody2D ball;
    Rigidbody2D rival;

    int vel = 40;
    int dir = 0;

    // Start is called before the first frame update
    void Start()
    {
        cameraSize = GameObject.Find("Main Camera").GetComponent<Camera>().orthographicSize;
        ball = GameObject.Find("Ball").GetComponent<Rigidbody2D>();
        rival = this.GetComponent<Rigidbody2D>();

    }

    // Update is called once per frame
    void FixedUpdate()
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
