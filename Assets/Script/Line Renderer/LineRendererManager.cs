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
    [SerializeField] Transform debugOne, debugTwo;
    private void Start()
    {
        ImageTracking.Instance.OnCheckDistance += UpdateLine;

        //debug
        //UpdateLine(1, debugOne, debugTwo);
        
        InitializeLineRenderer();
    }
    void UpdateLine(float _distance,Transform _from, Transform _to)
    {
        if (!lineRenderer|| !_from.gameObject.activeInHierarchy || !_to.gameObject.activeInHierarchy)
            return;

        CalculatePoints(_from.position, _to.position);
        lineRenderer.SetPositions(points);
        
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

    void CalculatePoints(Vector3 startingPos, Vector3 endingPos)
    {
        Vector3 middlePoint = Vector3.Lerp(startingPos, endingPos, .5f);
        middlePoint.y = height;
        points = new Vector3[definition];

        for (int i = 0; i < definition; i++)
        {
            float t = i / (float)definition;
            Vector3 posA = Vector3.Lerp(startingPos, middlePoint, t);
            Vector3 posB = Vector3.Lerp(middlePoint, endingPos, t);
            points[i] = Vector3.Lerp(posA, posB, t);
        }
    }
}
