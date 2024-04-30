#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TVPostProcessBPAthena

#include "Basic.hpp"

#include "TVPostProcessBP_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass TVPostProcessBPAthena.TVPostProcessBPAthena_C
// 0x0028 (0x0268 - 0x0240)
class ATVPostProcessBPAthena_C final : public ATVPostProcessBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TVPostProcessBPAthena_C;            // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  FullScreenTVPPMinusOnlyMaterialModified;           // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FrontEndCameraSwitchFadeAthena_SwipeLines_Animation_8828A7EA43DFA9153F986F805918F9F7; // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrontEndCameraSwitchFadeAthena_PostProcessVisibility_8828A7EA43DFA9153F986F805918F9F7; // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FrontEndCameraSwitchFadeAthena__Direction_8828A7EA43DFA9153F986F805918F9F7; // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A71[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FrontEndCameraSwitchFadeAthena;                    // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void IsEnabledForCurrentSubgame(bool* bEnabled);
	void FrontEndCameraSwitchFadeAthena__FinishedFunc();
	void FrontEndCameraSwitchFadeAthena__UpdateFunc();
	void ExecuteCameraSwitch();
	void Camera_DisableEffects();
	void ExecuteUbergraph_TVPostProcessBPAthena(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TVPostProcessBPAthena_C">();
	}
	static class ATVPostProcessBPAthena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATVPostProcessBPAthena_C>();
	}
};

}

