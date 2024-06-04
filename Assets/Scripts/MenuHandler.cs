using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MenuHandler : MonoBehaviour
{
    Color DarkGrey = new Color(0.8f, 0.8f, 0.8f, 0.8f);


    public bool start = false;
    public bool playerSelected = false;
    public int selector;
    public bool countEnd = false;
    bool game = false;
    int mode = 1;

    public GameObject FPButton;
    public GameObject SPButton;
    public GameObject countdown;
    public GameObject scoreboard;
    public GameObject startMenu;
    public GameObject ID;
    public Image firstPlayer;
    public Image secondPlayer;
    public TextMeshProUGUI playerName;
    public TextMeshProUGUI rivalName;

    MovePlayer player;
    MoveRival rival;
    


    private void Awake()
    {
        Time.timeScale = 0f;
        firstPlayer.color = Color.white;
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
        if (game)
        {

        }
        else if (start & !playerSelected)
        {
            FPButton.SetActive(true);
            SPButton.SetActive(true);
            countdown.SetActive(false);
            startMenu.SetActive(false);
            menuController();
            
        }
        else if (start & playerSelected & !countEnd)
        {
            FPButton.SetActive(false);
            SPButton.SetActive(false);
            countdown.SetActive(true);
            this.GetComponent<Animator>().SetBool("countdown", true);
            
        }
        else if (start & playerSelected & countEnd)
        {
            countdown.SetActive(false);
            if (mode == 2)
                rival.secondPlayer = true;

            scoreboard.SetActive(true);
            countdown.SetActive(false);
            ID.SetActive(false);
            Time.timeScale = 1f;
            game = true;
        }
    }

    void menuController()
    {
        playerName.text = player.deviceID;
        rivalName.text = rival.deviceID;
        
        if (selector <= 512 & player.deviceID != "")
        {
            //Debug.Log("P1");
            mode = 1;
            firstPlayer.color = Color.white;
            if (rival.deviceID != "")
                secondPlayer.color = Color.grey;
        }
        else if(selector > 512 & rival.deviceID != "")
        {
            //Debug.Log("P2");
            secondPlayer.color = Color.white;
            firstPlayer.color = Color.gray;
            mode = 2;
        }
    }

    public void reset()
    {
        start = false;
        playerSelected = false;
        countEnd = false;
        game = false;
        mode = 1;
        scoreboard.SetActive(false);
        FPButton.SetActive(false);
        SPButton.SetActive(false);
        countdown.SetActive(false);
        ID.SetActive(true);
        startMenu.SetActive(true);
        firstPlayer.color = Color.white;
        secondPlayer.color = DarkGrey;
    }
}
