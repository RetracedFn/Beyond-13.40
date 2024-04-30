#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_FlopperSpawn_World

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BGA_Athena_FlopperSpawn_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C
// 0x0150 (0x0C28 - 0x0AD8)
class ABGA_Athena_FlopperSpawn_World_C final : public ABGA_Athena_FlopperSpawn_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BGA_Athena_FlopperSpawn_World_C;    // 0x0AD8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio_FlopperLoop;                                 // 0x0AE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Flopper_Spot;                                   // 0x0AE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Time_Interval;                                     // 0x0AF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OffsetDistance;                                    // 0x0AF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeIntervalOffset;                                // 0x0AF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_625D[0x4];                                     // 0x0AFC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         NS_FX_Jump;                                        // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        FX_Jump;                                           // 0x0B08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceOffsetAmount;                                 // 0x0B10(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_625E[0x4];                                     // 0x0B1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWaterBodyActor*                    FortWaterBody;                                     // 0x0B20(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WaterPlaneOffset;                                  // 0x0B28(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_625F[0x4];                                     // 0x0B34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound_AmbientFishFlop;                             // 0x0B38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ExplosionItemSpawnOffset;                          // 0x0B40(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6260[0x4];                                     // 0x0B4C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  T_FlopperSpawn;                                    // 0x0B50(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         MinDistanceToExplosion;                            // 0x0B70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6261[0x4];                                     // 0x0B74(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGameplayTag, class FName>        MAP_TagToLootExplode;                              // 0x0B78(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   ExplodeItemsToDrop;                                // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExplodeRolls;                                      // 0x0BD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WaterNormalHit;                                    // 0x0BD4(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasWrittenAnalytic;                               // 0x0BE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6262[0x7];                                     // 0x0BE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  BattleLabProjectileTag;                            // 0x0BE8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  ExplosionSpawnTag;                                 // 0x0C08(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BGA_Athena_FlopperSpawn_World(int32 EntryPoint);
	void SpawnFromExplosion(class AActor* Param_Instigator, class AActor* DamageCauser);
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void SpawnJumpingFish();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	float RandomTimeInterval();
	void OnRep_FortWaterBody();
	void ExplosionQuestProgress(class AActor* Param_Instigator, class AActor* DamageCauser);
	void GetLootTier(bool IsExplosion, bool IsProFishingRod, class FName* Output_Get);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Athena_FlopperSpawn_World_C">();
	}
	static class ABGA_Athena_FlopperSpawn_World_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Athena_FlopperSpawn_World_C>();
	}
};

}

