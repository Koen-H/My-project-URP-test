using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Suckable : MonoBehaviour
{
    Rigidbody rigidbody;
    public bool sucked;
    public float shrinkSpeed;//Needs to be below 1
    public GarbageProperty garbageProperty;
    SuckingMachineController suckMachine;
    Haptic haptic;

    public Vector3 flowDirection = Vector3.zero;
    public float flowSpeed = 0; 


    private void Start()
    {
        rigidbody = GetComponent<Rigidbody>();
        haptic = Haptic.Instance;
    }
    private void Update()
    {
        if (sucked) Shrink();
    }


    private void FixedUpdate()
    {
        Flow(); 
    }

    public void Suck(Vector3 _origin, float _suckPower, SuckingMachineController _suckMachine)
    {
        suckMachine = _suckMachine;
        if(rigidbody != null) { 
            Vector3 direction = (_origin - this.transform.position);
            if(direction.magnitude != 0)
            {
                Vector3 velocity = direction.normalized;
                velocity /=  direction.magnitude*3;
                velocity *= _suckPower;
                rigidbody.AddForce(velocity);
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

    public enum GarbageProperty
    {
        General_Waste,
        Glass,
        Plastic,
    }
    void Flow()
    {
        rigidbody.AddForce(flowDirection * flowSpeed);


    }

}
