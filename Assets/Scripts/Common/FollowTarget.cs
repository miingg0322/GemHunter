using UnityEngine;

public class FollowTarget : MonoBehaviour
{
    [SerializeField]
    private Transform target;
    [SerializeField]
    private bool x, y, z;

    public void SetTarget(Transform target)
    {
        this.target = target;
    }
    void Update()
    {
        if(target == null ) return;

        // x, y, z 축의 bool 값을 설정해 원하는 축만 추적할 수 있도록 함
        transform.position = new Vector3(
            (x? target.position.x : transform.position.x),
            (y? target.position.y : transform.position.y),
            (z? target.position.z : transform.position.z));
    }
}
