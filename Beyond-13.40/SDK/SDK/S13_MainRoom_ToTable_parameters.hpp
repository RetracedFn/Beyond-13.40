#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S13_MainRoom_ToTable

#include "Basic.hpp"


namespace SDK::Params
{

// Function S13_MainRoom_ToTable.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// 0x0010 (0x0010 - 0x0000)
struct SequenceDirector_C_ExecuteUbergraph_SequenceDirector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7261[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_CustomEvent_Sound;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S13_MainRoom_ToTable.SequenceDirector_C.Audio Camera Move Event
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_Audio_Camera_Move_Event final
{
public:
	class USoundBase*                             Sound;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

