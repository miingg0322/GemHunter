using System.Net;
using UnityEngine;

public class EnemyBase : EntityBase
{
    [SerializeField]
    private Transform hudPoint;
    [SerializeField]
    private GameObject uiPrefab;
    [SerializeField]
    private int gemMin = 5, gemMax = 21;

    private EnemySpawner enemySpawner;
    private GemCollector gemCollector;

    private void Awake()
    {
        Setup();
    }
    public void Initialize(EnemySpawner enemySpawner, Transform parent, GemCollector gemCollector)
    {
        this.enemySpawner = enemySpawner;
        this.gemCollector = gemCollector;
        GameObject clone = Instantiate(uiPrefab, parent);
        clone.transform.localScale = Vector3.one;
        clone.GetComponent<FollowTargetUI>().Setup(hudPoint);
        clone.GetComponentInChildren<UIHP>().Setup(this);
    }
    protected override void Setup()
    {
        Stats.GetStat(StatType.HP).BonusValue = 50 * (Stats.GetStat(StatType.Level).Value - 1);

        base.Setup();
    }

    protected override void OnDie()
    {
        gemCollector.SpawnGemEffect(transform.position, Random.Range(gemMin, gemMax));
        (Target as PlayerBase).AccumulationExp += Stats.CurrentExp.Value;
        enemySpawner.Deactivate(this);
    }
}
