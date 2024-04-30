#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_MED_Racer_Zero_AnimBP_0

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass M_MED_Racer_Zero_AnimBP.M_MED_Racer_Zero_AnimBP_C
// 0x0810 (0x0C60 - 0x0450)
class M_MED_Racer_Zero_AnimBP_0::UM_MED_Racer_Zero_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                         Pad_6B4C[0x8];                                     // 0x0448(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0458(0x0030)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0488(0x0140)(ContainsInstancedReference)
	uint8                                         Pad_6B4D[0x8];                                     // 0x05C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x05D0(0x0650)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0C20(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0C40(0x0020)()

public:
	void ExecuteUbergraph_M_MED_Racer_Zero_AnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBlueprintGeneratedClass M_MED_Racer_Zero_AnimBP.M_MED_Racer_Zero_AnimBP_C", true, "M_MED_Racer_Zero_AnimBP_C">();
	}
	static class M_MED_Racer_Zero_AnimBP_0::UM_MED_Racer_Zero_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<M_MED_Racer_Zero_AnimBP_0::UM_MED_Racer_Zero_AnimBP_C>();
	}
};

}

