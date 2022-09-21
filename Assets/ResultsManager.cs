using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.XR.CoreUtils;
using UnityEngine;

public class ResultsManager : MonoBehaviour
{


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










    GameManager gameManager;

    public void Start()
    {
        gameManager = GameManager.Instance;

    }

    public void LoadValues()
    {

        gameManager = GameManager.Instance;//Beause it doesn't set it in start?!?
        gameManager.totalScore = gameManager.score + gameManager.turtleBonus + gameManager.combosScore;
        obj1Line1.text = $"<color=#FBB040> $Donator </color>donated <color=#FBB040>${gameManager.score}</color>";
        obj1Line2.text = $"$DonationMessage";
        obj1Line3.text = $"ClEARED: Cleaned up <color=#FBB040>{gameManager.objective} + {gameManager.score - gameManager.objective}lbs</color>";

        obj2Line1.text = $"<color=#FBB040> $Donator </color>donated <color=#FBB040>${gameManager.combosScore}</color>";
        obj2Line2.text = $"$DonationMessage";
        obj2Line3.text = $"ClEARED: Quick and correct recycling <color=#FBB040>{gameManager.combos}</color>";

        obj3Line1.text = $"<color=#FBB040> $Donator </color>donated <color=#FBB040>${gameManager.turtleBonus}</color>";
        obj3Line2.text = $"$DonationMessage";
        obj3Line3.text = $"ClEARED: Kept the turtle alive!";

        obj4Line1.text = $"Total: <color=#FBB040>${gameManager.totalScore}</color>";
        //objectiveFour.GetNamedChild("SECONDLINE").GetComponent<TextMeshPro>().text = $"$DonationMessage";
        //objectiveFour.GetNamedChild("THIRDLINE").GetComponent<TextMeshPro>().text = $"ClEARED: Cleaned up < color =#FBB040>{gameManager.objective} + {gameManager.score - gameManager.objective}lbs</color>";

    }
}
