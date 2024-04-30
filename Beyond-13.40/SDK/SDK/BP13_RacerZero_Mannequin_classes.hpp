#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP13_RacerZero_Mannequin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP13_RacerZero_Mannequin.BP13_RacerZero_Mannequin_C
// 0x0008 (0x04A0 - 0x0498)
class ABP13_RacerZero_Mannequin_C final : public AFortPlayerMannequin
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0498(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP13_RacerZero_Mannequin(int32 EntryPoint);
	void OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& OldVariantTag, const struct FGameplayTag& NewVariantTag);
	void OnPartChanged(const class UCustomCharacterPart* OldPart, const class UCustomCharacterPart* NewPart, EFortCustomPartType PartType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP13_RacerZero_Mannequin_C">();
	}
	static class ABP13_RacerZero_Mannequin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP13_RacerZero_Mannequin_C>();
	}
};

}

