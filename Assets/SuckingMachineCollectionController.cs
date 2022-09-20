using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SuckingMachineCollectionController : MonoBehaviour
{
    SuckingMachineController suckingMachineController;


    [SerializeField]
    SpriteRenderer display;

    [SerializeField]
    SpriteRenderer secondDisplay; 

    [SerializeField]
    Sprite emptySprite;

    [SerializeField]
    Sprite notFound; 


    private void Start()
    {
        suckingMachineController = this.GetComponentInParent<SuckingMachineController>();

        //display.sprite = spriteNotFound;
    }


    public void UpdateDisplay(Suckable item, Suckable item2 = null)
    {
        item2 = suckingMachineController.suckedObjects.Count > 1 ? suckingMachineController.suckedObjects[suckingMachineController.suckedObjects.Count - 2].GetComponent<Suckable>() : null;

        if (item != null)
        {
            if (item.thumbnail != null)
            {
                display.sprite = item.thumbnail;
                if(item2 != null)
                {
                    if (item2.thumbnail != null) secondDisplay.sprite = item2.thumbnail;
                    else secondDisplay.sprite = notFound;
                }
                else secondDisplay.sprite = emptySprite;
            }
            else display.sprite = notFound;
        }
        else display.sprite = emptySprite;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!suckingMachineController.suckedObjects.Contains(other.gameObject) && other.gameObject.tag == "Suckable" && suckingMachineController.triggerValue > 0.5f && !suckingMachineController.coolingDown && !suckingMachineController.storageFull && !suckingMachineController.machineModeSucking)
        {
            if (other.gameObject.GetComponent<Suckable>().canBeVacuumed)
            {
                Debug.Log("Object SHould be sucked " + other.gameObject.name);
                Suckable suckable = other.gameObject.GetComponent<Suckable>();
                suckable.sucked = true;
                GameManager gamemanager = GameManager.Instance;
                gamemanager.cleannessLevel++;
                suckingMachineController.suckedObjects.Add(other.gameObject);
                suckingMachineController.ChangeTrashItemAmount(1, true);

                UpdateDisplay(suckable);
            }
        }

    }
}
