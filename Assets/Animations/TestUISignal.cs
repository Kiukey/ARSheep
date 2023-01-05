using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
public class TestUISignal : MonoBehaviour
{

    private void Awake()
    {
        DontDestroyOnLoad(transform);
    }
    IEnumerator Start()
    {
        yield return new WaitForSeconds(3);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void TestSignal() => Debug.Log("OK");
}
