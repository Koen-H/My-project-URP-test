using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;
using System.Linq;
using UnityEngine.Sprites;

public class SuckingMachineController : MonoBehaviour
{
    public float radius;
    public float depth;
    public float angle;
    [SerializeField] float suckPower;
   // public float suckingTriggerValue;
    bool disableSuckButton = false;
    public InputActionProperty enableSuck;
    public InputActionProperty suckPowerInput;
    public InputActionProperty shootTriggerInput;
    public InputActionProperty suckingMachineModeInput;

    Haptic haptic;


    [SerializeField]
    GameObject pivot;



    [SerializeField]
    float maxOpTemp;
    [SerializeField]
    GameObject tempBar;
    public bool coolingDown;
    float tempBarMult;
    float temp;

    [SerializeField]
    SuckingMachineCollectionController collectionController;


    [SerializeField]
    float maxCapacity;
    [SerializeField]
    GameObject capacityBar;
    float capacityBarMult;
    public float trashItemAmount;
    public bool storageFull;




    public float triggerValue;
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




        CalculateBarMult();
    }

    void CalculateBarMult()
    {
        tempBarMult = tempBar.transform.localScale.x / maxOpTemp;
        temp = 0;

        capacityBarMult = capacityBar.transform.localScale.x / maxCapacity;
        trashItemAmount = 0; 
    }

    public void ChangeTrashItemAmount(float amount)
    {
        trashItemAmount += amount; 
        if (trashItemAmount < 0) trashItemAmount = 0;
        if (trashItemAmount > maxCapacity) storageFull = true;
        else storageFull = false;

    }

    private void Update()
    {
        triggerValue = shootTriggerInput.action.ReadValue<float>();
       // suckingTriggerValue = enableSuck.action.ReadValue<float>();

        //Debug.Log("Sucking trigger value : " + triggerValue);


        if (suckingMachineModeInput.action.IsPressed() && !modeButtonBeingPressed)
        {
            modeButtonBeingPressed = true;
            machineModeSucking = machineModeSucking ? false : true;
        }
        else if (!suckingMachineModeInput.action.IsPressed()) modeButtonBeingPressed = false;


        if (machineModeSucking && triggerValue == 1 && !shooting)
        {
            shooting = true;
            Shoot();
        }
        else if (triggerValue < 1) shooting = false;



        UpdateBars();


    }

    void UpdateBars()
    {
        float tempBarX = temp * tempBarMult;
        tempBar.transform.localScale = new Vector3(tempBarX, tempBar.transform.localScale.y, tempBar.transform.localScale.z); 

        float capacityBarX = trashItemAmount * capacityBarMult;
        capacityBar.transform.localScale = new Vector3(capacityBarX, capacityBar.transform.localScale.y, capacityBar.transform.localScale.z);



    }


    void FixedUpdate()
    {

        Sucking();

        CooldownMechanics();


    }

    void Sucking()
    {

        if (triggerValue > 0.5f && !disableSuckButton)
        {
            if (!coolingDown && !storageFull)
            {
                //triggerValue = suckPowerInput.action.ReadValue<Vector2>().y;
                float suckValue = triggerValue * suckPower; 
                powerText.text = $"{triggerValue}";
                suckingModeText.text = $"{machineModeSucking}";
                suckedItemsCountText.text = suckedObjects.Count.ToString();

                Vector3 origin = pivot.transform.position;
                RaycastHit[] coneHits = physics.ConeCastAll(origin, radius, transform.forward, depth, angle);

                if (coneHits.Length > 0)
                {
                    for (int i = 0; i < coneHits.Length; i++)
                    {
                        if (coneHits[i].collider.gameObject.tag == "Suckable")
                        {

                            coneHits[i].collider.gameObject.GetComponent<Suckable>().Suck(origin + transform.forward * -0.5f, suckValue, this);
                        }
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
        temp += coolingDown? 0 : storageFull? 0 : triggerValue / 10;
        if (temp > maxOpTemp) coolingDown = true; 



        temp -= 0.05f;
        if(coolingDown) temp -= 0.15f;

       //Debug.Log(charge); 

        if(temp < 0)
        {
            coolingDown = false;
            temp = 0; 
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
            Rigidbody suckedItemRigidbody = suckedItem.gameObject.GetComponent<Rigidbody>();
            suckedItemRigidbody.angularVelocity = Vector3.zero;
            suckedItemRigidbody.velocity = (transform.forward * 20);
            Suckable suckedItemSuckable = suckedItem.gameObject.GetComponent<Suckable>();
            suckedItemSuckable.flowDirection = transform.forward;
            suckedItemSuckable.flowSpeed = 1;
            suckedItemSuckable.SwooshIntensity = 0;
            suckedObjects.Remove(suckedItem);
            if(suckedObjects.Count > 0) collectionController.UpdateDisplay(suckedObjects.Last().GetComponent<Suckable>());
            else collectionController.UpdateDisplay(null);
            ChangeTrashItemAmount(-1);
            haptic.SendHapticsRightController(1,0.25f);
        }
    }
}
