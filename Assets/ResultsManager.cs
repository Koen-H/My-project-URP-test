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

    private void Start()
    {
        gameManager = GameManager.Instance;
    }

    public void LoadValues()
    {
        objectiveOne.GetNamedChild("FIRSTLINE").GetComponent<TextMeshPro>().text = $"<color=#FBB040> $Donator </color>donated <color=#FBB040>${gameManager.score}</color>";
        objectiveOne.GetNamedChild("SECONDLINE").GetComponent<TextMeshPro>().text = $"";
        objectiveOne.GetNamedChild("THIRDLINE").GetComponent<TextMeshPro>().text = $"ClEARED: Cleaned up < color =#FBB040>{gameManager.objective} + {gameManager.score - gameManager.objective}lbs</color>";

    }
}
