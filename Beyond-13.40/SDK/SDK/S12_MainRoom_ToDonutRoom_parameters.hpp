#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S12_MainRoom_ToDonutRoom

#include "Basic.hpp"


namespace SDK::Params
{

// Function S12_MainRoom_ToDonutRoom.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// 0x0050 (0x0050 - 0x0000)
struct SequenceDirector_C_ExecuteUbergraph_SequenceDirector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReversed_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7262[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Battlepass_LightSwitcher_C*         K2Node_CustomEvent_BP_Battlepass_LightSwitcher_1;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Battlepass_LightSwitcher_C*         K2Node_CustomEvent_BP_Battlepass_LightSwitcher;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Battlepass_LightSwitcher_C*         K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom_1; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Battlepass_LightSwitcher_C*         K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_CustomEvent_Sound;                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFrontend_EventLevel_Camera_C*          K2Node_CustomEvent_Camera_Root_Movement_1;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bStreamIn_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7263[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFrontend_EventLevel_Camera_C*          K2Node_CustomEvent_Camera_Root_Movement;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bStreamIn;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReversed_ReturnValue_1;                 // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function S12_MainRoom_ToDonutRoom.SequenceDirector_C.Camera_Root_Movement_Event_1
// 0x0010 (0x0010 - 0x0000)
struct SequenceDirector_C_Camera_Root_Movement_Event_1 final
{
public:
	class AFrontend_EventLevel_Camera_C*          Camera_Root_Movement;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bStreamIn;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function S12_MainRoom_ToDonutRoom.SequenceDirector_C.Camera_Root_Movement_Event_0
// 0x0010 (0x0010 - 0x0000)
struct SequenceDirector_C_Camera_Root_Movement_Event_0 final
{
public:
	class AFrontend_EventLevel_Camera_C*          Camera_Root_Movement;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bStreamIn;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function S12_MainRoom_ToDonutRoom.SequenceDirector_C.Audio Camera Move Event
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_Audio_Camera_Move_Event final
{
public:
	class USoundBase*                             Sound;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S12_MainRoom_ToDonutRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher_Maproom_Event_1
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_BP_Battlepass_LightSwitcher_Maproom_Event_1 final
{
public:
	class ABP_Battlepass_LightSwitcher_C*         BP_Battlepass_LightSwitcher_Maproom;               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S12_MainRoom_ToDonutRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher_Maproom_Event_0
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_BP_Battlepass_LightSwitcher_Maproom_Event_0 final
{
public:
	class ABP_Battlepass_LightSwitcher_C*         BP_Battlepass_LightSwitcher_Maproom;               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S12_MainRoom_ToDonutRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher_Event_1
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_BP_Battlepass_LightSwitcher_Event_1 final
{
public:
	class ABP_Battlepass_LightSwitcher_C*         BP_Battlepass_LightSwitcher;                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S12_MainRoom_ToDonutRoom.SequenceDirector_C.BP_Battlepass_LightSwitcher_Event_0
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_BP_Battlepass_LightSwitcher_Event_0 final
{
public:
	class ABP_Battlepass_LightSwitcher_C*         BP_Battlepass_LightSwitcher;                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S12_MainRoom_ToDonutRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0 final
{
public:
	class ABP_Battlepass_LightSwitcher_C*         BP_Battlepass_LightSwitcher;                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S12_MainRoom_ToDonutRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1 final
{
public:
	class ABP_Battlepass_LightSwitcher_C*         BP_Battlepass_LightSwitcher_Maproom;               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S12_MainRoom_ToDonutRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_4
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_4 final
{
public:
	class AFrontend_EventLevel_Camera_C*          Camera_Root_Movement;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S12_MainRoom_ToDonutRoom.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_5
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_5 final
{
public:
	class AFrontend_EventLevel_Camera_C*          Camera_Root_Movement;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

