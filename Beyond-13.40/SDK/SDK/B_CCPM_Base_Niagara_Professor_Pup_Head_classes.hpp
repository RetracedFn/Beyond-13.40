#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CCPM_Base_Niagara_Professor_Pup_Head

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_CCPM_Base_Niagara_Template_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CCPM_Base_Niagara_Professor_Pup_Head.B_CCPM_Base_Niagara_Professor_Pup_Head_C
// 0x0038 (0x0418 - 0x03E0)
class AB_CCPM_Base_Niagara_Professor_Pup_Head_C final : public AB_CCPM_Base_Niagara_Template_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_CCPM_Base_Niagara_Professor_Pup_Head_C; // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Motorcycle_Light;                                  // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TimeOfDayChanges_LightAlpha_8878E8F449C4D221E9D18EAC2B73B922; // 0x03F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TimeOfDayChanges__Direction_8878E8F449C4D221E9D18EAC2B73B922; // 0x03F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7282[0x3];                                     // 0x03F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TimeOfDayChanges;                                  // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  Fort_Pawn_Player;                                  // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoOnce;                                            // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7283[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM_LRG_Professor_Pup_AnimBP_C*          AnimBP;                                            // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_CCPM_Base_Niagara_Professor_Pup_Head(int32 EntryPoint);
	void OnPawnAndPartChanged();
	void ResetTrue();
	void ResetFalse();
	void Character_Movement_Updated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void OnBeginSkydiving();
	void OnEndSkydiving();
	void Enter_Vehicle();
	void Exit_Vehicle();
	void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void TimeOfDayChanges__UpdateFunc();
	void TimeOfDayChanges__FinishedFunc();
	void ResIn();
	void ResOut();
	void Night_Phase(bool At_Creation);
	void Evening_Phase(bool At_Creation);
	void Day_Phase(bool At_Creation);
	void Morning_Phase(bool At_Creation);
	void OnTargetingOrFirstPersonCameraChanged();
	void GetIsDriving(bool* Param_IsDriving);
	void Set_Niagara_System_User_Variable__Color_(class FName Param_Name, const struct FLinearColor& Value);
	void Set_Niagara_System_User_Variable__Float_(class FName Param_Name, float Value);
	void Set_Niagara_System_User_Variable__Int_(class FName Param_Name, int32 Value);
	void Set_Niagara_System_User_Variable__Vector_(class FName Param_Name, const struct FVector& Value);
	void Set_Niagara_System_User_Variable__Bool_(class FName Param_Name, bool Value);
	void GetNiagaraParticles(struct FGameplayTagContainer* Gameplay_Tag_Container);
	void GetIsFrontEnd(bool* Param_IsInFrontEnd);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CCPM_Base_Niagara_Professor_Pup_Head_C">();
	}
	static class AB_CCPM_Base_Niagara_Professor_Pup_Head_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CCPM_Base_Niagara_Professor_Pup_Head_C>();
	}
};

}

