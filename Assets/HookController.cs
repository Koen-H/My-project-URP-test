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

    public float pullBackSpeed; 

    private void Start()
    {
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!IsAttached())
        {
            attachedObj = other.gameObject;
            this.transform.parent = attachedObj.transform;
            isShooting = false;
        }
    }
    private void Retrieve()
    {
        this.transform.position = Vector3.MoveTowards(transform.position, grapplingHookObj.transform.position, pullBackSpeed);
    }
    private void Move()
    {
        Vector3 fwd = transform.TransformDirection(Vector3.forward);
        transform.position += (fwd * hookPower);
    }

    private void Update()
    {
        
        

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
