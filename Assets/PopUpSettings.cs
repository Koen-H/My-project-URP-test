using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

[Serializable]
public struct PopUpSettings
{

    public float timeSeconds;
    public Sprite sprite;
    public float durationSeconds;


    public PopUpSettings(float pTime = 0, Sprite pSprite = null, float pDuration = 0)
    {
        timeSeconds = pTime;
        sprite = pSprite;
        durationSeconds = pDuration;
    }

}
