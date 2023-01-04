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

    GameObject sheepSpawnObject = null;

    void Update()
    {
        
        foreach (Touch touch in Input.touches)
        {
            if (touch.phase == TouchPhase.Began)
            {
                RaycastHit hit;
                Ray raycast = Camera.main.ScreenPointToRay(touch.position);

                if (SelectableManager.Instance.Current == null)
                    if(Physics.Raycast(raycast, out hit, 200, detectableLayersOnRaycast))
                        SpawnInstance(hit);
                else
                    if (Physics.Raycast(raycast, out hit, 200, selectableLayers))
                        TapInteraction(hit);
            }
        }
    }

    void TapInteraction(RaycastHit hit)
    {
        OnClickObject?.Invoke(hit.transform.gameObject, hit);
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
