using NUnit.Framework;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class MemoryPool
{
    private class PoolItem
    {
        public GameObject gameObject;
        private bool isActive;

        public bool IsActive
        {
            set
            {
                isActive = value;
                gameObject.SetActive(isActive);
            }
            get => isActive;
        }
    }

    private GameObject poolObject;
    private List<PoolItem> poolItemList;

    // 오브젝트 부족할 때 Instantiate()로 추가할 오브젝트 개수
    private readonly int increaseCount = 5;

    public int MaxCount { private set; get; } // 리스트에 등록된 오브젝트 개수
    public int ActiveCount { private set; get; } // 활성화 중인 오브젝트 개수

    private Vector3 tempPosition = new Vector3(float.MaxValue, float.MaxValue, float.MaxValue);

    public MemoryPool(GameObject poolObject)
    {
        MaxCount = 0;
        ActiveCount = 0;
        this.poolObject = poolObject;

        poolItemList = new List<PoolItem>();

        InstantiateObjects();
    }

    /// <summary>
    /// increaseCount 단위로 오브젝트 생성
    /// </summary>
    public void InstantiateObjects()
    {
        MaxCount += increaseCount;

        for (int i = 0; i < increaseCount; i++)
        {
            PoolItem poolItem = new PoolItem();

            poolItem.gameObject = GameObject.Instantiate(poolObject);
            poolItem.gameObject.transform.position = tempPosition;
            poolItem.IsActive = false;

            poolItemList.Add(poolItem);
        }
    }

    /// <summary>
    /// 현재 관리 중인 모든 오브젝트 제거
    /// </summary>
    public void DestroyObjects()
    {
        if (poolItemList == null) return;

        int count = poolItemList.Count;
        for(int i = 0;i < count; i++)
        {
            GameObject.Destroy(poolItemList[i].gameObject);
        }

        poolItemList.Clear();
    }

    /// <summary>
    /// poolItemList에 저장된 오브젝트 활성화해서 재사용.
    /// 모든 오브젝트가 사용 중인 경우 추가 생성.
    /// </summary>
    public GameObject ActivatePoolItem(Vector3 position)
    {
        if (poolItemList == null) return null;

        // 생성해둔 오브젝트 수와 활성화된 오브젝트 수 비교해서 같다면 추가로 생성
        if(MaxCount == ActiveCount)
        {
            InstantiateObjects();
        }

        int count = poolItemList.Count;
        for (int i = 0; i < count; i++)
        {
            PoolItem poolItem = poolItemList[i];

            if(poolItem.IsActive == false)
            {
                ActiveCount++;

                poolItem.gameObject.transform.position = position;
                poolItem.IsActive = true;

                return poolItem.gameObject;
            }
        }
        return null;
    }

    public void DeactivatePoolItem(GameObject removeObject)
    {
        if (poolItemList == null || removeObject == null) return;

        int count = poolItemList.Count;
        for (int i = 0; i < count; i++)
        {
            PoolItem poolItem = poolItemList[i];

            if(poolItem.gameObject == removeObject)
            {
                ActiveCount--;

                poolItem.IsActive = false;
                poolItem.gameObject.transform.position = tempPosition;

                return;
            }
        }
    }

    public void DeactivateAllPoolItems()
    {
        if (poolItemList == null) return;

        foreach( PoolItem poolItem in poolItemList)
        {
            if(poolItem.gameObject != null && poolItem.IsActive)
            {
                poolItem.IsActive = false;
                poolItem.gameObject.transform.position = tempPosition;
            }
        }
        ActiveCount = 0;
    }
}
