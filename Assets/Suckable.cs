using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Suckable : MonoBehaviour
{
    Rigidbody rigidbody;
    public bool isShrinking;
    public float shrinkSpeed;//Needs to be below 1

    private void Start()
    {
        rigidbody = GetComponent<Rigidbody>();
    }
    private void Update()
    {
        if (isShrinking) Shrink();
    }


    public void Suck(Vector3 _origin, float _suckPower)
    {
        if(rigidbody != null) { 
        //Vector3 velocity = Vector3.MoveTowards(this.transform.position, _origin, 1) * _suckPower;
        Vector3 velocity = (_origin - this.transform.position).normalized * _suckPower;
        rigidbody.AddForce(velocity);
        }
    }
    
    public void Shrink()
    {
        this.transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y, transform.localScale.z) * shrinkSpeed;
    }

}
