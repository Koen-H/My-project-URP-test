using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using Newtonsoft.Json.Schema;
using Unity.XR.CoreUtils;
using TMPro;

public class HighScoresManager : MonoBehaviour
{
    List<HighScoreItem> highScoreItems;
    JsonSerializerSettings serializerSettings;
    List<GameObject> scoreDisplayItems;

    private void Start()
    {
        serializerSettings = new JsonSerializerSettings();
        serializerSettings.TypeNameHandling = TypeNameHandling.All;
        serializerSettings.Formatting = Formatting.Indented;

        highScoreItems = GetHighScores();
    }
    List<HighScoreItem> GetHighScores()
    {
        if (!PlayerPrefs.HasKey("Highscores"))
        {
            return new List<HighScoreItem>();
        }
       
        string highScoreString = PlayerPrefs.GetString("Highscores");

        return JsonConvert.DeserializeObject<List<HighScoreItem>>(highScoreString,serializerSettings);
    }

    public void UpdateHighscores()
    {
        string highScoreString = JsonConvert.SerializeObject(highScoreItems,serializerSettings);
        PlayerPrefs.SetString("Highscores",highScoreString);
    }

    public void DisplayHighScoresItems()
    {
        int i = 0;
        foreach(GameObject scoreDisplayItem in scoreDisplayItems)
        {
            HighScoreItem highScoreItem = highScoreItems[0];
            scoreDisplayItem.GetNamedChild("NAME").GetComponent<TextMeshPro>().text = highScoreItem.name;
            scoreDisplayItem.GetNamedChild("SCORE").GetComponent<TextMeshPro>().text = $"{highScoreItem.score}";
            i++;
        }
    }


}

public class HighScoreItem
{
    public int score;
    public string name;

}