using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Tilemaps;

public class EnemySpawner : MonoBehaviour
{
    [SerializeField]
    private Tilemap tilemap;
    [SerializeField]
    private GameObject enemySpawnTile;
    [SerializeField]
    private GameObject[] enemyPrefabs;
    [SerializeField]
    private Transform parentTransform;
    [SerializeField]
    private GemCollector gemCollector;
    [SerializeField]
    private EntityBase target;
    //[SerializeField]
    //private int enemyCount = 10;

    private Vector3 offset = new Vector3(0.5f, 0.5f, 0);
    private List<Vector3> possibleTiles = new List<Vector3>();
    private MemoryPool enemySpawnTilePool;
    private WaitForSeconds waitTime = new WaitForSeconds(2f);
    public static UnityEvent exitEvent = new UnityEvent();

    public static List<EntityBase> Enemies {  get; private set; } = new List<EntityBase>();
    
    // 2차원 배열은 인스펙터에서 표기되지 않음
    // WayPointData의 1차원 배열을 직렬화하여 인스펙터에 보이게 하고
    // WayPointData는 직렬화하여 인스펙터에 노출되도록 한 것
    [System.Serializable]
    private struct WayPointData
    {
        // 순찰 경로가 여러 지점을 거치도록 배열 가짐
        public GameObject[] wayPoints;
    }

    [SerializeField]
    private WayPointData[] wayPointData;

    private void Awake()
    {
        enemySpawnTilePool = new MemoryPool(enemySpawnTile);

        tilemap.CompressBounds();
        CalculatePossibleTiles();
        /*
        for(int i = 0; i < enemyCount; i++)
        {
            int type = Random.Range(0, enemyPrefabs.Length);
            int index = Random.Range(0, possibleTiles.Count);
            int wayIndex = Random.Range(0, wayPointData.Length);

            // Quarternion.identity 는 원본 프리팹의 회전과 같게 하겠다는 것
            GameObject clone = Instantiate(enemyPrefabs[type], possibleTiles[index], Quaternion.identity, transform);
            clone.GetComponent<EnemyBase>().Initialize(this, parentTransform, gemCollector);
            clone.GetComponent<EnemyFSM>().Setup(target, wayPointData[wayIndex].wayPoints);

            Enemies.Add(clone.GetComponent<EntityBase>());
        }
        */
    }
    
    public void SpawnEnemys(int count)
    {
        Enemies.Clear();
        StartCoroutine(Process(count));
    }

    private IEnumerator Process(int count)
    {
        Vector3[] positions = new Vector3[count];
        for (int i = 0; i < count; i++)
        {
            positions[i] = possibleTiles[Random.Range(0, possibleTiles.Count)];
            enemySpawnTilePool.ActivatePoolItem(positions[i]);
        }

        yield return waitTime;

        enemySpawnTilePool.DeactivateAllPoolItems();

        for (int i = 0;i < count; i++)
        {
            int type = Random.Range(0, enemyPrefabs.Length);
            int wayIndex = Random.Range(0, wayPointData.Length);

            GameObject clone = Instantiate(enemyPrefabs[type], positions[i],
                Quaternion.identity, transform);
            clone.GetComponent<EnemyBase>().Initialize(
                this, parentTransform, gemCollector);
            clone.GetComponent<EnemyFSM>().Setup(
                target, wayPointData[wayIndex].wayPoints);

            Enemies.Add(clone.GetComponent<EnemyBase>());
        }
    }

    private void CalculatePossibleTiles()
    {
        BoundsInt bounds = tilemap.cellBounds;
        //Debug.Log($"{bounds.x} {bounds.y} {bounds.size} {bounds.max}");
        TileBase[] allTiles = tilemap.GetTilesBlock(bounds);

        // 외곽 벽에 붙은 타일 제외
        for (int y = 1; y<bounds.size.y-1; y++)
        {
            for(int x = 1; x<bounds.size.x-1; x++)
            {
                // 2차원 배열의 인덱스를 1차원 배열의 인덱스로 변환
                TileBase tile = allTiles[y *  bounds.size.x + x];
                if(tile != null)
                {
                    // Vector3Int 는 2d, 3d 타일맵 같은 그리드 좌표계에서 사용
                    // 타일맵에서 정수 단위의 칸을 다루기 떄문에 사용
                    // 정수 연산이기 때문에 빠르고 오차가 없음
                    Vector3Int localPosition = bounds.position + new Vector3Int(x, y);
                    Vector3 position = tilemap.CellToWorld(localPosition) + offset;
                    position.z = 0;

                    possibleTiles.Add(position);
                }
            }
        }
    }
    public void Deactivate(EntityBase enemy)
    {
        Enemies.Remove(enemy);
        Destroy(enemy.gameObject);

        if(Enemies.Count == 0)
        {
            exitEvent?.Invoke();
        }
    }
}
