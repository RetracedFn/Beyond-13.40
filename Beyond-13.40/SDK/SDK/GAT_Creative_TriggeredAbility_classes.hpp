#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_Creative_TriggeredAbility

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAT_TriggeredAbility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C
// 0x0018 (0x0AA8 - 0x0A90)
class UGAT_Creative_TriggeredAbility_C : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_Creative_TriggeredAbility_C;    // 0x0A90(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FName>                           OverriddenPropertyNames;                           // 0x0A98(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAT_Creative_TriggeredAbility(int32 EntryPoint);
	void AbilityTimeout();
	void SetupAbilityFailsafeTimer(float Duration);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

	void IsPropertyOverridden(class FName PropertyName, bool* bResult) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_Creative_TriggeredAbility_C">();
	}
	static class UGAT_Creative_TriggeredAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_Creative_TriggeredAbility_C>();
	}
};

}

