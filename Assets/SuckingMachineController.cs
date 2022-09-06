using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;

public class SuckingMachineController : MonoBehaviour
{
    public float radius;
    public float depth;
    public float angle;
    [SerializeField] float suckPower;
    public bool disableSuckButton = true;
    public InputActionProperty enableSuck;
    public InputActionProperty suckPowerInput;
    public TextMeshPro powerText;
    public List<GameObject> suckedObjects;

    private Physics physics;

    private void Start()
    {
        suckedObjects = new List<GameObject>();
    }


    void FixedUpdate()
    {
        if (enableSuck.action.ReadValue<float>() > 0.5f || disableSuckButton)
        {
            float triggerValue = suckPowerInput.action.ReadValue<Vector2>().y;
            triggerValue *= 100;
            powerText.text = $"{triggerValue}";
            Debug.Log(triggerValue);
            RaycastHit[] coneHits = physics.ConeCastAll(transform.position, radius, transform.forward, depth, angle);
            Vector3 origin = this.transform.position;

            if (coneHits.Length > 0)
            {
                for (int i = 0; i < coneHits.Length; i++)
                {
                    //do something with collider information
                    if (coneHits[i].collider.gameObject.tag == "Suckable")
                    {

                        coneHits[i].collider.gameObject.GetComponent<Suckable>().Suck(origin, triggerValue);
                        //suckableScript.Suck(origin);
                        //suckableScript.Blow();
                    }
                }
            }
        }
    }
    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Debug.DrawLine(transform.position, transform.position + transform.forward * depth);
        Gizmos.DrawWireSphere(transform.position + transform.position * depth, radius);
    }
   

}
