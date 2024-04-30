#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProjectileTrajectory_ExplosiveBow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C
// 0x0070 (0x02A8 - 0x0238)
class ABP_ProjectileTrajectory_ExplosiveBow_C final : public AFortProjectileTrajectory
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Target;                                            // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxMeshCount;                                      // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_633F[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               SplineMID;                                         // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Trajectory_Owner;                                  // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Update_Timer_Handle;                               // 0x0268(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndPointOffset;                                    // 0x0270(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Right;                                             // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Up;                                                // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SplineMeshLength;                                  // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SplineMeshOffsetDistance;                          // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6340[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_Ranged_Generic_Athena_C*             OwnerWeapon;                                       // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MuzzleOffset;                                      // 0x0298(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ProjectileTrajectory_ExplosiveBow(int32 EntryPoint);
	void SetTrajectorySpline(const TArray<struct FVector>& SplinePoints, const TArray<struct FVector>& SplineTangents);
	void Pulse();
	void ReceiveBeginPlay();
	void SetTrajectorySplineInternal(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents);
	void UpdateFromTrajectoryOwner();
	void SetShouldUpdateFromOwner(bool ShouldUpdate, class UObject* Param_Owner, float Interval);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProjectileTrajectory_ExplosiveBow_C">();
	}
	static class ABP_ProjectileTrajectory_ExplosiveBow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ProjectileTrajectory_ExplosiveBow_C>();
	}
};

}

