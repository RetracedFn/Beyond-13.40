#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_AppleSun_RemoveFallImmunity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C
// 0x0028 (0x0AA0 - 0x0A78)
class UGA_Athena_AppleSun_RemoveFallImmunity_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Looping_GC;                                        // 0x0A88(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Player_Landing_GC;                                 // 0x0A90(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           VehicleOnGroundTimer;                              // 0x0A98(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_AppleSun_RemoveFallImmunity(int32 EntryPoint);
	void Remove();
	void VehicleLandedCheck();
	void K2_ActivateAbility();
	void OnChange_E50882E9463BCB5DDE04EE8407D66091(EMovementMode NewMovementMode);
	void OnChange_3DD8539A4FF5097BAD1292AD341357CA(EMovementMode NewMovementMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_AppleSun_RemoveFallImmunity_C">();
	}
	static class UGA_Athena_AppleSun_RemoveFallImmunity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_AppleSun_RemoveFallImmunity_C>();
	}
};

}

