using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SuckableAnimal : Suckable
{
    bool isSaved = false;
    public List<Suckable> preDefinedGarbageOnPrefab;
    private List<Suckable> attachedGarbage;
    float suckItemInterval = 0;
    float suckPowerRequiredPerTrash = 5f;
    public float maxTrashAllowed = 8f;
    public Collider attachCollider;

    GameObject playerObj;
    float maxPlayerRange = 2f;
    float distanceToPlayer;
    bool stayWithinPlayerRange = true;
    public float swimSpeed = 2;
    public float rotateSpeed = 1.3f;
    bool isRotating = false;
    float targetAngle;
    bool isDead = false;



    public void Start()
    {
        attachedGarbage = new List<Suckable>();
        playerObj = GameObject.FindGameObjectWithTag("Player");
        rigidbody = GetComponent<Rigidbody>();
        canBeSucked = false;
        canBeVacuumed = false;
        canBeHooked = false;
        wasAttached = true;
        isFlowing = false;
        isSwooshing = false;
        foreach (Suckable attachedGarbage in preDefinedGarbageOnPrefab)
        {
            AttachTrash(attachedGarbage);
        }
    }

    void RelaseRandomTrash()
    {
        int rand = Random.Range(0, attachedGarbage.Count);
        Suckable suckableScript = attachedGarbage[rand];
        suckableScript.wasAttached = true;
        suckableScript.canBeSucked = true;
        suckableScript.canBeHooked = true;
        suckableScript.canBeVacuumed = true;
        suckableScript.isFlowing = true;
        suckableScript.isSwooshing = true;
        suckableScript.gameObject.transform.parent = null;
        suckableScript.GetComponent<Collider>().enabled = true;
        attachedGarbage.Remove(suckableScript);
        suckableScript.GetComponent<Rigidbody>().isKinematic = false;
        //if (attachedSuckableGarbage.Count < 1) Saved();
    }

    public void Saved()
    {
        isSaved = true;
        //Do somethig when saved here
        // flowSpeed = 5;
        // isFlowing = true;
        //isSwooshing = true;
    }

    private void Update()
    {
        if (Time.timeScale != 0)
        {


            if (!isDead)
            {
                distanceToPlayer = Vector3.Distance(this.gameObject.transform.position, playerObj.transform.position);
                if (stayWithinPlayerRange)
                {
                    if (distanceToPlayer > maxPlayerRange && !isRotating)
                    {
                        isRotating = true;
                        targetAngle = Random.Range(20, 60);
                    }
                }
                rigidbody.AddForce(transform.forward * swimSpeed);
                if (isRotating)
                {
                    float angleBetween = Vector3.Angle(transform.forward, playerObj.transform.position - transform.position);
                    if (angleBetween > targetAngle)
                    {
                        //Debug.Log($"Rotating with targetAngel {targetAngle} and anglebetween {angleBetween}");
                        transform.rotation = Quaternion.LookRotation(Vector3.RotateTowards(transform.forward, playerObj.transform.position - transform.position, 1f * Time.deltaTime, 0.0f));
                    }
                    else
                    {
                        isRotating = false;
                    }
                }
            }
            else
            {
                //If it's dead, make it go to the bottom of the ocean.
                rigidbody.AddForce((-transform.up) * 0.2f);

            }
        }
    }

    private void OnDeath()
    {
        Debug.Log($"The animal {gameObject.name} has died!");
        canBeHooked = true;
        isDead = true;
        rigidbody.velocity = Vector3.down;
        GetComponent<Collider>().isTrigger = false;
        attachCollider.enabled = false;
        gameObject.layer = LayerMask.NameToLayer("Trash");
    }

    public void SuckedAnimal()
    {
        if (!isDead)
        {
            suckItemInterval += 0.10f;
            if (suckItemInterval > suckPowerRequiredPerTrash)
            {
                if (attachedGarbage.Count > 0) RelaseRandomTrash();
                suckItemInterval = 0;
            }
        }

    }

    public void AttachTrash(Suckable attachedGarbageObj)
    {
        attachedGarbage.Add(attachedGarbageObj);
        isSaved = false;
        attachedGarbageObj.transform.parent = this.transform;
        attachedGarbageObj.wasAttached = true;
        attachedGarbageObj.canBeSucked = false;
        attachedGarbageObj.canBeHooked = false;
        attachedGarbageObj.canBeVacuumed = false;
        attachedGarbageObj.isFlowing = false;
        attachedGarbageObj.isSwooshing = false;
        attachedGarbageObj.GetComponent<Collider>().enabled = false;
        attachedGarbageObj.GetComponent<Rigidbody>().isKinematic = true;
        if (maxTrashAllowed < attachedGarbage.Count) OnDeath();
    }


}
