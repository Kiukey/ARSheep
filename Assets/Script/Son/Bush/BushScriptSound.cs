using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BushScriptSound : MonoBehaviour
{

    [SerializeField] AudioSource targetBush;
    [SerializeField] BushImageBehaviour bush;
    [SerializeField] List<AudioClip> growList = new List<AudioClip> ();

    void Start()
    {
        bush.OnStartGrowingBush += PlayGrowSound;
    }


    void PlayGrowSound()
    {
        targetBush.clip = growList[Random.Range(0,growList.Count)];
        targetBush.Play();
    }
}
