using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ImageTracking : MonoBehaviour
{
    [SerializeField] ARTrackedImageManager imageManager = null;
    [SerializeField] XRReferenceImageLibrary imageLibrary = null;

    [SerializeField] List<GameObject> objects = new List<GameObject>();
    GameObject spawnedObject = null;

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
                    Instantiate(objects[i], image.transform);
                }
            }
            //Instantiate(objects[0], image.transform);
        }
    }
}








