using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;
using System.Linq;

public class SuckingMachineController : MonoBehaviour
{
    public float radius;
    public float depth;
    public float angle;
    [SerializeField] float suckPower;
    public bool disableSuckButton = true;
    public InputActionProperty enableSuck;
    public InputActionProperty suckPowerInput;
    public InputActionProperty shootTriggerInput;
    public InputActionProperty suckingMachineModeInput;

    Haptic haptic;


    [SerializeField]
    float capacity;
    [SerializeField]
    GameObject bar;
    float triggerValue;
    bool charging;
    float barMult;




    float shootTrigger;
    bool machineModeSucking;
    bool modeButtonBeingPressed;

    bool shooting;

    public TextMeshPro powerText;
    public TextMeshPro suckingModeText;
    public TextMeshPro suckedItemsCountText;


    float charge; 

    public List<GameObject> suckedObjects;

    private Physics physics;

    private void Start()
    {
        haptic = Haptic.Instance;


        CalculateBarCapacity();
    }

    void CalculateBarCapacity()
    {
        barMult = bar.transform.localScale.x / capacity;
        charge = capacity;
    }

    private void Update()
    {
        shootTrigger = shootTriggerInput.action.ReadValue<float>();


        if (suckingMachineModeInput.action.IsPressed() && !modeButtonBeingPressed)
        {
            modeButtonBeingPressed = true;
            machineModeSucking = machineModeSucking ? false : true;
        }
        else if (!suckingMachineModeInput.action.IsPressed()) modeButtonBeingPressed = false;


        if (machineModeSucking && shootTrigger == 1 && !shooting)
        {
            shooting = true;
            Shoot();
        }
        else if (shootTrigger < 1) shooting = false;

        UpdateCapacityBar();


    }

    void UpdateCapacityBar()
    {
        float barX = charge * barMult;

        bar.transform.localScale = new Vector3(barX, bar.transform.localScale.y, bar.transform.localScale.z); 
    }


    void FixedUpdate()
    {

        Sucking();

        CooldownMechanics();


    }

    void Sucking()
    {

        if (enableSuck.action.ReadValue<float>() > 0.5f || disableSuckButton && !charging)
        {
            triggerValue = suckPowerInput.action.ReadValue<Vector2>().y;
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
                    if (coneHits[i].collider.gameObject.tag == "Suckable")
                    {

                        coneHits[i].collider.gameObject.GetComponent<Suckable>().Suck(origin, triggerValue, this);
                    }
                    if (coneHits[i].collider.gameObject.tag == "SuckableAnimal")
                    {

                        coneHits[i].collider.gameObject.GetComponent<SuckableAnimal>().SuckedAnimal();
                    }
                }
            }
        }    
    }



    void CooldownMechanics()
    {
        charge -= Mathf.Abs(triggerValue / 300);
        if (charge < 0) charging = true; 



        charge += 0.05f;
        if(charging) charge += 0.15f;

        Debug.Log(charge); 

        if(charge > capacity)
        {
            charging = false;
            charge = capacity; 
        }


    }


    void Shoot()
    {
        
        if (suckedObjects.Count > 0)
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
            suckedItem.gameObject.GetComponent<Suckable>().SwooshIntensity = 0; 
            suckedObjects.Remove(suckedItem);
            haptic.SendHapticsRightController(1,0.25f);
        }
    }
}
