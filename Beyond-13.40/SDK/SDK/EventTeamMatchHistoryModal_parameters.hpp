#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventTeamMatchHistoryModal

#include "Basic.hpp"


namespace SDK::Params
{

// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.ExecuteUbergraph_EventTeamMatchHistoryModal
// 0x0038 (0x0038 - 0x0000)
struct EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EB7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_TournamentId;                         // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_EventWindowId;                        // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};

// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.OnSetupMatchHistory
// 0x0020 (0x0020 - 0x0000)
struct EventTeamMatchHistoryModal_C_OnSetupMatchHistory final
{
public:
	class FString                                 TournamentId;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 EventWindowId;                                     // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EventTeamMatchHistoryModal_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

