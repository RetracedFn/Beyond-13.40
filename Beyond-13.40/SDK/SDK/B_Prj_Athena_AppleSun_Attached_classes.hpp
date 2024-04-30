#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_AppleSun_Attached

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "B_Prj_Athena_AppleSun__classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C
// 0x0040 (0x0950 - 0x0910)
class AB_Prj_Athena_AppleSun_Attached_C final : public AB_Prj_Athena_AppleSun__C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Prj_Athena_AppleSun_Attached_C;   // 0x0910(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         DistanceFromPlayer_RelativeZpos_7385E36642C7F3056E2198B8275ED834; // 0x0918(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DistanceFromPlayer__Direction_7385E36642C7F3056E2198B8275ED834; // 0x091C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64B0[0x3];                                     // 0x091D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DistanceFromPlayer;                                // 0x0920(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BGA_Spawned;                                       // 0x0928(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64B1[0x7];                                     // 0x0929(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         LeadDistance;                                      // 0x0930(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_B_Prj_Athena_AppleSun_Attached(int32 EntryPoint);
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody);
	void ReceiveBeginPlay();
	void DistanceFromPlayer__UpdateFunc();
	void DistanceFromPlayer__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_AppleSun_Attached_C">();
	}
	static class AB_Prj_Athena_AppleSun_Attached_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_AppleSun_Attached_C>();
	}
};

}

