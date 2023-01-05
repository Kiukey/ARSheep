using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class Bush : MonoBehaviour,ISelectableItem
{
    public event Action OnEaten = null;

    [SerializeField] int bitesToEat = 0;
    [SerializeField] AnimationCurve shrinkCurve;
    [SerializeField] Vector3 shrinkSize = Vector3.one;
    [SerializeField] float growTime = 5;

    SheepPlaneBehaviour sheepObject = null;
    [SerializeField] int bitesLeft = 0;

    bool isGrowing = false;
    Vector3 originalSize = Vector3.zero;
    Vector3 _oldSize = Vector3.zero;
    float curveTime = -1;

    void Start()
    {
        bitesLeft = bitesToEat;
        originalSize = transform.localScale - shrinkSize;
        CustomClicker.Instance.OnClickObject += InteractionBehaviour;
        //sheepObject = CustomClicker.Instance.GetSheepObject().GetComponent<SheepPlaneBehaviour>();
        InitSheepEvents();
    }

    void InitSheepEvents()
    {
        //sheepobject.oneat
        //sheepobject.
    }

    void Update()
    {
        UpdateShrink();
        UpdateGrowing();
    }

    Vector3 GetNewSize()
    {
        float _bitesNorm = (float)bitesLeft / (float)bitesToEat;
        return originalSize * _bitesNorm + shrinkSize;
    }

    IEnumerator UpdateGrowing()
    {
        if (!isGrowing)
            yield return null;

        yield return new WaitForSeconds(growTime / bitesToEat);
        bitesLeft += 1;

        if (bitesLeft == bitesToEat)
            isGrowing = false;
    }

    void RestartCurveTime()
    {
        curveTime = 0;
        _oldSize = transform.localScale;
        Debug.Log("Restart curve time");
    }

    void UpdateShrink()
    {
        if (GetNewSize() == transform.localScale)
        {
            if (curveTime != 0)
                RestartCurveTime(); 
            return;
        }

        Debug.Log(GetNewSize() - _oldSize);
        Debug.Log("up");
        Debug.Log(shrinkSize + _oldSize);

        curveTime += Time.deltaTime;
        curveTime = Mathf.Clamp01(curveTime);
        transform.localScale = _oldSize + (GetNewSize() - _oldSize) * shrinkCurve.Evaluate(curveTime);
    }

    IEnumerator StartGrow()
    {
        yield return new WaitForSeconds(1);
        isGrowing = true;
    }

    void EatBehaviour()
    {
        if (bitesLeft <= 0 && isGrowing == false)
        {
            OnEaten?.Invoke();
            StartGrow();
        }
        bitesLeft -= 1;
    }

    void InteractionBehaviour(GameObject _objec, RaycastHit _hit)
    {
        if (_objec != gameObject || isGrowing)
            return;
        SelectableManager.Instance.SetSelectable(this);
    }
    public Vector3 GetPosition()
    {
        return transform.position;
    }

}
