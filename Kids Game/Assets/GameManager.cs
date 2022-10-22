/* 
    ------------------- peziudomah codes -------------------

                        Kid's Game Project
                        GameManager Script.

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
    // For this project there are only going to be three Puzzle Containers (Dinosaur. Helicopter, Zebra).

    public GameObject[] Puzzle_VictoryScreen;
    //Puzzle Pieces *Victory Screens
    // For this project there are only going to be three victory screens, (Dinosaur Victory, Helicopter Victory, Zebra Victory).

    public int Count = 0;
    //count

    private void Start()
    {
        InstancegameManager = this;
        Count = 0;

        CallNextPuzzle();
        //call next puzzle method
    }

    public void Counter()
    {
        Count += 1;
        //Count for the Puzzles completed

        CountText.text = Count.ToString() + "/" + Puzzle_ObjectContainer.Length;

        // Puzzle_ObjectContainer.Length to be the total amount of puzzles in the scene.
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

        //Two Scenes are Added to the index - Menu Scene, Puzzle Scene, Math Scene.

    }
}
