using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;


public class Haptic : MonoBehaviour
{
    private static Haptic _instance;
    public static Haptic Instance{
        get
        {
            if (_instance == null) Debug.LogError("There is no haptic in the current scene");
            return _instance;
        }
    }

    private void Awake()
    {
        _instance = this;
    }

    public XRBaseController leftController, rightController;

    public void SendHapticsLeftController(float amplitude, float duration)
    {
        leftController.SendHapticImpulse(amplitude, duration);
    }
    public void SendHapticsRightController(float amplitude, float duration)
    {
        rightController.SendHapticImpulse(amplitude, duration);
    }
}
