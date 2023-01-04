using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class OpenScene : MonoBehaviour
{
    [SerializeField] Button button = null;
    [SerializeField] string sceneName = "";

    // Start is called before the first frame update
    void Start()
    {
        button.onClick.AddListener(() =>
        {
            OnButtonClick();
        });
    }


    void OnButtonClick()
    {
       SceneManager.LoadScene(sceneName);
    }
}
