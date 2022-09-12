using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrashChuteSucking : MonoBehaviour
{

    [SerializeField]
    float suckForce;



    private void Start()
    {



    }



    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Suckable")
        {
            Vector3 suckDirection = -transform.up * suckForce;
            other.gameObject.GetComponent<Rigidbody>().AddForce(suckDirection);
            Suckable itemSuckable = other.GetComponent<Suckable>();
            itemSuckable.flowDirection = suckDirection;
            itemSuckable.flowSpeed = suckDirection.magnitude;
        }
    }
}
