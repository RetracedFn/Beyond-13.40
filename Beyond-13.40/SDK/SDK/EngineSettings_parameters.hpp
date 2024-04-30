#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EngineSettings

#include "Basic.hpp"


namespace SDK::Params
{

// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
// 0x0008 (0x0008 - 0x0000)
struct GameMapsSettings_GetGameMapsSettings final
{
public:
	class UGameMapsSettings*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
// 0x0001 (0x0001 - 0x0000)
struct GameMapsSettings_SetSkipAssigningGamepadToPlayer1 final
{
public:
	bool                                          bSkipFirstPlayer;                                  // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
// 0x0001 (0x0001 - 0x0000)
struct GameMapsSettings_GetSkipAssigningGamepadToPlayer1 final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

