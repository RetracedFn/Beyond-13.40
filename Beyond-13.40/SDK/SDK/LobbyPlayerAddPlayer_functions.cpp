#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyPlayerAddPlayer

#include "Basic.hpp"

#include "LobbyPlayerAddPlayer_classes.hpp"
#include "LobbyPlayerAddPlayer_parameters.hpp"


namespace SDK
{

// Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.ExecuteUbergraph_LobbyPlayerAddPlayer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerAddPlayer_C::ExecuteUbergraph_LobbyPlayerAddPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerAddPlayer_C", "ExecuteUbergraph_LobbyPlayerAddPlayer");

	Params::LobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void ULobbyPlayerAddPlayer_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerAddPlayer_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void ULobbyPlayerAddPlayer_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerAddPlayer_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

}

