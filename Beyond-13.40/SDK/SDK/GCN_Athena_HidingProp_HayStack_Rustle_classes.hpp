#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_HidingProp_HayStack_Rustle

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Athena_HidingProp_HayStack_Rustle.GCN_Athena_HidingProp_HayStack_Rustle_C
// 0x0000 (0x01B8 - 0x01B8)
class UGCN_Athena_HidingProp_HayStack_Rustle_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_HidingProp_HayStack_Rustle_C">();
	}
	static class UGCN_Athena_HidingProp_HayStack_Rustle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Athena_HidingProp_HayStack_Rustle_C>();
	}
};

}

