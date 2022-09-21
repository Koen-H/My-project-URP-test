using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TrashChute : MonoBehaviour
{


    [SerializeField]
    public GarbageProperty garbageProperty;

    [SerializeField]
    Transform ejectTransform; 

    [SerializeField]
    float ejectForce;
    GameManager gameManager;

    [SerializeField]
    float ejectDelay; 
    float ejectTime;

    public float disbleStreakPopupTime = 0;


    public TextMeshPro streakDisplay;


    public List<GameObject> itemsToEject = new List<GameObject>();

    private void Start()
    {
        gameManager = GameManager.Instance;
    }

    private void FixedUpdate()
    {

        if (Time.deltaTime > disbleStreakPopupTime)
        {
            streakDisplay.gameObject.SetActive(false);
        }
    }

    private void Update()
    {
        if(itemsToEject.Count > 0)
        {
            ejectTime += Time.deltaTime;
            if(ejectTime > ejectDelay)
            {
                ejectTime = 0;
                EjectItem(itemsToEject[0]);
            }
        }
    }




    void EjectItem(GameObject item)
    {
        gameManager.onStreak = false;
        item.SetActive(true);
        item.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
        item.gameObject.transform.position = ejectTransform.position;
        Rigidbody itemRigidbody = item.GetComponent<Rigidbody>();
        itemRigidbody.AddForce(ejectTransform.forward * ejectForce);
        itemRigidbody.velocity = ejectTransform.forward * ejectForce; 
        Suckable itemSuckable = item.gameObject.GetComponent<Suckable>();
        itemSuckable.flowDirection = ejectTransform.forward; 
        itemSuckable.flowSpeed = 1;
        itemSuckable.isGrowing = true;
        itemsToEject.Remove(item);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Suckable")
        { 

            Suckable suckable = other.gameObject.GetComponent<Suckable>();
            suckable.trashChute = this;
        }
    }
}


/*GameManager gamemanager = GameManager.Instance;
gamemanager.cleannessLevel++;
gamemanager.UpdateBars();*/