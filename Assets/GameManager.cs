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

    private float streak = 0;
    public float combos;
    public float perComboValue = 0.25f;
    public float objective = 10;
    public bool onStreak = true;
    float streakTimer = 0;
    HelmetController helmetController;

    public float cleannessLevel = 100;

    public TextMeshPro trashPointsText;
    public float score = 0;
    public float currentTrashpoints = 0;

    [SerializeField]
    GameObject cleannessBar;
    float cleannessBarMult;
    [SerializeField]
    float maxCleanness;

    [SerializeField] ScoreController scoreController; 


    void Awake()
    {
        _instance = this;
        Application.runInBackground = true;
    }

    private void Start()
    {
        
        //CalculateBarMult();
        helmetController = HelmetController.Instance;
    }




    void CalculateBarMult()
    {
        cleannessBarMult = 1 / cleannessLevel;
    }

    public void UpdateBars()
    {
        float cleanBarX = cleannessLevel * cleannessBarMult;
        cleannessBar.transform.localScale = new Vector3(cleanBarX, cleannessBar.transform.localScale.y, cleannessBar.transform.localScale.z);
    }




    public void AddTrashPoints(float _trashPoints, float _streakTime = 0.5f)
    {
        currentTrashpoints += _trashPoints;
        if (onStreak) combos++;
        else streak = 0;
        onStreak = true;
        trashPointsText.text = $"Current Trashpoints: {currentTrashpoints}";
        if (0 >= streakTimer) StartCoroutine(StartStreakTimer());
        else streakTimer += _streakTime;
        helmetController.UpdateScoreBar(currentTrashpoints);
    }

    IEnumerator StartStreakTimer()
    {
        Debug.Log("Streak Timer Started" + onStreak);
        streakTimer = 1.5f;
        while (streakTimer > 0 )
        {
            streakTimer -= 0.1f;
            if (!onStreak) break;
            yield return new WaitForSeconds(0.1f);
        }
        Debug.Log("Streak ended");
        onStreak = false;
    }

    /// <summary>
    /// Once the timer reaches zero, time's up and end the game.
    /// </summary>
    public void EndGame()
    {
        scoreController.UpdateScreen();
    }

    public void StartGame()
    {
        
        helmetController.SetUpHelmet();
    }
}
