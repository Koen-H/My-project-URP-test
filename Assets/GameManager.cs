using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.InputSystem;

public class GameManager : MonoBehaviour
{
    GameObject vacuumTool;
    GameObject hookTool;
    bool toolsEnabled;

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

    //public float streak = 0;
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

    [SerializeField]
    InputActionProperty menuButton;
    public bool isPaused;
    [SerializeField]GameObject pauseMenu;

    [SerializeField]
    Color cleanWater;
    [SerializeField]
    Color dirtyWater;

    [SerializeField]
    float cleanDensity;
    [SerializeField]
    float dirtyDensity; 


    void Awake()
    {
        _instance = this;
        Application.runInBackground = true;
    }

    private void Start()
    {
        isPaused = false;
        //CalculateBarMult();
        helmetController = HelmetController.Instance;
        vacuumTool = GameObject.Find("FinalSuckingMachine");
        hookTool = GameObject.Find("Grapplinghook");
        ToggleTools(false);
    }

    private void Update()
    {
        if (menuButton.action.WasPressedThisFrame())
        {
            if (!isPaused)
            {
                PauseGame();
                
            }
            else
            {
                
                UnPauseGame();

            }
        }
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
        else combos = 0;
        onStreak = true;
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
        ToggleTools(true);
    }

    public void ToggleTools(bool _toggle)
    {
        vacuumTool.SetActive(_toggle);
        hookTool.SetActive(_toggle);
        toolsEnabled = _toggle;
    }

    public void PauseGame()
    {
        Debug.Log($"Game paused");
        ToggleTools(false);
        isPaused = true;
        pauseMenu.SetActive(true);
        Time.timeScale = 0;
    }
    public void UnPauseGame()
    {
        Debug.Log($"Game unpaused");
        ToggleTools(true);
        isPaused = false;
        pauseMenu.SetActive(false);
        Time.timeScale = 1;
    }
}
