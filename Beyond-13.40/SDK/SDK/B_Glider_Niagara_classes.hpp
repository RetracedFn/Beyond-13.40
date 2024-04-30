#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Glider_Niagara

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Glider_Niagara.B_Glider_Niagara_C
// 0x0040 (0x03D8 - 0x0398)
class AB_Glider_Niagara_C : public AFortPlayerParachute
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortLayeredAudioComponent_Glider_C*    FortLayeredAudioComponent_Glider;                  // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Audio_Update_Forward_Threshold;                    // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Should_FX_Start_Before_Fully_Deployed;             // 0x03AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7249[0x3];                                     // 0x03AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Ribbon_ID_Offset;                                  // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Directional_Trails;                                // 0x03B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NewVar_0;                                          // 0x03B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_724A[0x2];                                     // 0x03B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Into_Glider_Sequence_Length;                       // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Niagara;                                           // 0x03BC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Cascade;                                           // 0x03C4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Prototype;                                         // 0x03CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Debug_On_Day_Phase_Change;                         // 0x03CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EFortDayPhase                                 DayPhase;                                          // 0x03CE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Activate_On_Fully_Deployed;                        // 0x03CF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Debug_Particles_Spawned_and_Ready;                 // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_B_Glider_Niagara(int32 EntryPoint);
	void FX_System_Update(float Forward_Dot, float Right_Dot, bool Is_Fully_Deployed);
	void Audio_Update(float ForwardDot, float RightDot);
	void OnReceiveParachuteItemdef();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void OnParachuteTrailUpdated(float MovementLengthSquared, float ForwardDot, float RightDot, float RotationalMovementAcceleration);
	void K2_SetChuteMeshVisibility(bool bParachuteVisibility);
	void Do_Front_End_Setup();
	void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void OnGliderFullyDeployed();
	void On_Managed_Particles_Spawned_and_Ready();
	void OnComponentsReady_155854BF43EF505B38EF969297E36093();
	void UserConstructionScript();
	void Set_Niagara_System_Default_Variables(float Forward_Dot, float Right_Dot);
	void Get_Niagara_Particles__Gameplay_Tag_Array_(struct FGameplayTagContainer* Gameplay_Tag_Container);
	void Get_Cascade_Particles__Gameplay_Tag_Array_(struct FGameplayTagContainer* Gameplay_Tag_Container);
	void Set_Niagara_System_User_Variable__Float_(class FName Param_Name, float Value);
	void Set_Niagara_System_User_Variable__Vector_(class FName Param_Name, const struct FVector& Value);
	void Set_Niagara_System_User_Variable__Int_(class FName Param_Name, int32 Value);
	void Set_Niagara_System_User_Variable__Bool_(class FName Param_Name, bool Value);
	void Set_Niagara_System_User_Variable__Color_(class FName Param_Name, const struct FLinearColor& Value);
	void Activate_Niagara_System(bool Reset);
	void Deactivate_Niagara_System();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Glider_Niagara_C">();
	}
	static class AB_Glider_Niagara_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Glider_Niagara_C>();
	}
};

}

