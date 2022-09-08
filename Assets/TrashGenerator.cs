using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrashGenerator : MonoBehaviour
{


    [SerializeField]
    float radius;

    [SerializeField]
    float spawnRate;

    [SerializeField]
    Vector2 randomHorizontalOffsetRange;

    [SerializeField]
    Vector2 randomVerticalOffsetRange;

    [SerializeField]
    Vector2 randomSpeedRange;


    [SerializeField]
    float spread;

    [SerializeField]
    List<GameObject> generalTrash = new List<GameObject>();

    [SerializeField]
    List<GameObject> plasticTrash = new List<GameObject>();

    [SerializeField]
    List<GameObject> wasteTrash = new List<GameObject>();


    [Range(0.0f, 2f)]
    [SerializeField]
    float trashTypeSpread;

    [Range(0.0f, 3.0f)]
    [SerializeField]
    float trashType;


    float time;



    // Start is called before the first frame update
    void Start()
    {
        foreach(GameObject item in generalTrash)
        {
            item.SetActive(false);
        }

        foreach (GameObject item in plasticTrash)
        {
            item.SetActive(false);
        }

        foreach (GameObject item in wasteTrash)
        {
            item.SetActive(false);
        }


    }

    void SpawnItem()
    {
        float randomAngle = Random.Range(0, 360); 
        float randomOffsetH = Random.Range(randomHorizontalOffsetRange.x, randomHorizontalOffsetRange.y);
        float randomOffsetV = Random.Range(randomVerticalOffsetRange.x, randomVerticalOffsetRange.y);
        float randomSpeed = Random.Range(randomSpeedRange.x, randomSpeedRange.y);

        GameObject trashItem = null;
        float randomTrash = trashType + Random.Range(-trashTypeSpread, trashTypeSpread);
        if (randomTrash > 2) trashItem = generalTrash[Random.Range(0, generalTrash.Count - 1)];
        if (randomTrash < 2 && trashType + randomTrash > 1) trashItem = plasticTrash[Random.Range(0, plasticTrash.Count - 1)];
        if (randomTrash < 1) trashItem = wasteTrash[Random.Range(0, wasteTrash.Count - 1)];



        trashItem.transform.position = transform.position + Vector3.right * (radius + randomOffsetH) + Vector3.up * randomOffsetV;
        trashItem.transform.RotateAround(transform.position, Vector3.up, randomAngle);
        trashItem.GetComponent<Suckable>().flowDirection = -trashItem.transform.position.normalized + CalculateSpread(spread);
        trashItem.GetComponent<Suckable>().flowSpeed = randomSpeed;


        GameObject newTrashItem = Instantiate(trashItem);

        newTrashItem.SetActive(true); 


    }

    Vector3 CalculateSpread(float _spreadValue)
    {
        float x = Random.Range(-_spreadValue, _spreadValue);
        float y = Random.Range(-_spreadValue, _spreadValue);
        float z = Random.Range(-_spreadValue, _spreadValue);
        return new Vector3(x,y,z); 
    }

    private void FixedUpdate()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        time += Time.deltaTime;

        if (time > 1/spawnRate)
        {
            time = 0;
            SpawnItem(); 
        }

    }
}