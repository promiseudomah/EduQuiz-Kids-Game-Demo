using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Burst : MonoBehaviour
{
    public Rigidbody Cube;

    private void Start()
    {
        Cube.AddForce(0,0,40, ForceMode.Impulse);
    }
}
