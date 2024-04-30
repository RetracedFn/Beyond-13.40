#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_FlopperSpawn_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C
// 0x0328 (0x0AD8 - 0x07B0)
class ABGA_Athena_FlopperSpawn_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          OverlapVolume;                                     // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_MaxUses;                                       // 0x07C8(0x0020)(Edit, BlueprintVisible)
	struct FScalableFloat                         Row_MinUses;                                       // 0x07E8(0x0020)(Edit, BlueprintVisible)
	int32                                         Uses;                                              // 0x0808(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AfterHideLifeSpan;                                 // 0x080C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ItemsToDrop;                                       // 0x0810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Spawn;                                          // 0x0818(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_SpawnChanceMax;                                // 0x0820(0x0020)(Edit, BlueprintVisible)
	bool                                          IsWorldSpawner;                                    // 0x0840(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_620E[0x7];                                     // 0x0841(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_SpawnChanceMin;                                // 0x0848(0x0020)(Edit, BlueprintVisible)
	TMap<struct FGameplayTag, class FName>        TagToLoot_FishingSpotTier;                         // 0x0868(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AlreadySpawnChecked;                               // 0x08B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_620F[0x7];                                     // 0x08B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGameplayTag, class FName>        TagToLoot_DefaultTier;                             // 0x08C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, class FName>        TagToLoot_ToUse;                                   // 0x0910(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, class FName>        TagToLoot_HighTier_FishingRod;                     // 0x0960(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          HasTypeTag;                                        // 0x09B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6210[0x7];                                     // 0x09B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      ObjectTypes;                                       // 0x09B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGameplayTagContainer                  LootTags;                                          // 0x09C8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          MaxUses;                                           // 0x09E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Debug;                                             // 0x09E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6211[0x6];                                     // 0x09EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_AddedBobChanceOnOverlapMin;                    // 0x09F0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_AddedBobChanceOnOverlapMax;                    // 0x0A10(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPickup*                            SpawnedItem;                                       // 0x0A30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_HighTierPoolSpawn;                           // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  QuestTag_DefaultSpawn;                             // 0x0A40(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  QuestTag_WorldSpawn;                               // 0x0A60(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APrj_Athena_FloppingRabbit_C*           Projectile;                                        // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            FishSizeCurve;                                     // 0x0A88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MiniGameFishSizeThreshold;                         // 0x0A90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6212[0x4];                                     // 0x0A94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         MiniGameFishSizePercentileThreshold;               // 0x0A98(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AlwaysStartMiniGame;                               // 0x0AB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6213[0x3];                                     // 0x0AB9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           HighTierFishingRod;                                // 0x0ABC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   HighTierLootData;                                  // 0x0AC4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           DefaultLootTag;                                    // 0x0ACC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent(int32 EntryPoint);
	void UpdateCollectionsComponent(bool bCaughtFish, class AActor* Player, class UFortItemDefinition* ItemDefinition, class AFortPickup* Pickup, float Length);
	void SpawnItem(class AActor* Target, bool Hooked, class USceneComponent* HookComponent, const struct FVector& SpawnLoc, class AActor* Player, float ItemSpawnDelay, bool CaughtWithFishingRod, bool CaughtWithHappyGhost, class AActor* ItemUsedToFish, class APrj_Athena_FloppingRabbit_C* Param_Projectile, const struct FGameplayTagContainer& Required_Tags);
	void ReceiveBeginPlay();
	void HideAndKill();
	void FishingComplete();
	void PlaySpawnItemHightier(const struct FVector& Location);
	void BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnReady_5804F209455A50B3EE64E3AED087DE64(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void UserConstructionScript();
	void SetBalanceValues();
	void HandleUseTracking();
	void ShouldKill();
	void GetLootTier(bool IsExplosion, bool IsProFishingRod, class FName* Output_Get);

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Athena_FlopperSpawn_Parent_C">();
	}
	static class ABGA_Athena_FlopperSpawn_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Athena_FlopperSpawn_Parent_C>();
	}
};

}

