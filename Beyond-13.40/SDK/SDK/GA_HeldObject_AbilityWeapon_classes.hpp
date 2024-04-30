#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_HeldObject_AbilityWeapon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_HeldObject_AbilityWeapon.GA_HeldObject_AbilityWeapon_C
// 0x0010 (0x0A88 - 0x0A78)
class UGA_HeldObject_AbilityWeapon_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_HeldObject_AbilityWeapon(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_701E84994BAF28AF698A42AD84CCF06E(const struct FGameplayEventData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_HeldObject_AbilityWeapon_C">();
	}
	static class UGA_HeldObject_AbilityWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_HeldObject_AbilityWeapon_C>();
	}
};

}

