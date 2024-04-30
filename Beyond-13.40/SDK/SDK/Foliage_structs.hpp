#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Foliage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Foliage.EFoliageScaling
// NumValues: 0x0006
enum class EFoliageScaling : uint8
{
	Uniform                                  = 0,
	Free                                     = 1,
	LockXY                                   = 2,
	LockXZ                                   = 3,
	LockYZ                                   = 4,
	EFoliageScaling_MAX                      = 5,
};

// Enum Foliage.EVertexColorMaskChannel
// NumValues: 0x0006
enum class EVertexColorMaskChannel : uint8
{
	Red                                      = 0,
	Green                                    = 1,
	Blue                                     = 2,
	Alpha                                    = 3,
	MAX_None                                 = 4,
	EVertexColorMaskChannel_MAX              = 5,
};

// Enum Foliage.FoliageVertexColorMask
// NumValues: 0x0006
enum class EFoliageVertexColorMask : uint8
{
	FOLIAGEVERTEXCOLORMASK_Disabled          = 0,
	FOLIAGEVERTEXCOLORMASK_Red               = 1,
	FOLIAGEVERTEXCOLORMASK_Green             = 2,
	FOLIAGEVERTEXCOLORMASK_Blue              = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha             = 4,
	FOLIAGEVERTEXCOLORMASK_MAX               = 5,
};

// Enum Foliage.ESimulationQuery
// NumValues: 0x0005
enum class ESimulationQuery : uint8
{
	None                                     = 0,
	CollisionOverlap                         = 1,
	ShadeOverlap                             = 2,
	AnyOverlap                               = 3,
	ESimulationQuery_MAX                     = 4,
};

// Enum Foliage.ESimulationOverlap
// NumValues: 0x0004
enum class ESimulationOverlap : uint8
{
	CollisionOverlap                         = 0,
	ShadeOverlap                             = 1,
	None                                     = 2,
	ESimulationOverlap_MAX                   = 3,
};

// ScriptStruct Foliage.FoliageVertexColorChannelMask
// 0x000C (0x000C - 0x0000)
struct FFoliageVertexColorChannelMask final
{
public:
	uint8                                         UseMask : 1;                                       // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_4A28[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaskThreshold;                                     // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         InvertMask : 1;                                    // 0x0008(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_4A29[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct Foliage.FoliageTypeObject
// 0x0020 (0x0020 - 0x0000)
struct FFoliageTypeObject final
{
public:
	class UObject*                                FoliageTypeObject;                                 // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFoliageType*                           TypeInstance;                                      // 0x0008(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bIsAsset;                                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4A2A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UFoliageType_InstancedStaticMesh> Type;                                              // 0x0018(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Foliage.ProceduralFoliageInstance
// 0x0050 (0x0050 - 0x0000)
struct FProceduralFoliageInstance final
{
public:
	struct FQuat                                  Rotation;                                          // 0x0000(0x0010)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Age;                                               // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x0020(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFoliageType*                           Type;                                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4A2B[0x18];                                    // 0x0038(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

