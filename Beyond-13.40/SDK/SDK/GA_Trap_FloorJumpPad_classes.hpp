#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Trap_FloorJumpPad

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "GA_TrapGeneric_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C
// 0x0050 (0x0AF8 - 0x0AA8)
class UGA_Trap_FloorJumpPad_C final : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Trap_FloorJumpPad_C;             // 0x0AA8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerJumping;                                     // 0x0AB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           TC_LaunchTag;                                      // 0x0AB8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         OverlappingTargets;                                // 0x0AC0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0AD0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Trap_FloorJumpPad(int32 EntryPoint);
	void PlayPlayerFX(class AFortPlayerPawn* Player);
	void Targeted_E91C59AB43D826926CE5CEAA22E84570(const struct FGameplayAbilityTargetDataHandle& Param_TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_E91C59AB43D826926CE5CEAA22E84570(const struct FGameplayAbilityTargetDataHandle& Param_TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Trap_FloorJumpPad_C">();
	}
	static class UGA_Trap_FloorJumpPad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Trap_FloorJumpPad_C>();
	}
};

}

