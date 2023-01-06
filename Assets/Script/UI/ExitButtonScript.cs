using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ExitButtonScript : MonoBehaviour
{

    [SerializeField] Button exitButton = null;
    [SerializeField] AudioSource exitAudioButton = null;
    // Start is called before the first frame update
    void Start()
    {
        exitButton.onClick.AddListener(() =>
        {
            ExitGame();
        });
    }


    public void ExitGame()
    {
        exitAudioButton.Play();
        Application.Quit();
    }

}
