using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.InputSystem;

public class SkillSystem : MonoBehaviour
{
    [SerializeField]
    private SkillGad skillGad;
    [SerializeField]
    private Transform skillSpawnPoint;
    [SerializeField]
    private UISkillList uiSkillList;
    [SerializeField]
    private UISelectSkill uiSelectSkill;
    [SerializeField]
    private GameController gameController;

    private PlayerBase owner;

    public bool IsSelectSkill { get; private set; } = false;
    private Dictionary<string, SkillBase> skills = new Dictionary<string, SkillBase>();
    private Dictionary<SkillElement, int> elementalCounts = new Dictionary<SkillElement, int>();
    private Dictionary<SkillElement, SkillBase> elementalSkills = new Dictionary<SkillElement, SkillBase>();

    private void Awake()
    {
        owner = GetComponent<PlayerBase>();
        skillGad.Setup(owner, skillSpawnPoint);

        var skillDict = Resources.LoadAll<SkillTemplate>("Skills/").ToDictionary(
            item => item.name, item => item);
        foreach(var skillTemplate in skillDict)
        {
            SkillBase skill = null;
            if (skillTemplate.Value.skillType.Equals(SkillType.Buff))
                skill = new SkillBuff();
            else if(skillTemplate.Value.skillType.Equals(SkillType.Emission))
                skill = new SkillEmission();
            else if(skillTemplate.Value.skillType.Equals(SkillType.Sustained))
                skill = new SkillSustained();
            else if(skillTemplate.Value.skillType.Equals(SkillType.Global))
                skill = new SkillGlobal();

            skill.Setup(skillTemplate.Value, owner, skillSpawnPoint);
            skills.Add(skillTemplate.Key, skill);

            Logger.Log($"[{skill.SkillName}]");

        }
        var eSkillDict = Resources.LoadAll<SkillTemplate>("ElementalSkills/").
            ToDictionary(item => item.name, item => item);
        foreach(var skillTemplate in eSkillDict)
        {
            SkillBase skill = new SkillBuff();
            skill.Setup(skillTemplate.Value, owner, skillSpawnPoint);

            elementalCounts.Add(skillTemplate.Value.element, 0);
            elementalSkills.Add(skillTemplate.Value.element, skill);

            Logger.Log($"{skillTemplate.Value.element}, {skillTemplate.Value.skillName}");
        }

        uiSkillList.Setup(skillDict, eSkillDict);
    }

    void Update()
    {
        // test
        if (Keyboard.current.digit1Key.wasPressedThisFrame)
            StartSelectSkill();
        if (owner.Target == null || owner.IsMoved) return;

        skillGad.OnSkill();

        // 분리 이유
        foreach (var skill in skills)
        {
            if (skill.Value.CurrentLevel == 0) continue;
            skill.Value.OnSkill();
        }

        foreach(var skill in skills)
        {
            skill.Value.IsSkillAvailable();
        }
    }

    public void LevelUp(SkillBase skill)
    {
        if (skills.ContainsValue(skill))
        {
            skill.TryLevelUp();
            uiSkillList.LevelUp(skill);
            Logger.Log($"Level Up [{skill.SkillName}] {skill.Element}, Lv.{skill.CurrentLevel}");

            // 스킬 레벨업 시 해당 스킬의 속성레벨의 합을 증가
            // 그 값이 3의 배수가 될 때마다 속성 보너스 스킬 레벨 증가
            elementalCounts[skill.Element]++;
            if (elementalCounts[skill.Element] % 3 == 0)
            {
                elementalSkills[skill.Element].TryLevelUp();
                uiSkillList.LevelUp(elementalSkills[skill.Element]);
                Logger.Log($"{skill.Element} Lv. {elementalSkills[skill.Element].CurrentLevel}");
            }
        }
    }
    public void StartSelectSkill()
    {
        IsSelectSkill = true;
        gameController.SetTimeSclae(0);

        var randomSkills = GetRandomSkills(skills, 3);
        //if(randomSkills == null)
        //{
        //    Logger.Log("더 이상 습득할 수 있는 스킬이 없습니다.");
        //    return;
        //}
        //int index = Random.Range(0, randomSkills.Count);
        //LevelUp(randomSkills[index]);

        uiSelectSkill.StartSelectSkillUI(this, randomSkills.ToArray());
    }

    private List<SkillBase> GetRandomSkills(Dictionary<string, SkillBase> skills, int count = 3)
    {
        var values = new List<SkillBase>(skills.Values.Where(skill=> !skill.IsMaxLevel)).ToList();
        var randomSkills = new List<SkillBase>();

        count = values.Count ==  0 ? 0 : count;
        if (count == 0) return null;

        for(int i =0; i<count; i++)
        {
            int index = Random.Range(0, values.Count);

            randomSkills.Add(values[index]);
            values.RemoveAt(index);
        }

        Logger.Log($"선택 가능한 3개의 스킬\n{randomSkills[0].SkillName}," +
            $"{randomSkills[1].SkillName}, {randomSkills[2].SkillName}");

        return randomSkills;
    }

    public void EndSelectSkill(SkillBase skill)
    {
        LevelUp(skill);
        uiSelectSkill.EndSelectSkillUI();
        gameController.SetTimeSclae(1);
        IsSelectSkill = false;
    }
}
