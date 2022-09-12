using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttachTrashController : MonoBehaviour
{
    public SuckableAnimal animalController;

    private void Start()
    {
        animalController = this.GetComponentInParent<SuckableAnimal>();
    }

    public void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Suckable") animalController.AttachTrash(other.GetComponent<Suckable>());
        Debug.Log("test");

    }
}
