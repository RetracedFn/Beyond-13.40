#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_MED_Racer_Zero_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function M_MED_Racer_Zero_AnimBP.M_MED_Racer_Zero_AnimBP_C.ExecuteUbergraph_M_MED_Racer_Zero_AnimBP
// 0x0010 (0x0010 - 0x0000)
struct M_MED_Racer_Zero_AnimBP_C_ExecuteUbergraph_M_MED_Racer_Zero_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66BE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function M_MED_Racer_Zero_AnimBP.M_MED_Racer_Zero_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct M_MED_Racer_Zero_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};

}

