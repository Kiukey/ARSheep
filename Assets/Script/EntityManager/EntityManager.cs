using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EntityManager : MonoBehaviour
{
    #region InitSingleton
    static EntityManager instance;
    public static EntityManager Instance => instance;

    void Awake()
    {
        if (instance)
        {
            Destroy(this);
            return;
        }
        instance = this;
    }
    #endregion

    [SerializeField] List<IManagedEntity> allEntities = null;


    void AddEntity(IManagedEntity _newEntity)
    {
        allEntities.Add(_newEntity);
    }
    
    void RemoveEntity(IManagedEntity _newEntity)
    {
        allEntities.Remove(_newEntity);
    }
    
    void RemoveAt(int _index)
    {
        allEntities.RemoveAt(_index);
    }
}
