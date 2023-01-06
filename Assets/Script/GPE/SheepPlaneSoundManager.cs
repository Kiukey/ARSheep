using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(SheepPlaneBehaviour))]
[RequireComponent(typeof(AudioSource))]
public class SheepPlaneSoundManager : MonoBehaviour
{
    #region Fields
    [SerializeField] AudioSource audioSource;
    [SerializeField] SheepPlaneBehaviour sheep;
    [SerializeField] List<AudioClip> audioListSheep = new List<AudioClip>();
    [SerializeField] AudioClip audioSheepEat;
    //[SerializeField] float time
    bool isEating = false;
    #endregion
    #region Init
    private void Start()
    {
        Init();
    }
    void Init()
    {
        Time.fixedDeltaTime = 6;
        sheep.OnStartEating += PlaySheepEatSound;
        sheep.OnEndEating += StopSheepEatSound;
    }
    #endregion
    #region Eat Sound
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
    #endregion
    #region Sheep Sound
    void FixedUpdate()
    {
        int _rand = Random.Range(0, 10);
        if (_rand < 8)
        {
            PlayRandomSheepSound();
        }
    }
    void PlayRandomSheepSound()
    {
        isEating = false;
        audioSource.clip = audioListSheep[Random.Range(0, audioListSheep.Count)];
        audioSource.Play();
    }
    #endregion
}
