using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Bush : MonoBehaviour,ISelectableItem
{

    void Start()
    {
        CustomClicker.Instance.OnClickObject += InteractionBehaviour;
    }

    void InteractionBehaviour(GameObject _objec, RaycastHit _hit)
    {
        if (_objec != gameObject)
            return;
        SelectableManager.Instance.SetSelectable(this);
    }

    public Vector3 GetPosition()
    {
        return transform.position;
    }
}
