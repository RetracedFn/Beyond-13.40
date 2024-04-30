#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_FloppingRabbit

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.ExecuteUbergraph_GA_Athena_FloppingRabbit
// 0x00E8 (0x00E8 - 0x0000)
struct GA_Athena_FloppingRabbit_C_ExecuteUbergraph_GA_Athena_FloppingRabbit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   Temp_name_Variable;                                // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5651[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5652[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput; // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue; // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5653[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_FloppingRabbit_Weap_Athena_C*        K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5654[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APrj_Athena_FloppingRabbit_C*           K2Node_DynamicCast_AsPrj_Athena_Flopping_Rabbit;   // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5655[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x00BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5656[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x00C8(0x0010)(ZeroConstructor, NoDestructor)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnCompleted_27A3BC8E4EB0B07EA2FD509EEE97AFC7
// 0x0008 (0x0008 - 0x0000)
struct GA_Athena_FloppingRabbit_C_OnCompleted_27A3BC8E4EB0B07EA2FD509EEE97AFC7 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnBlendOut_27A3BC8E4EB0B07EA2FD509EEE97AFC7
// 0x0008 (0x0008 - 0x0000)
struct GA_Athena_FloppingRabbit_C_OnBlendOut_27A3BC8E4EB0B07EA2FD509EEE97AFC7 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnInterrupted_27A3BC8E4EB0B07EA2FD509EEE97AFC7
// 0x0008 (0x0008 - 0x0000)
struct GA_Athena_FloppingRabbit_C_OnInterrupted_27A3BC8E4EB0B07EA2FD509EEE97AFC7 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnNotifyBegin_27A3BC8E4EB0B07EA2FD509EEE97AFC7
// 0x0008 (0x0008 - 0x0000)
struct GA_Athena_FloppingRabbit_C_OnNotifyBegin_27A3BC8E4EB0B07EA2FD509EEE97AFC7 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnNotifyEnd_27A3BC8E4EB0B07EA2FD509EEE97AFC7
// 0x0008 (0x0008 - 0x0000)
struct GA_Athena_FloppingRabbit_C_OnNotifyEnd_27A3BC8E4EB0B07EA2FD509EEE97AFC7 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.K2_CanActivateAbility
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Athena_FloppingRabbit_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0048(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0068(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5657[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5658[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput; // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue; // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5659[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_1; // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_1; // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

