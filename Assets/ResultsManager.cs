using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.XR.CoreUtils;
using UnityEngine.UI;
using UnityEngine;
using System.Linq;

public class ResultsManager : MonoBehaviour
{
    //Please don't look at this script, go back while you still can.

    [SerializeField] TextMeshProUGUI obj1Line1;
    [SerializeField] TextMeshProUGUI obj1Line2;
    [SerializeField] TextMeshProUGUI obj1Line3;
    [SerializeField] TextMeshProUGUI obj2Line1;
    [SerializeField] TextMeshProUGUI obj2Line2;
    [SerializeField] TextMeshProUGUI obj2Line3;
    [SerializeField] TextMeshProUGUI obj3Line1;
    [SerializeField] TextMeshProUGUI obj3Line2;
    [SerializeField] TextMeshProUGUI obj3Line3;
    [SerializeField] TextMeshProUGUI obj4Line1;
    [SerializeField] TextMeshProUGUI obj4Line2;
    [SerializeField] TextMeshProUGUI obj4Line3;



    [SerializeField] Color32 achievedColor = new Color32(15, 169, 209, 221);
    [SerializeField] Color32 failedColor = new Color32(200, 200, 200, 221);


    [SerializeField] List<string> donatorNames = new List<string>();
    [SerializeField] List<string> mainGoalTexts = new List<string>();
    [SerializeField] List<string> turtleSavedTexts = new List<string>();
    [SerializeField] List<string> comboTexts = new List<string>();

    //You have seen enough already, GO BACK



    GameManager gameManager;

    public void Start()
    {
        gameManager = GameManager.Instance;

    }

    public void LoadValues()
    {
        //NOOO GO BACK!!!!
        gameManager = GameManager.Instance;//Beause it doesn't set it in start?!?
        if (!gameManager.turtles.First().GetComponent<SuckableAnimal>().isDead) gameManager.totalScore = gameManager.score + gameManager.turtleBonus + gameManager.combosScore;
        else gameManager.totalScore = gameManager.score + gameManager.combosScore;
        gameManager.totalScore = (float)System.Math.Round((float)gameManager.totalScore, 1);


        //If the main objective is completed and there's more!
        if (gameManager.objective < gameManager.score)
        {

            string donatorName = donatorNames[Random.Range(0, donatorNames.Count)];
            string textMessage = mainGoalTexts[Random.Range(0, mainGoalTexts.Count)];
            obj1Line1.gameObject.transform.parent.GetComponent<Image>().color = achievedColor;
            obj1Line1.text = $"<color=#FBB040> {donatorName} </color>donated <color=#FBB040>${gameManager.score}</color>";
            obj1Line2.text = $"{textMessage}";
            obj1Line3.text = $"Cleaned up <color=#FBB040>{gameManager.objective} + {(float)System.Math.Round((float)gameManager.score - gameManager.objective, 1)}lbs</color>";
        }
        //If the main objective is completed
        else if (gameManager.objective == gameManager.score)
        {
            string donatorName = donatorNames[Random.Range(0, donatorNames.Count)];
            string textMessage = mainGoalTexts[Random.Range(0, mainGoalTexts.Count)];
            obj1Line1.gameObject.transform.parent.GetComponent<Image>().color = achievedColor;
            obj1Line1.text = $"<color=#FBB040> {donatorName} </color>donated <color=#FBB040>${gameManager.score}</color>";
            obj1Line2.text = $"{textMessage}";
            obj1Line3.text = $"Cleaned up <color=#FBB040>{gameManager.objective} lbs</color>";
        }
        else
        {
            obj1Line1.gameObject.transform.parent.GetComponent<Image>().color = failedColor;
            obj1Line1.text = $"";
            obj1Line2.text = $"Failed to get the objective in time";
            obj1Line3.text = $"Cleaned up <color=#FBB040>{gameManager.score}lbs</color>";
        }


        //If there are any combos made.
        if (gameManager.combosScore > 0)
        {
            string donatorName = donatorNames[Random.Range(0, donatorNames.Count)];
            string textMessage = comboTexts[Random.Range(0, comboTexts.Count)];
            obj2Line1.gameObject.transform.parent.GetComponent<Image>().color = achievedColor;
            obj2Line1.text = $"<color=#FBB040> {donatorName} </color>donated <color=#FBB040>${gameManager.combosScore}</color>";
            obj2Line2.text = $"{textMessage}";
            obj2Line3.text = $"Quick and correct recycling <color=#FBB040>{gameManager.combos}</color>";
        }
        else
        {
            obj2Line1.gameObject.transform.parent.GetComponent<Image>().color = failedColor;
            obj2Line1.text = $"";
            obj2Line2.text = $"Didn't correctly sort the garbage fast enough.";
            obj2Line3.text = $"Shoot the garbage correctly in rapid succesion!";
        }

        //If the turtle is alive (For now, we decided there can only be one)
        if (!gameManager.turtles.First().GetComponent<SuckableAnimal>().isDead)
        {
            string donatorName = donatorNames[Random.Range(0, donatorNames.Count)];
            string textMessage = turtleSavedTexts[Random.Range(0, turtleSavedTexts.Count)];
            obj3Line1.gameObject.transform.parent.GetComponent<Image>().color = achievedColor;
            obj3Line1.text = $"<color=#FBB040> {donatorName} </color>donated <color=#FBB040>${gameManager.turtleBonus}</color>";
            obj3Line2.text = $"{textMessage}";
            obj3Line3.text = $"Kept the turtle alive!";
        }
        else
        {
            obj3Line1.gameObject.transform.parent.GetComponent<Image>().color = failedColor;
            obj3Line1.text = $"";
            obj3Line2.text = $"Keep the turtle alive by sucking up the garbage before it sufficates.";
            obj3Line3.text = $"The turtle died...";
        }


        obj4Line1.text = $"Your total: <color=#FBB040>${gameManager.totalScore}</color>";
        //objectiveFour.GetNamedChild("SECONDLINE").GetComponent<TextMeshPro>().text = $"$DonationMessage";
        //objectiveFour.GetNamedChild("THIRDLINE").GetComponent<TextMeshPro>().text = $"ClEARED: Cleaned up < color =#FBB040>{gameManager.objective} + {gameManager.score - gameManager.objective}lbs</color>";

    }
}
