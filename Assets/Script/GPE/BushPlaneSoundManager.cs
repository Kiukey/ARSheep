using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Bush))]
[RequireComponent(typeof(AudioSource))]
public class BushPlaneSoundManager : MonoBehaviour
{
    [SerializeField] AudioSource audioSource;
    [SerializeField] Bush bush;
    [SerializeField] List<AudioClip> audioList = new List<AudioClip> ();

    private void Start()
    {
        bush.OnGrowing += PlayGrowSound;
    }
    void PlayGrowSound()
    {
        audioSource.clip = audioList[Random.Range(0, audioList.Count)];
        audioSource.Play();
    }
}
