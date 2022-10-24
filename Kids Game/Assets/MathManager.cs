
using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MathManager : MonoBehaviour
{
    public Text[] CountTexts;
    //count text object

    //delay to check answer
    [SerializeField]
    float delay = 0.4f;

    public Text[] MathQuestionText;
    //question text object

    public Text[] MathAnswerText;
    //player answer text object

    public GameObject[] Math_ObjectContainer;
    //Puzzle Pieces *Containers
    // For this project there are only going to be three Puzzle Containers (Dinosaur. Helicopter, Zebra).

    public GameObject[] Math_VictoryScreen;
    //Puzzle Pieces *Victory Screens
    // For this project there are only going to be three victory screens, (Dinosaur Victory, Helicopter Victory, Zebra Victory).

    [SerializeField] GameObject[] Correct_image;
    [SerializeField] GameObject[] Wrong_image;
    [SerializeField] GameObject[] Container;

    public int Count = 0;
    //count

    private void Start()
    { 
        Count = 0;

        CallNextMath();
        //call next Math question

        Reset_Remarks();
    }

    void Update()
    {
        //for Math Counter
        for (int i = 0; i < CountTexts.Length; i++)
        {
            PlayerPrefs.SetString("MathCount", CountTexts[i].text);
        }
        

    }

 

    public void Counter()
    {
        Count += 1;
        //Count for the Puzzles completed

        for (int i = 0; i < CountTexts.Length; i++)
        {
            CountTexts[i].text = Count.ToString() + "/" + (Math_ObjectContainer.Length - 1);
        }
        

        // Puzzle_ObjectContainer.Length to be the total amount of puzzles in the scene.
    }

    //Add delay to check the answer
    public void CheckAnswer() => Invoke("CheckAnswerCode", delay); 
    void CheckAnswerCode()
    {
        //1 + 1 + 1 =
        //to get the question before the = sign  
        string[] stringMathQuestion = MathQuestionText[Count].text.Split('=');



        //to get the question in the array
        string Question = stringMathQuestion[0];

        DataTable dt = new DataTable();
        var v = dt.Compute(Question, "");

        //cast to int
        int ans = (int)v;
        Debug.Log(ans);

        //to get the answer in the array
        string playerAnswer = MathAnswerText[Count].text;

        if (playerAnswer == ans.ToString())
        {
            Debug.Log(playerAnswer + " Correct ! = " + ans);
            Container[Count].SetActive(true);
            Correct_image[Count].SetActive(true);

            Invoke("CallVictoryScreenForPuzzle", 0.6f);
        }

        else
        {
            Debug.Log(playerAnswer + " Wrong ! = " + ans);
            Container[Count].SetActive(true);
            Wrong_image[Count].SetActive(true);

            Invoke("Reset_Remarks", 0.6f);
        }

            
        
    }

    void Reset_Remarks()
    {
        
        Correct_image[Count].SetActive(false);
        Wrong_image[Count].SetActive(false);
        Container[Count].SetActive(false);

    }

    public void CallNextMath()
    {

        for (int i = 0; i < Math_VictoryScreen.Length; i++)
        {

            Math_VictoryScreen[i].SetActive(false);

            //disable all victory screens to load next puzzle screen
        }

        for (int i = 0; i < Math_ObjectContainer.Length; i++)
        {
            if (i == Count)
            {
                Math_ObjectContainer[i].SetActive(true);
            }

            else
            {
                Math_ObjectContainer[i].SetActive(false);
            }
        }

    }

    public void CallVictoryScreenForPuzzle()
    {
        Math_VictoryScreen[Count].SetActive(true);
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


