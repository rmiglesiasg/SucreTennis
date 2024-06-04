using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class MovePlayer : MonoBehaviour
{
    float TOP_VALUE_POTENCIOMETER = 1024;
    float PLAYER_SPEED = 70f;

    public bool connected = false;
    public float input;
    public string deviceID = "";

    Transform player;
    float cameraSize;
    float convfactor;
    float offset;

    // Start is called before the first frame update
    void Start()
    {
        player = this.GetComponent<Transform>();
        cameraSize = GameObject.Find("Main Camera").GetComponent<Camera>().orthographicSize;
        convfactor = (TOP_VALUE_POTENCIOMETER / 2) / cameraSize;
        offset = player.lossyScale.y / 2;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        movePlayer();
    }

    void movePlayer()
    {
        if (connected)
        {
            float y = ((TOP_VALUE_POTENCIOMETER / 2) - input) / convfactor;

            if (y >= cameraSize - offset)
                y = cameraSize - offset;
            else if (y <= -(cameraSize - offset))
                y = -(cameraSize - offset);

            Vector3 target = new Vector3(player.position.x, y, 0f);

            player.position = Vector3.MoveTowards(player.position, target, PLAYER_SPEED * Time.deltaTime);
        }

        else
        {
            if (Input.GetKey(KeyCode.W))
            {
                float y = player.position.y;
                y += 1.1f;
                if (y <= cameraSize - offset)
                    player.position = new Vector3(player.position.x, y, 0f);
            }

            else if (Input.GetKey(KeyCode.S))
            {
                float y = player.position.y;
                y -= 1.1f;
                if (y >= -(cameraSize - offset))
                    player.position = new Vector3(player.position.x, y, 0f);
            }
        }
    }

    public void reset()
    {
        player.position = new Vector2(player.position.x, 0f);
        connected = false;
        deviceID = "";
    }
}
