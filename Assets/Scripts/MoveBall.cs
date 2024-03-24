using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class MoveBall : MonoBehaviour
{
    Rigidbody2D ball;
    float acc = 0.01f;

    float vel;

    // Start is called before the first frame update
    void Start()
    {
        ball = this.GetComponent<Rigidbody2D>();
        vel = 1f;
    }

    // Update is called once per frame
    void Update()
    {
        vel += acc;
        ball.velocity = new Vector2(-vel, vel);
    }
}
