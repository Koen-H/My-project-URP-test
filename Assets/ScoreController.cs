using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ScoreController : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI objectiveText;
    [SerializeField] TextMeshProUGUI comboText;
    [SerializeField] TextMeshProUGUI extraFromLevelText;
    [SerializeField] TextMeshProUGUI totalText;

    [SerializeField] TextMeshProUGUI objectiveValueText;
    [SerializeField] TextMeshProUGUI comboValueText;
    [SerializeField] TextMeshProUGUI extraFromLevelValueText;
    [SerializeField] TextMeshProUGUI totalValueText;
    [SerializeField] GameManager gameManager;


    private void Start()
    {
        gameManager = GameManager.Instance;
    }


    public void UpdateScreen()
    {
        gameManager = GameManager.Instance;
        float objective = gameManager.objective;
        Debug.Log("Objective"+ objective);
        objectiveValueText.text = $"{objective}lbs";
        comboValueText.text = $"{gameManager.combos * gameManager.perComboValue}$";
        extraFromLevelValueText.text = $"{gameManager.score - objective}$";
        totalValueText.text = $"{objective + (gameManager.combos * gameManager.perComboValue) + (gameManager.score - objective)}$";
    }

}
