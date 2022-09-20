using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrashGenerator : MonoBehaviour
{


    [SerializeField]
    Vector2 spawnAngle; 

    [SerializeField]
    float radius;

    [SerializeField]
    float spawnRate;

    float consistentSpawnRate;

    [SerializeField]
    Vector2 randomHorizontalOffsetRange;

    [SerializeField]
    Vector2 randomVerticalOffsetRange;

    [SerializeField]
    Vector2 randomSpeedRange;

    [Range(0.0f, 0.5f)]
    [SerializeField]
    float spread;

    [SerializeField]
    List<GameObject> generalTrash = new List<GameObject>();

    [SerializeField]
    List<GameObject> plasticTrash = new List<GameObject>();

    [SerializeField]
    List<GameObject> wasteTrash = new List<GameObject>();


    [Range(0.0f, 1.5f)]
    [SerializeField]
    float trashTypeSpread;

    [Range(0.0f, 3.0f)]
    [SerializeField]
    float trashType;

    [Range(0.0f, 20f)]
    [SerializeField]
    float trashSwooshIntensity;

    [Range(0.0f, 0.5f)]
    [SerializeField]
    float trashSwooshFrequency;

    [SerializeField]
    float maxGameTimeMinute;
    [SerializeField]
    List<WaveSettings> waves = new List<WaveSettings>();

    List<float> waveIntensityValues = new List<float>();

    float time;

    float t;

    int tW = 1;

    float startTime;


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

    public void BakeWaveValues()
    {
        startTime = Time.deltaTime;
        maxGameTimeMinute *= 60;

        for (int i = 0; i < maxGameTimeMinute; i++)
        {
            float j = 0;

            foreach (WaveSettings wave in waves)
            {
                float d = wave.timeSeconds;
                float s = wave.duration;
                float a = wave.intesity;

                float k = 360 / s;
                float h = a / 2;

                float f = h * Mathf.Cos((i - d) * k * Mathf.PI / 180) + h;

                if(i < -s/2 +d || i > s/2+d) f = 0;

                j += f;
            }
            waveIntensityValues.Add(j);
        }

    }


/*    void BakeWaveValues()
    {
        //maxGameTime *= 60;
        for (int k = 0; k < maxGameTime; k++)
        {
            float i = 0;

            foreach (Vector3 wave in waves)
            {
                float d = wave.x;
                float s = wave.y;
                float j = 1 / wave.z;

                float bottom = Mathf.Sqrt(Mathf.PI * 2) * j;
                float main = 1f / bottom;
                float pTop = Mathf.Pow(k - d,2);
                float pBottom = Mathf.Pow(j, 2) * 2;
                float power = -pTop / pBottom;
                main *= Mathf.Pow(s, power);
                i += main;
            }
                waveIntensityValues.Add(i);
        }
        for(int p = 0; p < waveIntensityValues.Count; p++)
        {
            Debug.Log(p + " : " + waveIntensityValues[p]);
        }
    }*/

    void WaveCalculations()
    {
        t += Time.deltaTime + startTime;

        if(waves.Count != 0)
        {
            if (t > tW && t < maxGameTimeMinute)
            {
                spawnRate = waveIntensityValues[tW];
                //Debug.Log("Value logged : " + tW + " : " + waveIntensityValues[tW]);
                tW++;
            }
        }
    }
    void KeepSpawnRateConsistent()
    {
        float arc = spawnAngle.y - spawnAngle.x;

        consistentSpawnRate = spawnRate * (arc / 360); 
    }

    void SpawnItem()
    {
        float randomAngle = Random.Range(spawnAngle.x, spawnAngle.y); 
        float randomOffsetH = Random.Range(randomHorizontalOffsetRange.x, randomHorizontalOffsetRange.y);
        float randomOffsetV = Random.Range(randomVerticalOffsetRange.x, randomVerticalOffsetRange.y);
        float randomSpeed = Random.Range(randomSpeedRange.x, randomSpeedRange.y);

        GameObject trashItem = null;
        float randomTrash = trashType + Random.Range(-trashTypeSpread, trashTypeSpread);
        if (randomTrash > 2) trashItem = generalTrash[Random.Range(0, generalTrash.Count)];
        if (randomTrash < 2 && trashType + randomTrash > 1) trashItem = plasticTrash[Random.Range(0, plasticTrash.Count)];
        if (randomTrash < 1) trashItem = wasteTrash[Random.Range(0, wasteTrash.Count)];

        trashItem.transform.position = transform.position + Vector3.right * (radius + randomOffsetH) + Vector3.up * randomOffsetV;
        trashItem.transform.RotateAround(transform.position, Vector3.up, randomAngle);
        Suckable trashItemSuckable = trashItem.GetComponent<Suckable>();
        trashItemSuckable.flowDirection = -trashItem.transform.position.normalized + CalculateSpread(spread);
        trashItemSuckable.flowSpeed = randomSpeed;
        trashItemSuckable.SwooshIntensity = trashSwooshIntensity;
        trashItemSuckable.SwooshFrequency = trashSwooshFrequency;


        GameManager gamemanager = GameManager.Instance;
        gamemanager.cleannessLevel--;
        //gamemanager.UpdateBars();

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
        //TODO, start within GameStart(); Either change timer or instantiate this prefab.
        time += Time.deltaTime + startTime;

        WaveCalculations();
        KeepSpawnRateConsistent();

        if (time > 1/ consistentSpawnRate)
        {
            time = 0;
            SpawnItem(); 
        }

    }
}
