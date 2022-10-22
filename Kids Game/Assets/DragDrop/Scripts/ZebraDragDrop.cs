/* 
    ------------------- peziudomah codes -------------------

                        Kid's Game Project
                   Zebra Drag and Drop Script

    --------------------------------------------------------
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ZebraDragDrop : MonoBehaviour, IPointerUpHandler, IPointerDownHandler, IBeginDragHandler,IEndDragHandler, IDragHandler
{

    [SerializeField] private Canvas canvas;

    private RectTransform rectTransform;
    private CanvasGroup canvasGroup;

    [HideInInspector]
    public Vector2 InitialPosition;

    public GameObject SpriteObject;
    //Zebra Image Object

    //bool to check for drop status, and save status.

    private void Awake() {
        rectTransform = GetComponent<RectTransform>();
        canvasGroup = GetComponent<CanvasGroup>();
        InitialPosition = transform.position;

        //save initial position
    }

    public void OnBeginDrag(PointerEventData eventData) {
        //Debug.Log("OnBeginDrag");
        canvasGroup.alpha = .4f;
        canvasGroup.blocksRaycasts = false;
    }

    public void OnDrag(PointerEventData eventData) {

        //Debug.Log("OnDrag");
        rectTransform.anchoredPosition += eventData.delta / canvas.scaleFactor;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        //Debug.Log("OnEndDrag");
        canvasGroup.alpha = 1f;
        canvasGroup.blocksRaycasts = true;  
    }

    public void OnPointerDown(PointerEventData eventData) 
    {
       //Debug.Log("OnPointerDown");

    }
 
    public void OnPointerUp(PointerEventData eventData)
    {
        Debug.Log("OnPointerUp");

      
        SpriteObject.transform.position = InitialPosition;
  
        //reset gameobject position to initial position
    }


}
