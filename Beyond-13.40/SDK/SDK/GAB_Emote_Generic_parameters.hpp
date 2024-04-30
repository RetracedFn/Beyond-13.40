#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_Emote_Generic

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.ExecuteUbergraph_GAB_Emote_Generic
// 0x0298 (0x0298 - 0x0000)
struct GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortGameplayAbilityMontageSectionToPlay      Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortGameplayAbilityMontageSectionToPlay      Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5305[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5306[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable_1;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_DynamicCast_AsAnim_Montage;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMontagePlaying_Result;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMontagePlaying_Result_1;                // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5307[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5308[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDefaultBlendOutTime_ReturnValue;       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5309[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetCurrentSourceObject_ReturnValue;       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMontageItemDefinitionBase*         K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_530A[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_HasCosmeticDrivenMotageSection_ReturnValue; // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShouldPlayRandomSectionByName_ReturnValue; // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortGameplayAbilityMontageSectionToPlay      K2Node_Select_Default;                             // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_530B[0x1];                                     // 0x0087(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable;                              // 0x0088(0x0028)()
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	EFortCustomBodyType                           CallFunc_GetBodyTypeAndGender_BodyType;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCustomGender                             CallFunc_GetBodyTypeAndGender_Gender;              // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_530C[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x00C0(0x0028)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x00E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimMontage>            CallFunc_GetMontageToPlay_ReturnValue;             // 0x00F0(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsAssetNull_ReturnValue;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_530D[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_530E[0x2];                                     // 0x012E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_1;          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_530F[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetCurrentSourceObject_ReturnValue_1;     // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMontageItemDefinitionBase*         K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base_1; // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5310[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_1;                   // 0x0170(0x0028)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_1;               // 0x0198(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x01A0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_ShouldHolsterWeapon_ReturnValue;          // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5311[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_PickRandomSectionByName_ReturnValue;      // 0x01B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_PickCosmeticDrivenSectionByName_ReturnValue; // 0x01BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5312[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_2;          // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5313[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_2;                   // 0x01E0(0x0028)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_2;               // 0x0208(0x0008)(NoDestructor, HasGetValueTypeHash)
	TArray<struct FSoftObjectPath>                CallFunc_GatherVariantAssets_VariantAssetsNeeded;  // 0x0210(0x0010)(ReferenceParm, HasGetValueTypeHash)
	struct FSoftObjectPath                        CallFunc_Array_Get_Item;                           // 0x0220(0x0018)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5314[0x4];                                     // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UObject>                 CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue; // 0x0240(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5315[0x3];                                     // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_3;            // 0x0270(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5316[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0284(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_DA96775D40CD998BF2FF0085FE5AB126
// 0x0008 (0x0008 - 0x0000)
struct GAB_Emote_Generic_C_OnLoaded_DA96775D40CD998BF2FF0085FE5AB126 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D
// 0x0008 (0x0008 - 0x0000)
struct GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Triggered_DE7019AA4E006879EDD264899869FEE2
// 0x0030 (0x0030 - 0x0000)
struct GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Cancelled_DE7019AA4E006879EDD264899869FEE2
// 0x0030 (0x0030 - 0x0000)
struct GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Completed_DE7019AA4E006879EDD264899869FEE2
// 0x0030 (0x0030 - 0x0000)
struct GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_OnEndAbility
// 0x0028 (0x0028 - 0x0000)
struct GAB_Emote_Generic_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5317[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetCurrentSourceObject_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMontageItemDefinitionBase*         K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5318[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetBodyTypeAndGender
// 0x0020 (0x0020 - 0x0000)
struct GAB_Emote_Generic_C_GetBodyTypeAndGender final
{
public:
	EFortCustomBodyType                           BodyType;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCustomGender                             Gender;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5319[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortCustomBodyType                           CallFunc_GetCharacterBodyType_ReturnValue;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCustomGender                             CallFunc_GetCharacterGender_ReturnValue;           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetMontageToPlay
// 0x0060 (0x0060 - 0x0000)
struct GAB_Emote_Generic_C_GetMontageToPlay final
{
public:
	class UFortMontageItemDefinitionBase*         EmoteAsset;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCustomBodyType                           BodyType;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCustomGender                             Gender;                                            // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_531A[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UAnimMontage>            ReturnValue;                                       // 0x0010(0x0028)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimMontage>            CallFunc_GetAnimation_ReturnValue;                 // 0x0038(0x0028)(HasGetValueTypeHash)
};

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.SetReticleVisibility
// 0x0020 (0x0020 - 0x0000)
struct GAB_Emote_Generic_C_SetReticleVisibility final
{
public:
	bool                                          ShouldHide;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_531B[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*              K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.ForceStopMontage
// 0x0020 (0x0020 - 0x0000)
struct GAB_Emote_Generic_C_ForceStopMontage final
{
public:
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_531C[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDefaultBlendOutTime_ReturnValue;       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.IsMontagePlaying
// 0x0020 (0x0020 - 0x0000)
struct GAB_Emote_Generic_C_IsMontagePlaying final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_531D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Montage_IsPlaying_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

