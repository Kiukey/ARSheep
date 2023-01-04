using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BushImageBehaviour : MonoBehaviour
{
	[SerializeField] bool isTargettedBySheep = false;

	IEnumerator SpawnTimer()
	{
		yield return new WaitForSeconds(3);
		isTargettedBySheep=false;
		gameObject.SetActive(true);
	}

	void OnDisable()
	{
		StartCoroutine(SpawnTimer());
	}

	public void SetIsTargetBySheep(bool _enable)
	{
		isTargettedBySheep=_enable;
	}
}
