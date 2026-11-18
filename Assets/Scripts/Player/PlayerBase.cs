using System;
using UnityEngine;

public class PlayerBase : EntityBase
{
    [SerializeField]
    private GameController gameController;
    [SerializeField]
    private FollowTarget targetMark;
    [SerializeField]
    private LevelData levelData;
    [SerializeField]
    private SkillSystem skillSystem;
    [SerializeField]
    private Transform pickaxs;

    // 한 프레임에 오르는 경험치 상한선
    // 프레임마다 조금씩 상승하게 해 자연스러운 경험치 상승 표기 가능
    private float expAmount = 2f; 

    public Transform Pickaxs =>pickaxs;
    public bool IsMoved { get; set; } = false;
    // 적 처치하고 축적한 경험치
    public float AccumulationExp { get; set; } = 0f;
    public int GEM { get; private set; } = 0;

    void Awake()
    {
        base.Setup();

        Stats.CurrentExp.DefaultValue = 0;
        Stats.CurrentExp.OnValueChanged += IsLevelUP;
        Stats.GetStat(StatType.Experience).DefaultValue = levelData.MaxExperience[0];
    }

    void Update()
    {
        if (Target == null)
            targetMark.gameObject.SetActive(false);

        SearchTarget();
        Recovery();
        UpdateEXP();
    }

    private void SearchTarget()
    {
        float closestDistSqr = Mathf.Infinity;

        foreach (var entity in EnemySpawner.Enemies)
        {
            float distance = (entity.transform.position - transform.position).sqrMagnitude;
            if (distance < closestDistSqr)
            {
                closestDistSqr = distance;
                Target = entity.GetComponent<EntityBase>();
            }
        }

        if (Target != null)
        {
            targetMark.SetTarget(Target.transform);
            targetMark.transform.position = Target.transform.position;
            targetMark.gameObject.SetActive(true);
        }
    }

    private void Recovery()
    {
        if (Stats.CurrentHP.DefaultValue < Stats.GetStat(StatType.HP).Value)
            Stats.CurrentHP.DefaultValue += Time.deltaTime * Stats.GetStat(StatType.HPRecovery).Value;
        else
            Stats.CurrentHP.DefaultValue = Stats.GetStat(StatType.HP).Value;
    }

    private void UpdateEXP()
    {
        if (Mathf.Approximately(AccumulationExp, 0f) || skillSystem.IsSelectSkill) return;

        float getEXP = AccumulationExp > expAmount ? expAmount : AccumulationExp;
        // 경험치 축적량에서 getEXP만큼 빼서 경험치 상승
        AccumulationExp -= getEXP;
        Stats.CurrentExp.DefaultValue += getEXP;
    }
    private void IsLevelUP(Stat stat, float prev, float current)
    {
        // 경험치 최대인지 확인
        if (!Mathf.Approximately(Stats.CurrentExp.Value,
            Stats.GetStat(StatType.Experience).Value)) return;

        Stats.GetStat(StatType.Level).DefaultValue++;

        Stats.CurrentExp.DefaultValue -= Stats.GetStat(StatType.Experience).Value;

        // 현재 레벨에 맞는 최대 경험치 갱신, 레벨이 최대 경험치 개수보다 크면 마지막 값 적용
        if (Stats.GetStat(StatType.Level).Value < levelData.MaxExperience.Length)
        {
            Stats.GetStat(StatType.Experience).DefaultValue =
                levelData.MaxExperience[(int)Stats.GetStat(StatType.Level).Value - 1];
        }
        else
        {
            Stats.GetStat(StatType.Experience).DefaultValue =
                levelData.MaxExperience[levelData.MaxExperience.Length - 1];
        }
        skillSystem.StartSelectSkill();
    }

    protected override void OnDie()
    {
        //Logger.Log("플레이어 사망");
        gameController.GameOver();
    }

    public void AddGEM()
    {
        GEM++;
    }
}
