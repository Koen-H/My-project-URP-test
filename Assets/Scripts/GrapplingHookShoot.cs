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
    public float letGoDistance = 6f;
    Haptic haptic;
    private float pullStrength;
    bool resetButtonPress;

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
        resetButtonPress = false;


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
        if (!shootButton.action.IsPressed()) resetButtonPress = true;
        if(!isShot && shootButton.action.IsPressed() && resetButtonPress) Shoot();
        if (isShot) CheckForRetrieve();

    }

    public void CheckForRetrieve()
    {
        if (Vector3.Distance(transform.position, hookObj.transform.position) > ropeLength)//Return if it is too far away
        {
            hookController.isRetrieving = true;
            LetGo();
        }
        if(hookController.IsAttached() && hookController.isRetrieving){
            if (Vector3.Distance(transform.position, hookObj.transform.position) < letGoDistance)
            {
                
                LetGo();
            }
        }
        if (Vector3.Distance(transform.position, hookObj.transform.position) < 1 && hookController.isRetrieving)//Once it's close enough, return the hook in to the slot.
        {
            ReturnInGun();
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
        pullStrength = _pullStrength;
       // Debug.Log($"Testing:{pullStrength}");
        haptic.SendHapticsLeftController(0.5f, 0.5f);
        //hookController.pullBackSpeed = pullStrength;
        hookController.isRetrieving = true;
        
    }

    public void LetGo()
    {
        Debug.Log("Letting go...");
        if (hookController.IsAttached())
        {
            Vector3 pullVelocity = (hookEndpoint.transform.position - hookObj.transform.position).normalized * (2.75f);
            Suckable suckController = hookController.attachedObj.GetComponent<Suckable>();
            suckController.flowDirection = pullVelocity;
            suckController.isHooked = false;

        }
        hookObj.transform.parent = null;
        hookController.attachedObj = null;
    }
    private void ReturnInGun()
    {
        hookObj.transform.parent = this.transform.parent;
        
        isShot = false;
        hookController.isRetrieving = false;
        hookController.isShooting = false;
        hookObj.transform.localRotation = Quaternion.Euler(0, 0, 0);
        haptic.SendHapticsLeftController(0.5f, 0.5f);
        hookObj.transform.localPosition = new Vector3(0.0009f, -0.0954f, -0.0025f);

    }
}

