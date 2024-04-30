#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_Keycard_Lock_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Enum_Athena_Lock_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BGA_Athena_Lock_Parent_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C
// 0x0070 (0x0960 - 0x08F0)
class ABGA_Athena_Keycard_Lock_Parent_C : public ABGA_Athena_Lock_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BGA_Athena_Keycard_Lock_Parent_C;   // 0x08F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   ScannerScreenActor;                                // 0x08F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Fail;                                           // 0x0900(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           TagToCheck;                                        // 0x0908(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Success;                                        // 0x0910(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               KeyID;                                             // 0x0918(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MIDI_ConsoleScreen;                                // 0x0920(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_UI_ScannerScreen_C*                 ScannerScreen;                                     // 0x0928(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   PoINameText;                                       // 0x0930(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                           OriginalEmissive;                                  // 0x0948(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ScreenWidgetActive;                                // 0x0958(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent(int32 EntryPoint);
	void SetLock(Enum_Athena_Lock Param_LockState);
	void HideAndKill();
	void ShowFailScreen();
	void ShowSuccessScreen();
	void ReceiveBeginPlay();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void CallOpenVault();
	void ApplyFailCheckEffect();
	void LockCheck(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, bool* CheckPassed);

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Athena_Keycard_Lock_Parent_C">();
	}
	static class ABGA_Athena_Keycard_Lock_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Athena_Keycard_Lock_Parent_C>();
	}
};

}

