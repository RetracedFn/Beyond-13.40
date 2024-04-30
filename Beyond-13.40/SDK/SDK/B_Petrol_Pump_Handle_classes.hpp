#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Petrol_Pump_Handle

#include "Basic.hpp"

#include "B_Ranged_Generic_Athena_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Petrol_Pump_Handle.B_Petrol_Pump_Handle_C
// 0x0028 (0x1138 - 0x1110)
class AB_Petrol_Pump_Handle_C final : public AB_Ranged_Generic_Athena_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Petrol_Pump_Handle_C;             // 0x1110(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortSplatterSourceComponent*           FortSplatterSource;                                // 0x1118(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x1120(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortHeldObjectComponent*               FortHeldObject;                                    // 0x1128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_FuelLeaking;                                    // 0x1130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Petrol_Pump_Handle(int32 EntryPoint);
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void OnStopWeaponFireFX();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Petrol_Pump_Handle_C">();
	}
	static class AB_Petrol_Pump_Handle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Petrol_Pump_Handle_C>();
	}
};

}

