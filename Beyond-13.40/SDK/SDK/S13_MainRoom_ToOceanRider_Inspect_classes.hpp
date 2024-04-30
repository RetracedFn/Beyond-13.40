#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S13_MainRoom_ToOceanRider_Inspect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass S13_MainRoom_ToOceanRider_Inspect.SequenceDirector_C
// 0x0008 (0x0038 - 0x0030)
class S13_MainRoom_ToOceanRider_Inspect::USequenceDirector_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
	void Audio_Camera_Move_Event(class USoundBase* Sound);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0();
	void SequenceEvent__ENTRYPOINTSequenceDirector_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass S13_MainRoom_ToOceanRider_Inspect.SequenceDirector_C", true, "SequenceDirector_C">();
	}
	static class S13_MainRoom_ToOceanRider_Inspect::USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<S13_MainRoom_ToOceanRider_Inspect::USequenceDirector_C>();
	}
};

}

