using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FanController : MonoBehaviour
{
    [SerializeField]
    SuckingMachineController suckMachine;

    [SerializeField]
    List<GameObject> blades = new List<GameObject>();

    [SerializeField]
    float fanSpeed;
    float fanRotation;


    public bool machineModeChanging;
    public bool machineModeSucking;
    float modeValue;
    [SerializeField]
    float foldingSpeed;
    float foldingRotation;

    float recoil;
    float recoilValue;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (suckMachine.shooting) recoil = 1; 
        else recoil = 0;
    }


    private void FixedUpdate()
    {
        BladeRotation();
        if (machineModeChanging) MachineMode();
        //Shooting();
    }


    void BladeRotation()
    {
        fanRotation = fanRotation * 0.97f + (suckMachine.sucking?fanSpeed:0) * 0.03f; 
        this.gameObject.transform.Rotate(new Vector3(fanRotation, 0, 0), Space.Self);
    }

    void MachineMode()
    {
        if (machineModeSucking)
        {
            foldingRotation = foldingSpeed;
            modeValue += foldingRotation;
            if(modeValue > 65)machineModeChanging = false;
        }
        else
        {
            foldingRotation = -foldingSpeed;
            modeValue += foldingRotation;
            if (modeValue < 0) machineModeChanging = false;
        }
        foreach (GameObject blade in blades)
        {
            blade.transform.Rotate(0, 0, foldingRotation, Space.Self);
        }
    }

    void Shooting()
    {
        recoilValue = recoilValue * 0.8f + recoil * 0.2f;
        foreach (GameObject blade in blades)
        {
            blade.transform.Rotate(0, 0, recoilValue, Space.Self);
        }

    }

}
