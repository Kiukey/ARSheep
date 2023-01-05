using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SheepImageManager : SingletonTemplate<SheepImageManager>
{
/*    #region InitSingleton
    static SheepImageManager instance;
    public static SheepImageManager Instance => instance;

    void Awake()
    {
        if (instance)
        {
            Destroy(this);
            return;
        }
        instance = this;
    }
    #endregion*/

    [SerializeField] List<SheepImageBehaviour> allEntities = null;

    public void AddEntity(SheepImageBehaviour _newEntity)
    {
        allEntities.Add(_newEntity);
    }
    public void RemoveEntity(SheepImageBehaviour _newEntity)
    {
        allEntities.Remove(_newEntity);
    }
    public void RemoveAt(int _index)
    {
        allEntities.RemoveAt(_index);
    }
  /*  public SheepImageBehaviour CheckDistance(Transform _target, out float distance)
    {
        distance = 1;
        for (int i = 0; i < allEntities.Count; i++)
        {
            distance = Vector3.Distance(allEntities[i].transform.position, _target.position);
            if(distance < .5f)
            {
                return allEntities[i];
            }
        }
        return null;
    }*/

    public SheepImageBehaviour GetFirstSheep() => allEntities.Count >0 ? allEntities[0] : null;
}
