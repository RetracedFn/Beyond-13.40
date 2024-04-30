#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Curie_IceBlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Curie_IceBlock.BP_Curie_IceBlock_C
// 0x0030 (0x07E8 - 0x07B8)
class ABP_Curie_IceBlock_C final : public AFortCurieBGA
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Shrink_Growth_BBC056E94CAD8AF5AAA8039EB9A8BD60;    // 0x07C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Shrink__Direction_BBC056E94CAD8AF5AAA8039EB9A8BD60; // 0x07CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50F3[0x3];                                     // 0x07CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Shrink;                                            // 0x07D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Growth_Growth_E5809E494ECFF24BA9FBF8959CC96B3B;    // 0x07D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Growth__Direction_E5809E494ECFF24BA9FBF8959CC96B3B; // 0x07DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50F4[0x3];                                     // 0x07DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Growth;                                            // 0x07E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Curie_IceBlock(int32 EntryPoint);
	void HandleShrink();
	void ReceiveBeginPlay();
	void Shrink__UpdateFunc();
	void Shrink__FinishedFunc();
	void Growth__UpdateFunc();
	void Growth__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Curie_IceBlock_C">();
	}
	static class ABP_Curie_IceBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Curie_IceBlock_C>();
	}
};

}

