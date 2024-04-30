#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Parent_Tree

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Parent_Tree.Parent_Tree_C
// 0x00C0 (0x0C80 - 0x0BC0)
class AParent_Tree_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                Wind_Direction;                                    // 0x0BC8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          StormActive_;                                      // 0x0BD4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DistanceFieldsEnabled_;                            // 0x0BD5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A16[0x2];                                     // 0x0BD6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortWindImpulseHandle                 WindHandle;                                        // 0x0BD8(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          DebugWind;                                         // 0x0BDC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A17[0x3];                                     // 0x0BDD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Debug_Wind_Intensity;                              // 0x0BE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A18[0x4];                                     // 0x0BE4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Debug_TempMaterial;                                // 0x0BE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugWindYaw;                                      // 0x0BF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A19[0x4];                                     // 0x0BF4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   Wind_Intensity_Debug_Mesh;                         // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnWindFX_;                                      // 0x0C00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A1A[0xF];                                     // 0x0C01(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             WindFX_Transform;                                  // 0x0C10(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         WindFX_MaxDrawDistance;                            // 0x0C40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A1B[0x4];                                     // 0x0C44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               WindFX;                                            // 0x0C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LeafRadius;                                        // 0x0C50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeafCenter_Offset;                                 // 0x0C54(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCylinder;                                       // 0x0C60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A1C[0x3];                                     // 0x0C61(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HUE;                                               // 0x0C64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WindDirection;                                     // 0x0C68(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BoundRadius;                                       // 0x0C74(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BoundsHeight_CylinderOnly_;                        // 0x0C78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void RemoveTestWind(float BlendTime);
	void UserConstructionScript();
	void ChangeWindIntensity(float Intensity, float Time_It_Takes_To_Reach_New_Intensity);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Parent_Tree(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Parent_Tree_C">();
	}
	static class AParent_Tree_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParent_Tree_C>();
	}
};

}

