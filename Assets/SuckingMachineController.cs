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
    Transform collectionAreaTransform; 
    [SerializeField]
    SuckingMachineCollectionController collectionController;


    [SerializeField]
    float maxCapacity;
    [SerializeField]
    GameObject capacityBar;
    [SerializeField]
    Material capacityMaterial;
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


    [SerializeField]
    float warningFrequency;
    float warningValue;
    float warningDirection = 1;
    float warningAlphaMult;
    [SerializeField]
    Material warningMaterial;
    [SerializeField]
    Sprite warningAplha;
    [SerializeField]
    Sprite warningOverheating;
    [SerializeField]
    Sprite warningCapacity;
    [SerializeField]
    Sprite warningEmpty;
    bool warningActive;
    string warningType;
    [SerializeField]
    SpriteRenderer spriteRenderer;
    [SerializeField]
    Color colorTest;
    bool storageEmpty;

    [SerializeField]
    Material tornadoMat; 

    //These needs some special threatment 
    [SerializeField] AudioSource audioSourceSucking;
    [SerializeField] AudioClip suckingSound;

    float recoilValue;
    float recoilRotation;

    [SerializeField] TextMeshPro togglePopup;


    AudioSource audioSource;
    [SerializeField] AudioClip trashEnterSound;
    [SerializeField] AudioClip trashFullSound;
    [SerializeField] AudioClip overHeatSound;
    [SerializeField] AudioClip trashShootSound;
    [SerializeField] AudioClip switchModeSound; 



    /*    public TextMeshPro powerText;
        public TextMeshPro suckingModeText;
        public TextMeshPro suckedItemsCountText;*/


    [HideInInspector]
    public List<GameObject> suckedObjects;

    private Physics physics;

    private void Start()
    {

        audioSource = gameObject.AddComponent<AudioSource>();
        haptic = Haptic.Instance;
        arrowSpeed /= 200;
        modeChangingDelay /= 10;

        CalculateBarMult();
        UpdateRadiatorMaterial();
        warningActive = true;
        togglePopup.gameObject.SetActive(false);

    }

    void CalculateBarMult()
    {
        tempBarMult = 1 / maxOpTemp;
        temp = 0;

        capacityBarMult = capacityBar.transform.localScale.x / maxCapacity;
        trashItemAmount = 0;

        warningAlphaMult = 1 / warningFrequency; 
        warningValue = 0;

    }

    public void ChangeTrashItemAmount(float amount, bool isAdding = false)
    {
        trashItemAmount += amount;
        if (trashItemAmount < 0) trashItemAmount = 0;
        if (trashItemAmount > maxCapacity)
        {
            storageFull = true;
            togglePopup.gameObject.SetActive(true);
            spriteRenderer.sprite = warningCapacity;
            audioSource.PlayOneShot(trashFullSound);

        }
        else
        {
            togglePopup.gameObject.SetActive(false);
            if (isAdding) audioSource.PlayOneShot(trashEnterSound);
            storageFull = false;
        }

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
    void Tornado()
    {
        tornadoMat.SetFloat("_NoisePower", sucking ? 1.8f : 0);

    }

    void ChangeGunMode(bool shooting)
    {
        gunModeChanging = true;
        audioSource.PlayOneShot(switchModeSound);
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

        Color rgb = Color.Lerp(Color.green, Color.red, capacityBarX/100);
        capacityMaterial.color = rgb;
    }
    void CheckWarning()
    {
        if (storageFull || coolingDown) warningActive = true;
        if (storageEmpty && !coolingDown) spriteRenderer.sprite = warningEmpty;


        if (suckedObjects.Count > 0 && !storageFull && !coolingDown)
        {
            warningActive = false;
            spriteRenderer.color = new Color(1, 1, 1, 0);
            warningValue = 0;
        }
    }

    void WarningBlinking()
    {
        warningValue += Time.fixedDeltaTime * warningDirection;


        if(warningValue > warningFrequency)
        {
            warningDirection *= -1; 
            warningValue = warningFrequency;
        }
        if (warningValue < -warningFrequency)
        {
            warningDirection *= -1;
            warningValue = -warningFrequency;
        }
        float alpha = warningValue * warningAlphaMult * warningDirection;
        spriteRenderer.color += new Color(0, 0, 0, alpha);
        
    }





    void FixedUpdate()
    {

        if(sucking) Sucking();

        CooldownMechanics();

        if (gunModeChanging) ArrowChanging();

        CheckWarning();
        if (warningActive) WarningBlinking();

        Tornado();

    }

    void Sucking()
    {
        float suckValue = triggerValue * suckPower; 

        Vector3 origin = pivot.transform.position;
        Vector3 collectionPivot = collectionAreaTransform.position;
        RaycastHit[] coneHits = physics.ConeCastAll(origin, radius, transform.forward, depth, angle);

        if (coneHits.Length > 0)
        {
            for (int i = 0; i < coneHits.Length; i++)
            {
                if (coneHits[i].collider.gameObject.tag == "Suckable")
                {

                    coneHits[i].collider.gameObject.GetComponent<Suckable>().Suck(collectionPivot + transform.forward * -0.5f, suckValue, this);
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
        if (temp > maxOpTemp)
        {
            coolingDown = true;
            spriteRenderer.sprite = warningOverheating;
            audioSource.PlayOneShot(overHeatSound);
        }

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
        float tempPercentage = temp * tempBarMult;
        heatColor.texture.SetPixel(1, 1, Color.Lerp(Color.gray,heatAlbedoColor, tempPercentage));
        heatColor.texture.Apply();

        heatEmmision.texture.SetPixel(1, 1, Color.Lerp(Color.black, heatEmmisionColor, tempPercentage));
        heatEmmision.texture.Apply();

        haptic.SendHapticsRightController(tempPercentage/2,0.1f * Time.deltaTime);
    }


    void Shoot()
    {
        
        if (suckedObjects.Count > 0)
        {
            audioSource.PlayOneShot(trashShootSound);
            GameObject suckedItem = suckedObjects.Last();
            suckedItem.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
            suckedItem.transform.rotation = this.transform.rotation;
            suckedItem.transform.position = this.transform.position + (this.transform.forward * 0.3f);
            suckedItem.gameObject.SetActive(true);
            Rigidbody suckedItemRigidbody = suckedItem.gameObject.GetComponent<Rigidbody>();
            suckedItemRigidbody.angularVelocity = Vector3.zero;
            suckedItemRigidbody.velocity = (transform.forward * 20);
            Suckable suckedItemSuckable = suckedItem.gameObject.GetComponent<Suckable>();
            suckedItemSuckable.isGrowing = true;
            suckedItemSuckable.wasAttached = false;
            suckedItemSuckable.flowDirection = transform.forward;
            suckedItemSuckable.flowSpeed = 1;
            suckedItemSuckable.SwooshIntensity = 0;
            suckedObjects.Remove(suckedItem);
            fanController.AddRecoil(20);
            if (suckedObjects.Count > 0)
            { 
                collectionController.UpdateDisplay(suckedObjects.Last().GetComponent<Suckable>());
                storageEmpty = false;
            }
            else
            {
                collectionController.UpdateDisplay(null, null);
                warningActive = true;
                storageEmpty = true;
            }
            GameManager gamemanager = GameManager.Instance;
            gamemanager.cleannessLevel--;
            //gamemanager.UpdateBars();
            ChangeTrashItemAmount(-1);
            haptic.SendHapticsRightController(1,0.25f);
        }
        else
        {
            audioSource.PlayOneShot(trashFullSound);
        }
        
    }
}
