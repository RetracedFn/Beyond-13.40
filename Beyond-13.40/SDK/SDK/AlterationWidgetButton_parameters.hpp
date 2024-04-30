#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlterationWidgetButton

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function AlterationWidgetButton.AlterationWidgetButton_C.Setup Triangles
// 0x0008 (0x0008 - 0x0000)
struct AlterationWidgetButton_C_Setup_Triangles final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AlterationWidgetButton.AlterationWidgetButton_C.Update Colors
// 0x0098 (0x0098 - 0x0000)
struct AlterationWidgetButton_C_Update_Colors final
{
public:
	class UFortAlterationInfo*                    CallFunc_GetAlterationInfo_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAlterationItemDefinition*          CallFunc_GetAlterationDefintion_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D5C[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0018(0x0080)()
};

// Function AlterationWidgetButton.AlterationWidgetButton_C.IntroStart
// 0x0008 (0x0008 - 0x0000)
struct AlterationWidgetButton_C_IntroStart final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AlterationWidgetButton.AlterationWidgetButton_C.IntroReset
// 0x0008 (0x0008 - 0x0000)
struct AlterationWidgetButton_C_IntroReset final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AlterationWidgetButton.AlterationWidgetButton_C.TriggerModificationAnimation
// 0x0008 (0x0008 - 0x0000)
struct AlterationWidgetButton_C_TriggerModificationAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AlterationWidgetButton.AlterationWidgetButton_C.ExecuteUbergraph_AlterationWidgetButton
// 0x0010 (0x0010 - 0x0000)
struct AlterationWidgetButton_C_ExecuteUbergraph_AlterationWidgetButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D5D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAlterationInfo*                    CallFunc_GetAlterationInfo_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

