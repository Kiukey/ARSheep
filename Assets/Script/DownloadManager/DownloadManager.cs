using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DownloadManager : SingletonTemplate<DownloadManager>
{

    [SerializeField] List<GameObject> items;
    [SerializeField] GridLayoutGroup toSpawn;
    // Start is called before the first frame update
    void Start()
    {
        SpawnButton();
    }

    void SpawnButton()
    {
        for(int i = 0; i < items.Count; i++)
        {
            Instantiate(items[i],toSpawn.transform);
        }
    }

}
