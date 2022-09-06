using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Suckable : MonoBehaviour
{
    Rigidbody rigidbody;

    private void Start()
    {
        rigidbody = GetComponent<Rigidbody>();
    }

    public void Suck(Vector3 _origin, float _suckPower)
    {

        //Vector3 velocity = Vector3.MoveTowards(this.transform.position, _origin, 1) * _suckPower;
        Vector3 velocity = (_origin - this.transform.position).normalized * _suckPower;
        rigidbody.AddForce(velocity);
        Debug.Log(velocity);
    }
    public void Blow()
    {

    }

}
