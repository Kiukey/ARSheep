using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.SceneManagement;

public class UIBoard : SingletonTemplate<UIBoard>
{
    [SerializeField] PlayableDirector openDoor;
    [SerializeField] PlayableDirector closeDoor;
    [SerializeField] AudioSource sheepClose;


    protected override void Awake()
    {
        base.Awake();
        DontDestroyOnLoad(this);
    }


    public void StartClosedDoor()
    {
        closeDoor.Play();
    }

    public void StartOpenDoor()
    {
        openDoor.Play();
    }

    public void LoadScene(string _scene)
    {
        StartCoroutine(StartLoading(_scene));
    }


    IEnumerator StartLoading(string _scene)
    {
        StartClosedDoor();
        yield return new WaitForSeconds(1.4f);
        sheepClose.Play();
        SceneManager.LoadScene(_scene);
        yield return new WaitForEndOfFrame();
        StartOpenDoor();
    }
}
