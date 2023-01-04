using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SheepImageManager : MonoBehaviour
{
    #region InitSingleton
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
    #endregion

    [SerializeField] List<SheepImageBehaviour> allEntities = null;
    float distance = 0;

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
    public SheepImageBehaviour CheckDistance(Transform _target)
    {
        for (int i = 0; i < allEntities.Count; i++)
        {
            distance = Vector3.Distance(allEntities[i].transform.position, _target.position);
            if (distance < 1f)
            {
                Debug.Log("Found Sheep at distance");
                return allEntities[i];
            }
        }
        return null;
    }

    private void OnGUI()
    {
        GUILayout.TextField(distance.ToString());   
    }
}
