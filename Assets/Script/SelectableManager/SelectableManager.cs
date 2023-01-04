using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SelectableManager : SingletonTemplate<SelectableManager>
{

    ISelectableItem currentItem = null;
    public ISelectableItem Current => currentItem;

    public event Action<ISelectableItem> OnSelectedItem; 


    public void SetSelectable(ISelectableItem _item)
    {
        if(Current != null && Current == _item)
        {
                currentItem = null;
        }
        else
            currentItem = _item;

        OnSelectedItem?.Invoke(currentItem);
    }



}
