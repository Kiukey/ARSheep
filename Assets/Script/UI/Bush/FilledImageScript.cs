using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FilledImageScript : MonoBehaviour
{

    [SerializeField] Image filledImage;
    // Start is called before the first frame update
    void Start()
    {
        filledImage.fillAmount = 0;
        filledImage.enabled = false;
    }
    public void EndGrowing()
    {
        filledImage.fillAmount = 0;
        filledImage.enabled = false;
    }

    public void StartGrowing()
    {
        filledImage.enabled = true;
        filledImage.fillAmount = 0;
    }

    public void UpdateFilled(float _percent)
    {
        filledImage.fillAmount = _percent;
        if(filledImage.fillAmount >= 1)
            EndGrowing();
    }

}