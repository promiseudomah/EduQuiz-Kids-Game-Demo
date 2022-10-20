using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimalDragDrop : MonoBehaviour
{
    [SerializeField]
    private Transform animalPlace;

    private Vector2 animalInitialPos;

    [SerializeField]
    private float deltaX, deltaY;
    public static bool locked;


    void Start()
    {
        animalInitialPos = transform.position;
        //get the position of the animal character on game start
    }


    void Update()
    {
        //get touch input
        if (Input.touchCount > 0 && !locked)
        {
            Touch touch = Input.GetTouch(0);
            Vector2 touchpos = Camera.main.ScreenToWorldPoint(touch.position);

            switch (touch.phase)
            {
                case TouchPhase.Began:
                    if (GetComponent<Collider2D>() == Physics2D.OverlapPoint(touchpos))
                    {
                        deltaX = touchpos.x - transform.position.x;
                        deltaY = touchpos.y - transform.position.y;
                    }
                    break;

                case TouchPhase.Moved:
                    if(GetComponent<Collider2D>() == Physics2D.OverlapPoint(touchpos))
                    {
                        transform.position = new Vector2(touchpos.x - deltaX, touchpos.y - deltaY);
                    }
                    break;
                case TouchPhase.Ended:
                    if(Mathf.Abs(transform.position.x - animalPlace.position.x) <= 0.5f &&
                        Mathf.Abs(transform.position.y - animalPlace.position.y) <= 0.5f)
                    {
                        transform.position = new Vector2(animalPlace.position.x, animalPlace.position.y);
                        locked = true;
                    }
                    else
                    {
                        transform.position = new Vector2(animalInitialPos.x, animalInitialPos.y);
                    }
                    break;
            }
        }
    }
}

