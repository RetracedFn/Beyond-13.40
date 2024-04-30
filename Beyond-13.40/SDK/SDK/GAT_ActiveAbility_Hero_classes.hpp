#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_ActiveAbility_Hero

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAT_ActiveAbility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C
// 0x0010 (0x0AB8 - 0x0AA8)
class UGAT_ActiveAbility_Hero_C : public UGAT_ActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_ActiveAbility_Hero_C;           // 0x0AA8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          UseHeroLoadoutSystem;                              // 0x0AB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GAT_ActiveAbility_Hero(int32 EntryPoint);
	void K2_ActivateAbility();
	void CommitAbilityWithEvent(bool* Passed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_ActiveAbility_Hero_C">();
	}
	static class UGAT_ActiveAbility_Hero_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_ActiveAbility_Hero_C>();
	}
};

}

