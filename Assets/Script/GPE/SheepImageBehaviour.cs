using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SheepImageBehaviour : MonoBehaviour, IManagedEntity
{
    public event Action<SheepImageBehaviour> OnSheepEat = null;

    [SerializeField,Range(.1f,10)] float movementSpeed = 1;
    [SerializeField] Transform target = null;
    [SerializeField] bool returnToInit = false;


    Vector3 initialPosition = Vector3.zero;
    public Vector3 TargetPosition => target.position;

    private void Start()
    {
        Initialize();
    }
    private void LateUpdate()
    {
        MoveToFood();
        ReturnToInitialPos();
    }
    private void OnDestroy()
    {
        Unregister();
    }
    private void Initialize()
    {
        Register();
        OnSheepEat += (me) => Debug.Log("eating");
    }

    void StartEating()
    {
        OnSheepEat?.Invoke(this);
        target.gameObject.SetActive(false);
        //Destroy(target);
        target = null;
        //transform.position = initialPosition;
        returnToInit = true;
    }
    void MoveToFood()
    {
        if (!target || returnToInit)
            return;
        transform.position = Vector3.MoveTowards(transform.position, TargetPosition, Time.deltaTime * movementSpeed);
        if (Vector3.Distance(transform.position, TargetPosition) < 0.02 && target)
            StartEating();
    }
    void ReturnToInitialPos()
    {
        if (!returnToInit)
            return;
        transform.position = Vector3.MoveTowards(transform.position, initialPosition, Time.deltaTime * movementSpeed);

        if (Vector3.Distance(transform.position, initialPosition) < 0.02)
            returnToInit = false;
    }
    public void SetTarget(Transform _target)
    {
        if (target)
            return;
        target = _target;
        initialPosition = transform.position;
        returnToInit = false;
        Debug.Log("Set target");
    }
    public void Register()
    {
        SheepImageManager.Instance.AddEntity(this);
    }
    public void Unregister()
    {
        SheepImageManager.Instance.RemoveEntity(this);
    }
}
