#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortWaterBodyBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "WaveSpectrumSettings_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FortWaterBodyBP.FortWaterBodyBP_C
// 0x0060 (0x0F50 - 0x0EF0)
class AFortWaterBodyBP_C final : public AFortWaterBodyActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0EF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FWaveSpectrumSettings                  Wave_Spectrum_Settings;                            // 0x0EF8(0x0048)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FluidSim_FN_C*                      FluidSimBP;                                        // 0x0F40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FortWaterBodyBP(int32 EntryPoint);
	void OnReceivedBulletImpact(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortWaterBodyBP_C">();
	}
	static class AFortWaterBodyBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortWaterBodyBP_C>();
	}
};

}

