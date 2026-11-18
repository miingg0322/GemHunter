using TMPro;
using UnityEngine;

public class GameController : MonoBehaviour
{
    [SerializeField]
    private ChapterData[] chapters;
    [SerializeField]
    private EnemySpawner enemySpawner;
    [SerializeField]
    private TextMeshPro textStageNumber;
    [SerializeField]
    private UIRewardResult uiRewardResult;
    [SerializeField]
    private PlayerBase player;
    [SerializeField]
    private float enemyCountSclae = 0.15f;

    private int currentChapter = 0;
    private int maxStage;
    private int currentStage = 0;
    private int baseEnemyCount = 10;

    private void Start()
    {
        currentChapter = PlayerPrefs.GetInt(Constants.ChapterIndex);
        maxStage = chapters[currentChapter].StageDataTable.maxStage;

        EnemySpawner.exitEvent.AddListener(SetupStage);
        SetupStage();
    }

    public void SetupStage()
    {
        currentStage++;

        if(currentStage > maxStage)
        {
            //Logger.Log("챕터 클리어");
            GameClear();
            return;
        }

        textStageNumber.text = $"STAGE {currentStage:D2}";

        enemySpawner.SpawnEnemys((int)(baseEnemyCount + currentStage * enemyCountSclae));
    }

    // 챕터 클리어
    public void GameClear()
    {
        SetTimeSclae(0);

        long baseExp = (long)(currentStage * (5 + (currentChapter + 1) * 1.2f));
        long bonusExp = (long)Mathf.Pow(2, (currentChapter + 1)) * 100;
        long bonusGem = (currentChapter + 1) * 5000;
        // 이미 챕터 클리어한 적이 있는지
        bool isNewRecord = Database.DBItem.chapters[currentChapter].bestStage != maxStage;

        Database.DBItem.player.experience += (baseExp + bonusExp);
        Database.DBItem.goods.gem += (player.GEM + bonusGem);
        Database.DBItem.chapters[currentChapter].bestStage = maxStage;

        // 다음 챕터가 존재 하는 지
        if (currentChapter + 1 < Database.DBItem.chapters.Length)
            Database.DBItem.chapters[currentChapter + 1].isUnlock = true;

        Database.Write();

        uiRewardResult.OnRewardResult(isNewRecord, true, currentChapter, maxStage,
            new (RewardType, long)[] {
                (RewardType.GEM, player.GEM), (RewardType.EXP, baseExp),
                (RewardType.GEM, bonusGem), (RewardType.EXP, bonusExp)
            });

    }

    public void GameOver()
    {
        SetTimeSclae(0);

        long exp = (long)(currentStage * (5 + (currentChapter + 1) * 1.2f));
        bool isNewRecord = Database.DBItem.chapters[currentChapter].bestStage < maxStage;

        Database.DBItem.player.experience += exp;
        Database.DBItem.goods.gem += player.GEM;
        Database.DBItem.chapters[currentChapter].bestStage = maxStage;

        if (isNewRecord)
            Database.DBItem.chapters[currentChapter].bestStage = currentStage;

        Database.Write();

        uiRewardResult.OnRewardResult(isNewRecord, false, currentChapter, currentStage,
            new (RewardType, long)[]
            {
                (RewardType.GEM, player.GEM), (RewardType.EXP, exp)
            });
    }

    public void SetTimeSclae(float scale)
    {
        Time.timeScale = scale;
    }
}
