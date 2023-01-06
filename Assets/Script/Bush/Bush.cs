using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


[RequireComponent(typeof(BoxCollider))]
[RequireComponent(typeof(Outline))]
public class Bush : MonoBehaviour,ISelectableItem
{
    public event Action OnEaten = null;
    public event Action<Bush> OnSelected = null;

    [SerializeField] int bitesToEat = 0;
    [SerializeField] AnimationCurve shrinkCurve;
    [SerializeField] Vector3 shrinkSize = Vector3.one;
    [SerializeField] float growTime = 5, timeAfterEat = 1;

    SheepPlaneBehaviour sheepObject = null;
    [SerializeField] int bitesLeft = 0;
    [SerializeField] Outline outline;

    bool isGrowing = false;
    Vector3 originalSize = Vector3.zero;
    Vector3 _oldSize = Vector3.zero;
    float curveTime = -1;

    WaitForSeconds waitAfterEat;

    public int BitesLeft => bitesLeft;
    void Start()
    {
        Init();
    }
    void Init()
    {
        bitesLeft = bitesToEat;
        originalSize = transform.localScale - shrinkSize;
        CustomClicker.Instance.OnClickObject += InteractionBehaviour;
        OnSelected += (b) =>
        {
            Debug.Log("in bush selected");
            outline.enabled = true;
        };
        waitAfterEat = new WaitForSeconds(timeAfterEat);
        sheepObject = CustomClicker.Instance.GetSheepObject().GetComponent<SheepPlaneBehaviour>();        
        outline.enabled = false;
        sheepObject.OnStartEating += (b) =>
        {
            if (b != this)
                return;
            InitSheepEvents();
        };
    }
    void InitSheepEvents()
    {
        sheepObject.OnBite += EatBehaviour;
        sheepObject.OnEndEating += HandleUpdateGrowing;
    }

    void Update()
    {
        UpdateShrink();
    }
    void HandleUpdateGrowing()
    {
        sheepObject.OnBite -= EatBehaviour;
        sheepObject.OnEndEating -= HandleUpdateGrowing;
        StartCoroutine(UpdateGrowing());
    }
    Vector3 GetNewSize()
    {
        float _bitesNorm = (float)bitesLeft / (float)bitesToEat;
        return originalSize * _bitesNorm + shrinkSize;
    }

    IEnumerator UpdateGrowing()
    {
        yield return waitAfterEat;
        while (isGrowing)
        {
            if (bitesLeft == bitesToEat)
            {
                isGrowing = false;
                sheepObject.OnEndEating -= HandleUpdateGrowing;
                yield return null;
            }
            yield return new WaitForSeconds(growTime / bitesToEat);
            if (GetNewSize() != transform.localScale)
            {
                yield return null;
            }
            bitesLeft += 1;
        }        
    }

    void RestartCurveTime()
    {
        curveTime = 0;
        _oldSize = transform.localScale;
    }

    void UpdateShrink()
    {
        if (GetNewSize() == transform.localScale)
        {
            if (curveTime != 0)
                RestartCurveTime(); 
            return;
        }

        curveTime += Time.deltaTime * 3;
        curveTime = Mathf.Clamp01(curveTime);
        transform.localScale = _oldSize + (GetNewSize() - _oldSize) * shrinkCurve.Evaluate(curveTime);
    }

    void StartGrow()
    {        
        isGrowing = true;
    }

    void EatBehaviour()
    {
        bitesLeft -= 1;
        if (bitesLeft <= 0 && isGrowing == false)
        {
            StartGrow();
            outline.enabled = false;
            OnEaten?.Invoke();
        }        
    }

    void InteractionBehaviour(GameObject _objec, RaycastHit _hit)
    {
        if (_objec != gameObject || isGrowing || !sheepObject.CanSelectBush)
            return;
        SelectableManager.Instance.SetSelectable(this);        
        OnSelected?.Invoke(this);
    }
    public Vector3 GetPosition()
    {
        return transform.position;
    }

}
