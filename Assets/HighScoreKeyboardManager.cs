using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class HighScoreKeyboardManager : MonoBehaviour
{
    public string input = "";
    HighScoresManager highscoreManager;
    GameManager gameManager;
    string displayString;

    [SerializeField]TextMeshProUGUI displayText;

    public void Awake()
    {
        highscoreManager = gameObject.AddComponent<HighScoresManager>();
    }
    public void Start()
    {
        gameManager = GameManager.Instance;
    }

    public void SaveHighScore()
    {
        if (input.Length > 0)
        {
            highscoreManager.SaveHighscore(input, gameManager.totalScore);
        }

    }

    public void AddInput(string _input)
    {
        input += _input.ToLower();
        input = UppercaseFirst(input);



        UpdateDisplay();
    }

    public void Backspace()
    {
        if(input.Length > 0)
        {
            input = input.Remove(input.Length - 1);
            UpdateDisplay();
        }

    }

    public void UpdateDisplay()
    {
        if(input.Length > 0) displayString = $"<color=#FBB040>{input}</color> donated <color=#FBB040>${gameManager.totalScore}</color>";
        else displayString = $"<color=#FBB040>Donator</color> donated <color=#FBB040>${gameManager.totalScore}</color>";
        displayText.text = displayString;
    }

    static string UppercaseFirst(string s)
    {
        // Check for empty string.
        if (string.IsNullOrEmpty(s))
        {
            return string.Empty;
        }
        // Return char and concat substring.
        return char.ToUpper(s[0]) + s.Substring(1);
    }
}
