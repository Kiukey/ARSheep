using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IManagedEntity
{
    void Register();
    void Unregister();
}