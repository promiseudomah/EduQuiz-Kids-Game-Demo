/* 
    ------------------- peziudomah codes -------------------

                        Kid's Game Project

    --------------------------------------------------------
 */

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{
    public void OpenSceneInGame(string scenename)
    {
        SceneManager.LoadScene(scenename);
        //load up the Game scene with button and scenename specified in editor
    }

    [SerializeField] Text PuzzleCount;
    [SerializeField] Text MathCount;

    private void Start()
    {
        if (PlayerPrefs.HasKey("PuzzleCount"))
        {
            return;
        }

        else
        {
            PlayerPrefs.SetString("PuzzleCount", "0/3");
            PlayerPrefs.SetString("MathCount", "0/2");
        }
    }
    void Update()
    {
        PuzzleCount.text = PlayerPrefs.GetString("PuzzleCount");
        MathCount.text = PlayerPrefs.GetString("MathCount");
    }

    public void Quit()
    {
        Application.Quit();

    }

    public void Reset()
    {
        PlayerPrefs.DeleteAll();
        Quit();

    }

}
