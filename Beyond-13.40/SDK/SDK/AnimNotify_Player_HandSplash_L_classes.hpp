#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_Player_HandSplash_L

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_Player_HandSplash_L.AnimNotify_Player_HandSplash_L_C
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Player_HandSplash_L_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_Player_HandSplash_L_C">();
	}
	static class UAnimNotify_Player_HandSplash_L_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_Player_HandSplash_L_C>();
	}
};

}

