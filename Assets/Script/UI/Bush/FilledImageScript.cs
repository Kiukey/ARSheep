using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FilledImageScript : MonoBehaviour
{

    [SerializeField] Image filledImage;
    bool isTimerActive = false;
    float timerMax = 0;
    float timer = 0;
    // Start is called before the first frame update
    void Start()
    {
        filledImage.fillAmount = 0;
    }

    void Update()
    {
        if (!isTimerActive)
            return;
        timer += Time.deltaTime;
        filledImage.fillAmount = (float)timer/timerMax;
        if(timer > timerMax)
        {
            isTimerActive = false;
            timer = 0;
            filledImage.fillAmount = 0;
            filledImage.enabled = false;
        }
    }

    public void StartTimer(float _timerMax)
    {
        filledImage.enabled = true;
        timer = 0;
        timerMax = _timerMax;
        isTimerActive = true;
    }

}
