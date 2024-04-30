#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendCamera_Main

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FrontendCamera_Main.FrontendCamera_Main_C
// 0x0010 (0x07E0 - 0x07D0)
class AFrontendCamera_Main_C final : public AFortCameraBase
{
public:
	uint8                                         Pad_65A0[0x8];                                     // 0x07C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       LoginCamera_0;                                     // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void OnActivated(class AFortPlayerController* PlayerController);
	void ExecuteUbergraph_FrontendCamera_Main(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendCamera_Main_C">();
	}
	static class AFrontendCamera_Main_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontendCamera_Main_C>();
	}
};

}

