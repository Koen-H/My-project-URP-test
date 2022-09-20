using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.InputSystem;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;


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

    [HideInInspector]
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
    LightingSettings lightingSettings;
    [SerializeField]
    Color cleanWater;
    [SerializeField]
    Color dirtyWater;

    [SerializeField]
    float cleanDensity;
    [SerializeField]
    float dirtyDensity;

    [SerializeField]
    Volume globalVolume;

    ColorCurves colorCurve;

    [SerializeField]
    Vector2 cMaster;
    [SerializeField]
    Vector2 dMaster;

    [SerializeField]
    Vector2 cBlue;
    [SerializeField]
    Vector2 dBlue;


    void Awake()
    {
        _instance = this;
        Application.runInBackground = true;
    }

    private void Start()
    {
        isPaused = false;
        cleannessLevel = maxCleanness;
        helmetController = HelmetController.Instance;
        vacuumTool = GameObject.Find("FinalSuckingMachine");
        hookTool = GameObject.Find("Grapplinghook");
        ToggleTools(false);
        CalculateBarMult();
        GetOvverrides();

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

    private void FixedUpdate()
    {
        CleannessEffect();
    }

    void GetOvverrides()
    {
        ColorCurves tmp;
        if (globalVolume.profile.TryGet<ColorCurves>(out tmp))
        {
            colorCurve = tmp;
        }
    }

    void CalculateBarMult()
    {
        cleannessBarMult = 1 / cleannessLevel;
    }


    void CleannessEffect()
    {
        float t = cleannessLevel * cleannessBarMult;
        RenderSettings.fogDensity = Mathf.Lerp(dirtyDensity, cleanDensity, t);
        RenderSettings.fogColor = Color.Lerp(dirtyWater, cleanWater, t);
        Vector2 masterVector = Vector2.Lerp(dMaster, cMaster, t);
        Vector2 blueVector = Vector2.Lerp(dMaster, cMaster, t);
        Vector2 bounds = new Vector2(1, 1);
        TextureCurve masterCurve = new TextureCurve(new AnimationCurve(new Keyframe(0f, 0f), new Keyframe(masterVector.x, masterVector.y, 1f,1f), new Keyframe(1f, 1f)), 0, true, in bounds);
        colorCurve.master.Override(masterCurve);

        TextureCurve blueCurve = new TextureCurve(new AnimationCurve(new Keyframe(0f, 0f), new Keyframe(blueVector.x, blueVector.y, 1f, 1f), new Keyframe(1f, 1f)), 0, true, in bounds);
        colorCurve.master.Override(blueCurve);

        //colorCurve.



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
