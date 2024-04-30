#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GibsonRuntime

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function GibsonRuntime.FortAthenaMutator_Gibson.OnGamePhaseStepChanged
// 0x0018 (0x0018 - 0x0000)
struct FortAthenaMutator_Gibson_OnGamePhaseStepChanged final
{
public:
	TScriptInterface<class IFortSafeZoneInterface> SafeZoneInterface;                                 // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	EAthenaGamePhaseStep                          GamePhaseStep;                                     // 0x0010(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F26[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GibsonRuntime.FortAthenaMutator_Gibson.OnPlayerPawnDBNOStateChanged
// 0x0010 (0x0010 - 0x0000)
struct FortAthenaMutator_Gibson_OnPlayerPawnDBNOStateChanged final
{
public:
	class AFortPawn*                              InPlayer;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInIsDBNO;                                         // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F27[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GibsonRuntime.FortAthenaMutator_Gibson.OnServerGameMemberRemoved
// 0x0010 (0x0010 - 0x0000)
struct FortAthenaMutator_Gibson_OnServerGameMemberRemoved final
{
public:
	uint8                                         InSquadId;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         InTeamIndex;                                       // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F28[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerStateAthena*                 ChangedPS;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GibsonRuntime.FortAthenaMutator_Gibson.SpawnReinforcementSquad
// 0x0008 (0x0008 - 0x0000)
struct FortAthenaMutator_Gibson_SpawnReinforcementSquad final
{
public:
	const class AActor*                           ReinforcementSpawner;                              // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

