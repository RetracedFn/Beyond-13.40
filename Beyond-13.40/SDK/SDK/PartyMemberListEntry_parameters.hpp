#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyMemberListEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function PartyMemberListEntry.PartyMemberListEntry_C.ExecuteUbergraph_PartyMemberListEntry
// 0x0030 (0x0030 - 0x0000)
struct PartyMemberListEntry_C_ExecuteUbergraph_PartyMemberListEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsOpen;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CC4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CC5[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PartyMemberListEntry.PartyMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct PartyMemberListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature final
{
public:
	bool                                          bIsOpen;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

