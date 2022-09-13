using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

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
    public TextMeshPro timerText;
    private float timer;


    public float cleannessLevel = 100; 

    public TextMeshPro trashPointsText;
    public float trashPoints = 0;

    [SerializeField]
    GameObject cleannessBar;
    float cleannessBarMult;
    [SerializeField]
    float maxCleanness; 



    void Awake()
    {
        _instance = this;
    }

    private void Start()
    {
        StartCoroutine(StartTimer());
        CalculateBarMult();
    }




    void CalculateBarMult()
    {
        cleannessBarMult = cleannessBar.transform.localScale.x / cleannessLevel;
    }

    public void UpdateBars()
    {
        float cleanBarX = cleannessLevel * cleannessBarMult;
        cleannessBar.transform.localScale = new Vector3(cleanBarX, cleannessBar.transform.localScale.y, cleannessBar.transform.localScale.z);
    }


    IEnumerator StartTimer()
    {
        timer = 0;
        while (timerInSeconds > timer)
        {
            timer++;
            timerText.text = $"Timer: {timer}";
            yield return new WaitForSeconds(1f);
        }
        Debug.Log("The timer is finished");
        timerText.text = $"The timer is finished";
    }

    public void AddTrashPoints(float _trashPoints)
    {
        trashPoints += _trashPoints;
        trashPointsText.text = $"Trashpoints: {trashPoints}";
    }
}
