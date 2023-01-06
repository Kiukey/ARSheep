using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineRendererManager : MonoBehaviour
{
    [SerializeField] LineRenderer lineRenderer = null;
    [SerializeField] bool lerpColor = true;
    [SerializeField] int definition = 10;
    [SerializeField] float height = 0.5f;
    [SerializeField] Vector3[] points = null;

    private void Start()
    {
        InitializeLineRenderer();
    }

    void UpdateLine(Transform _from, Transform _to)
    {
        if (!lineRenderer|| !_from.gameObject.activeInHierarchy || !_to.gameObject.activeInHierarchy)
            return;
        float _distance = Vector3.Distance(_from.position, _to.position);
        CalculatePoints(_from.position, _to.position);
        lineRenderer.SetPositions(points);
        
        UpdateLineColor(_distance);
    }
    void InitializeLineRenderer()
    {
        if (!lineRenderer)
            return;
        ImageTracking.Instance.OnEndImageUpdate += UpdateLine;
        lineRenderer.SetPositions(new Vector3[] {Vector3.zero, Vector3.zero });
        lineRenderer.positionCount = definition+1;
    }
    void CalculatePoints(Vector3 _startingPos, Vector3 _endingPos)
    {
        Vector3 _middlePoint = Vector3.Lerp(_startingPos, _endingPos, .5f);
        _middlePoint.y = height;
        points = new Vector3[definition+1];
        for (int i = 0; i < definition+1; i++)
        {
            float t = i / (float)definition;
            Vector3 _posA = Vector3.Lerp(_startingPos, _middlePoint, t);
            Vector3 _posB = Vector3.Lerp(_middlePoint, _endingPos, t);
            points[i] = Vector3.Lerp(_posA, _posB, t);
        }
    }
    void UpdateLineColor(float _distance)
    {
        Color _newColor = Color.white;
        if (lerpColor)
            _newColor = Color.Lerp(Color.red, Color.green, 0.5f / _distance);
        else
            _newColor = _distance > 0.5f ? Color.red : Color.green;
        lineRenderer.startColor = _newColor;
        lineRenderer.endColor = _newColor;
    }
}
