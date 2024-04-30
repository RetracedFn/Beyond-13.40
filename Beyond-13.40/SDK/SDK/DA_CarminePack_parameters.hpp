#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DA_CarminePack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function DA_CarminePack.DA_CarminePack_C.ExecuteUbergraph_DA_CarminePack
// 0x0338 (0x0338 - 0x0000)
struct DA_CarminePack_C_ExecuteUbergraph_DA_CarminePack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_666E[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortDecoHelper*                        K2Node_Event_FortDecoHelper_1;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortDecoHelper*                        K2Node_Event_FortDecoHelper;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0030(0x00B0)()
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_666F[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_1;             // 0x00F0(0x00B0)()
	int32                                         Temp_int_Variable;                                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x01A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6670[0x2];                                     // 0x01A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_1;              // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6671[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_2;              // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6672[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x01C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6673[0x6];                                     // 0x01DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_3;              // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_CustomEvent_Hit;                            // 0x01E8(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_6674[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;                  // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6675[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_4;              // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6676[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1; // 0x0298(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6677[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_5;              // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_2;                  // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6678[0x6];                                     // 0x02C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x02C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RemoveActiveEffectsWithSourceTags_ReturnValue; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate;              // 0x02D4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1; // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6679[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_6;              // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_667A[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_Array_Get_Item;                           // 0x02FC(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_667B[0x4];                                     // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0x0308(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_667C[0x6];                                     // 0x0312(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue; // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0324(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_667D[0x3];                                     // 0x0325(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x032C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x032D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_667E[0x2];                                     // 0x032E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RemoveActiveEffectsWithSourceTags_ReturnValue_1; // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DA_CarminePack.DA_CarminePack_C.Landed
// 0x008C (0x008C - 0x0000)
struct DA_CarminePack_C_Landed final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function DA_CarminePack.DA_CarminePack_C.BPPressSecondaryFire
// 0x0008 (0x0008 - 0x0000)
struct DA_CarminePack_C_BPPressSecondaryFire final
{
public:
	class AFortDecoHelper*                        FortDecoHelper;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DA_CarminePack.DA_CarminePack_C.BPPressTrigger
// 0x0008 (0x0008 - 0x0000)
struct DA_CarminePack_C_BPPressTrigger final
{
public:
	class AFortDecoHelper*                        FortDecoHelper;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

