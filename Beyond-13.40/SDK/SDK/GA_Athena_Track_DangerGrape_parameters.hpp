#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Track_DangerGrape

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C.ExecuteUbergraph_GA_Athena_Track_DangerGrape
// 0x0450 (0x0450 - 0x0000)
struct GA_Athena_Track_DangerGrape_C_ExecuteUbergraph_GA_Athena_Track_DangerGrape final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F55[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload_1;                      // 0x0008(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00B8(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_DynamicCast_AsActor;                        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F56[0x2];                                     // 0x017A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x017C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5F57[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0190(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0240(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0250(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F58[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0270(0x0048)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F59[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x02D0(0x0028)()
	class AFortPlayerControllerZone*              K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F5A[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0308(0x0010)(ReferenceParm, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0319(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F5B[0x2];                                     // 0x031A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F5C[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Pawn_DangerGrape_C*                 K2Node_DynamicCast_AsBP_Pawn_Danger_Grape;         // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F5D[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue_1;          // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F5E[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Pawn_DangerGrape_C*                 K2Node_DynamicCast_AsBP_Pawn_Danger_Grape_1;       // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0369(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F5F[0x6];                                     // 0x036A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable_1;                            // 0x0370(0x00B0)()
	class AActor*                                 K2Node_DynamicCast_AsActor_1;                      // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F60[0x3];                                     // 0x0429(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x042C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0438(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F61[0x4];                                     // 0x043C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Pawn_DangerGrape_C*                 K2Node_DynamicCast_AsBP_Pawn_Danger_Grape_2;       // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0449(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Athena_Track_DangerGrape_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C.EventReceived_13B4A7014CFACBC3914C3BA737F355B3
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Athena_Track_DangerGrape_C_EventReceived_13B4A7014CFACBC3914C3BA737F355B3 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C.EventReceived_CECFA813476EFF4163BB1EAFBFD4E985
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Athena_Track_DangerGrape_C_EventReceived_CECFA813476EFF4163BB1EAFBFD4E985 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}

