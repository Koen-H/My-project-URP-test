using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class poupScreen : MonoBehaviour
{
    [SerializeField]
    SpriteRenderer popUpSprite; 

    [SerializeField]
    List<PopUpSettings> popUps = new List<PopUpSettings>();

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
        popUpScreen = this.gameObject;
        popUpScreen.SetActive(false);
        if (popUps.Count > 0)
        {
            nextTime = popUps[0].timeSeconds;
            nextSprite = popUps[0].sprite;
            nextDuration = popUps[0].durationSeconds;
        }
    }


    // Update is called once per frame
    private void FixedUpdate()
    {
        if (!gameStarted) return;
        time += Time.fixedDeltaTime; 
        if(time > nextTime && !popUpActive)
        {
            popUpActive = true;
            index++;
            StartCoroutine(ActivatePopUp(nextSprite, nextDuration));
        }
    }

    public IEnumerator ActivatePopUp(Sprite image, float duration)
    {
        Debug.Log("Bruh " + image.name);

        popUpScreen.SetActive(true);
        popUpSprite.sprite = nextSprite; 

        yield return new WaitForSeconds(duration);
        
        popUpScreen.SetActive(false);
        popUpActive = false;

        if (popUps.Count < index + 1)
        {
            nextTime = popUps[index].timeSeconds;
            nextSprite = popUps[index].sprite;
            nextDuration = popUps[index].durationSeconds;
        }
        else popUpActive = true;
    }
}
