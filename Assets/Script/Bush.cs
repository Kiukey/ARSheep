using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Bush : MonoBehaviour,ISelectableItem
{

    private void OnMouseDown()
    {
        SelectableManager.Instance.SetSelectable(this);
    }



}
