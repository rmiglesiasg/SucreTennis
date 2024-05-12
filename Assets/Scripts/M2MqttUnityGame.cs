/*
The MIT License (MIT)

Copyright (c) 2018 Giovanni Paolo Vigano'

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

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
    System.Random rnd = new();

    MenuHandler menu;
    MovePlayer player;
    int id;
    

    public TextMeshProUGUI idText;

    public void TestPublish()
    {
        client.Publish("Pong" + id, System.Text.Encoding.UTF8.GetBytes("Test message"), MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE, false);
        Debug.Log("Test message published");
    }

    protected override void OnConnecting()
    {
        base.OnConnecting();
    }

    protected override void OnConnected()
    {
        player.connected = true;
        base.OnConnected();
    }

    protected override void SubscribeTopics()
    {
        client.Subscribe(new string[] { id.ToString() }, new byte[] { MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE }); //"Pong" + id }, new byte[] { MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE });
        //Debug.Log("sus");
    }

    protected override void UnsubscribeTopics()
    {
        client.Unsubscribe(new string[] { id.ToString() }); //"Pong" + id });
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
        id = 1;//rnd.Next(100000);
        idText.text += id;
        Connect();
    }

    protected override void DecodeMessage(string topic, byte[] message)
    {
        string msg = System.Text.Encoding.UTF8.GetString(message);
        Debug.Log("Received: " + msg);
        if (topic == id.ToString())//"Pong" + id)
        {
            SucreInput sucreInput = ProcessMessage(msg);

            menu.start = sucreInput.boton;
            player.input = sucreInput.control;
            if (player.deviceID == "")
                sucreInput.deviceID = player.deviceID;
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

    private void OnValidate()
    {
        
    }
}
