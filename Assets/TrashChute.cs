using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrashChute : MonoBehaviour
{


    [SerializeField]
    GarbageProperty garbageProperty;

    [SerializeField]
    Transform ejectTransform; 

    [SerializeField]
    float ejectForce; 

    private void FixedUpdate()
    {
        

    }

    void EjectItem(GameObject item)
    {
        item.gameObject.transform.position = ejectTransform.position;
        Rigidbody itemRigidbody = item.GetComponent<Rigidbody>();
        itemRigidbody.AddForce(ejectTransform.forward * ejectForce);
        itemRigidbody.velocity = ejectTransform.forward * ejectForce; 
        Suckable itemSuckable = item.gameObject.GetComponent<Suckable>();
        itemSuckable.flowDirection = ejectTransform.forward; 
        itemSuckable.flowSpeed = 1;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Suckable")
        {

            if(other.gameObject.GetComponent<Suckable>().garbageProperty != garbageProperty) EjectItem(other.gameObject);
            else Destroy(other.gameObject);

        }
    }


}
