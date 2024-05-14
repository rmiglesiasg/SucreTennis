using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuHandler : MonoBehaviour
{
    Color DarkGrey = new Color(0.8f, 0.8f, 0.8f, 0.8f);


    public bool start = false;
    public bool playerSelected = false;
    public int selector;

    public GameObject playerSelector;
    public GameObject scoreboard;
    public GameObject startMenu;
    public GameObject ID;
    public Image firstPlayer;
    public Image secondPlayer;

    MovePlayer player;
    MoveRival rival;
    int mode = 1;


    private void Awake()
    {
        Time.timeScale = 0f;
        firstPlayer.color = DarkGrey;
        secondPlayer.color = DarkGrey;
    }

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.Find("Player").GetComponent<MovePlayer>();
        rival = GameObject.Find("Rival").GetComponent<MoveRival>();
    }

    // Update is called once per frame
    void Update()
    {
       startGame();
    }

    void startGame()
    {
        if (start & !playerSelected)
        {
            playerSelector.SetActive(true);
            startMenu.SetActive(false);
            menuController();
            
        }
        else if(start & playerSelected)
        {
            if (mode == 2)
                rival.secondPlayer = true;

            scoreboard.SetActive(true);
            playerSelector.SetActive(false);
            ID.SetActive(false);
            Time.timeScale = 1f;
        }
    }

    void menuController()
    {
        
        if (selector <= 512 & player.deviceID != "")
        {
            Debug.Log("P1");
            mode = 1;
            firstPlayer.color = Color.white;
            if (rival.deviceID != "")
                secondPlayer.color = Color.grey;
        }
        else if(selector > 512 & rival.deviceID != "")
        {
            Debug.Log("P2");
            secondPlayer.color = Color.white;
            firstPlayer.color = Color.gray;
            mode = 2;
        }
    }
}
