using System;
using System.Collections.Generic;
using UnityEngine;

public class UISkillList : MonoBehaviour
{
    [SerializeField]
    private UISkillIcon skillIconPrefab;
    [SerializeField]
    private Transform[] skillElementType;
    [SerializeField]
    private Transform skillElementalBonus;

    private Dictionary<string, UISkillIcon> skillIcons;

    public void Setup(Dictionary<string, SkillTemplate> skills,
        Dictionary<string, SkillTemplate> elementalBonus)
    {
        skillIcons = new Dictionary<string, UISkillIcon>();

        foreach(var skill in skills)
        {
            SpawnIcon(skill.Value, skillElementType[(int)skill.Value.element - 100]);
        }
        foreach(var element in elementalBonus)
        {
            SpawnIcon(element.Value, skillElementalBonus);
        }
    }

    private void SpawnIcon(SkillTemplate skill, Transform parent)
    {
        var clone = Instantiate(skillIconPrefab, parent);
        clone.transform.localScale = Vector3.one;
        clone.Setup(skill.disableIcon);

        skillIcons.Add(skill.skillName, clone);
    }

    public void LevelUp(SkillBase skill)
    {
        if (skillIcons.ContainsKey(skill.SkillName))
        {
            skillIcons[skill.SkillName].LevelUp(skill.CurrentLevel, skill.EnableIcon);
        }
    }
}
