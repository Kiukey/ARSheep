using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ImageTracking : MonoBehaviour
{
    public event Action<Transform> OnCheckDistance = null;
    [SerializeField] ARTrackedImageManager imageManager = null;
    [SerializeField] XRReferenceImageLibrary imageLibrary = null;

    [SerializeField] List<GameObject> objects = new List<GameObject>();
    BushImageBehaviour bush = null;
    bool setBush = false;
    //GameObject spawnedObject = null;

    private void Start()
    {
        OnCheckDistance += (debug) => Debug.Log("Evenement distance");
    }
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
                if(image.referenceImage.name.Equals(imageLibrary[i].name))
                {
                    GameObject _object = Instantiate(objects[i], image.transform);
                    Debug.Log("Spawn/Move Object");
                    if (i == 0)
                        bush = _object.GetComponent<BushImageBehaviour>();
                }
            }
            //Instantiate(objects[0], image.transform);
        }
        foreach (ARTrackedImage image in obj.updated)
        {
            Debug.Log("Updated :" + image.referenceImage.name);
            for (int i = 0; i < imageLibrary.count; i++)
            {
                if (image.referenceImage.name.Equals(imageLibrary[i].name))
                {
                    if (i == 0 && !bush.IsTargettedBySheep)
                    {
                        SheepImageBehaviour _sheep = SheepImageManager.Instance.CheckDistance(bush.transform);
                        if (!_sheep)
                            return;
                        _sheep.SetTarget(bush);
                    }
                }
            }
        }
    }
}








