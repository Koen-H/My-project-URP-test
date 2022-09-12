using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Suckable : MonoBehaviour
{
    public Rigidbody rigidbody;
    public bool sucked;
    public float shrinkSpeed;//Needs to be below 1
    public GarbageProperty garbageProperty;
    SuckingMachineController suckMachine;
    Haptic haptic;
    public bool canBeVacuumed = true;
    public bool canBeSucked = true;

    public Sprite thumbnail; 


    public Vector3 flowDirection = Vector3.zero;
    public float flowSpeed = 0;
    public bool isFlowing = true;

    public float SwooshIntensity;

    public float SwooshFrequency;
    public bool isSwooshing = true;


    Vector3 oldSwoosh; 

    float sX;
    float sY;
    float sZ;


    private void Start()
    {
        rigidbody = GetComponent<Rigidbody>();
        haptic = Haptic.Instance;

        sX = Random.Range(0, 10);
        sY = Random.Range(0, 10);
        sZ = Random.Range(0, 10);
    }
    private void Update()
    {
        if (sucked) Shrink();
        DeleteItem();

    }


    private void FixedUpdate()
    {
        if(isFlowing) Flow();

        if(isSwooshing) Swooshes(SwooshIntensity, SwooshFrequency);
    }


    void DeleteItem()
    {
        if (transform.position.magnitude > 20) Destroy(this.gameObject);
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
                }
            }
        }
    }
    
    public void Shrink()
    {

        this.transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y, transform.localScale.z) * shrinkSpeed;

        if (transform.localScale.x < 0.1)
        {
            GameObject suckedItem = this.gameObject;            
            this.gameObject.SetActive(false);
            sucked = false;
            haptic.SendHapticsRightController(0.25f,0.25f);
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

        float sinX = _intensity * Mathf.Sin(sX* _frequency);
        float sinY = _intensity * Mathf.Sin(sY* _frequency);
        float sinZ = _intensity * Mathf.Sin(sZ* _frequency);

        Vector3 swoosh = new Vector3(sinX, sinY, sinZ);

        oldSwoosh = swoosh;

        rigidbody.AddTorque(swoosh/50);

        transform.position -= swoosh; 


    }

}

public enum GarbageProperty
{
    General_Waste,
    Glass,
    Plastic,
}