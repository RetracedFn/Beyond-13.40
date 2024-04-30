#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Grenade_Rethrow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Athena_Grenade_WithTrajectory_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C
// 0x0020 (0x0E50 - 0x0E30)
class UGA_Athena_Grenade_Rethrow_C final : public UGA_Athena_Grenade_WithTrajectory_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Athena_Grenade_Rethrow_C;        // 0x0E30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortProjectileBase*                    Projectile;                                        // 0x0E38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TossDelay;                                         // 0x0E40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HolsterId;                                         // 0x0E44(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_Grenade_Rethrow(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void TossGrenade();
	void K2_ActivateAbility();
	void OnFinish_B295E6694DBD8B2B2478A38EA60F5624();
	void Triggered_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void AttachProjectile();
	void DetachProjectile();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Grenade_Rethrow_C">();
	}
	static class UGA_Athena_Grenade_Rethrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Grenade_Rethrow_C>();
	}
};

}

