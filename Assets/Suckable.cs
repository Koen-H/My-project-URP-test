using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Suckable : MonoBehaviour
{
    public Rigidbody rigidbody;
    public bool sucked;
    public bool trashChuteSucked;
    public TrashChute trashChute; 
    public float shrinkSpeed;//Needs to be below 1
    public GarbageProperty garbageProperty;
    public float weight;
    SuckingMachineController suckMachine;
    Haptic haptic;
    public float trashPointsValue = 1;//This is in pounds, how much should it contribute to the objective?
    public bool canBeVacuumed = true;
    public bool canBeSucked = true;
    public bool canBeHooked = true;
    public bool wasAttached = false;
    public bool isHooked = false;
    private float growSpeed;
    public bool isGrowing;

    public Vector3 originalScale;

    public Sprite thumbnail;


    public Vector3 flowDirection = Vector3.zero;
    public float flowSpeed = 0;
    public bool isFlowing = true;

    public float SwooshIntensity;

    public float SwooshFrequency;
    public bool isSwooshing = true;


    GameManager gameManager; 

    Vector3 oldSwoosh; 

    float sX;
    float sY;
    float sZ;




    private void Start()
    {
        gameManager = GameManager.Instance;
        rigidbody = GetComponent<Rigidbody>();
        haptic = Haptic.Instance;
        originalScale = this.transform.localScale;

        sX = Random.Range(0, 10);
        sY = Random.Range(0, 10);
        sZ = Random.Range(0, 10);
        growSpeed = 1 - shrinkSpeed + 1;
    }
    private void Update()
    {
        ReverseFlow();

    }


    private void FixedUpdate()
    {

        if (isFlowing) Flow();
        if (sucked) Shrink();
        if (isGrowing) Grow();
        if (trashChute != null) ShrinkTrashChute();
        if (isSwooshing) Swooshes(SwooshIntensity, SwooshFrequency);
    }


    void ReverseFlow()
    {
        float range = 20; 

        if (transform.position.magnitude > range)
        {
            flowDirection *= -1;
            rigidbody.velocity *= -1;
            transform.position = transform.position.normalized * range;
        }
    }

    public void Suck(Vector3 _origin, float _suckPower, SuckingMachineController _suckMachine)
    {
        if (canBeSucked)
        {
            suckMachine = _suckMachine;
            if (rigidbody != null)
            {
                Vector3 direction = (_origin - this.transform.position);
                if (direction.magnitude != 0)
                {
                    Vector3 velocity = direction.normalized;
                    velocity /= direction.magnitude * 3;
                    velocity *= _suckPower;
                    rigidbody.AddForce(velocity);
                    flowDirection = velocity.normalized;
                }
            }
        }
    }

    public void Shrink()
    {
        if (isHooked)
        {
            GrapplingHookShoot graplingcon = transform.Find("Hook").GetComponent<HookController>().grapplingHookController;
            graplingcon.LetGo();
            graplingcon.hookController.isRetrieving = true;
        } 

        this.transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y, transform.localScale.z) * shrinkSpeed;

        if (transform.localScale.x < 0.1)
        {
            GameObject suckedItem = this.gameObject;
            this.gameObject.SetActive(false);
            sucked = false;
            haptic.SendHapticsRightController(0.25f, 0.25f);
        }
    }
    public void Grow()
    {
        if (isHooked)
        {
            GrapplingHookShoot graplingcon = transform.Find("Hook").GetComponent<HookController>().grapplingHookController;
            graplingcon.LetGo();
            graplingcon.hookController.isRetrieving = true;
        }

        this.transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y, transform.localScale.z) * growSpeed ;

        if (transform.localScale.x > 1)
        {
            transform.localScale = new Vector3(1, 1, 1);
            isGrowing = false;
        }
    }

    void ShrinkTrashChute()
    {
        this.transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y, transform.localScale.z) * shrinkSpeed;

        if (transform.localScale.x < 0.1)
        {
            trashChuteSucked = false;     
            if(trashChute.garbageProperty != garbageProperty)
            {
                trashChute.itemsToEject.Add(this.gameObject);
                trashChute = null;
                this.gameObject.SetActive(false);
            }
            else
            {
                gameManager.AddTrashPoints(1);
                gameManager.cleannessLevel++;
                trashChute.streakDisplay.text = $"Streak {gameManager.combos}";
                //gameManager.UpdateBars();
                Destroy(this.gameObject);
            }
        }
    }



    void Flow()
    {
        transform.position += oldSwoosh;
        rigidbody.AddForce(flowDirection * flowSpeed);
    }


    void Swooshes(float _intensity = 0, float _frequency = 1)
    {
        _frequency /= 10;
        _intensity /= 100;
        sX += Random.Range(0.5f, 1f);
        sY += Random.Range(0.5f, 1f);
        sZ += Random.Range(0.5f, 1f);

        float sinX = _intensity * Mathf.Sin(sX * _frequency);
        float sinY = _intensity * Mathf.Sin(sY * _frequency);
        float sinZ = _intensity * Mathf.Sin(sZ * _frequency);

        Vector3 swoosh = new Vector3(sinX, sinY, sinZ);

        oldSwoosh = swoosh;

        rigidbody.AddTorque(swoosh / 50);

        transform.position -= swoosh;


    }


}

public enum GarbageProperty
{
    General_Waste,
    Glass,
    Plastic,
}