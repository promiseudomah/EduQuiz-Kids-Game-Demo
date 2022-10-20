/* 
    ------------------- peziudomah codes -------------------

                        Kid's Game Project

    --------------------------------------------------------
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ItemSlot : MonoBehaviour, IDropHandler {

    public void OnDrop(PointerEventData eventData) {

        Debug.Log("OnDrop");
        if (eventData.pointerDrag != null)
        {
            eventData.pointerDrag.GetComponent<RectTransform>().anchoredPosition =
                GetComponent<RectTransform>().anchoredPosition;

            Debug.Log("Correct Drop");
            //drop animal/sprite in it's correct place

            Invoke("VictoryScreen", 0.8f);

            int x = GameManager.InstancegameManager.Count;
            Debug.Log(x);
            //count value

            string y = GameManager.InstancegameManager.CountText.text;
            Debug.Log(y);
            //countText string



        }
    }

    void VictoryScreen()
    {
        GameManager.InstancegameManager.CallVictoryScreenForPuzzle();
        //call victory screen to corresponding victory screen  
    }


}
