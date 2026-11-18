using System;
using UnityEngine;
using UnityEngine.Events;

public class HeartSystem : MonoBehaviour
{
    [SerializeField]
    private UnityEvent<int, int> onValueChangedHeart;
    [SerializeField]
    private UnityEvent<string> onValueChangedTimer;

    private int maxHeart;
    private int currentHeart;
    private float timer;
    private float refillTime = 1200f;

    public float Timer
    {
        private set
        {
            timer = value;
            onValueChangedTimer.Invoke((CurrentHeart < maxHeart) ?
                $"{TimeSpan.FromSeconds(timer):mm\\:ss}" : "Full");
        }
        get => timer;
    }

    public int CurrentHeart
    {
        private set
        {
            currentHeart = value;
            onValueChangedHeart.Invoke(currentHeart, maxHeart);
        }
        get => currentHeart;
    }

    private void Awake()
    {
        maxHeart = Database.DBItem.goods.maxHeart;
        refillTime = Database.DBItem.goods.heartRefillTime;

        LoadData();
    }

    private void Update()
    {
        if(CurrentHeart < maxHeart)
        {
            Timer -= Time.deltaTime;

            if(Timer <= 0f)
            {
                CurrentHeart++;

                if (CurrentHeart < maxHeart) Timer = refillTime;

                SaveData();
            }
        }
    }

    private void OnApplicationPause(bool pause)
    {
        if (pause) SaveData();
    }

    private void OnApplicationFocus(bool focus)
    {
        if (focus) LoadData();
    }

    private void OnApplicationQuit()
    {
        SaveData();
    }

    public bool UserHeart(int count)
    {
        if(CurrentHeart >= count)
        {
            CurrentHeart -= count;

            // 최대일 때 소모시
            if (CurrentHeart == maxHeart - count)
                Timer = refillTime;

            SaveData();

            return true;
        }

        return false;
    }

    private void SaveData()
    {
        Database.DBItem.goods.heart = CurrentHeart;
        Database.DBItem.goods.heartTimer = Timer;
        Database.DBItem.goods.heartLastTime = DateTime.UtcNow.ToBinary().ToString();
        Database.Write();
    }

    private void LoadData()
    {
        CurrentHeart = Database.DBItem.goods.heart;
        string lastTimeString = Database.DBItem.goods.heartLastTime;

        // 이전 실행에서 저장한 데이터 있는 경우
        if (!string.IsNullOrEmpty(lastTimeString))
        {
            DateTime lastTime = DateTime.FromBinary(Convert.ToInt64(lastTimeString));
            // 이전 저장 시 남은 timer 사용
            float savedTimer = Database.DBItem.goods.heartTimer;
            // 앱 종류 후 흐른 시간
            float elapsed = (float)(DateTime.UtcNow - lastTime).TotalSeconds;
            // 이전에 남은 시간(refillTime - savedTimer) + 흐른 시간 더해 경과 시간 계산
            float totalElapsed = elapsed + (refillTime - savedTimer);

            int heartToRecover = Mathf.FloorToInt((float)totalElapsed / refillTime);
            CurrentHeart = Mathf.Min(CurrentHeart + heartToRecover, maxHeart);

            if (CurrentHeart >= maxHeart) Timer = refillTime;
            else Timer = refillTime - (totalElapsed % refillTime);
        }
        // 첫 실행 또는 데이터 없음
        else
            Timer = refillTime;
    }
}
