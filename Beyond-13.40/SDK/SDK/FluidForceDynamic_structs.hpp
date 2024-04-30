#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FluidForceDynamic

#include "Basic.hpp"

#include "FluidDynamicForceMeshType_structs.hpp"
#include "FluidForceSocketInfo_structs.hpp"


namespace SDK
{

// UserDefinedStruct FluidForceDynamic.FluidForceDynamic
// 0x0070 (0x0070 - 0x0000)
struct FFluidForceDynamic final
{
public:
	EFluidDynamicForceMeshType                    ForceType_28_DDC16EE543D2DFD3BA29C49D32198C9C;     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5788[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ForceRadius_32_C31B527C4C367A5CA5E1DF8E49E76234;   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ForceStrength_33_2CAA30794D1EFF60AE1C3491D011CECF; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5789[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        ForceComponent_34_ABF6640F40D37677EF6F809E09046055; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MaterialOverride_25_5A792CE8489A59E5D9B24F9E4DCFE94A; // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFluidForceSocketInfo                  SkeletalMeshSetup_31_51A4130440BAFFBA1DA0FE83E942A30A; // 0x0020(0x0050)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}

