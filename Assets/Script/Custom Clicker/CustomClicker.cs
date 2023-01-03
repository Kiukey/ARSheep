using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class CustomClicker : MonoBehaviour
{
    [SerializeField] GameObject sheepObject = null, bushObject = null;
    [SerializeField] LayerMask layerMask = 0;

    GameObject sheepSpawnObject = null;

    void Update()
    {
        foreach (Touch touch in Input.touches)
        {
            if (touch.phase == TouchPhase.Began)
            {
                RaycastHit hit;
                Ray raycast = Camera.main.ScreenPointToRay(touch.position);
                if (Physics.Raycast(raycast, out hit, 200, layerMask))
                    SpawnInstance(hit);

            }
        }
    }

    void SpawnInstance(RaycastHit hit)
    {
        if (sheepSpawnObject == null)
        {
            sheepSpawnObject = Instantiate(sheepObject, hit.point, transform.rotation);
            return;
        }
        Instantiate(bushObject, hit.point, transform.rotation);
    }
}
