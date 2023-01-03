using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Random = UnityEngine.Random;

[RequireComponent(typeof(BoxCollider))]
public class SheepPlaneBehaviour : MonoBehaviour
{
    #region Event
    public event Action OnStartSelect = null, OnEndSelect = null;
    #endregion
    #region Fields
    [SerializeField] float range, speed;
    [SerializeField] bool enableExploration = true;

    bool selected = false;
    Transform spawnTransform;
    Vector2 target;
    #endregion
    #region Properties
    public Vector2 CurrentPosition => new Vector2(transform.position.x, transform.position.z);
    public bool EnableExploration { get => enableExploration; set => enableExploration = value; }
    #endregion
    void Start()
    {
        Init();
    }
    void Init()
    {
        spawnTransform = transform;
        target = CurrentPosition;
    }
    void Update()
    {
        ExplorationBehaviour();
    }
    #region ExplorationBehaviour
    void ExplorationBehaviour()
    {
        if(!enableExploration)
            return;
        if (IsAtTarget())
            GenerateRandomTarget();
        MoveToTarget();
    }
    bool IsAtTarget()
    {
        return Vector2.Distance(CurrentPosition, target) < float.Epsilon;
    }
    void GenerateRandomTarget()
    {
        float _x = Random.Range(-range, range);
        float _z = Random.Range(-range, range);
        target = new Vector2(_x, _z);
    }
    void MoveToTarget()
    {
        transform.position = Vector2.MoveTowards(CurrentPosition, target, Time.deltaTime * speed);
    }
    #endregion
    #region ClickBehaviour
    void OnMouseDown()
    {
        selected = !selected;
        if (selected)
        {
            //SelectableManager.Instance.SetSelectable(this);
            OnStartSelect?.Invoke();
        }
        else
        {
            //SelectableManager.Instance.SetSelectable(null);
            OnEndSelect?.Invoke();
        }
    }
    #endregion
    #region EatGrassBehaviour
    bool IsStartEating()
    {
        return selected; // && SelectableManager.Instance.Current
    }
    #endregion
}
