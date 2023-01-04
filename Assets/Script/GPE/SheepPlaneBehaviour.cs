using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Random = UnityEngine.Random;

[RequireComponent(typeof(BoxCollider))]
public class SheepPlaneBehaviour : MonoBehaviour, ISelectableItem
{
    #region Event
    public event Action OnStartSelect = null, OnEndSelect = null, OnStartMoveToEat = null, OnEndMoveToEat = null;
    #endregion
    #region Fields
    [SerializeField] float range, moveSpeed, eatingSpeed;
    [SerializeField] bool enableExploration = true;

    bool selected = false, moveToEat = false;
    Vector3 spawnPosition;
    Vector3 target;
    WaitForSeconds waitEatingSpeed;
    WaitForEndOfFrame waitForFrame;
    #endregion
    #region Properties
    public Vector3 CurrentPosition => GetPosition();
    public Quaternion CurrentRotation => transform.rotation;
    public bool EnableExploration { get => enableExploration; set => enableExploration = value; }
    #endregion
    void Start()
    {
        Init();
    }
    void Init()
    {
        CustomClicker.Instance.OnClickObject += InteractionBehaviour;
        spawnPosition = CurrentPosition;
        target = CurrentPosition;
        waitEatingSpeed = new WaitForSeconds(eatingSpeed);
        waitForFrame = new WaitForEndOfFrame();
    }
    void Update()
    {
        SheepAndBushBehaviour();
        ExplorationBehaviour();
    }
    #region ExplorationBehaviour
    void ExplorationBehaviour()
    {
        if(!enableExploration)
            return;
        if (IsAtTarget())
            GenerateRandomTargetFromSpawn();
        MoveToTarget();
    }
    bool IsAtTarget()
    {
        return Vector3.Distance(CurrentPosition, target) < float.Epsilon;
    }
    void GenerateRandomTargetFromSpawn()
    {
        float _x = Random.Range(-range, range);
        float _z = Random.Range(-range, range);
        target = new Vector3(_x, 0.0f,_z) + spawnPosition;
    }
    void MoveToTarget()
    {
        if(RotateTowards())
            transform.position = Vector3.MoveTowards(CurrentPosition, target, Time.deltaTime * moveSpeed);
    }
    bool RotateTowards()
    {
        Vector3 _fwd = (target - CurrentPosition).normalized;
        Quaternion _quat = Quaternion.LookRotation(_fwd);
        transform.rotation = Quaternion.RotateTowards(CurrentRotation, _quat, Time.deltaTime * moveSpeed * 100);
        return Vector3.Dot(transform.forward, _fwd) > 0.95f;
    }
    #endregion
    #region ClickBehaviour
    void InteractionBehaviour(GameObject _objec, RaycastHit _hit)
    {
        if (_objec != this)
            return;
        selected = !selected;
        if (selected)
        {
            Debug.Log("Clikecd");
            SelectableManager.Instance.SetSelectable(this);
            OnStartSelect?.Invoke();
        }
        else
        {
            Debug.Log("END Clikecd");
            EndSelection();
        }
    }
    void EndSelection()
    {
        SelectableManager.Instance.SetSelectable(null);
        OnEndSelect?.Invoke();
    }
    #endregion
    #region EatBushBehaviour
    bool IsSelectABush() => SelectableManager.Instance.Current != null && (SheepPlaneBehaviour)SelectableManager.Instance.Current != this;
    bool IsStartEating() => selected && IsSelectABush();
    void SheepAndBushBehaviour()
    {
        if (IsStartEating() && !moveToEat)
        {
            moveToEat = true;
            enableExploration = false;
            target = ((Bush)(SelectableManager.Instance.Current)).GetPosition();
            OnStartMoveToEat?.Invoke();
        }

        if (!moveToEat)
            return;
        if (IsAtTarget())
        {
            moveToEat = false;
            OnEndMoveToEat?.Invoke();
            StartCoroutine(EatBushBehaviour());
        }
        MoveToTarget();
    }
    IEnumerator EatBushBehaviour()
    {
        yield return waitEatingSpeed;        
        yield return waitForFrame;
        ReturnToSpawn();
    }
    void ReturnToSpawn()
    {
        EndSelection();
        enableExploration = true;        
    }

    public Vector3 GetPosition()
    {
        return transform.position;
    }
    #endregion
}
