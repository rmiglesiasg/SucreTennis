using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEditor.Networking.PlayerConnection;
using UnityEngine;

public class MovePlayer : MonoBehaviour
{
    float TOP_VALUE_POTENCIOMETER = 1024;

    public bool connected = false;
    public float input;

    Transform player;
    float cameraSize;
    float convfactor;

    // Start is called before the first frame update
    void Start()
    {
        player = this.GetComponent<Transform>(); //GameObject.Find("Player").GetComponent<Transform>();
        cameraSize = GameObject.Find("Main Camera").GetComponent<Camera>().orthographicSize;
        convfactor = (TOP_VALUE_POTENCIOMETER / 2) / cameraSize;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        movePlayer(connected);
    }

    void movePlayer(bool connected)
    {
        if (connected)
        {
            Debug.Log("SucreControls");
            if (input <= TOP_VALUE_POTENCIOMETER/2)
            {
                float y = ((TOP_VALUE_POTENCIOMETER / 2) - input) / convfactor;
                //Debug.Log(y);
                if (y <= cameraSize - 3f)
                    player.position = new Vector3(player.position.x, y, 0f);
            }
            else
            {
                float y = ((TOP_VALUE_POTENCIOMETER/2) - input) / convfactor;
                if (y >= -(cameraSize - 3f))
                    player.position = new Vector3(player.position.x, y, 0f);
            }
        }

        else
        {
            if (Input.GetKey(KeyCode.W))
            {
                float y = player.position.y;
                y += 1.1f;
                if (y <= cameraSize - 3f)
                    player.position = new Vector3(player.position.x, y, 0f);
            }

            else if (Input.GetKey(KeyCode.S))
            {
                float y = player.position.y;
                y -= 1.1f;
                if (y >= -(cameraSize - 3f))
                    player.position = new Vector3(player.position.x, y, 0f);
            }
        }
    }
}
