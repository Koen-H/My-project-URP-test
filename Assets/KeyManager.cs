using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class KeyManager : MonoBehaviour
{

    HighScoreKeyboardManager keyboardManager;
    string keyVal;
    // Start is called before the first frame update
    void Start()
    {
        keyboardManager = this.GetComponentInParent<HighScoreKeyboardManager>();
        keyVal = GetComponentInChildren<TextMeshProUGUI>().text;
    }

    public void AddValue()
    {
        keyboardManager.AddInput(keyVal);
    }
    public void Backspace()
    {
        keyboardManager.Backspace();
    }
}
