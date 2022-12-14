using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;
using System.Linq;
using UnityEngine.Sprites;
using Unity.VisualScripting;
using UnityEditor;

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
    HookController hookController;


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

    [SerializeField] AudioClip succStart;
    [SerializeField] AudioClip succMiddle;
    [SerializeField] AudioClip succEnd;

    float recoilValue;
    float recoilRotation;

    [SerializeField] TextMeshPro togglePopup;


    AudioSource audioSource;
    [SerializeField] AudioClip trashEnterSound;
    [SerializeField] AudioClip trashFullSound;
    [SerializeField] AudioClip overHeatSound;
    [SerializeField] AudioClip trashShootSound;
    [SerializeField] AudioClip switchModeSound;


    bool succStartPlaying;
    bool succMiddlePlaying;
    bool succEndPlaying;


    bool helpPopUpActive;

    float helpShootingTime;
    float helpSuckingTime;
    float helpHookTime;
    float helpTrashSortingTime;
    float helpCorrectTrashTime;


    [SerializeField]
    float helpShootingWait;
    [SerializeField]
    float helpSuckingWait;
    [SerializeField]
    float helpHookWait;
    [SerializeField]
    float helpTrashSortingWait;

    [SerializeField]
    Sprite helpShootingSprite;
    [SerializeField]
    Sprite helpSuckingSprite;
    [SerializeField]
    Sprite helpHookSprite;
    [SerializeField]
    Sprite helpTrashSortingSprite;
    [SerializeField]
    Sprite helpCorrectTrashSprite;



    [SerializeField]
    poupScreen popUpScreen;




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

    void HelpPlayer()
    {
        if (!sucking && !storageFull && !coolingDown && !hookController.IsAttached() && !helpPopUpActive) // for sucking
        {
            helpSuckingTime += Time.deltaTime;
        }
        else helpSuckingTime = 0;

        if (hookController.IsAttached() && !helpPopUpActive) // for hook
        {
            helpHookTime += Time.deltaTime;
        }
        else helpHookTime = 0;

        if (machineModeSucking && suckedObjects.Count > 0 && !helpPopUpActive)
        {
            helpShootingTime += Time.deltaTime;
        }
        else helpShootingTime = 0;

        if (storageFull && !hookController.IsAttached() && !helpPopUpActive) // for storage full
        {
            helpTrashSortingTime += Time.deltaTime;
        }
        else helpTrashSortingTime = 0;

        float popUpDuration = 4;

        if (helpSuckingTime > helpShootingWait && !helpPopUpActive)
        {
            helpPopUpActive = true;
            popUpScreen.transform.parent.transform.parent.gameObject.SetActive(true);

            popUpScreen.StartCoroutine(popUpScreen.ActivatePopUp(popUpDuration, false, helpSuckingSprite));
            StartCoroutine(HelpPopUpDeactivate(popUpDuration));
            helpShootingWait *= 2f;

        }

        if (helpHookTime > helpHookWait && !helpPopUpActive)
        {
            helpPopUpActive = true;
            popUpScreen.transform.parent.transform.parent.gameObject.SetActive(true);
            popUpScreen.StartCoroutine(popUpScreen.ActivatePopUp(popUpDuration, false, helpHookSprite));
            StartCoroutine(HelpPopUpDeactivate(popUpDuration));
            helpHookWait *= 2f;

        }

        if (helpShootingTime > helpShootingWait && !helpPopUpActive)
        {
            helpPopUpActive = true;
            popUpScreen.transform.parent.transform.parent.gameObject.SetActive(true);
            popUpScreen.StartCoroutine(popUpScreen.ActivatePopUp(popUpDuration, false, helpShootingSprite));
            StartCoroutine(HelpPopUpDeactivate(popUpDuration));
            helpShootingWait *= 2f;

        }

        if (helpTrashSortingTime > helpTrashSortingWait && !helpPopUpActive)
        {
            helpPopUpActive = true;
            popUpScreen.transform.parent.transform.parent.gameObject.SetActive(true);
            popUpScreen.StartCoroutine(popUpScreen.ActivatePopUp(popUpDuration, false, helpTrashSortingSprite));
            StartCoroutine(HelpPopUpDeactivate(popUpDuration));
            helpTrashSortingWait *= 2f;

        }

        if (GameManager.Instance.wrongStreak > 5 && !helpPopUpActive)
        {
            popUpScreen.transform.parent.transform.parent.gameObject.SetActive(true);
            helpPopUpActive = true;
            popUpScreen.StartCoroutine(popUpScreen.ActivatePopUp(popUpDuration, false, helpCorrectTrashSprite));
            StartCoroutine(HelpPopUpDeactivate(popUpDuration));
            GameManager.Instance.wrongStreak = 0;
        }

        //Debug.Log($"{helpPopUpActive}, {helpSuckingTime} , {helpHookTime}, {helpShootingTime}, {helpTrashSortingTime}");
    }

    public void ResetHelp()
    {
        helpShootingWait = 5;
        helpTrashSortingWait = 5;
        helpHookWait = 5;
    }

    public IEnumerator HelpPopUpDeactivate(float duration)
    {
        yield return new WaitForSeconds(duration);
        helpPopUpActive = false;
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

        if (GameManager.Instance.gameState == GameState.Playing) HelpPlayer();


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
        if (modeChangingTime < modeChangingDelay * 2 - modeChangingDelay / 2 && modeChangingTime > modeChangingDelay / 2)
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

        Color rgb = Color.Lerp(Color.green, Color.red, capacityBarX / 100);
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


        if (warningValue > warningFrequency)
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
        if (alpha > 0.95f) audioSource.PlayOneShot(overHeatSound);

    }





    void FixedUpdate()
    {

        if (sucking) Sucking();

        CooldownMechanics();

        if (gunModeChanging) ArrowChanging();

        CheckWarning();
        if (warningActive) WarningBlinking();

        succSound();
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

        }

        temp -= 0.05f;
        if (coolingDown) temp -= 0.005f;

        if (temp < 0)
        {
            coolingDown = false;
            temp = 0;
        }
        UpdateRadiatorMaterial();
    }

    void UpdateRadiatorMaterial()
    {
        float tempPercentage = temp * tempBarMult;
        heatColor.texture.SetPixel(1, 1, Color.Lerp(Color.gray, heatAlbedoColor, tempPercentage));
        heatColor.texture.Apply();

        heatEmmision.texture.SetPixel(1, 1, Color.Lerp(Color.black, heatEmmisionColor, tempPercentage));
        heatEmmision.texture.Apply();

        haptic.SendHapticsRightController(tempPercentage / 2, 0.1f * Time.deltaTime);
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
            suckedItemSuckable.isShot = true;
            suckedItemSuckable.flowDirection = transform.forward;
            suckedItemSuckable.flowSpeed = 1.3f;
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
            haptic.SendHapticsRightController(1, 0.25f);
        }
        else
        {
            audioSource.PlayOneShot(trashFullSound);
        }

    }
    void succSound()
    {
        audioSourceSucking.volume = temp / 10;
        audioSourceSucking.pitch = 1 + temp / 20;
        if (sucking && !succStartPlaying)
        {
            //Debug.Log("Suck start is playing !");
            //audioSourceSucking.PlayOneShot(succStart);
            succStartPlaying = true;
        }
        if (succStartPlaying)
        {
            if (!audioSourceSucking.isPlaying)
            {
                //Debug.Log("Suck Middle is playing !");
                succStartPlaying = false;
                succMiddlePlaying = true;
                audioSource.loop = true;
                audioSourceSucking.PlayOneShot(succMiddle);
            }
        }
        if (!sucking && succMiddlePlaying)
        {
            //Debug.Log("Suck End is playing !");
            audioSource.loop = false;
            succMiddlePlaying = false;
            //audioSourceSucking.Stop();
            //audioSourceSucking.PlayOneShot(succEnd);
        }
    }
    public void EmptyGun()
    {
        foreach (GameObject suckedObject in suckedObjects)
        {
            ChangeTrashItemAmount(-1);
            Destroy(suckedObject);
        }
        suckedObjects.Clear();
        UpdateBars();
        collectionController.UpdateDisplay(null, null);
        warningActive = true;
        storageEmpty = true;


    }


}
