using System;
using UnityEngine;
using UnityEngine.UI;

public class UIHP : MonoBehaviour
{
    [SerializeField]
    private Image image;
    [SerializeField]
    private EntityBase entity;

    private void Awake()
    {
        // player
        if (entity != null)
            entity.Stats.CurrentHP.OnValueChanged += UpdateHP;
    }

    public void Setup(EntityBase entity)
    {
        this.entity = entity;
        // enemy awake 작동 안해서 setup에서 이벤트 연결
        entity.Stats.CurrentHP.OnValueChanged += UpdateHP;
    }

    private void UpdateHP(Stat stat, float prev, float current)
    {
        image.fillAmount = entity.Stats.CurrentHP.Value / entity.Stats.GetStat(StatType.HP).Value;
    }

}
