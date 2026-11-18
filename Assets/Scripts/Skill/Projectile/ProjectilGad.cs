using System;
using UnityEngine;

public class ProjectilGad : MonoBehaviour
{
    [SerializeField]
    private Transform hitEffect;
    [SerializeField]
    private UIDamageText damageText;
    [SerializeField]
    private float metaRadius = 4f;

    private MovementRigidbody2D movementRigidbody2D;
    private ScaleEffect scaleEffect;
    private EntityBase target;
    private float damage;
    private bool isCritical;
    private int metastasisCount;
    private int targetLayer;

    public void Setup(EntityBase owner, EntityBase target, float damage, bool isCritical = false)
    {
        movementRigidbody2D = GetComponent<MovementRigidbody2D>();
        scaleEffect = GetComponent<ScaleEffect>();
        this.target = target;
        this.damage = damage;
        this.isCritical = isCritical;
        metastasisCount = (int)owner.Stats.GetStat(StatType.MetastasisCount).Value;

        // 1 << n은 1을 왼쪽으로 n칸 밀어서 n번째 비트만 켜는 연산
        // 당연히 n 은 0 부터 시작. 0000 0000 0000 0000 0000 0000 0100 0000 이 됨
        // 개인적으로 GetMask 가 더 편해보임
        targetLayer = 1 << LayerMask.NameToLayer("Enemy");
        
        scaleEffect.Play(transform.localScale*0.35f, transform.localScale);
        transform.rotation = Utils.RotateToTarget(transform.position, target.MiddlePoint, 90);
        movementRigidbody2D.MoveTo((target.MiddlePoint - transform.position).normalized);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Wall"))
        {
            Destroy(gameObject);
        }
        else if (collision.CompareTag("Enemy") && collision.TryGetComponent<EntityBase>(out var entity))
        {
            if (entity != target) return;
            if (hitEffect != null)
            {
                Instantiate(hitEffect, transform.position, Quaternion.identity);
            }
            if(damageText != null)
            {
                UIDamageText clone = Instantiate(damageText, transform.position, Quaternion.identity);
                clone.Setup(damage.ToString("F0"), isCritical ? Color.red : Color.white);
            }
            entity.TakeDamage(damage);

            if (metastasisCount > 0)
            {
                metastasisCount--;
                FindNextTarget();
            }            
            else Destroy(gameObject);
        }
    }

    private void FindNextTarget()
    {
        Collider2D[] colliders = Physics2D.OverlapCircleAll(
            transform.position, metaRadius, targetLayer);
        EntityBase nextTarget = null;
        Logger.Log($"전이 범위 내 적 수: {colliders.Length}");
        for(int i = 0; i < colliders.Length; i++)
        {
            if (colliders[i].CompareTag("Enemy")&&
                colliders[i].TryGetComponent<EntityBase>(out var entity)&&
                !entity.Equals(target))
            {
                nextTarget = entity;
                break;
            }
        }

        if (nextTarget != null)
        {
            target = nextTarget;
            transform.rotation = Utils.RotateToTarget(transform.position, target.MiddlePoint, 90);
            movementRigidbody2D.MoveTo((target.MiddlePoint - transform.position).normalized);
        }
        else Destroy(gameObject);
    }
}
