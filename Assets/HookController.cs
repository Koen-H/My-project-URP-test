using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HookController : MonoBehaviour
{
    public GrapplingHookShoot grapplingHookController;
    public GameObject grapplingHookObj;
    public bool isRetrieving = false;
    public bool isShooting = false;
    public GameObject attachedObj;
    public float hookPower;
    bool moveParent = true;
    GameObject raycastHit;

    public float pullBackSpeed = 0.4f;

    private void Start()
    {
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!IsAttached() && isShooting)
        {
            if (other.tag == "Suckable" || other.tag == "SuckableAnimal")
            {
                Suckable suckController = other.GetComponent<Suckable>();
                if (suckController.canBeHooked)
                {
                    suckController.isHooked = true;
                    attachedObj = other.gameObject;
                    this.transform.parent = attachedObj.transform;
                    isShooting = false;
                    grapplingHookController.audioSource.PlayOneShot(grapplingHookController.hookAttachSound);
                }
            }
            /*if (other.tag == "SuckableAnimal")
            {
                SuckableAnimal suckController = other.GetComponent<SuckableAnimal>();
                if (suckController.canBeHooked)
                {
                    suckController.isHooked = true;
                    attachedObj = other.gameObject;
                    this.transform.parent = attachedObj.transform;
                    isShooting = false;
                }
            }*/
        }
    }
    private void Retrieve()
    {
        // Using MoveTowards
        if (!moveParent || !IsAttached()) this.transform.position = Vector3.MoveTowards(transform.position, grapplingHookObj.transform.position, pullBackSpeed);
        else attachedObj.transform.position = Vector3.MoveTowards(attachedObj.transform.position, grapplingHookObj.transform.position, pullBackSpeed);


        /*if (!moveParent || !IsAttached()) this.transform.position = this.transform.position + (grapplingHookObj.transform.position - transform.position).normalized * (pullBackSpeed/10);
        else attachedObj.transform.position = attachedObj.transform.position + (attachedObj.transform.position - grapplingHookObj.transform.position).normalized * pullBackSpeed;*/
    }
    private void Move()
    {
        Vector3 fwd = transform.TransformDirection(Vector3.forward);
        transform.position += (fwd * hookPower);
    }

    private void FixedUpdate()
    {
        if (isRetrieving) Retrieve();
        else if (isShooting) Move();
    }

    //Check if the hook is attached on to something.
    public bool IsAttached()
    {
        if (attachedObj != null) return true;
        return false;
    }

    

}
