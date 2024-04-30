#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Constructor_HammerHitsHeal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GA_Ninja_Tactical_MeleeHitsHeal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C
// 0x0028 (0x0C48 - 0x0C20)
class UGA_Constructor_HammerHitsHeal_C final : public UGA_Ninja_Tactical_MeleeHitsHeal_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Constructor_HammerHitsHeal_C;    // 0x0C20(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                  TC_RequiredTags;                                   // 0x0C28(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Constructor_HammerHitsHeal(int32 EntryPoint);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& Param_EventData);

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Constructor_HammerHitsHeal_C">();
	}
	static class UGA_Constructor_HammerHitsHeal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Constructor_HammerHitsHeal_C>();
	}
};

}

