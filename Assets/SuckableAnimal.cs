using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SuckableAnimal : Suckable
{
    bool isSaved = false;
    public List<Suckable> attachedSuckableGarbage;
    float suckItemInterval = 0;
    float suckPowerRequiredPerTrash = 5f;


    public void Start()
    {
        rigidbody = GetComponent<Rigidbody>();
        canBeSucked = false;
        canBeVacuumed = false;
        isFlowing = false;
        isSwooshing = false;
        if (attachedSuckableGarbage.Count < 1) Destroy(this.gameObject);
        foreach (Suckable attachedGarbage in attachedSuckableGarbage)
        {
            attachedGarbage.canBeSucked = false;
            attachedGarbage.canBeVacuumed = false;
            attachedGarbage.isFlowing = false;
            attachedGarbage.isSwooshing = false;
            attachedGarbage.GetComponent<Collider>().enabled = false;
        }
    }

    void RelaseRandomTrash()
    {
        int rand = Random.Range(0,attachedSuckableGarbage.Count);
        Suckable suckableScript = attachedSuckableGarbage[rand];
        suckableScript.canBeSucked = true;
        suckableScript.canBeVacuumed = true;
        suckableScript.gameObject.transform.parent = null;
        suckableScript.GetComponent<Collider>().enabled = true;
        attachedSuckableGarbage.Remove(suckableScript);
        if (attachedSuckableGarbage.Count < 1) Saved();
    }

    public void Saved()
    {
        isSaved = true;
        //Do somethig when saved here
        flowSpeed = 5;
        isFlowing = true;
        isSwooshing = true;
    }

    public void SuckedAnimal()
    {
        if (!isSaved)
        {
            suckItemInterval += 0.10f;
            if (suckItemInterval > suckPowerRequiredPerTrash)
            {
                RelaseRandomTrash();
                suckItemInterval = 0;
            }
        }
        
    }
}
