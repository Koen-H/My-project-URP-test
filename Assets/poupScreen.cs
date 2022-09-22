using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class poupScreen : MonoBehaviour
{
    [SerializeField]
    SpriteRenderer popUpSprite; 

    [SerializeField]
    List<PopUpSettings> popUps = new List<PopUpSettings>();

    [SerializeField]
    GameObject popUpScreen;

    int index; 
    Sprite nextSprite;
    float nextTime;
    float nextDuration;

    bool popUpActive = false; 
    float time;

    public bool gameStarted;


    // Start is called before the first frame update
    void Start()
    {
        popUpScreen.SetActive(false);
        if (popUps.Count > 0)
        {
            nextTime = popUps[0].timeSeconds;
            nextSprite = popUps[0].sprite;
            nextDuration = popUps[0].durationSeconds;
        }
    }


    public void StartPopup()
    {

        StartCoroutine(Popup(nextTime));
    }


    // Update is called once per frame


    public IEnumerator Popup(float _nextTime)
    {
        yield return new WaitForSeconds(_nextTime);
        bool lastPopup = false;
        index++;
        if(index == popUps.Count) lastPopup = true;
        StartCoroutine(ActivatePopUp(nextDuration, lastPopup, nextSprite));

        if (index < popUps.Count)
        {
            nextTime = popUps[index].timeSeconds;
            nextSprite = popUps[index].sprite;
            nextDuration = popUps[index].durationSeconds;
            StartCoroutine(Popup(index > 0 ? nextTime - popUps[index - 1].timeSeconds : nextTime));
        }

    }

    public IEnumerator ActivatePopUp(float duration, bool _lastPopup, Sprite _nextSprite)
    {
        popUpScreen.SetActive(true);
        popUpSprite.sprite = _nextSprite; 

        yield return new WaitForSeconds(duration);
        
        if(_lastPopup) GameManager.Instance.StartGame();

        popUpScreen.SetActive(false);
        popUpActive = false;


    }
}
