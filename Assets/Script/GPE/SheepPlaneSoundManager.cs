using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(SheepPlaneBehaviour))]
[RequireComponent(typeof(AudioSource))]
public class SheepPlaneSoundManager : MonoBehaviour
{
    [SerializeField] AudioSource audioSource;
    [SerializeField] SheepPlaneBehaviour sheep;
    [SerializeField] List<AudioClip> audioListSheep = new List<AudioClip>();
    [SerializeField] AudioClip audioSheepEat ;
    bool isEating = false;
    private void Start()
    {
        sheep.OnStartEating += PlaySheepEatSound;
        sheep.OnEndEating += StopSheepEatSound;
    }
    void PlaySheepEatSound(Bush _bush)
    {
        isEating = true;
        audioSource.clip = audioSheepEat;
        audioSource.Play();
    }
    void StopSheepEatSound()
    {
        if (!isEating)
            return;
        audioSource.Pause();
        isEating = false;
    }
    void PlaySheepSound()
    {
        audioSource.clip = audioListSheep[Random.Range(0, audioListSheep.Count)];
        audioSource.Play();
    }
}
