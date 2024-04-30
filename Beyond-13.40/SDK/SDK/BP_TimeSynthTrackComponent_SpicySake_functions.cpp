#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TimeSynthTrackComponent_SpicySake

#include "Basic.hpp"

#include "BP_TimeSynthTrackComponent_SpicySake_classes.hpp"
#include "BP_TimeSynthTrackComponent_SpicySake_parameters.hpp"


namespace SDK
{

// Function BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C.OnDataTrackerUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TimeSynthTrackComponent_SpicySake_C::OnDataTrackerUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_SpicySake_C", "OnDataTrackerUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C.GetRemainingEventCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Cooldown                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_SpicySake_C::GetRemainingEventCooldown(float* Cooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_SpicySake_C", "GetRemainingEventCooldown");

	Params::BP_TimeSynthTrackComponent_SpicySake_C_GetRemainingEventCooldown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Cooldown != nullptr)
		*Cooldown = Parms.Cooldown;
}


// Function BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C.HandleMixState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TimeSynthTrackComponent_SpicySake_C::HandleMixState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_SpicySake_C", "HandleMixState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C.OnDataTrackerStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TimeSynthTrackComponent_SpicySake_C::OnDataTrackerStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_SpicySake_C", "OnDataTrackerStart");

	UObject::ProcessEvent(Func, nullptr);
}

}

