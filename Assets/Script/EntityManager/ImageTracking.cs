using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ImageTracking : SingletonTemplate<ImageTracking>
{
    public event Action<float, Transform, Transform> OnCheckDistance = null;
    public event Action<Transform, Transform> OnEndImageUpdate = null;

    [SerializeField] ARTrackedImageManager imageManager = null;
    [SerializeField] XRReferenceImageLibrary imageLibrary = null;
    [SerializeField] LineRenderer lineRenderer = null;
    
    //prefabs
    [SerializeField] List<GameObject> objects = new List<GameObject>();
    //sheep
    [SerializeField] SheepImageBehaviour sheep = null;
    //bush
    [SerializeField] BushImageBehaviour bush = null;

    public SheepImageBehaviour Sheep => sheep;
    public BushImageBehaviour Bush => bush;

    private void Start()
    {
        StartCoroutine(SpawnEntities());
    }
    void OnDestroy()
    {
        if (!imageManager)
            return;
        imageManager.trackedImagesChanged -= UpdateImages;
        Destroy(imageManager);
    }
    void UpdateImages(ARTrackedImagesChangedEventArgs obj)
    {
        #region test
        /*        foreach (ARTrackedImage image in obj.added)
                {
                    for (int i = 0; i < imageLibrary.count; i++)
                    {
                        if (image.referenceImage.name == imageLibrary[i].name)
                        {
                            Debug.Log($"Apparition object {i}");
                            spawnedObject = Instantiate(objects[i], image.transform.position, image.transform.rotation);
                            spawnedObject.transform.position = image.transform.position;
                            Debug.Log("position" + spawnedObject.transform.position);
                        }
                    }
                }*/
        /*        foreach (ARTrackedImage image in obj.added)
                {
                    image.destroyOnRemoval = true;
                }*/
        #endregion
        foreach (ARTrackedImage image in obj.updated)
        {
            for (int i = 0; i < imageLibrary.count; i++)
            {
                if (image.referenceImage.name.Equals(imageLibrary[i].name) && image.trackingState == TrackingState.Tracking)
                {
                    if (i == 0)
                    {
                        bush.gameObject.SetActive(true);
                        bush.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
                    }
                    else if (i == 1)
                    {
                        sheep.gameObject.SetActive(true);
                        sheep.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
                        sheep.ResetTarget();
                    }
                }
            }
            #region commentaire
            /*if (image.referenceImage.name.Equals(imageLibrary[i].name))
             {
                 if (i == 1 && !bush.IsTargettedBySheep)
                 {
                     SheepImageBehaviour _sheep = SheepImageManager.Instance.CheckDistance(bush.transform);
                     if (!_sheep)
                         return;
                     _sheep.SetTarget(bush,image.transform.position);
                 }
             }*/
            #endregion
            if (bush)
                CheckDistance(image);
        }

        OnEndImageUpdate?.Invoke(sheep.transform, bush.transform);
    }
    void CheckDistance(ARTrackedImage _image)
    {
        //Debug.Log("check");
        if (_image.referenceImage.name.Equals(imageLibrary[1].name))
        {
            if (!bush.IsTargettedBySheep)
            {
                if (!sheep || !bush)
                    return;

                float distance = Vector3.Distance(sheep.transform.position, bush.transform.position);
                bool isAtDistance = distance < 0.5f;
                OnCheckDistance?.Invoke(distance, bush.transform, sheep.transform);
                if (!isAtDistance)
                    return;
                sheep.SetTarget(bush, _image.transform.position);
            }
        }
    }
    public void Initialize(ARTrackedImageManager _newImageTracker)
    {
        imageManager = _newImageTracker;
        imageManager.trackedImagesChanged += UpdateImages;
    }
    IEnumerator SpawnEntities()
    {
        yield return new WaitForSeconds(1);
        bush = Instantiate(objects[0]).GetComponent<BushImageBehaviour>();
        sheep = Instantiate(objects[1]).GetComponent<SheepImageBehaviour>();
    }
/*    private void OnGUI()
    {
        GUILayout.Box($"Sheep {(sheep == null ? "null" : "valid")}");
        GUILayout.Box($"Bush {(bush == null ? "null" : "valid")}");
    }*/
}








