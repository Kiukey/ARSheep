using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using System;
using UnityEngine.Networking;
using UnityAndroidOpenUrl;

public class DownloadItem : MonoBehaviour
{
    [SerializeField] Button button;
    [SerializeField] string fileName;

    // Start is called before the first frame update
    void Start()
    {
        button.onClick.AddListener(() =>
        {
            OpenPicture();
        });


    }

    void OpenPicture()
    {
        string _url = Path.Combine(Application.streamingAssetsPath, fileName.Trim());
        // UnityEngine.Networking.UnityWebRequest test = UnityEngine.Networking.UnityWebRequest.Get(_url);
        // test.SendWebRequest();
        //Application.OpenURL(_url);
        StartCoroutine(LoadPicture(_url));
        Debug.Log(_url);
    }

    IEnumerator LoadPicture(string _url)
    {
        Debug.Log(_url);
        UnityWebRequest _get = UnityWebRequest.Get(_url);
        yield return _get.SendWebRequest();
        File.WriteAllBytes(Path.Combine(Application.persistentDataPath, Path.GetFileName(_url)) , _get.downloadHandler.data);
        AndroidContentOpenerWrapper.OpenContent(Path.Combine(Application.persistentDataPath, Path.GetFileName(_url)));
    }

}

