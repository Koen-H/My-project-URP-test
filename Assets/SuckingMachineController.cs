using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;
using System.Linq;

public class SuckingMachineController : MonoBehaviour
{
    Haptic haptic;
    public float radius;
    public float depth;
    public float angle;
    [SerializeField] float suckPower;
    public bool disableSuckButton = true;
    public InputActionProperty enableSuck;
    public InputActionProperty suckPowerInput;
    public InputActionProperty shootTriggerInput;
    public InputActionProperty suckingMachineModeInput;

    public float maxBattery = 10f;//The max seconds the battery can be
    public float suckBatteryPower = 100;//Percentage of maxBattery


    float shootTrigger;
    bool machineModeSucking;
    bool modeButtonBeingPressed;

    bool shooting; 

    public TextMeshPro powerText;
    public TextMeshPro suckingModeText;
    public TextMeshPro suckedItemsCountText;


    public List<GameObject> suckedObjects;

    private Physics physics;

    private void Start()
    {
        haptic = Haptic.Instance;
    }

    private void Update()
    {
        shootTrigger = shootTriggerInput.action.ReadValue<float>();

        if (suckingMachineModeInput.action.IsPressed() && !modeButtonBeingPressed)
        {
            modeButtonBeingPressed = true;
            machineModeSucking = machineModeSucking? false : true;
        }
        else if (!suckingMachineModeInput.action.IsPressed()) modeButtonBeingPressed = false;

        if (machineModeSucking && shootTrigger == 1 && !shooting)
        {
            shooting = true;
            Shoot();
        }
        else if(shootTrigger < 1) shooting = false;
    }


    void FixedUpdate()
    {
        if (enableSuck.action.ReadValue<float>() > 0.5f || disableSuckButton)
        {
            
            float triggerValue = suckPowerInput.action.ReadValue<Vector2>().y;
            haptic.SendHapticsRightController(-triggerValue, 0.5f);
            triggerValue *= -suckPower;
            powerText.text = $"{triggerValue}";
            suckingModeText.text = $"{machineModeSucking}";
            suckedItemsCountText.text = suckedObjects.Count.ToString(); 

            RaycastHit[] coneHits = physics.ConeCastAll(transform.position, radius, transform.forward, depth, angle);
            Vector3 origin = this.transform.position;

            if (coneHits.Length > 0)
            {
                for (int i = 0; i < coneHits.Length; i++)
                {
                    //do something with collider information
                    if (coneHits[i].collider.gameObject.tag == "Suckable")
                    {
                        coneHits[i].collider.gameObject.GetComponent<Suckable>().Suck(origin, triggerValue, this);
                        
                        //suckableScript.Suck(origin);
                        //suckableScript.Blow();
                    }
                }
            }
        }
    }
    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Debug.DrawLine(transform.position, transform.position + transform.forward * depth);
        Gizmos.DrawWireSphere(transform.position + transform.position * depth, radius);
    }

    void Shoot()
    {
        
        if(suckedObjects.Count > 0)
        {
            GameObject suckedItem = suckedObjects.Last();
            suckedItem.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
            suckedItem.transform.rotation = this.transform.rotation;  
            suckedItem.transform.position = this.transform.position + (this.transform.forward * 0.3f);
            suckedItem.gameObject.SetActive(true);
            suckedItem.gameObject.GetComponent<Rigidbody>().angularVelocity = Vector3.zero; 
            suckedItem.gameObject.GetComponent<Rigidbody>().velocity = (transform.forward * 20);
            suckedItem.gameObject.GetComponent<Suckable>().flowDirection = transform.forward;
            suckedItem.gameObject.GetComponent<Suckable>().flowSpeed = 1;
            suckedObjects.Remove(suckedItem);
            haptic.SendHapticsRightController(0.75f, 0.25f);
        }
    }
   

}
