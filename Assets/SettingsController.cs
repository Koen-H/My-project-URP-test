using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class SettingsController : MonoBehaviour
{
    public Slider sliderX;
    public Slider sliderY;
    public Slider sliderZ;

    public HelmetController helmetController;
    public GameObject UICameraObj;

    private Vector3 defaultPosition;
    public Vector3 customPosition;



    public void Start()
    {
        helmetController = HelmetController.Instance;
        defaultPosition = helmetController.defaultPosition;
        customPosition = defaultPosition;
        UICameraObj = helmetController.UICamera.gameObject;
    }

    public void ResetHelmet()
    {
        sliderX.value = 0;
        sliderY.value = 0;
        sliderZ.value = 0;
        UICameraObj.transform.localPosition = defaultPosition;
    }

    public void MoveX()
    {
        customPosition.x =  defaultPosition.x + sliderX.value;
        UICameraObj.transform.localPosition = customPosition;
    }

    public void MoveY()
    {
        customPosition.y = defaultPosition.y - sliderY.value;
        UICameraObj.transform.localPosition = customPosition;
    }

    public void MoveZ()
    {
        customPosition.z = defaultPosition.z + sliderZ.value;
        UICameraObj.transform.localPosition = customPosition;
    }

    public void SaveHelmetSettings()
    {
        helmetController.customCameraPosition = customPosition;
    }
    
    
}
