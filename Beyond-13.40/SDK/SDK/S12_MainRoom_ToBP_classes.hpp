#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S12_MainRoom_ToBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass S12_MainRoom_ToBP.SequenceDirector_C
// 0x0008 (0x0038 - 0x0030)
class S12_MainRoom_ToBP::USequenceDirector_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
	void Audio_Camera_Movemt_Event(class USoundBase* Sound);
	void BP_Battlepass_LightSwitcher2_Event_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher2);
	void BP_Battlepass_LightSwitcher_Maproom_Event_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void BP_Battlepass_LightSwitcher2_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher2);
	void BP_Battlepass_LightSwitcher_Maproom_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher2);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2();
	void SequenceEvent__ENTRYPOINTSequenceDirector_3();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass S12_MainRoom_ToBP.SequenceDirector_C", true, "SequenceDirector_C">();
	}
	static class S12_MainRoom_ToBP::USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<S12_MainRoom_ToBP::USequenceDirector_C>();
	}
};

}

