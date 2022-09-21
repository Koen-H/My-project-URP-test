using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.XR.CoreUtils;
using UnityEngine.UI;
using UnityEngine;

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
        gameManager.totalScore = gameManager.score + gameManager.turtleBonus + gameManager.combosScore;

        //If the main objective is completed
        if (gameManager.objective < gameManager.score)
        {
            obj1Line1.gameObject.GetComponentInParent<Image>().color = achievedColor;
            obj1Line1.text = $"<color=#FBB040> $Donator </color>donated <color=#FBB040>${gameManager.score}</color>";
            obj1Line2.text = $"$DonationMessage";
            obj1Line3.text = $"Cleaned up <color=#FBB040>{gameManager.objective} + {gameManager.score - gameManager.objective}lbs</color>";
        }
        else
        {
            obj1Line1.gameObject.GetComponentInParent<Image>().color = failedColor;
            //obj1Line1.text = $"<color=#FBB040> $Donator </color>donated <color=#FBB040>${gameManager.score}</color>";
            obj1Line2.text = $"Failed to get the objective in time";
            obj1Line3.text = $"Cleaned up <color=#FBB040>{gameManager.score}lbs</color>";
        }


        //If there are any combos made.
        if (gameManager.combosScore > 0)
        {
            obj2Line1.gameObject.GetComponentInParent<Image>().color = achievedColor;
            obj2Line1.text = $"<color=#FBB040> $Donator </color>donated <color=#FBB040>${gameManager.combosScore}</color>";
            obj2Line2.text = $"$DonationMessage";
            obj2Line3.text = $"Quick and correct recycling <color=#FBB040>{gameManager.combos}</color>";
        }
        else
        {
            obj2Line1.gameObject.GetComponentInParent<Image>().color = failedColor;
            obj2Line1.text = $"";
            obj2Line2.text = $"Didn't correctly sort the garbage fast enough.";
            obj2Line3.text = $"Shoot the garbage correctly in rapid succesion!";
        }

        //If the turtle is alive (For now, we decided there can only be one)
        if (!gameManager.turtles[0].GetComponent<SuckableAnimal>().isDead)
        {
            obj3Line1.text = $"<color=#FBB040> $Donator </color>donated <color=#FBB040>${gameManager.turtleBonus}</color>";
            obj3Line2.text = $"$DonationMessage";
            obj3Line3.text = $"Kept the turtle alive!";
        }
        else
        {
            obj3Line1.text = $"";
            obj3Line2.text = $"Keep the turtle alive by sucking up the garbage before it sufficates.";
            obj3Line3.text = $"The turtle died...";
        }


        obj4Line1.text = $"Total: <color=#FBB040>${gameManager.totalScore}</color>";
        //objectiveFour.GetNamedChild("SECONDLINE").GetComponent<TextMeshPro>().text = $"$DonationMessage";
        //objectiveFour.GetNamedChild("THIRDLINE").GetComponent<TextMeshPro>().text = $"ClEARED: Cleaned up < color =#FBB040>{gameManager.objective} + {gameManager.score - gameManager.objective}lbs</color>";

    }
}
