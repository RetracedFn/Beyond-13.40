#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Blueprint_Paper_VIM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
// 0x0510 (0x0860 - 0x0350)
class UBlueprint_Paper_VIM_C final : public UFortAnimInstance
{
public:
	uint8                                         Pad_5F96[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_3;                        // 0x0358(0x0128)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_2;                        // 0x0480(0x0128)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_1;                        // 0x05A8(0x0128)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone;                          // 0x06D0(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x07F8(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0818(0x0030)()
	struct FAnimNode_MeshSpaceRefPose             AnimGraphNode_MeshRefPose;                         // 0x0848(0x0010)()

public:
	void ExecuteUbergraph_Blueprint_Paper_VIM(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Blueprint_Paper_VIM_C">();
	}
	static class UBlueprint_Paper_VIM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprint_Paper_VIM_C>();
	}
};

}

