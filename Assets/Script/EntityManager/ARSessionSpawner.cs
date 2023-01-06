using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class ARSessionSpawner : MonoBehaviour
{
    [SerializeField] ARTrackedImageManager arSession = null;

    private void Start()
    {
        SpawnArSession();
    }
    void SpawnArSession()
    {
        if (!arSession)
            return;

        ARTrackedImageManager _manager = Instantiate(arSession);
        ImageTracking.Instance.Initialize(_manager);
    }
    
}
