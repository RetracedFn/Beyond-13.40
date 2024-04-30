#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Creative_CommonDeviceFunctionLibrary

#include "Basic.hpp"

#include "ECreativeTeamColor_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ECreativeColorSetType_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "EAwardScoreType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UCreative_CommonDeviceFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void IsOnUnpublishedIsland(const class AActor* Actor, class UObject* __WorldContext, bool* Edit_Mode);
	static void AwardScore(class AActor* Actor, int32 Score, EAwardScoreType Type, class AController* Controller, class UFortMinigameLogicComponent* Minigame_Logic, const struct FGameplayTagContainer& TargetTags, class UObject* __WorldContext);
	static void IsValidTeam(int32 Team_to_Check, const class AActor* Actor_To_Check, class UObject* __WorldContext, bool* Valid);
	static void IsEnabledPhaseMatch(EFortMinigameState State, int32 PhaseIndex, const class AActor* Actor, class UObject* __WorldContext, bool* Enabled);
	static void IsActivatedOnPhase(EFortMinigameState State, int32 PhaseIndex, const class AActor* Actor, class UObject* __WorldContext, bool* Enabled);
	static void ActorCanTrigger(class AActor* Actor_To_Check, class UPrimitiveComponent* Overlap_Component, class UObject* __WorldContext, bool* CanTrigger, class AController** Controller);
	static void GetMID(class UPrimitiveComponent* Target, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid);
	static void Update_Team_Color(class UFortMinigameLogicComponent* Minigame_Logic, class UPrimitiveComponent* Mesh, int32 Team, class UObject* __WorldContext);
	static void Refresh_Team_Change_Binding(class UFortMinigameLogicComponent* Minigame_Logic, bool Unbind, const TDelegate<void()>& Event, class UObject* __WorldContext);
	static void GetMID_FromMaterial(class UPrimitiveComponent* Target, int32 Param_Index, class UMaterialInterface* SourceMaterial, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid);
	static void Get_Driver_or_Pawn_Controller(class AActor* Actor_To_Check, class UObject* __WorldContext, bool* Valid_Controller, class AController** Controller);
	static void IsInPlayMode(const class AActor*& Actor, class UObject* __WorldContext, bool* Play_Mode);
	static void IsLocalPawn(class AActor* Actor, class UObject* __WorldContext, bool* Param_IsLocalPawn);
	static int32 Get_Team_Color_Index_or_Team_Index(class UFortMinigameLogicComponent* Minigame_Logic, int32 Team_Index, class UObject* __WorldContext);
	static void Get_Team_Color_Index_from_Tag(class AActor* Actor_with_Tag, class AFortMinigame* Minigame, class UObject* __WorldContext, int32* Array_Index, ECreativeColorSetType* Color_Type_Out);
	static void Get_Dynamic_Team_Color(class AActor* Actor, class AFortMinigame* Minigame, ECreativeColorSetType Color_Type, class UObject* __WorldContext, int32* Array_Index);
	static void IsLogicInPlayMode(const class UFortMinigameLogicComponent*& Logic, class UObject* __WorldContext, bool* Play_Mode);
	static void IndexToTeam(int32 Param_Index, class UObject* __WorldContext, uint8* Team);
	static void TeamToIndex(uint8 Team, class UObject* __WorldContext, int32* Param_Index);
	static void Animate_Float_Curve(float Delta_Time, float& Current_Time, class UCurveFloat* FCurve, float Animation_Time, bool Invert_Time, class UObject* __WorldContext, float* Value, bool* bIsComplete);
	static void Wrapping_Modulo(int32 A, int32 B, class UObject* __WorldContext, int32* Out);
	static void Reattach_or_Create_MID(class UPrimitiveComponent* Mesh, class UMaterialInstanceDynamic*& Target_MID, int32 MatId, class UObject* __WorldContext);
	static void GetMinigameSettingsMachineForMinigame(class AFortMinigame* Minigame, class UObject* __WorldContext, class AMinigameSettingsMachine_C** MinigameSettingsMachine);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Creative_CommonDeviceFunctionLibrary_C">();
	}
	static class UCreative_CommonDeviceFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreative_CommonDeviceFunctionLibrary_C>();
	}
};

}

