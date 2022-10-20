/* 
    ------------------- peziudomah codes -------------------

                        Kid's Game Project

    --------------------------------------------------------
 */

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager InstancegameManager;

    public Text CountText;
    //count text object

    public GameObject[] Puzzle_ObjectContainer;
    //Puzzle Pieces *Containers

    public GameObject[] Puzzle_VictoryScreen;
    //Puzzle Pieces *Victory Screens

    public int Count = 0;
    //count

    private void Start()
    {
        InstancegameManager = this;
        Count = 0;
        CallNextPuzzle();
    }

    public void Counter()
    {
        Count += 1;
        CountText.text = Count.ToString()+ "/10";
    }

    public void CallNextPuzzle()
    {

        for (int i = 0; i < Puzzle_VictoryScreen.Length; i++)
        {

            Puzzle_VictoryScreen[i].SetActive(false);

            //disable all victory screens to load next puzzle screen
        }

        for (int i = 0; i < Puzzle_ObjectContainer.Length; i++)
        {
            if (i == Count)
            {
                Puzzle_ObjectContainer[i].SetActive(true);
            }

            else
            {
                Puzzle_ObjectContainer[i].SetActive(false);
            }
        }

    } 

    public void CallVictoryScreenForPuzzle()
    {
         Puzzle_VictoryScreen[Count].SetActive(true);
         Debug.Log("Victory");
        //call  victory screen to corresponding puzzle conatiner

        Counter();
        //increase puzzle count success
    }

    public void OpenSceneInGame(string scenename)
    {
        SceneManager.LoadScene(scenename);
        //load up the Game scene with button and scenename specified in editor
    }

}
