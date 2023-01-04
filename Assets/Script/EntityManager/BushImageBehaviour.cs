using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BushImageBehaviour : MonoBehaviour
{
	[SerializeField] bool isTargettedBySheep = false;
	[SerializeField] MeshRenderer mesh = null;
	public bool IsTargettedBySheep => isTargettedBySheep;
	IEnumerator SpawnTimer()
	{
		yield return new WaitForSeconds(3);
		isTargettedBySheep=false;
		if (!mesh)
			yield break;
		mesh.enabled = true;
	}
	public void SetIsTargetBySheep(bool _enable)
	{
		isTargettedBySheep=_enable;
	}
	public void DeActivate()
	{
		if (!mesh)
			return;
		mesh.enabled = false;
		StartCoroutine(SpawnTimer());
	}
}
