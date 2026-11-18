using UnityEngine;

public class SkillEmission : SkillBase
{
    private float attackRate = 0.05f;
    private float currentAttackRate = 0;
    private int currentProjectileCount = 0;

    public override void OnLevelUp()
    {
        // 스킬 습득 (레벨 0에서 1) 시 스탯 증가하지 않도록
        if (currentLevel <= 1) return;

        skillTemplate.attackBuffStats.ForEach(stat =>
        {
            GetStat(stat).BonusValue += stat.DefaultValue;
        });
    }

    public override void OnSkill()
    {
        if (isSkillAvailable)
        {
            int maxCount = (int)GetStat(StatType.ProjectileCount).Value;
            if(Time.time - currentAttackRate > attackRate)
            {
                GameObject projectile = GameObject.Instantiate(skillTemplate.projectile,
                    spawnPoint.position, Quaternion.identity);

                if(projectile.TryGetComponent<ProjectileCubicHoming>(out var p))
                {
                    p.Setup(owner.Target, CalculateDamage(),
                        maxCount, currentProjectileCount);
                }
                else if(projectile.TryGetComponent<ProjectileQuadraticHoming>(out var p2))
                {
                    p2.Setup(owner.Target, CalculateDamage(), maxCount, currentProjectileCount);
                }
                else
                    projectile.GetComponent<ProjectileBase>().Setup(owner.Target,
                        CalculateDamage());

                currentProjectileCount++;
                currentCooldownTime = Time.time;
            }

            if(currentProjectileCount >= maxCount)
            {
                isSkillAvailable = false;
                currentProjectileCount = 0;
                currentCooldownTime = Time.time;
            }
        }
    }
}
