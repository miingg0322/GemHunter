using UnityEngine;

public class PlayerRenderer : MonoBehaviour
{
    [SerializeField]
    private Transform playerModel;
    [SerializeField]
    private Transform playerArmsModel;
    [SerializeField]
    private ParticleSystem footStepEffect;
    private ParticleSystem.EmissionModule footEmission;
    private Animator animator;

    void Awake()
    {
        footEmission = footStepEffect.emission;
        animator = GetComponent<Animator>();
    }

    public void OnMovement(float speed)
    {
        animator.SetFloat("moveSpeed", speed);
    }

    public void OnFootStepEffect(bool isMoved)
    {
        footEmission.rateOverTime = isMoved ? 20 : 0;
    }

    // SpriteRenderer의 Flip은 화면에 출력되는 이미지만 반전됨
    // 왼쪽 이동이면 x 음수, 오른쪽이면 양수
    public void SpriteFlipX(float x)
    {
        Vector3 currentScale = playerModel.localScale;
        currentScale.x = x < 0 ? -1.5f : 1.5f;
        playerModel.localScale = currentScale;
    }

    public void LookRotation(PlayerBase playerBase)
    {
        if (playerBase.IsMoved)
        {
            playerArmsModel.rotation = Quaternion.identity;
        }
        else
        {
            if (playerBase.Target == null) 
                return;

            Vector3 target = playerBase.Target.MiddlePoint;

            float flip = target.x - transform.position.x < 0 ? -1 : 1;
            SpriteFlipX(flip);

            // 부모 오브젝트 회전에 따른 무기 방향 보정, 왼쪽 향할 때 180 만큼 가중치 줌
            playerArmsModel.rotation = Utils.RotateToTarget(
                playerArmsModel.position, target, (1 - flip) * 90);
        }
    }
}
