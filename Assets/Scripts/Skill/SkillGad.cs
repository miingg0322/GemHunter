using System.Collections;
using UnityEngine;

public class SkillGad : MonoBehaviour
{
    [SerializeField]
    private ProjectilGad projectile;

    private float currentCooldownTime;
    private Transform spawnPoint;
    private PlayerBase owner;
    private WaitForSeconds attackRate = new WaitForSeconds(0.05f);

    public void Setup(PlayerBase owner, Transform spawnPoint)
    {
        this.owner = owner;
        this.spawnPoint = spawnPoint;
    }
    public void OnSkill()
    {
        if (Time.time - currentCooldownTime > owner.Stats.GetStat(StatType.CooldownTime).Value)
        {
            StartCoroutine(SpawnProjectile());

            currentCooldownTime = Time.time;
        }
    }

    private (float damage, bool isCriticalHit) CalculateDamage()
    {
        bool isCritHit =  Random.value < owner.Stats.GetStat(StatType.CriticalChance).Value;
        float damage = owner.Stats.GetStat(StatType.Damage).Value;

        if (isCritHit)
            return (damage * owner.Stats.GetStat(StatType.CriticalMultiplier).Value, isCritHit);
        else
            return (damage, isCritHit);
    }

    private IEnumerator SpawnProjectile()
    {
        int projectileCount = 0;
        while(projectileCount < (int)owner.Stats.GetStat(StatType.ProjectileCount).Value)
        {
            var result = CalculateDamage();
            ProjectilGad gad = Instantiate(projectile, spawnPoint.position, Quaternion.identity);
            gad.Setup(owner, owner.Target, result.damage, result.isCriticalHit);

            projectileCount++;

            yield return attackRate;
        }
    }
}
