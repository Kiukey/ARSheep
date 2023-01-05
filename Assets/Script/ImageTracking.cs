using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ImageTracking : SingletonTemplate<ImageTracking>
{
    public event Action<float, BushImageBehaviour, SheepImageBehaviour,BushImageBehaviour> OnCheckDistance = null;

    [SerializeField] ARTrackedImageManager imageManager = null;
    [SerializeField] XRReferenceImageLibrary imageLibrary = null;
    [SerializeField] LineRenderer lineRenderer = null;

    //prefabs
    [SerializeField] List<GameObject> objects = new List<GameObject>();

    //bush
    BushImageBehaviour bush = null;
    bool setBush = false;

    void OnEnable()
    {
        imageManager.trackedImagesChanged += UpdateImages;
    }
    private void OnDisable()
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
        foreach (ARTrackedImage image in obj.added)
        {
            for (int i = 0; i < imageLibrary.count; i++)
            {
                if (image.referenceImage.name.Equals(imageLibrary[i].name))
                {
                    GameObject _object = Instantiate(objects[i], image.transform);
                    Debug.Log("Spawn/Move Object");
                    if (i == 0)
                        bush = _object.GetComponent<BushImageBehaviour>();
                }
            }
        }
        foreach (ARTrackedImage image in obj.updated)
        {
            Debug.Log("Updated :" + image.referenceImage.name);
            for (int i = 0; i < imageLibrary.count; i++)
            {
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
        }
    }
    void CheckDistance(ARTrackedImage _image)
    {
        if (_image.referenceImage.name.Equals(imageLibrary[1].name))
        {
            if (!bush.IsTargettedBySheep)
            {
                SheepImageBehaviour _sheep = SheepImageManager.Instance.GetFirstSheep();
                if (!_sheep || !bush)
                    return;

                float distance = Vector3.Distance(_sheep.transform.position, bush.transform.position);
                bool isAtDistance = distance < 0.5f;
                if (!isAtDistance)
                    return;
                _sheep.SetTarget(bush, _image.transform.position);
            }
        }
    }
}








