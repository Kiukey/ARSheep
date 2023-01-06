using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class SheepSoundManager : MonoBehaviour
{


    [SerializeField] AudioSource targetAudio = null;
    [SerializeField] AudioSource targetEatAudio = null;
    [SerializeField] List<AudioClip> ambiantList = new List<AudioClip>();
    [SerializeField] List<AudioClip> eatList = new List<AudioClip>();
    [SerializeField] SheepImageBehaviour sheep = null;
/*
    [SerializeField] AudioMixer mixer = null;
    [SerializeField] AudioMixerSnapshot[] snap; */


    void Start()
    {
        Time.fixedDeltaTime = 6;
        sheep.OnSheepEat += StopSheepEat;
        sheep.OnStartSheepEat += PlaySheepEat;
/*        mixer.TransitionToSnapshots(snap, new float[] { 0, 1 }, 10);*/
    }

    private void FixedUpdate()
    {
        int _rand =  Random.Range(0, 10);
        if(_rand < 8)
        {
            PlayRandomSheepSound();
        }
    }

    void PlayRandomSheepSound()
    {
        targetAudio.clip = ambiantList[Random.Range(0,ambiantList.Count)];
        targetAudio.Play();
    }


    void PlaySheepEat(SheepImageBehaviour _sheep)
    {
        targetEatAudio.clip = eatList[Random.Range(0, eatList.Count)];
        targetEatAudio.Play();
    }

    void StopSheepEat(SheepImageBehaviour _sheep)
    {
        targetEatAudio.Pause();
    }

}
