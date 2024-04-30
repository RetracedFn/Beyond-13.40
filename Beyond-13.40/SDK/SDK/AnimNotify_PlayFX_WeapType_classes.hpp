#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_PlayFX_WeapType

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_PlayFX_WeapType.AnimNotify_PlayFX_WeapType_C
// 0x0030 (0x0068 - 0x0038)
class UAnimNotify_PlayFX_WeapType_C final : public UAnimNotify
{
public:
	class FString                                 Socket;                                            // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Attach;                                            // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_632C[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Rotation;                                          // 0x004C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                Location;                                          // 0x0058(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_PlayFX_WeapType_C">();
	}
	static class UAnimNotify_PlayFX_WeapType_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlayFX_WeapType_C>();
	}
};

}

