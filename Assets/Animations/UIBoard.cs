using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.SceneManagement;

public class UIBoard : SingletonTemplate<UIBoard>
{
    [SerializeField] PlayableDirector openDoor;
    [SerializeField] PlayableDirector closeDoor;

    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        
    }

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
        yield return new WaitForSeconds(2);
        SceneManager.LoadScene(_scene);
        yield return new WaitForSeconds(1);
        StartOpenDoor();
    }
}
