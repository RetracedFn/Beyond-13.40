#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsListEntry_ControllerButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.ExecuteUbergraph_SettingsListEntry_ControllerButton
// 0x0020 (0x0020 - 0x0000)
struct SettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49BA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_ActionText;                           // 0x0008(0x0018)(ConstParm)
};

// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.OnSettingAssigned
// 0x0018 (0x0018 - 0x0000)
struct SettingsListEntry_ControllerButton_C_OnSettingAssigned final
{
public:
	class FText                                   ActionText;                                        // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

