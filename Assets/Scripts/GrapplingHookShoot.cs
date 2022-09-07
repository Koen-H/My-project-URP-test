using UnityEngine;
using UnityEngine.InputSystem;

public class GrapplingHookShoot : MonoBehaviour
{
    public float ropeLength = 50;
    public bool isShot = false;
    LineRenderer lineRenderer;
    public HookController hookController;
    public GameObject objectHit;
    public InputActionProperty shootButton;
    Haptic haptic;

    public GameObject hookObj;
    public GameObject hookEndpoint;
    private void Start()
    {
        haptic = Haptic.Instance;
        lineRenderer = this.GetComponent<LineRenderer>();
        hookController = hookObj.GetComponent<HookController>();

    }

    private void Shoot()
    {
        isShot = true;
        haptic.SendHapticsLeftController(0.5f,0.5f);
        hookObj.transform.parent = null;
        hookController.isShooting = true;


        //Aimbot
        /*Vector3 fwd = transform.TransformDirection(Vector3.forward);
        Debug.DrawRay(transform.position, fwd * ropeLength, Color.green);
        RaycastHit rayObjectHit;
        if (Physics.Raycast(transform.position, fwd, out rayObjectHit, ropeLength))
        {
            if (rayObjectHit.collider.tag == "Suckable")
            {
                objectHit = rayObjectHit.collider.gameObject;
                isShot = true;
                
                Debug.Log($"Hit an object{rayObjectHit.collider.name}");
            }
        }*/

    }

    private void Update()
    {
        if(!isShot && shootButton.action.IsPressed()) Shoot();
        if (isShot) CheckForRetrieve();

    }

    public void CheckForRetrieve()
    {
        if (Vector3.Distance(transform.position, hookObj.transform.position) > ropeLength)//Return if it is too far away
        {
            hookController.isRetrieving = true;
            
        }
        else if (Vector3.Distance(transform.position, hookObj.transform.position) < 1 && hookController.isRetrieving)//Once it's close enough, return the hook in to the slot.
        {
            hookObj.transform.parent = this.transform.parent;
            hookObj.transform.position = hookEndpoint.transform.position;
            isShot = false;
            hookController.isRetrieving = false;
            hookController.isShooting = false;
            hookObj.transform.localRotation = Quaternion.Euler(0,0,0);
            haptic.SendHapticsLeftController(0.5f, 0.5f);
        }
    }

    private void LateUpdate()
    {
        DrawRope();//Always draw the rope.
    }

    private void DrawRope()
    {
        lineRenderer.SetPosition(0, hookObj.transform.position);
        lineRenderer.SetPosition(1, hookEndpoint.transform.position);
    }
    
    /// <summary>
    /// Pull as in, add velocity to the suckable object.
    /// </summary>
    public void Pull(float _pullStrength)
    {
        haptic.SendHapticsLeftController(0.5f, 0.5f);
        Vector3 pullVelocity = (hookEndpoint.transform.position - hookObj.transform.position).normalized * _pullStrength;
        hookController.attachedObj.GetComponent<Rigidbody>().AddForce(pullVelocity);
        hookObj.transform.parent = null;
        hookController.isRetrieving = true;
        hookController.attachedObj = null;
    }
}

