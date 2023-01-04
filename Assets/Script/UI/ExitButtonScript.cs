using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ExitButtonScript : MonoBehaviour
{

    [SerializeField] Button exitButton = null;
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
        Application.Quit();
    }

}
