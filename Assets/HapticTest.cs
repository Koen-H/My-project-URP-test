using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class HapticTest : MonoBehaviour
{
    public XRBaseController leftController, rightController;
    public float defaultAmplitude = 0.2f;
    public float defaultDuration = 0.5f;

    public void SendHaptics()
    {
        leftController.SendHapticImpulse(defaultAmplitude, defaultDuration);
        rightController.SendHapticImpulse(defaultAmplitude,defaultDuration);


    }

    public void Update()
    {
        SendHaptics();
    }
}
