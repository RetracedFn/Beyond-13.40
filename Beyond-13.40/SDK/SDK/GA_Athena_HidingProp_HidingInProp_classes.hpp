#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_HidingProp_HidingInProp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C
// 0x0028 (0x0AA0 - 0x0A78)
class UGA_Athena_HidingProp_HidingInProp_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                  ChangeEquipmentTag;                                // 0x0A80(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp(int32 EntryPoint);
	void GrapplerFailSafe();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_HidingProp_HidingInProp_C">();
	}
	static class UGA_Athena_HidingProp_HidingInProp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_HidingProp_HidingInProp_C>();
	}
};

}

