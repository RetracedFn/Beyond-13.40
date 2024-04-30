#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GibsonRuntime

#include "Basic.hpp"

#include "GibsonRuntime_classes.hpp"
#include "GibsonRuntime_parameters.hpp"


namespace SDK
{

// Function GibsonRuntime.FortAthenaMutator_Gibson.OnGamePhaseStepChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// TScriptInterface<class IFortSafeZoneInterface>SafeZoneInterface                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// EAthenaGamePhaseStep                    GamePhaseStep                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Gibson::OnGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_Gibson", "OnGamePhaseStepChanged");

	Params::FortAthenaMutator_Gibson_OnGamePhaseStepChanged Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GibsonRuntime.FortAthenaMutator_Gibson.OnMutatorReady
// (Event, Public, BlueprintEvent)

void AFortAthenaMutator_Gibson::OnMutatorReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_Gibson", "OnMutatorReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GibsonRuntime.FortAthenaMutator_Gibson.OnPlayerPawnDBNOStateChanged
// (Final, Native, Private)
// Parameters:
// class AFortPawn*                        InPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bInIsDBNO                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Gibson::OnPlayerPawnDBNOStateChanged(class AFortPawn* InPlayer, bool bInIsDBNO)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_Gibson", "OnPlayerPawnDBNOStateChanged");

	Params::FortAthenaMutator_Gibson_OnPlayerPawnDBNOStateChanged Parms{};

	Parms.InPlayer = InPlayer;
	Parms.bInIsDBNO = bInIsDBNO;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GibsonRuntime.FortAthenaMutator_Gibson.OnSafeZoneUpdated
// (Final, Native, Private)

void AFortAthenaMutator_Gibson::OnSafeZoneUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_Gibson", "OnSafeZoneUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GibsonRuntime.FortAthenaMutator_Gibson.OnServerGameMemberRemoved
// (Final, Native, Private)
// Parameters:
// uint8                                   InSquadId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                                   InTeamIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*           ChangedPS                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Gibson::OnServerGameMemberRemoved(uint8 InSquadId, uint8 InTeamIndex, class AFortPlayerStateAthena* ChangedPS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_Gibson", "OnServerGameMemberRemoved");

	Params::FortAthenaMutator_Gibson_OnServerGameMemberRemoved Parms{};

	Parms.InSquadId = InSquadId;
	Parms.InTeamIndex = InTeamIndex;
	Parms.ChangedPS = ChangedPS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GibsonRuntime.FortAthenaMutator_Gibson.SpawnReinforcementSquad
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           ReinforcementSpawner                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Gibson::SpawnReinforcementSquad(const class AActor* ReinforcementSpawner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_Gibson", "SpawnReinforcementSquad");

	Params::FortAthenaMutator_Gibson_SpawnReinforcementSquad Parms{};

	Parms.ReinforcementSpawner = ReinforcementSpawner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GibsonRuntime.FortCheatManager_Gibson.GibsonForcePodSpawn
// (Final, Exec, Native, Public)

void UFortCheatManager_Gibson::GibsonForcePodSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_Gibson", "GibsonForcePodSpawn");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

