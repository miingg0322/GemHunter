using System;
using Unity.Behavior;
using UnityEngine;
using Action = Unity.Behavior.Action;
using Unity.Properties;

[Serializable, GeneratePropertyBag]
[NodeDescription(name: "Weapon", story: "try attack with [CurrentWeapon]", category: "Action", id: "9b5fb8e7c591e2fdde6cb11db11d1ecd")]
public partial class WeaponAction : Action
{
    [SerializeReference] public BlackboardVariable<WeaponBase> CurrentWeapon;

    protected override Status OnUpdate()
    {
        CurrentWeapon.Value.TryAttack();
        return Status.Success;
    }
}

