using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.InputSystem;
using Newtonsoft.Json;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;
using UnityEngine.XR;
using Unity.VisualScripting;


public class GameManager : MonoBehaviour
{
    GameObject vacuumTool;
    GameObject hookTool;
    GameObject hand;
    GameObject hand2;
    bool toolsEnabled;


    public float totalScore = 0;

    private static GameManager _instance;
    public static GameManager Instance
    {
        get
        {
            if (_instance == null) Debug.LogError("There is no GameManager");
            return _instance;
        }
    }

    public GameState gameState;

    public float timerInSeconds;

    //public float streak = 0;
    public int combos;
    public float perComboValue = 0.2f;
    public float objective = 10;
    public bool onStreak = true;
    float streakTimer = 0;
    HelmetController helmetController;
    public float turtleBonus = 10;
    public float combosScore = 0;

    [SerializeField] GameObject turtlePrefab;
    [SerializeField] GameObject turtleSpawnPoint;

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
    [SerializeField] GameObject pauseMenu;
    [SerializeField] GameObject mainMenu;
    [SerializeField] GameObject scoreMenu;

    [SerializeField] AudioSource backgroundMusic;

    AudioSource streakAudioSource;
    [SerializeField] List<AudioClip> streakAudioClips;

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

    public List<GameObject> turtles;

    [SerializeField]
    Vector2 cMaster;
    [SerializeField]
    Vector2 dMaster;

    [SerializeField]
    Vector2 cBlue;
    [SerializeField]
    Vector2 dBlue;

    [SerializeField] TrashGenerator trashGenerator;

    [SerializeField]
    ParticleSystem aliveFish;

    [SerializeField]
    ParticleSystem deadFish;

    [SerializeField] float _volume = 1;

    [SerializeField]
    float aliveFishAmount;

    [SerializeField]
    float deadFishAmount;

    [SerializeField] GameObject[] trashList;
    [SerializeField]
    poupScreen popUpscreen;


    void Awake()
    {
        backgroundMusic = this.GetComponent<AudioSource>();
        _instance = this;
        Application.runInBackground = true;
    }

    private void Start()
    {
        turtles = new List<GameObject>();
        isPaused = false;
        cleannessLevel = maxCleanness;
        helmetController = HelmetController.Instance;
        vacuumTool = GameObject.Find("FinalSuckingMachine");
        hookTool = GameObject.Find("Grapplinghook");
        hand = GameObject.Find("hand1");
        hand2 = GameObject.Find("hand2");
        ToggleTools(false);
        CalculateBarMult();
        GetOvverrides();

        streakAudioSource = gameObject.AddComponent<AudioSource>();
    }

    private void Update()
    {
        AudioListener.volume = _volume;
        if (menuButton.action.WasPressedThisFrame() && (gameState == GameState.Playing|| gameState == GameState.Paused))
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

    void SpawnTurtle()
    {
        GameObject turtle = Instantiate(turtlePrefab, turtleSpawnPoint.transform.position, turtleSpawnPoint.transform.rotation);
        turtle.SetActive(true);
        turtles.Add(turtle);
    }


    void CleannessEffect()
    {
        float t = cleannessLevel * cleannessBarMult;
        RenderSettings.fogDensity = Mathf.Lerp(dirtyDensity, cleanDensity, t);
        RenderSettings.fogColor = Color.Lerp(dirtyWater, cleanWater, t);
        Vector2 masterVector = Vector2.Lerp(dMaster, cMaster, t);
        Vector2 blueVector = Vector2.Lerp(dMaster, cMaster, t);
        Vector2 bounds = new Vector2(1, 1);
        TextureCurve masterCurve = new TextureCurve(new AnimationCurve(new Keyframe(0f, 0f), new Keyframe(masterVector.x, masterVector.y, 1f, 1f), new Keyframe(1f, 1f)), 0, true, in bounds);
        colorCurve.master.Override(masterCurve);

        TextureCurve blueCurve = new TextureCurve(new AnimationCurve(new Keyframe(0f, 0f), new Keyframe(blueVector.x, blueVector.y, 1f, 1f), new Keyframe(1f, 1f)), 0, true, in bounds);
        colorCurve.master.Override(blueCurve);

        ParticleSystem.EmissionModule aliveEM = aliveFish.emission;
        aliveEM.rateOverTime = Mathf.Lerp(0, aliveFishAmount, t);

        ParticleSystem.EmissionModule deadEM = deadFish.emission;
        deadEM.rateOverTime = Mathf.Lerp(deadFishAmount, 0, t);

    }


    public void AddTrashPoints(float _trashPoints, float _streakTime = 4f)
    {
        currentTrashpoints += _trashPoints;
        if (onStreak)
        {
            combos++;
            if (combos > 2)
            {
                combosScore += combos * perComboValue;
                PlayComboSoundEffect();
            }
            if (combos >= 8) combos = 7;

        }
        else combos = 0;

        onStreak = true;
        if (0 >= streakTimer) StartCoroutine(StartStreakTimer());
        else streakTimer = _streakTime;
        helmetController.UpdateScoreBar(currentTrashpoints);
    }

    IEnumerator StartStreakTimer()
    {
        Debug.Log("Streak Timer Started" + onStreak);
        streakTimer = 1.5f;
        while (streakTimer > 0)
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
        gameState = GameState.Finished;
        score = currentTrashpoints;
        //helmetController.LoadEndOfGame();
        scoreMenu.SetActive(true);
        scoreMenu.GetComponent<ResultsManager>().LoadValues();
        //mainMenu.SetActive(true);
        ToggleTools(false);
    }

    public void StartGame()
    {
        gameState = GameState.Playing;
        cleannessLevel = maxCleanness;
        helmetController.SetUpHelmet();
        ToggleTools(true);
        trashGenerator.BakeWaveValues();
        trashList = GameObject.FindGameObjectsWithTag("Suckable");
        foreach (GameObject trashItem in trashList)
        {
            trashItem.GetComponent<Suckable>().isShrinkingForDeath = true;
        }
        //popUpscreen.gameStarted = true;
        foreach(GameObject turtle in turtles)
        {
            turtle.GetComponent<Suckable>().isShrinkingForDeath = true;
        }
        turtles.Clear();
        SpawnTurtle();
        popUpscreen.StartPopup();
    }

    public void ToggleTools(bool _toggle)
    {
        vacuumTool.SetActive(_toggle);
        hookTool.SetActive(_toggle);
        hand.SetActive(!_toggle);
        hand2.SetActive(!_toggle);
        toolsEnabled = _toggle;
    }

    public void PauseGame()
    {
        gameState = GameState.Paused;
        Debug.Log($"Game paused");
        ToggleTools(false);
        isPaused = true;
        pauseMenu.SetActive(true);
        Time.timeScale = 0;
    }
    public void UnPauseGame()
    {
        gameState = GameState.Playing;
        Debug.Log($"Game unpaused");
        ToggleTools(true);
        isPaused = false;
        pauseMenu.SetActive(false);
        Time.timeScale = 1;
    }

    private void PlayComboSoundEffect()
    {
        int listIndex = combos - 2; //Rmove 2 because the first two don't give streaks is what the designers decided

        if (listIndex >= 8) listIndex = 7;
        if (listIndex > 0) streakAudioSource.PlayOneShot(streakAudioClips[listIndex]);

    }



}

//It's own file?
public enum GameState
{
    MainMenu,
    Playing,
    Paused,
    Finished,
}