using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SuckingMachineCollectionController : MonoBehaviour
{
    SuckingMachineController suckingMachineController;


    [SerializeField]
    SpriteRenderer display;

    [SerializeField]
    Sprite emptySprite;

    [SerializeField]
    Sprite notFound; 


    private void Start()
    {
        suckingMachineController = this.GetComponentInParent<SuckingMachineController>();

        //display.sprite = spriteNotFound;
    }


    public void UpdateDisplay(Suckable item)
    {
        if (item != null)
        {
            if(item.thumbnail != null) display.sprite = item.thumbnail;
            else display.sprite = notFound;
        }
        else display.sprite = emptySprite;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!suckingMachineController.suckedObjects.Contains(other.gameObject) && other.gameObject.tag == "Suckable" && suckingMachineController.triggerValue > 0.5f && !suckingMachineController.coolingDown && !suckingMachineController.storageFull)
        {
            Debug.Log("Object SHould be sucked " + other.gameObject.name);
            Suckable suckable = other.gameObject.GetComponent<Suckable>();
            suckable.sucked = true;
            UpdateDisplay(suckable);

            suckingMachineController.suckedObjects.Add(other.gameObject);
            suckingMachineController.ChangeTrashItemAmount(1);
        }

    }
}
