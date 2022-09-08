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
            other.gameObject.GetComponent<Suckable>().sucked = true;
            suckingMachineController.suckedObjects.Add(other.gameObject);
        }

    }
}
