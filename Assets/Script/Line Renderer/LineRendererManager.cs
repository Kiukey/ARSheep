using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineRendererManager : MonoBehaviour
{
    [SerializeField] LineRenderer lineRenderer = null;
    [SerializeField] bool lerpColor = true;
    //[SerializeField] float debugDistance = 0;
    //[SerializeField] Transform testOne, testTwo;

    private void Start()
    {
        ImageTracking.Instance.OnCheckDistance += UpdateLine;
        InitializeLineRenderer();
    }

    private void Update()
    {
        //UpdateLine(debugDistance, testOne, testTwo);
    }
    void UpdateLine(float _distance,Transform _from, Transform _to)
    {
        if (!lineRenderer)
            return;

        /*Vector3[] _positionArray = new Vector3[] { testOne.position, testTwo.position };
        float distance = Vector3.Distance(testOne.position, testTwo.position);*/
        Vector3[] _positionArray = new Vector3[] {_from.position, _to.position };
        lineRenderer.SetPositions(_positionArray);
        
        Color _newColor = Color.white;
        if(lerpColor)
            _newColor = Color.Lerp(Color.red, Color.green, 0.5f / _distance);
        else
            _newColor = _distance > 0.5f ? Color.red : Color.green;
        lineRenderer.startColor = _newColor;
        lineRenderer.endColor = _newColor;
    }

    void InitializeLineRenderer()
    {
        if (!lineRenderer)
            return;

        lineRenderer.SetPositions(new Vector3[] {Vector3.zero, Vector3.zero });
    }
}
