#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeavePlatformPartyButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.ExecuteUbergraph_LeavePlatformPartyButton
// 0x0018 (0x0018 - 0x0000)
struct LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5236[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct LeavePlatformPartyButton_C_SetText final
{
public:
	class FText                                   New_Text;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}

