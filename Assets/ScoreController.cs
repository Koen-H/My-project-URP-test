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
    GameManager gameManager;


    private void Start()
    {
        gameManager = GameManager.Instance;
    }


    public void UpdateScreen()
    {
        objectiveValueText.text = $"{gameManager.objective}lbs";
        comboValueText.text = $"{gameManager.combos * gameManager.perComboValue}$";
        extraFromLevelValueText.text = $"{gameManager.score - gameManager.objective}$";
        totalValueText.text = $"{gameManager.objective + (gameManager.combos * gameManager.perComboValue) + (gameManager.score - gameManager.objective)}$";
    }

}
