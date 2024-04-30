#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraShader

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum NiagaraShader.FNiagaraCompileEventSeverity
// NumValues: 0x0004
enum class EFNiagaraCompileEventSeverity : uint8
{
	Log                                      = 0,
	Warning                                  = 1,
	Error                                    = 2,
	FNiagaraCompileEventSeverity_MAX         = 3,
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FNiagaraDataInterfaceGeneratedFunction final
{
public:
	uint8                                         Pad_4E20[0x28];                                    // 0x0000(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// 0x0030 (0x0030 - 0x0000)
struct FNiagaraDataInterfaceGPUParamInfo final
{
public:
	class FString                                 DataInterfaceHLSLSymbol;                           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DIClassName;                                       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// 0x0048 (0x0048 - 0x0000)
struct FNiagaraCompileEvent final
{
public:
	EFNiagaraCompileEventSeverity                 Severity;                                          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E21[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Message;                                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  NodeGuid;                                          // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  PinGuid;                                           // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                          StackGuids;                                        // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

