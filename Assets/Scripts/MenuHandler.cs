using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuHandler : MonoBehaviour
{
    public bool start = false;

    public GameObject scoreboard;
    public GameObject startMenu;

    private void Awake()
    {
        Time.timeScale = 0f;
    }

    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        startGame(start);
    }

    void startGame(bool started)
    {
        if (started)
        {
            scoreboard.SetActive(true);
            startMenu.SetActive(false);
            Time.timeScale = 1f;
        }
    }
}
