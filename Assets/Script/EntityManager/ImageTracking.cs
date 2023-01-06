using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ImageTracking : SingletonTemplate<ImageTracking>
{
    public event Action<float, Transform, Transform> OnCheckDistance = null;

    [SerializeField] ARTrackedImageManager imageManager = null;
    [SerializeField] XRReferenceImageLibrary imageLibrary = null;
    [SerializeField] LineRenderer lineRenderer = null;
    //prefabs
    [SerializeField] List<GameObject> objects = new List<GameObject>();
    [SerializeField] GameObject sheep;

    //bush
    [SerializeField] BushImageBehaviour bush = null;
    bool setBush = false;

    void Start()
    {
        imageManager.trackedImagesChanged += UpdateImages;

    }
    void OnDestroy()
    {
        imageManager.trackedImagesChanged -= UpdateImages;
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
        #endregion
        /* foreach (ARTrackedImage image in obj.added)
         {
             Debug.Log("ADD");
             for (int i = 0; i < imageLibrary.count; i++)
             {
                 Debug.Log("it " + i);
                 if (image.referenceImage.name.Equals(imageLibrary[i].name))
                 {
                     GameObject _object = Instantiate(objects[i], image.transform);
                     Debug.Log("Spawn/Move Object");
                     if (i == 0)
                         bush = _object.GetComponent<BushImageBehaviour>();
                 }
             }
         }*/
        foreach (ARTrackedImage image in obj.updated)
        {
            //   Debug.Log("Updated :" + image.referenceImage.name);
            for (int i = 0; i < imageLibrary.count; i++)
            {

                if (image.referenceImage.name.Equals(imageLibrary[i].name))
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
                    }
                    /*if (!bush)
                    {
                        GameObject _object = Instantiate(objects[i], image.transform);
                        if (i == 0)
                            bush = _object.GetComponent<BushImageBehaviour>();
                    }*/
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

        foreach (ARTrackedImage image in obj.removed)
        {
            if (image.referenceImage.name.Equals(imageLibrary[0].name))
            {
                // Destroy(bush);
            }
            else if (image.referenceImage.name.Equals(imageLibrary[1].name))
            {
                //  Destroy(SheepImageManager.Instance.GetFirstSheep());
            }
        }
    }
    void CheckDistance(ARTrackedImage _image)
    {
        Debug.Log("check");
        if (_image.referenceImage.name.Equals(imageLibrary[1].name))
        {
            if (!bush.IsTargettedBySheep)
            {
                SheepImageBehaviour _sheep = SheepImageManager.Instance.GetFirstSheep();
                if (!_sheep || !bush)
                    return;

                float distance = Vector3.Distance(_sheep.transform.position, bush.transform.position);
                bool isAtDistance = distance < 0.5f;
                OnCheckDistance?.Invoke(distance, bush.transform, _sheep.transform);
                if (!isAtDistance)
                    return;
                _sheep.SetTarget(bush, _image.transform.position);
            }
        }
    }
    private void OnGUI()
    {
        GUILayout.Box($"Sheep {(SheepImageManager.Instance.GetFirstSheep() == null ? "null" : "valid")}");
        GUILayout.Box($"Bush {(bush == null ? "null" : "valid")}");
    }
}








