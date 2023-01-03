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

   void Start()
   {
       imageManager.trackedImagesChanged += UpdateImages;
   }

    void UpdateImages(ARTrackedImagesChangedEventArgs obj)
    {
        Debug.Log("Detection image");
        foreach (ARTrackedImage image in obj.added)
        {
            for (int i = 0; i < imageLibrary.count; i++)
            {
                if (image.referenceImage.name == imageLibrary[i].name)
                {
                    Debug.Log($"Apparition object {i}");
                    Instantiate(objects[i], image.transform.position, image.transform.rotation);
                }
            }
        }
    }
}








