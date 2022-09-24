using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using Newtonsoft.Json.Schema;
using Unity.XR.CoreUtils;
using TMPro;
using System.Linq;

public class HighScoresManager : MonoBehaviour
{
    List<HighScoreItem> highScoreItems;
    JsonSerializerSettings serializerSettings;
    [SerializeField] List<GameObject> scoreDisplayItems;

    private void Start()
    {
        serializerSettings = new JsonSerializerSettings();
        serializerSettings.TypeNameHandling = TypeNameHandling.All;
        serializerSettings.Formatting = Formatting.Indented;

        highScoreItems = GetHighScores();
        UpdateHighscores();
    }
    
    /// <summary>
    /// Saves the highscore
    /// </summary>
    /// <param name="_name">The player's name</param>
    /// <param name="_score">The highscore to save with the name</param>
    public void SaveHighscore(string _name, float _score)
    {
        HighScoreItem newHighScoreItem = new HighScoreItem(_name,_score);
        highScoreItems.Add(newHighScoreItem);
        UpdateHighscores();
    }

    /// <summary>
    /// Sorts the highscores list.
    /// </summary>
    private void SortHighScores()
    {
        List<HighScoreItem> correctList = highScoreItems.OrderByDescending(o => o.score).ToList();
        highScoreItems = correctList;
    }

    /// <summary>
    /// Get the current highscore from playerprefs
    /// </summary>
    /// <returns>Returns a list with the current saved HighScoreItems</returns>
    List<HighScoreItem> GetHighScores()
    {
        List<HighScoreItem> newHighScoreList = new List<HighScoreItem>();


        if (!PlayerPrefs.HasKey("Highscores"))
        {
            Debug.Log("No scores found, creating new ones...");
            //If it's the firs time, add some high scores for people to beat.
            newHighScoreList.Add(new HighScoreItem("Koen", 91.3f));//Yes, this is my real score!
            newHighScoreList.Add(new HighScoreItem("Bob", 58.9f));
            newHighScoreList.Add(new HighScoreItem("Patrick", 32.6f));
            newHighScoreList.Add(new HighScoreItem("Q Tentacles", 12.5f));
            return newHighScoreList;

        }
       
        string highScoreString = PlayerPrefs.GetString("Highscores");
        newHighScoreList = JsonConvert.DeserializeObject<List<HighScoreItem>>(highScoreString, serializerSettings);
        return newHighScoreList;
    }

    /// <summary>
    /// Update the highscores in playerPrefs
    /// </summary>
    public void UpdateHighscores()
    {
        SortHighScores();
        string highScoreString = JsonConvert.SerializeObject(highScoreItems,serializerSettings);
        PlayerPrefs.SetString("Highscores",highScoreString);
    }

    /// <summary>
    /// Updates the highscore items in-game with the correct text
    /// </summary>
    public void DisplayHighScoresItems()
    {
        highScoreItems = GetHighScores();
        int i = 0;
        foreach(GameObject scoreDisplayItem in scoreDisplayItems)
        {
            HighScoreItem highScoreItem = highScoreItems[i];
            scoreDisplayItem.GetNamedChild("InnerBG").GetNamedChild("FIRSTLINE").GetComponent<TextMeshProUGUI>().text = highScoreItem.displayString;
            i++;
        }
    }


}

/// <summary>
/// A simple HighscoreItem which contains a score and name.
/// </summary>
public class HighScoreItem
{
    public float score;
    public string name;

    public string displayString;

    public HighScoreItem(string _name, float _score)
    {
        name = _name;
        score = _score;
        displayString = $"<color=#FBB040> {name}</color> donated <color=#FBB040>${score}</color>";
    }
}