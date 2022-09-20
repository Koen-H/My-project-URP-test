using System.Collections;
using System.Collections.Generic;
using System.Threading;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class HelmetController : MonoBehaviour
{
    public Vector3 defaultPosition;

    public GameManager gameManager;
    private static HelmetController _instance;
    public TextMeshProUGUI timerText;
    public Slider slider;
    public float objective;
    private float currentTrashpoints = 0;
    public Camera UICamera;
    public Vector3 customCameraPosition;

    [SerializeField] ScoreController scoreController;

    public TextMeshProUGUI objText;

    public float timer;

    public static HelmetController Instance
    {
        get
        {
            if (_instance == null) Debug.LogError("There is no HelmetController");
            return _instance;
        }
    }

    private void Awake()
    {
        _instance = this;
        
    }


    void Start()
    {
        gameManager = GameManager.Instance;
        defaultPosition = UICamera.transform.localPosition;
    }

    public void SetUpHelmet()
    {
        objective = gameManager.objective;
        slider.maxValue = objective;
        slider.value = 0;
        objText.text = $"{currentTrashpoints} / {objective} lbs";
        StartCoroutine(StartGameTimer(gameManager.timerInSeconds));
        scoreController.gameObject.SetActive(false);
    }

    public void UpdateScoreBar(float _currentTrashpoints)
    {
        currentTrashpoints = _currentTrashpoints;
        slider.value = currentTrashpoints;
        objText.text = $"{currentTrashpoints} / {objective} lbs";
    }
    
    public void LoadEndOfGame()
    {
        scoreController.gameObject.SetActive(true);
        scoreController.UpdateScreen();
       

    }

    


    IEnumerator StartGameTimer(float _timer)
    {
        timer = _timer;
        while (timer > 0)
        {
            timer--;
            int minutes = (int)timer / 60;
            int second = (int)timer % 60;
            timerText.text = $"{minutes}:{second}";//TODO: Format to MM:SS
            yield return new WaitForSeconds(1f);
        }
        Debug.Log("The Game Timer has finished");
        timerText.text = $"Game Ended";

        gameManager.EndGame();
    }


}
