using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SuckingMachineCollectionController : MonoBehaviour
{
    SuckingMachineController suckingMachineController;

    private void Start()
    {
        suckingMachineController = this.GetComponentInParent<SuckingMachineController>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!suckingMachineController.suckedObjects.Contains(other.gameObject) && other.gameObject.tag == "Suckable")
        {
            other.gameObject.transform.parent = this.transform;
            Destroy(other.GetComponent<Rigidbody>());
            other.gameObject.GetComponent<Suckable>().isShrinking = true;
            suckingMachineController.suckedObjects.Add(other.gameObject);
        }

    }
}
