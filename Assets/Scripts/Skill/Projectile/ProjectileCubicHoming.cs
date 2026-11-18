using UnityEngine;

public class ProjectileCubicHoming : ProjectileBase
{
    private Vector2 start, end, point1, point2;
    private float percent = 0, duration = 1f, r = 2;
    private EntityBase target;

    public override void Setup(EntityBase target, float damage, int maxCount, int index)
    {
        base.Setup(target, damage);

        this.target = target;
        start = transform.position;
        end = target.MiddlePoint;

        float angle = 360 / maxCount * index;
        // 플레이어의 현재 회전값을 적용하기 위해 더함
        angle += Utils.GetAngleFromPosition(start, end);

        // start에서 반지름 r만큼 떨어진 angle각도의 둘레 위치
        point1 = Utils.GetNewPoint(start, angle, r);
        // start에서 반지름 2r만큼 떨어진 -angle각도의 둘레 위치
        // S자 곡선 그리도록 설정
        point2 = Utils.GetNewPoint(start, angle * -1, r * 2);
    }

    public override void Process()
    {
        if (percent >= 1f) Destroy(gameObject);
        if(target != null) end = target.MiddlePoint;

        percent += Time.deltaTime / duration;
        transform.position = Utils.CubicCurve(start, point1, point2, end, percent);
    }
}
