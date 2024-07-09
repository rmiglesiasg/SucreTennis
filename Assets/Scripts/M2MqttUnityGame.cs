using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using uPLibrary.Networking.M2Mqtt;
using uPLibrary.Networking.M2Mqtt.Messages;
using M2MqttUnity;
using TMPro;

public class M2MqttUnityGame : M2MqttUnityClient
{
    System.Random rnd = new System.Random();

    MenuHandler menu;
    MovePlayer player;
    MoveRival rival;
    MoveBall ball;
    int id;
    

    public TextMeshProUGUI idText;
    

    public void Publish(string dvc)
    {
        client.Publish("1_" + id + "_" + dvc,
            System.Text.Encoding.UTF8.GetBytes("{" + '"' + "bocina" + '"' + ": 1}"),
            MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE, false);
        client.Publish("1_" + id + "_" + dvc,
            System.Text.Encoding.UTF8.GetBytes("{" + '"' + "bocina" + '"' + ": 0}"),
            MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE, false);
    }

    protected override void OnConnecting()
    {
        base.OnConnecting();
    }

    protected override void OnConnected()
    {
        player.connected = true;
        client.Publish("1_" + id,
            System.Text.Encoding.UTF8.GetBytes("Connected"),
            MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE, false);
        base.OnConnected();
    }

    protected override void SubscribeTopics()
    {
        client.Subscribe(new string[] { "1_" + id.ToString() },
            new byte[] { MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE });
    }

    protected override void UnsubscribeTopics()
    {
        client.Unsubscribe(new string[] { "1_" + id.ToString() });
        Debug.Log("UnSub");
    }

    protected override void OnConnectionFailed(string errorMessage)
    {
        Debug.Log("CONNECTION FAILED! " + errorMessage);
    }

    protected override void OnDisconnected()
    {
        Debug.Log("Disconnected.");
    }

    protected override void OnConnectionLost()
    {
        Debug.Log("CONNECTION LOST!");
    }

    protected override void Start()
    {
        base.Start();
        menu = GameObject.Find("Canvas").GetComponent<MenuHandler>();
        player = GameObject.Find("Player").GetComponent<MovePlayer>();
        rival = GameObject.Find("Rival").GetComponent<MoveRival>();
        ball = GameObject.Find("Ball").GetComponent<MoveBall>();
        id = 1;//rnd.Next(10000);
        idText.text = "ID: " + id;
        Connect();
    }

    bool buffer = false;
    protected override void DecodeMessage(string topic, byte[] message)
    {
        string msg = System.Text.Encoding.UTF8.GetString(message);
        if (topic == "1_" + id.ToString())
        {
            SucreInput sucreInput = ProcessMessage(msg);

            if (player.deviceID == "")
                player.deviceID = sucreInput.deviceID;
                                
            else if (rival.deviceID == "" & sucreInput.deviceID != player.deviceID)
                rival.deviceID = sucreInput.deviceID;
            
            if (!menu.start & sucreInput.deviceID == player.deviceID)
                menu.start = sucreInput.boton;
            else if (menu.start & !menu.playerSelected & !buffer & sucreInput.deviceID == player.deviceID)
                menu.playerSelected = sucreInput.boton;

            if (menu.start & !menu.playerSelected & sucreInput.deviceID == player.deviceID)
                menu.selector = sucreInput.control;

            if (sucreInput.deviceID == player.deviceID)
                player.input = sucreInput.control;
            if (sucreInput.deviceID == rival.deviceID)
                rival.rivalInput = sucreInput.control;

            if (sucreInput.boton & sucreInput.deviceID == player.deviceID)
                buffer = true;
            else if (!sucreInput.boton & sucreInput.deviceID == player.deviceID)
                buffer = false;
        }
    }

    private SucreInput ProcessMessage(string msg)
    {
        int index = 0;
        string temp  = "";
        char prevch = ' ';
        SucreInput si = new SucreInput();

        foreach (char ch in msg)
        {
            if (prevch == ':')
            {
                if(ch == ',' | ch == '}')
                {
                    temp = temp.Trim(' ', '"');

                    if (index == 0)
                        si.deviceID = temp;
                    else if (index == 1)
                        si.control = int.Parse(temp);
                    else
                        si.boton = temp == "true";

                    index += 1;
                    prevch = ch;
                    temp = "";
                }
                else
                    temp += ch;

            }
            else
                prevch = ch;
        }
        return si;
    }

    protected override void Update()
    {
        base.Update();
    }

    private void OnDestroy()
    {
        Disconnect();
    }

    public void ResetGame()
    {
        menu.reset();
        player.reset();
        rival.reset();
        ball.reset();

        this.UnsubscribeTopics();
        id = 1;//rnd.Next(10000);
        idText.text = "ID: " + id;
        this.SubscribeTopics();
        player.connected = true;
    }
}
