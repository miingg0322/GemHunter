using System.Collections;
using System.Linq;
using UnityEngine;
using UnityEngine.AI;
using Unity.Behavior;

// 행동트리 사용으로 인한 제거
//public enum EnemyState { None = -1, Attack, }
public class EnemyFSM : MonoBehaviour
{
    /* 행동트리 사용으로 인한 제거
    [SerializeField]
    private GameObject projectilePrefab;
    [SerializeField]
    private Transform projectileSpawnPoint;
    */
    private EnemyBase owner;
    private NavMeshAgent navMeshAgent;
    private BehaviorGraphAgent behaviorAgent;
    private WeaponBase currentWeapon;
    //private EnemyState enemyState;

    private void Awake()
    {
        owner = GetComponent<EnemyBase>();
        navMeshAgent = GetComponent<NavMeshAgent>();
        behaviorAgent = GetComponent<BehaviorGraphAgent>();
        currentWeapon = GetComponent<WeaponBase>();

        navMeshAgent.updateRotation = false;
        navMeshAgent.updateUpAxis = false;
        currentWeapon.Setup(owner);
        //ChangeState(EnemyState.Attack);
    }

    public void Setup(EntityBase target, GameObject[] wayPoints)
    {
        owner.Target = target;

        //navMeshAgent.SetDestination(target.MiddlePoint);
        // BlackBoard에 선언한 PatrolPoints 변수에 wayPoints를 저장한다.
        behaviorAgent.SetVariableValue("PatrolPoints", wayPoints.ToList());
        behaviorAgent.SetVariableValue("Target", target.gameObject);
    }
    
    /* 행동 트리 사용으로 인한 제거
    public void ChangeState(EnemyState newState)
    {

        StopCoroutine(enemyState.ToString());
        enemyState = newState;
        StartCoroutine(enemyState.ToString());
    }

    private IEnumerator Attack()
    {
        var wait = new WaitForSeconds(owner.Stats.GetStat(StatType.CooldownTime).Value);
        while (true)
        {
            yield return wait;

            Vector3 target = owner.Target.MiddlePoint;
            GameObject clone = Instantiate(projectilePrefab);
            clone.transform.position = projectileSpawnPoint.position;
            clone.GetComponent<EnemyProjectile>().Setup(target, owner.Stats.GetStat(StatType.Damage).Value);
        }
    }
    */
}
