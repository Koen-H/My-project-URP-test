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
    private float streak = 0;
    public bool onStreak = true;
    float streakTimer;

    public float cleannessLevel = 100; 

    public TextMeshPro trashPointsText;
    public float score = 0;

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
        StartCoroutine(StartGameTimer());
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


    IEnumerator StartGameTimer()
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

    public void AddTrashPoints(float _trashPoints,float streakTime = 0.5f)
    {
        if (onStreak) streak += _trashPoints;
        else streak = _trashPoints;
        score += streak;
        onStreak = true;
         trashPointsText.text = $"Trashpoints: {score}";
        if (0 > streakTimer) StartStreakTimer();
        else streakTimer += streakTime;
    }

    IEnumerator StartStreakTimer()
    {
        streakTimer = 1.5f;
        while (0 > streakTimer || onStreak)
        {
            streakTimer -= 0.1f;
            yield return new WaitForSeconds(0.1f);
        }
        Debug.Log("Streak ended");
        onStreak = false;
    }
}
