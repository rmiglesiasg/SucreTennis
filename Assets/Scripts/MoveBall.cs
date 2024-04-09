using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class MoveBall : MonoBehaviour
{
    Rigidbody2D ball;
    float acc = 0.01f;

    float vel;
    int dirX = +1;
    int dirY = 1;

    float cameraSize;

    // Start is called before the first frame update
    void Start()
    {
        ball = this.GetComponent<Rigidbody2D>();
        vel = 1f;
        cameraSize = GameObject.Find("Main Camera").GetComponent<Camera>().orthographicSize;
    }

    // Update is called once per frame
    void Update()
    {
        
        vel += acc;
        ball.velocity = new Vector2(dirX*vel, dirY*vel);

        if (ball.position.y >= cameraSize - 3f & dirY > 0)
            dirY *= -1;
        else if (ball.position.y <= -(cameraSize - 3f) & dirY < 0)
            dirY *= -1;

        
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.collider.name == "Player")
            dirX *= -1;
        else if (collision.collider.name == "Rival")
            dirX *= -1;
    }
}
