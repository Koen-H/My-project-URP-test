using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using Unity.VisualScripting;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class MenuFollowScript : MonoBehaviour
{
    Camera camera;
    [SerializeField] float speed = 0.8f;
    void Start()
    {
        camera = Camera.main;
    }

    private void Update()
    {
        //float rotateSpeed = camera.transform.eulerAngles.y - this.transform.eulerAngles.y;
        float angleDif = Quaternion.Angle(transform.rotation, camera.transform.rotation);
        //angleDif /= speed;
        //if (rotateSpeed < 0) rotateSpeed *= -1;
        //Debug.Log(angleDif);
        //if(rotateSpeed > 5)
        //{
        //this.transform.Rotate(new Vector3(0, camera.transform.eulerAngles.y, 0));
        //= Quaternion.RotateTowards(this.transform.rotation, Quaternion.Euler(0.0f, camera.transform.eulerAngles.y, 0.0f), rotateSpeed * Time.deltaTime);
        //transform.Rotate(Vector3.up, angleDif);
        //}
        var step =(angleDif / speed) * Time.unscaledDeltaTime;
        transform.rotation = Quaternion.RotateTowards(transform.rotation, new Quaternion(0, camera.transform.rotation.y, 0, camera.transform.rotation.w), step);
    }

}
