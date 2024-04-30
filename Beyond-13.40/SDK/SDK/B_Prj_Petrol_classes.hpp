#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Petrol

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Petrol.B_Prj_Petrol_C
// 0x00C8 (0x0968 - 0x08A0)
class AB_Prj_Petrol_C final : public AFortProjectilePetrol
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Petrol_Prj_Trail;                                // 0x08A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x08B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  RefillableVehicleTag;                              // 0x08B8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABGA_Petrol_Pickup_C*                   ClosestPetrolPickupBGA;                            // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_Petrol_Pickup_C*                   NullBGA;                                           // 0x08E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShortestDistance;                                  // 0x08E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClosestPetrolPickupBGAIndex;                       // 0x08EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         HitActors;                                         // 0x08F0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScalableFloat                         OverrideFuelToAddToPetrolPickup;                   // 0x0900(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         FuelToAddToPetrolPickup;                           // 0x0920(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61D8[0x4];                                     // 0x0924(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  T_Quest;                                           // 0x0928(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Hotfix_RefillVehicleAmount;                        // 0x0948(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_B_Prj_Petrol(int32 EntryPoint);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveDestroyed();
	void OnExploded(const TArray<class AActor*>& Param_HitActors, const TArray<struct FHitResult>& HitResults);
	void ReceiveBeginPlay();
	void OnStop(const struct FHitResult& Hit);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Petrol_C">();
	}
	static class AB_Prj_Petrol_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Petrol_C>();
	}
};

}

