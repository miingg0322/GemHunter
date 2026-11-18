using UnityEngine;

public class UISelectSkill : MonoBehaviour
{
    [SerializeField]
    private GameObject selectSkillPanel;
    [SerializeField]
    private UISelectSkillIcon[] skillIcons;

    public void StartSelectSkillUI(SkillSystem skillSystem, SkillBase[] skills)
    {
        selectSkillPanel.SetActive(true);

        for (int i = 0; i < skills.Length; i++)
        {
            skillIcons[i].Setup(skillSystem, skills[i]);
        }
    }

    public void EndSelectSkillUI()
    {
        selectSkillPanel.SetActive(false);
    }
}
