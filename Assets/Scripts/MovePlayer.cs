using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovePlayer : MonoBehaviour
{
    Transform player;
    float cameraSize;
    // Start is called before the first frame update
    void Start()
    {
        player = this.GetComponent<Transform>(); //GameObject.Find("Player").GetComponent<Transform>();
        cameraSize = GameObject.Find("Main Camera").GetComponent<Camera>().orthographicSize;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (Input.GetKey(KeyCode.W))
        {
            float y = player.position.y;
            y += 1;
            if (y <= cameraSize - 3f)
            player.position = new Vector3 (player.position.x, y, 0);
        }

        else if (Input.GetKey(KeyCode.S))
        {
            float y = player.position.y;
            y -= 1;
            if ( y >= -(cameraSize - 3f))
            player.position = new Vector3(player.position.x, y, 0);
        }
    }
}
