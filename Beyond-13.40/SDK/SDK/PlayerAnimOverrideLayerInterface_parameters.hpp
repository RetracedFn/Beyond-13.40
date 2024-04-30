#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerAnimOverrideLayerInterface

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.FullBodyOverride
// 0x0020 (0x0020 - 0x0000)
struct PlayerAnimOverrideLayerInterface_C_FullBodyOverride final
{
public:
	struct FPoseLink                              PassThroughFullBodyPose;                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_FullBodyOverride;                            // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.CharacterSkeletalControlPostLegIK
// 0x0020 (0x0020 - 0x0000)
struct PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK final
{
public:
	struct FPoseLink                              InPosePostLegIK;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_CharacterSkeletalControlPostLegIK;           // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

}

