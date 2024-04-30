#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fortnite_Base_Head_Export_Skeleton_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "LiveLink_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C
// 0x10A0 (0x1500 - 0x0460)
class UFortnite_Base_Head_Export_Skeleton_AnimBP_C : public UHeadPartAnimInstance
{
public:
	uint8                                         Pad_68BD[0x8];                                     // 0x0458(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_13;                    // 0x0468(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_12;                    // 0x0490(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x04B8(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0580(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;                  // 0x05C8(0x00C0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x0688(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_11;                    // 0x0750(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x0778(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x07A0(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x08A8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x08C8(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x08E8(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x09B0(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x09D8(0x00A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x0A78(0x0028)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x0AA0(0x00B0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x0B50(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x0B78(0x0028)()
	struct FAnimNode_LiveLinkPose                 AnimGraphNode_LiveLinkPose_1;                      // 0x0BA0(0x0050)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0BF0(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0CB8(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0CE0(0x00C0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0DA0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0DC8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x0DF0(0x0028)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0E18(0x00B0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0EC8(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0EF0(0x00A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0F90(0x0028)()
	struct FAnimNode_LiveLinkPose                 AnimGraphNode_LiveLinkPose;                        // 0x0FB8(0x0050)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x1008(0x00C8)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x10D0(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x1198(0x00C0)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x1258(0x0140)(ContainsInstancedReference)
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1398(0x0078)()
	struct FAnimNode_PoseBlendNode                AnimGraphNode_PoseBlendNode;                       // 0x1410(0x0098)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x14A8(0x0030)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x14D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GetPlayerListUsesCustomCharacterParts;             // 0x14E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsMoving;                                         // 0x14E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsOnGround_0;                                     // 0x14E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsSlopeSliding_0;                                 // 0x14E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsFallingLocal;                                   // 0x14E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsJumpingLocal;                                   // 0x14E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCrouching_0;                                    // 0x14E6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCrouchWalking;                                  // 0x14E7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCrouchSprinting_0;                              // 0x14E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsSprinting_0;                                    // 0x14E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsJogging_0;                                      // 0x14EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsDBNO_0;                                         // 0x14EB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsTargeting_0;                                    // 0x14EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsDancing;                                        // 0x14ED(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsMeleeSwing_0;                                   // 0x14EE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsLocomotion_0;                                   // 0x14EF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bRecentlyFired_0;                                  // 0x14F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68BE[0x3];                                     // 0x14F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LastFireTime;                                      // 0x14F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkydiving0;                                      // 0x14F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDive0;                                           // 0x14F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fortnite_Base_Head_Export_Skeleton_AnimBP_C">();
	}
	static class UFortnite_Base_Head_Export_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortnite_Base_Head_Export_Skeleton_AnimBP_C>();
	}
};

}

