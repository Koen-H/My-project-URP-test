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
    //GameObject tempBar;
    [HideInInspector]
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
    [HideInInspector]
    public float trashItemAmount;
    [HideInInspector]
    public bool storageFull;


    [SerializeField]
    Color heatAlbedoColor;
    [SerializeField]
    Color heatEmmisionColor;
    [SerializeField]
    Sprite heatColor;
    [SerializeField]
    Sprite heatEmmision;


    [SerializeField]
    GameObject modeArrow;
    [SerializeField]
    float modeChangingDelay;
    bool gunModeChanging;
    float modeChangingTime;
    float shootingModeDirection;
    [Range(0.0f, 1f)]
    [SerializeField]
    float arrowSpeed;


    [HideInInspector]
    public float triggerValue;
    [HideInInspector]
    public bool machineModeSucking;
    bool modeButtonBeingPressed;

    [SerializeField]
    FanController fanController;

    public bool shooting;

    public bool sucking; 

    /*    public TextMeshPro powerText;
        public TextMeshPro suckingModeText;
        public TextMeshPro suckedItemsCountText;*/


    [HideInInspector]
    public List<GameObject> suckedObjects;

    private Physics physics;

    private void Start()
    {
        haptic = Haptic.Instance;

        arrowSpeed /= 200;
        modeChangingDelay /= 10;

        CalculateBarMult();
        UpdateRadiatorMaterial();

    }

    void CalculateBarMult()
    {
        tempBarMult = 1 / maxOpTemp;
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


        if (triggerValue > 0.5f && !disableSuckButton && !machineModeSucking)
        {
            if (!coolingDown && !storageFull) sucking = true;
            else sucking = false;
        }
        else sucking = false;


        if (suckingMachineModeInput.action.IsPressed() && !modeButtonBeingPressed && !gunModeChanging)
        {
            modeButtonBeingPressed = true;
            machineModeSucking = machineModeSucking ? false : true;
            ChangeGunMode(machineModeSucking);
            fanController.machineModeChanging = true;
            fanController.machineModeSucking = machineModeSucking; 
            //suckingModeText.text = $"{machineModeSucking}";
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

    void ChangeGunMode(bool shooting)
    {
        gunModeChanging = true;
        modeChangingTime = 0;
        if (shooting)
        {
            shootingModeDirection = 180;
        }
        else
        {
            shootingModeDirection = 0; 
        }
    }
    void ArrowChanging()
    {

        modeChangingTime += Time.fixedDeltaTime;


        if (modeChangingTime > modeChangingDelay / 2 && modeChangingTime < modeChangingDelay)
        {
            modeArrow.transform.position += modeArrow.transform.forward * arrowSpeed;
        }
        else if (modeChangingTime < modeChangingDelay / 2)
        {
            modeArrow.transform.position -= modeArrow.transform.forward * arrowSpeed; 
        }
        if(modeChangingTime < modeChangingDelay * 2 - modeChangingDelay / 2 && modeChangingTime > modeChangingDelay / 2)
        {
            modeArrow.transform.localRotation = Quaternion.Euler(0, -7, shootingModeDirection);
        }
        if (modeChangingTime > modeChangingDelay)
        {
            gunModeChanging = false; 

        }

    }

    void UpdateBars()
    {
        float capacityBarX = trashItemAmount * capacityBarMult;
        capacityBar.transform.localScale = new Vector3(capacityBarX, capacityBar.transform.localScale.y, capacityBar.transform.localScale.z);



    }


    void FixedUpdate()
    {

        if(sucking) Sucking();

        CooldownMechanics();

        if (gunModeChanging) ArrowChanging();

    }

    void Sucking()
    {
        float suckValue = triggerValue * suckPower; 

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
                else if (coneHits[i].collider.gameObject.tag == "SuckableAnimal")
                {

                    coneHits[i].collider.gameObject.GetComponent<SuckableAnimal>().SuckedAnimal();
                }
            }
        }      
    }



    void CooldownMechanics()
    {
        temp += coolingDown ? 0 : storageFull ? 0 : machineModeSucking ? 0 : triggerValue / 10;
        if (temp > maxOpTemp) coolingDown = true; 

        temp -= 0.05f;
        if(coolingDown) temp -= 0.15f;

        if(temp < 0)
        {
            coolingDown = false;
            temp = 0; 
        }
        UpdateRadiatorMaterial();
    }

    void UpdateRadiatorMaterial()
    {
        heatColor.texture.SetPixel(1, 1, Color.Lerp(Color.gray,heatAlbedoColor, temp * tempBarMult));
        heatColor.texture.Apply();

        heatEmmision.texture.SetPixel(1, 1, Color.Lerp(Color.black, heatEmmisionColor, temp * tempBarMult));
        heatEmmision.texture.Apply();
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
            suckedItemSuckable.wasAttached = false;
            suckedItemSuckable.flowDirection = transform.forward;
            suckedItemSuckable.flowSpeed = 1;
            suckedItemSuckable.SwooshIntensity = 0;
            suckedObjects.Remove(suckedItem);
            if(suckedObjects.Count > 0) collectionController.UpdateDisplay(suckedObjects.Last().GetComponent<Suckable>());
            else collectionController.UpdateDisplay(null);
            GameManager gamemanager = GameManager.Instance;
            gamemanager.cleannessLevel--;
            //gamemanager.UpdateBars();
            ChangeTrashItemAmount(-1);
            haptic.SendHapticsRightController(1,0.25f);
        }
    }
}
