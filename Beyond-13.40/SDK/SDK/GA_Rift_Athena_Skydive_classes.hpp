#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Rift_Athena_Skydive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C
// 0x00B8 (0x0B30 - 0x0A78)
class UGA_Rift_Athena_Skydive_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           FallingAnimation;                                  // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Hangtimee;                                         // 0x0A88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E36[0x4];                                     // 0x0A8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 VehicleSkelMesh;                                   // 0x0A90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         HangTime;                                          // 0x0A98(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           EventTag;                                          // 0x0AB8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         KickFromVehicle_;                                  // 0x0AC0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             LocalPlayerSound;                                  // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GameplayCueGE;                                     // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0AF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHolstered;                                        // 0x0AF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E37[0x3];                                     // 0x0AF9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RiftSkydiveHolster;                                // 0x0AFC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpulseStrength;                                   // 0x0B04(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNeedsInputEnable;                                 // 0x0B10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E38[0x7];                                     // 0x0B11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SafetyTimer;                                       // 0x0B18(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewVar_0;                                          // 0x0B20(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Rift_Athena_Skydive(int32 EntryPoint);
	void OnPawnLanded(const struct FHitResult& Hit);
	void OnPawnEnteredWater(class AFortPlayerPawn* FortPlayerPawn);
	void OnDestroyed_Event_0(class AActor* DestroyedActor);
	void SetPlayerToSkydive();
	void K2_ActivateAbility();
	void OnCompleted_AA0523504B7CA4F488E1E6A11F48308A();
	void OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A();
	void OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A();
	void OnCancelled_AA0523504B7CA4F488E1E6A11F48308A();
	void K2_OnEndAbility(bool bWasCancelled);
	void RemoveSkydivingGameplayEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Rift_Athena_Skydive_C">();
	}
	static class UGA_Rift_Athena_Skydive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Rift_Athena_Skydive_C>();
	}
};

}

