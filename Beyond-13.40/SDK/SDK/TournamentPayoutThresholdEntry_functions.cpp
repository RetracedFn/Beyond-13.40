#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TournamentPayoutThresholdEntry

#include "Basic.hpp"

#include "TournamentPayoutThresholdEntry_classes.hpp"
#include "TournamentPayoutThresholdEntry_parameters.hpp"


namespace SDK
{

// Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.ExecuteUbergraph_TournamentPayoutThresholdEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentPayoutThresholdEntry_C::ExecuteUbergraph_TournamentPayoutThresholdEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutThresholdEntry_C", "ExecuteUbergraph_TournamentPayoutThresholdEntry");

	Params::TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnPayoutDataSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   EntryIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentPayoutThresholdEntry_C::OnPayoutDataSet(int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutThresholdEntry_C", "OnPayoutDataSet");

	Params::TournamentPayoutThresholdEntry_C_OnPayoutDataSet Parms{};

	Parms.EntryIndex = EntryIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UTournamentPayoutThresholdEntry_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutThresholdEntry_C", "OnRemovedFromFocusPath");

	Params::TournamentPayoutThresholdEntry_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UTournamentPayoutThresholdEntry_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutThresholdEntry_C", "OnAddedToFocusPath");

	Params::TournamentPayoutThresholdEntry_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}

