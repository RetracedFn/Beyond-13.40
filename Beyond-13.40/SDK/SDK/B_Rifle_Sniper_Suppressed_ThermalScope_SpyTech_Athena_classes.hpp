#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Rifle_Generic_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C
// 0x0020 (0x1290 - 0x1270)
class AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C final : public AB_Rifle_Generic_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C; // 0x1270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         ScalePlayerThermal_NewTrack_0_253E51B74F624080BF58BDA99C8B5B64; // 0x1278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ScalePlayerThermal__Direction_253E51B74F624080BF58BDA99C8B5B64; // 0x127C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_674F[0x3];                                     // 0x127D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ScalePlayerThermal;                                // 0x1280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendInTime;                                       // 0x1288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena(int32 EntryPoint);
	void ScalePlayerThermal__UpdateFunc();
	void ScalePlayerThermal__FinishedFunc();
	void ForceScopeBackImmediatly();
	void ReverseScopePP();
	void PlayScopePP();
	void OnSetTargeting(bool bNewIsTargeting);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C">();
	}
	static class AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C>();
	}
};

}

