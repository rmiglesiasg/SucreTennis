using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SucreInput
{
    public string deviceID;
    public int control;
    public bool boton;

    public SucreInput(string ID, int con, bool btn)
    {
        deviceID = ID;
        control = con;
        boton = btn;
    }

    public SucreInput()
    {
        deviceID = "";
        control = 0;
        boton = false;
    }
}
