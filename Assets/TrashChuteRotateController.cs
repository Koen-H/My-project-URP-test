using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrashChuteRotateController : MonoBehaviour
{
    [SerializeField] float speed = 0.8f;
    

    // Update is called once per frame
    void Update()
    {
        this.transform.Rotate(Vector3.up * (speed * Time.deltaTime));
    }
}
