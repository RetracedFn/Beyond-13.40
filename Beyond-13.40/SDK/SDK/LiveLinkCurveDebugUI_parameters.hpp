#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkCurveDebugUI

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.DisplayLiveLinkDebugger
// 0x0010 (0x0010 - 0x0000)
struct LiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger final
{
public:
	class FString                                 SubjectName;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetBarColorForCurveValue
// 0x0030 (0x0030 - 0x0000)
struct LiveLinkDebuggerSettings_GetBarColorForCurveValue final
{
public:
	float                                         CurveValue;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_469D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            ReturnValue;                                       // 0x0008(0x0028)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetDPIScaleBasedOnSize
// 0x000C (0x000C - 0x0000)
struct LiveLinkDebuggerSettings_GetDPIScaleBasedOnSize final
{
public:
	struct FIntPoint                              Size;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

