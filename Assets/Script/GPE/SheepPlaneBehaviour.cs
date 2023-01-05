using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Random = UnityEngine.Random;

[RequireComponent(typeof(BoxCollider))]
public class SheepPlaneBehaviour : MonoBehaviour, ISelectableItem
{
    #region Event
    public event Action OnStartSelect = null, OnEndSelect = null, OnStartMoveToEat = null, OnEndMoveToEat = null, OnStartEating = null, OnEndEating, OnBite = null;
    #endregion
    #region Fields
    [SerializeField] float range, moveSpeed, eatingSpeed, rangeToEat;
    [SerializeField] bool enableExploration = true;

    bool selected = false, moveToEat = false, bushSelected = false;
    Vector3 spawnPosition;
    Vector3 target;
    Bush gameObjectBush = null;
    WaitForSeconds waitBiteSpeed;
    WaitForEndOfFrame waitForFrame;
    #endregion
    #region Properties
    public Vector3 CurrentPosition => GetPosition();
    public Quaternion CurrentRotation => transform.rotation;
    public bool EnableExploration { get => enableExploration; set => enableExploration = value; }
    public float NBite => (eatingSpeed * 4.0f) / 5.0f;// 4 bite in 5 seconds
    public float BiteSpeed => eatingSpeed / NBite;
    #endregion
    void Start()
    {
        Init();
    }
    void Init()
    {
        CustomClicker.Instance.OnClickObject += InteractionBehaviour;
        CustomClicker.Instance.OnClickObject += SelectBush;
        spawnPosition = CurrentPosition;
        target = CurrentPosition;
        waitBiteSpeed = new WaitForSeconds(BiteSpeed);
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
    bool IsAtTarget(float _range = float.Epsilon)
    {
        return Vector3.Distance(CurrentPosition, target) < _range;
    }
    void GenerateRandomTargetFromSpawn()
    {
        float _x = Random.Range(-range, range);
        float _z = Random.Range(-range, range);
        target = new Vector3(_x, 0.0f, _z) + spawnPosition;
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
        if (_objec != gameObject)
            return;
        selected = !selected;
        if (selected)
        {
            SelectableManager.Instance.SetSelectable(this);
            OnStartSelect?.Invoke();
        }
        else
        {
            EndSelection();
        }
    }
    void SelectBush(GameObject _objec, RaycastHit _hit)
    {
        if (gameObjectBush != null)
            return;
        if (IsBush(_objec))
        {
            bushSelected = true;
            target = _objec.transform.position;
        }
    }
    bool IsBush(GameObject _objec)
    {
        gameObjectBush = _objec.GetComponent<Bush>();
        return gameObjectBush != null;
    }
    void EndSelection()
    {
        SelectableManager.Instance.SetSelectable(null);        
        OnEndSelect?.Invoke();
    }
    #endregion
    #region EatBushBehaviour
    bool IsStartEating() => selected && bushSelected && !moveToEat && enableExploration;
    void SheepAndBushBehaviour()
    {
        if (IsStartEating())
        {
            moveToEat = true;
            enableExploration = false;
            OnStartMoveToEat?.Invoke();
        }

        if (!moveToEat)
            return;
        if (IsAtTarget(rangeToEat) && RotateTowards())
        {
            moveToEat = false;
            OnEndMoveToEat?.Invoke();
            StartCoroutine(EatBushBehaviour());
        }
        if(!IsAtTarget(rangeToEat))
            MoveToTarget();
    }
    IEnumerator EatBushBehaviour()
    {
        OnStartEating?.Invoke();
        gameObjectBush.OnEaten += HandleOnEaten;
        yield return BiteBehaviour().GetEnumerator();        
        yield return waitForFrame;        
    }
    void HandleOnEaten()
    {
        DestroyBush();
        ReturnToSpawn();
    }
    IEnumerable BiteBehaviour()
    {
        float _aux = 0;
        while (true)
        {
            if (_aux >= NBite)
                yield break;
            yield return waitForFrame;
            OnBite?.Invoke();
            _aux++;
            yield return waitBiteSpeed;
        }        
    }
    void ReturnToSpawn()
    {
        EndSelection();
        enableExploration = true;        
    }
    void DestroyBush()
    {
        gameObjectBush.OnEaten -= HandleOnEaten;
        OnEndEating?.Invoke();
        bushSelected = false;
        gameObjectBush = null;
    }
    public Vector3 GetPosition()
    {
        return transform.position;
    }
    #endregion
}
