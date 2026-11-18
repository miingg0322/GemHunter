using UnityEngine;
using UnityEngine.InputSystem;

public static class Utils
{
    public static Quaternion RotateToTarget(Vector2 owner, Vector2 target, float weight = 0)
    {
        // owner에서 target까지의 거리 계산
        float dx = target.x - owner.x;
        float dy = target.y - owner.y;

        // 두 점을 연결하는 방향의 각도 계산
        float degree = Mathf.Atan2(dy, dx) * Mathf.Rad2Deg;

        // 계산한 각도만큼 회전
        return Quaternion.Euler(0, 0, degree - weight);
    }

    public static float GetAngleFromPosition(Vector2 owner, Vector2 target)
    {
        // 각도 = arctan(y, x)
        float dx = target.x - owner.x;
        float dy = target.y - owner.y;

        float degree = Mathf.Atan2(dy, dx) * Mathf.Rad2Deg;

        return degree;
    }

    public static Vector3 GetPositionFromAngle(float radius, float angle)
    {
        Vector3 position = Vector3.zero;
        angle = DegreeToRadian(angle);

        position.x = Mathf.Cos(angle) * radius;
        position.y = Mathf.Sin(angle) * radius; 
        return position;
    }

    /// <summary>
    /// 삼각함수에선 Radian 값으로 계산하기 때문에
    /// Degree값을 Radian값으로 변환.
    /// 1도는 PI/180 * angle
    /// </summary>
    /// <param name="angle"></param>
    /// <returns></returns>
    public static float DegreeToRadian(float angle)
    {
        return Mathf.PI * angle / 180;
    }

    public static Vector2 GetNewPoint(Vector3 start, float angle, float r)
    {
        angle = DegreeToRadian(angle);

        // 원점(start)를 기준으로 X, Y 좌표를 구하므로 시작 지점의 좌표를 더한다.
        Vector2 position = Vector2.zero;
        position.x = Mathf.Cos(angle) * r + start.x;
        position.y = Mathf.Sin(angle) * r + start.y;
        
        return position;
    }

    /// <summary>
    /// Vector2.Lerp()는 최댓값 최솟값 벗어나지 않도록 보정
    /// 이 메소드는 보정없이 보간
    /// </summary>
    /// <param name="a"></param>
    /// <param name="b"></param>
    /// <param name="t"></param>
    /// <returns></returns>
    public static Vector2 Lerp(Vector2 a, Vector2 b, float t)
    {
        return a + (b - a) * t;
    }

    /// <summary>
    /// 곡선이동이나 포물선이동을 위한 2차 베지어 곡선 점
    /// </summary>
    /// <param name="a"></param>
    /// <param name="b"></param>
    /// <param name="c"></param>
    /// <param name="t"></param>
    /// <returns></returns>
    public static Vector2 QuadraticCurve(Vector2 a, Vector2 b, Vector2 c, float t)
    {
        Vector2 p1 = Lerp(a, b, t);
        Vector2 p2 = Lerp(b, c, t);

        return Lerp(p1, p2, t);
    }

    /// <summary>
    /// 3차 베지어 곡선 점
    /// </summary>
    /// <param name="a"></param>
    /// <param name="b"></param>
    /// <param name="c"></param>
    /// <param name="d"></param>
    /// <param name="t"></param>
    /// <returns></returns>
    public static Vector2 CubicCurve(Vector2 a, Vector2 b, Vector2 c, Vector2 d, float t)
    {
        Vector2 p1 = QuadraticCurve(a, b, c, t);
        Vector2 p2 = QuadraticCurve(b, c, d, t);

        return Lerp(p1, p2, t);
    }

    public static bool IsAnyInputDown()
    {
        if (Keyboard.current != null && Keyboard.current.anyKey.wasPressedThisFrame)
            return true;

        if (Mouse.current != null && Mouse.current.leftButton.wasPressedThisFrame)
            return true;

        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.wasPressedThisFrame)
            return true;

        return false;
    }
}
