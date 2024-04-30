#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProjectileTrajectory_AthenaRed_Playset

#include "Basic.hpp"

#include "BP_ProjectileTrajectory_Athena_SnapBoxToGrid_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ProjectileTrajectory_AthenaRed_Playset.BP_ProjectileTrajectory_AthenaRed_Playset_C
// 0x0010 (0x0308 - 0x02F8)
class ABP_ProjectileTrajectory_AthenaRed_Playset_C final : public ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ProjectileTrajectory_AthenaRed_Playset_C; // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Creative_Grenade_LoopRed_Cue;                      // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed_Playset(int32 EntryPoint);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProjectileTrajectory_AthenaRed_Playset_C">();
	}
	static class ABP_ProjectileTrajectory_AthenaRed_Playset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ProjectileTrajectory_AthenaRed_Playset_C>();
	}
};

}

