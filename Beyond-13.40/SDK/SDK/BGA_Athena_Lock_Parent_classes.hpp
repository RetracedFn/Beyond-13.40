#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_Lock_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_Athena_Lock_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Enum_MANG_Security_ID_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C
// 0x0140 (0x08F0 - 0x07B0)
class ABGA_Athena_Lock_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Lock;                                              // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortLinkToActorComponent*              FortLinkToActor;                                   // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InteractionCollision;                              // 0x07D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABuildingActor*                         AttachedLockActor;                                 // 0x07D8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CanFirstInteract;                                  // 0x07E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanSecondInteract;                                 // 0x07E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanInteractWhileUnlocked;                          // 0x07E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61EC[0x5];                                     // 0x07E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   FirstInteractText;                                 // 0x07E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SecondInteractText;                                // 0x0800(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         FirstInteractTime;                                 // 0x0818(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SecondInteractTime;                                // 0x081C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SetLockOnFirstInteract;                            // 0x0820(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SetLockOnSecondInteract;                           // 0x0821(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61ED[0x6];                                     // 0x0822(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              LastInteractingPawn;                               // 0x0828(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanMultipleInteract;                               // 0x0830(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	Enum_Athena_Lock                              LockState;                                         // 0x0831(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          EverInteractSetLock;                               // 0x0832(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay)
	uint8                                         Pad_61EE[0x1];                                     // 0x0833(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Event_Locked;                                      // 0x0834(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Event_Unlocked;                                    // 0x083C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          DoLockCheckFirstInteract;                          // 0x0844(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DoLockCheckSecondInteract;                         // 0x0845(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ApplyEffectOnFailCheck;                            // 0x0846(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61EF[0x1];                                     // 0x0847(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_FailedCheck;                                    // 0x0848(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxInteractAngle;                                  // 0x0850(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61F0[0x4];                                     // 0x0854(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_RelockDelay;                                   // 0x0858(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AutoRelock;                                        // 0x0878(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F1[0x7];                                     // 0x0879(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_SelfInteractEnabled;                           // 0x0880(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_DoNotLockActor;                                // 0x08A0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnUnlockedDispatcher;                              // 0x08C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnLockedDispatcher;                                // 0x08D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          AutoAttachToParentActors;                          // 0x08E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AutoCloseDoorOnLock;                               // 0x08E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AutoDoorOnUnlock;                                  // 0x08E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AutoOpenContainersOnUnlock;                        // 0x08E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SetsAllowInteractOnUnlock;                         // 0x08E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	Enum_MANG_Security_ID                         Lock_ID;                                           // 0x08E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61F2[0x2];                                     // 0x08E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 BlankLinkedActor;                                  // 0x08E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnUnlockedDispatcher__DelegateSignature();
	void OnLockedDispatcher__DelegateSignature();
	void ExecuteUbergraph_BGA_Athena_Lock_Parent(int32 EntryPoint);
	void ParentActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void NotEnabled();
	void UnlockOpenDoor();
	void LockCloseDoor();
	void OpenContainers();
	void ReceiveBeginPlay();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void TimedRelock();
	void SetLock(Enum_Athena_Lock Param_LockState);
	void ApplyFailCheckEffect();
	void HideAndKill();
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature();
	void OnUnLocked();
	void OnLocked();
	void OnFirstInteract(class AFortPawn* InteractingPawn);
	void OnSecondInteract(class AFortPawn* InteractingPawn);
	void OnReady_19560710434050E125B3ADA0163CD609(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnRep_LockState();
	void OnRep_EverInteractSetLock();
	void LockCheck(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, bool* CheckPassed);
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void Lock_Set_Interact_Collision(bool On);

	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Athena_Lock_Parent_C">();
	}
	static class ABGA_Athena_Lock_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Athena_Lock_Parent_C>();
	}
};

}

