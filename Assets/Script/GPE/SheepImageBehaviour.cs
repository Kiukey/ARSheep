using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class SheepImageBehaviour : MonoBehaviour, IManagedEntity
{
    public event Action<SheepImageBehaviour> OnSheepEat = null;
    public event Action<SheepImageBehaviour> OnStartSheepEat = null;

    [SerializeField, Range(.1f, 10)] float movementSpeed = 1;
    [SerializeField,Range(.1f,1000)] float rotationSpeed = 1;
    [SerializeField] BushImageBehaviour target = null;
    [SerializeField] bool returnToInit = false, eating = false, isRotating = false;
    [SerializeField] bool firstScaling = true, secondScaling = true, thirScaling = true;
    [SerializeField] float eatingTimer = 2.5f;
    [SerializeField, Range(1.1f, 5f)] float scalingFactor = 1.5f;
    float timeSpentEating = 0f;
    

    Vector3 initialPosition = Vector3.zero;
    public Vector3 TargetPosition => target.transform.position;

    private void Start()
    {
        Initialize();
    }
    private void LateUpdate()
    {
        return;
        MoveToFood();
        ReturnToInitialPos();
        LookAtDestination();
        CheckEatingProgress();
    }
    private void OnDestroy()
    {
        Unregister();
    }
    private void Initialize()
    {
        Register();
        gameObject.SetActive(false);
    }

    void StartEating()
    {
        OnStartSheepEat?.Invoke(this);
        eating = true;
        StartCoroutine(EatingAfterTimer());
    }
    void MoveToFood()
    {
        if (!target || returnToInit || eating || isRotating)
            return;
        transform.position = Vector3.MoveTowards(transform.position, TargetPosition, Time.deltaTime * movementSpeed);
        if (Vector3.Distance(transform.position, TargetPosition) < .15f && target)
            StartEating();
    }
    void ReturnToInitialPos()
    {
        if (!returnToInit || isRotating)
            return;
        transform.position = Vector3.MoveTowards(transform.position, initialPosition, Time.deltaTime * movementSpeed);
        if (Vector3.Distance(transform.position, initialPosition) < 0.02)
            returnToInit = false;
    }
    public void SetTarget(BushImageBehaviour _target, Vector3 imagePosition)
    {
        if (target || returnToInit || _target.IsGrowing)
            return;
        target = _target;
        _target.SetIsTargetBySheep(true);
        initialPosition = imagePosition;
        Debug.Log("Initial position :" + initialPosition);
        returnToInit = false;
        Debug.Log("Set target");
    }
    void LookAtDestination()
    {
        if (!target && !returnToInit)
            return;

        Vector3 _fwd = ( (target ? TargetPosition : initialPosition) - transform.position).normalized;
        Quaternion _targetRotation = Quaternion.LookRotation(_fwd);
        transform.rotation = Quaternion.RotateTowards(transform.rotation, _targetRotation, Time.deltaTime * rotationSpeed);
        isRotating = Vector3.Distance(transform.eulerAngles, _targetRotation.eulerAngles) > 0.1f;
    }
    public void Register()
    {
        SheepImageManager.Instance.AddEntity(this);
    }
    public void Unregister()
    {
        SheepImageManager.Instance.RemoveEntity(this);
    }
    IEnumerator EatingAfterTimer()
    {
        yield return new WaitForSeconds(eatingTimer);
        if (!target)
            yield break;
        OnSheepEat?.Invoke(this);
        target.DeActivate();
        target = null;
        returnToInit = true;
        eating = false;
    }

    void CheckEatingProgress()
    {
        if (!eating)
            return;

        timeSpentEating += Time.deltaTime;
        Vector3 _scale = target.Mesh.transform.localScale;

        if (timeSpentEating > (eatingTimer / 4) && timeSpentEating < (eatingTimer / 2) && firstScaling)
        {
            firstScaling = false;
            _scale /= 1.5f;
        }
        else if (timeSpentEating > (eatingTimer / 2) && timeSpentEating < (eatingTimer / 4 * 3) && secondScaling)
        {
            secondScaling = false;
            _scale /= 2;
        }
        else if (timeSpentEating > (eatingTimer / 4 * 3) && timeSpentEating < eatingTimer && thirScaling)
        {
            thirScaling = false;
            _scale /= 2;
        }
        target.Mesh.transform.localScale = _scale;
    }
}
