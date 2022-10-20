/* 
    ------------------- peziudomah codes -------------------

                        Kid's Game Project

    --------------------------------------------------------
 */

using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{
    public void OpenSceneInGame(string scenename)
    {
        SceneManager.LoadScene(scenename);
        //load up the Game scene with button and scenename specified in editor
    }
}
