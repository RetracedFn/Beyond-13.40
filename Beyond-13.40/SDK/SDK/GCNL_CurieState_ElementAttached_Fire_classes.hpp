#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_CurieState_ElementAttached_Fire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Enum_PlayerFireStates_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C
// 0x0050 (0x0810 - 0x07C0)
class AGCNL_CurieState_ElementAttached_Fire_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      BodyFlamesParticleSystem;                          // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        OnFireAudioComponent;                              // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundOnPlayerLoop;                                 // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 PawnSkeletalMesh;                                  // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   Pawn;                                              // 0x07E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           FadeBodyFXTimerHandle;                             // 0x07F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         FadeInDuration;                                    // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EB_Enum_PlayerFireStates                      PlayerFireState;                                   // 0x07FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CC6[0x3];                                     // 0x07FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      BodyFXParticleSystem;                              // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOutDuration;                                   // 0x0808(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EB_Enum_PlayerFireStates                      PreviousPlayerFireState;                           // 0x080C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire(int32 EntryPoint);
	void FadeBodyFXOut();
	void OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void SetBodyFXParameters(EB_Enum_PlayerFireStates Param_PreviousPlayerFireState);
	void GetPlayerFireState(EB_Enum_PlayerFireStates* Player_State);
	void OnCurieStateChanged(class UObject* Param_Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier);
	void ActivateBodyFX();
	void DeactivateBodyFX();
	void UpdatePlayerVisualsByState(EB_Enum_PlayerFireStates PlayerState);
	void ClearAllHandles();
	void FadeOnFireAudioComponent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_CurieState_ElementAttached_Fire_C">();
	}
	static class AGCNL_CurieState_ElementAttached_Fire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_CurieState_ElementAttached_Fire_C>();
	}
};

}

