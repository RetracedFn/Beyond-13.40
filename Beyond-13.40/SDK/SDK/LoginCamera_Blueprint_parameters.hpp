#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginCamera_Blueprint

#include "Basic.hpp"


namespace SDK::Params
{

// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.OnActivated
// 0x0008 (0x0008 - 0x0000)
struct LoginCamera_Blueprint_C_OnActivated final
{
public:
	class AFortPlayerController*                  PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint
// 0x0048 (0x0048 - 0x0000)
struct LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_Event_PlayerController;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortTimeOfDayManager*                  CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0020(0x0010)(ReferenceParm, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A31[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

