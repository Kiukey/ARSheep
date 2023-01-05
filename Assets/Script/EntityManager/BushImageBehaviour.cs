using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BushImageBehaviour : MonoBehaviour
{
	[SerializeField] bool isTargettedBySheep = false;
	[SerializeField] bool isGrowing = false;
	[SerializeField] float growingSpeed = 1f;
	[SerializeField] Vector3 scaleSize = Vector3.one;

	public bool IsGrowing => isGrowing;
	public bool IsTargettedBySheep => isTargettedBySheep;

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
		transform.localScale = Vector3.zero;
		isTargettedBySheep = false;
		isGrowing = true;
	}

	void GrowBush()
	{
		if (!isGrowing)
			return;
		if (transform.localScale == scaleSize)
			isGrowing = false;
        transform.localScale = Vector3.MoveTowards(transform.localScale, scaleSize, Time.deltaTime * growingSpeed);
		GrowingProgress(transform.localScale);
    }

	float GrowingProgress(Vector3 _currentScale)
	{
		float _floatScale = _currentScale.x;
		float _targetScale = scaleSize.x;

		float _progress = _floatScale / _targetScale;

		return _progress;
	}
}
