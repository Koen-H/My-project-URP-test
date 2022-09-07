using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    private static GameManager _instance;
    public static GameManager Instance
    {
        get
        {
            if (_instance == null) Debug.LogError("There is no GameManager");
            return _instance;
        }
    }

    public float timerInSeconds;
    private float timer;

    void Awake()
    {
        _instance = this;
    }

    private void Start()
    {
        StartCoroutine(StartTimer());
    }

    IEnumerator StartTimer()
    {
        timer = 0;
        while (timerInSeconds > timer)
        {
            timer++;
            yield return new WaitForSeconds(1f);
        }
        Debug.Log("The timer is finished");
        

    }
}
