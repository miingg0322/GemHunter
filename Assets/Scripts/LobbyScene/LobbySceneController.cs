using UnityEngine;

public class LobbySceneController : MonoBehaviour
{
    [SerializeField]
    private GameObject chapterIconPrefab;
    [SerializeField]
    private Transform parentContent;
    [SerializeField]
    private ChapterData[] allChapter;
    [SerializeField]
    private SwipeUI swipeUI;
    [SerializeField]
    private HeartSystem heartSystem;

    private void Awake()
    {
        for (int i = 0; i < allChapter.Length; i++)
        {
            GameObject icon = Instantiate(chapterIconPrefab, parentContent);
            icon.GetComponent<UIChapterIcon>().Setup(i, allChapter[i]);
        }
    }

    public void ButtonEvent_GameStart()
    {
        int index = swipeUI.CurrentPage;

        if (Database.DBItem.chapters[index].isUnlock == false)
        {
            Logger.Log("잠긴 챕터입니다.");
            return;
        }

        if(heartSystem.UserHeart(5) == false)
        {
            Logger.Log("하트가 부족합니다.");
            return;
        }

        //Logger.Log($"챕터 {index + 1} 시작");
        PlayerPrefs.SetInt(Constants.ChapterIndex, index);

        SceneLoader.Instance.LoadScene(SceneNames.Game);
    }
}
