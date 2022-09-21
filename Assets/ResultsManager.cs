using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.XR.CoreUtils;
using UnityEngine;

public class ResultsManager : MonoBehaviour
{
    [SerializeField] GameObject objectiveOne;
    [SerializeField] GameObject objectiveTwo;
    [SerializeField] GameObject objectiveThree;
    [SerializeField] GameObject objectiveFour;
    [SerializeField] GameObject objectiveFive;

    GameManager gameManager;

    public void Start()
    {
        gameManager = GameManager.Instance;
    }

    public void LoadValues()
    {
        gameManager = GameManager.Instance;//Beause it doesn't set it in start?!?
        objectiveOne.GetNamedChild("FIRSTLINE").GetComponent<TextMeshPro>().text = $"<color=#FBB040> $Donator </color>donated <color=#FBB040>${gameManager.score}</color>";
        objectiveOne.GetNamedChild("SECONDLINE").GetComponent<TextMeshPro>().text = $"$DonationMessage";
        objectiveOne.GetNamedChild("THIRDLINE").GetComponent<TextMeshPro>().text = $"ClEARED: Cleaned up < color =#FBB040>{gameManager.objective} + {gameManager.score - gameManager.objective}lbs</color>";

        objectiveTwo.GetNamedChild("FIRSTLINE").GetComponent<TextMeshPro>().text = $"<color=#FBB040> $Donator </color>donated <color=#FBB040>${gameManager.combosScore}</color>";
        objectiveTwo.GetNamedChild("SECONDLINE").GetComponent<TextMeshPro>().text = $"$DonationMessage";
        objectiveTwo.GetNamedChild("THIRDLINE").GetComponent<TextMeshPro>().text = $"ClEARED: Quick and correct recycling < color =#FBB040>{gameManager.combos}</color>";

        objectiveThree.GetNamedChild("FIRSTLINE").GetComponent<TextMeshPro>().text = $"<color=#FBB040> $Donator </color>donated <color=#FBB040>${gameManager.turtleBonus}</color>";
        objectiveThree.GetNamedChild("SECONDLINE").GetComponent<TextMeshPro>().text = $"$DonationMessage";
        objectiveThree.GetNamedChild("THIRDLINE").GetComponent<TextMeshPro>().text = $"ClEARED: Kept the turtle alive!";

        objectiveFour.GetNamedChild("FIRSTLINE").GetComponent<TextMeshPro>().text = $"Total: <color=#FBB040>${gameManager.score}</color>";
        //objectiveFour.GetNamedChild("SECONDLINE").GetComponent<TextMeshPro>().text = $"$DonationMessage";
        //objectiveFour.GetNamedChild("THIRDLINE").GetComponent<TextMeshPro>().text = $"ClEARED: Cleaned up < color =#FBB040>{gameManager.objective} + {gameManager.score - gameManager.objective}lbs</color>";

    }
}
