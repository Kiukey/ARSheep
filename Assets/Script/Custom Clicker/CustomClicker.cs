using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.XR.ARFoundation;

public class CustomClicker : SingletonTemplate<CustomClicker>
{
    public event Action<GameObject, RaycastHit> OnClickObject = null;

    [SerializeField] GameObject sheepObject = null, bushObject = null;
    [SerializeField] LayerMask detectableLayersOnRaycast = 0;
    [SerializeField] LayerMask selectableLayers = 0;

    float planeY = 0;
    bool lockedY = false;

    GameObject sheepSpawnObject = null;

    void Update()
    {
        
        foreach (Touch touch in Input.touches)
        {
            if (touch.phase == TouchPhase.Began)
            {
                Ray raycast = Camera.main.ScreenPointToRay(touch.position);
                Tapped(raycast);
            }
        }
    }

    void Tapped(Ray raycast)
    {
        RaycastHit hit;

        if (SelectableManager.Instance.Current == null)
        {
            if (Physics.Raycast(raycast, out hit, 200, selectableLayers))
                TapInteraction(hit);
            else if (Physics.Raycast(raycast, out hit, 200, detectableLayersOnRaycast))
            {
                SpawnInstance(hit);
            }
        }
        else if(Physics.Raycast(raycast, out hit, 200, selectableLayers))
        {
                TapInteraction(hit);
        }

    }

    void TapInteraction(RaycastHit hit)
    {
        Debug.Log("Tapped!");
        OnClickObject?.Invoke(hit.transform.gameObject, hit);
    }

    void SpawnInstance(RaycastHit hit)
    {
        if(lockedY == false)
        {
            lockedY = true;
            planeY = hit.point.y;
        }
        Vector3 _spawnVector = new Vector3(hit.point.x, planeY, hit.point.z);
        if (sheepSpawnObject == null)
        {
            sheepSpawnObject = Instantiate(sheepObject, _spawnVector, transform.rotation);
            return;
        }
        Instantiate(bushObject, _spawnVector, transform.rotation);
    }

    public GameObject GetSheepObject() => sheepSpawnObject;
}
