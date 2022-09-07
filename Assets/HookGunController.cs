using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; 

public class HookGunController : MonoBehaviour
{

    List<Vector3> positions = new List<Vector3>();

    [SerializeField]
    GameObject startGizmos;
    [SerializeField]
    GameObject endGizmos;
    [SerializeField]
    GameObject shaftGizmos;
    [SerializeField]
    GameObject hookGun;

    [SerializeField]
    TextMeshPro pullFactorText;

    GrapplingHookShoot grapplingHookScript; 

    Vector3 hookGunAcceleration;

    float pullFactor = 0;
    float maxPullFactor;

    bool pulling; 




    // Start is called before the first frame update
    void Start()
    {
        grapplingHookScript = gameObject.GetComponent<GrapplingHookShoot>(); 
/*        startGizmos.transform.position = hookGun.transform.position + Vector3.up * 0.2f;
        endGizmos.transform.position = startGizmos.transform.position;*/
    }

    // Update is called once per frame
    void Update()
    {
        hookGunAcceleration = CalculateDirection(); 
        //DrawGizmos();





        if (hookGunAcceleration.magnitude > 0.1f)
        {
            pulling = true;
            pullFactor = PullFactor();
            if (pullFactor > maxPullFactor) maxPullFactor = pullFactor;
        }
        else
        {
            pullFactor = 0;
            maxPullFactor = 0;
        }

        if (grapplingHookScript.hookController.IsAttached() && maxPullFactor != 0)
        {
            Debug.Log("Puleed and max factor was : " + maxPullFactor);
            grapplingHookScript.Pull(maxPullFactor); 
        }


    }


    void DrawGizmos()
    {
        startGizmos.transform.position = hookGun.transform.position + Vector3.up * 0.2f;

        endGizmos.transform.position = startGizmos.transform.position + hookGunAcceleration;

        shaftGizmos.transform.LookAt(endGizmos.transform.position);

        shaftGizmos.transform.localScale = new Vector3(0.2f, 0.2f, hookGunAcceleration.magnitude*100);


        pullFactorText.text = maxPullFactor.ToString();

    }

    Vector3 CalculateDirection()
    {
        if (positions.Count < 4)
        {
            positions.Add(this.gameObject.transform.position);
            return Vector3.zero;
        }

        positions.Add(this.gameObject.transform.position);

        Vector3 pos1 = positions[0];
        Vector3 pos2 = positions[1];
        Vector3 pos3 = positions[2];
        Vector3 pos4 = positions[3];
        Vector3 pos5 = positions[4];

        Vector3 v1 = pos2 - pos1;
        Vector3 v2 = pos3 - pos2;
        Vector3 v3 = pos4 - pos3;
        Vector3 v4 = pos5 - pos4;

        Vector3 totalVector = v1 + v2 + v3 + v4;
        Vector3 direction = totalVector / 4;
        direction *= 10;

        positions.RemoveAt(0);

        return direction; 
    }


    float PullFactor()
    {
        Vector3 target = transform.forward * 2;

        float factor = Vector3.Angle(hookGunAcceleration, target);
        if (factor < 120) factor = 0; 
        factor *= hookGunAcceleration.magnitude;
        return factor; 
    }


}
