#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_ShockGrenade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C
// 0x0198 (0x0A00 - 0x0868)
class AB_Prj_Athena_ShockGrenade_C final : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0868(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        BeepTimer;                                         // 0x0870(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Fuse_Particle;                                     // 0x0878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 ShockGrenadeMesh;                                  // 0x0880(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        GrenadeFuse_AudioComponent;                        // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Effect_Distance;                                   // 0x0898(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        P_Explosion;                                       // 0x08A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_DistantSound;                                  // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_CloseSound;                                    // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_GrenadeFuseSound;                              // 0x08B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x08C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6757[0x4];                                     // 0x08CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              Target;                                            // 0x08D0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_BeepSound;                                     // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x08E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StuckVehicle;                                      // 0x08EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6758[0x3];                                     // 0x08ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AEnemyPawn_Parent_Deimos_C*             DeimosPawn;                                        // 0x08F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      DestroyObjectTypes;                                // 0x08F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScalableFloat                         DestroyDistance;                                   // 0x0908(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ShouldDestroy;                                     // 0x0928(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         LaunchVelocity;                                    // 0x0948(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ExplodeDelay;                                      // 0x0968(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         EnemiesTakeFallDamage;                             // 0x0988(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         AllPlayersTakeFallDamage;                          // 0x09A8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             Cue_StopSound;                                     // 0x09C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ChestLootTableName;                                // 0x09D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           FeedbackCue;                                       // 0x09D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HitWater;                                          // 0x09E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6759[0x7];                                     // 0x09E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Water_Debris_Explosion;                            // 0x09E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        P_WaterExplosion;                                  // 0x09F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaVehicle*                     TargetVehicle;                                     // 0x09F8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Athena_ShockGrenade(int32 EntryPoint);
	void LaunchPlayerVehicle();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody);
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap);
	void LaunchDeimos();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void Stop_Rotation();
	void OnStop(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void Handle_Pawn_Detach_RC();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_ShockGrenade_C">();
	}
	static class AB_Prj_Athena_ShockGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_ShockGrenade_C>();
	}
};

}

