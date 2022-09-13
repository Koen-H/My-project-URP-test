using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

[Serializable]
public struct WaveSettings 
{

    public float timeSeconds;
    public float duration;
    public float intesity;


    public WaveSettings(float pTime = 0, float pDuration = 0, float pIntensity = 0)
    {
        timeSeconds = pTime;
        duration = pDuration;
        intesity = pIntensity;
    }

}

