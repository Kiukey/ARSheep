using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BushImageBehaviour : MonoBehaviour
{
	public event Action<float> OnGrowingBush;
	public event Action OnStartGrowingBush;
	public event Action OnEndGrowingBush;

	[SerializeField] bool isTargettedBySheep = false;
	[SerializeField] bool isGrowing = false;
	[SerializeField] float growingSpeed = 1f;
	[SerializeField] Vector3 scaleSize = Vector3.one;
	[SerializeField] MeshRenderer mesh = null;

	public bool IsGrowing => isGrowing;
	public bool IsTargettedBySheep => isTargettedBySheep;
	public MeshRenderer Mesh => mesh;

    private void Start()
    {
		gameObject.SetActive(false);
    }

    private void LateUpdate()
	{
		GrowBush();
	}

	public void SetIsTargetBySheep(bool _enable)
	{
		isTargettedBySheep=_enable;
	}
	public void DeActivate()
	{
        mesh.transform.localScale = Vector3.zero;
		isTargettedBySheep = false;
		isGrowing = true;
		OnStartGrowingBush?.Invoke();
	}

	void GrowBush()
	{
		if (!isGrowing)
			return;
		if (mesh.transform.localScale == scaleSize)
        {
			isGrowing = false;
			OnEndGrowingBush?.Invoke();
        }
		mesh.transform.localScale = Vector3.MoveTowards(mesh.transform.localScale, scaleSize, Time.deltaTime * growingSpeed);
		OnGrowingBush?.Invoke(GrowingProgress(transform.localScale));
    }

	float GrowingProgress(Vector3 _currentScale)
	{
		float _floatScale = _currentScale.x;
		float _targetScale = scaleSize.x;

		float _progress = _floatScale / _targetScale;

		return _progress;
	}
}
