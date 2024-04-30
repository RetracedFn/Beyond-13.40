#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortVoiceChannelSpeaker

#include "Basic.hpp"

#include "FortVoiceChannelSpeaker_classes.hpp"
#include "FortVoiceChannelSpeaker_parameters.hpp"


namespace SDK
{

// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.ExecuteUbergraph_FortVoiceChannelSpeaker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortVoiceChannelSpeaker_C::ExecuteUbergraph_FortVoiceChannelSpeaker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVoiceChannelSpeaker_C", "ExecuteUbergraph_FortVoiceChannelSpeaker");

	Params::FortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnAnimateTalkingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsNowTalking                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortVoiceChannelSpeaker_C::OnAnimateTalkingChanged(bool bIsNowTalking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVoiceChannelSpeaker_C", "OnAnimateTalkingChanged");

	Params::FortVoiceChannelSpeaker_C_OnAnimateTalkingChanged Parms{};

	Parms.bIsNowTalking = bIsNowTalking;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortVoiceChannelSpeaker_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVoiceChannelSpeaker_C", "PreConstruct");

	Params::FortVoiceChannelSpeaker_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnStyleAssigned
// (Event, Public, BlueprintEvent)
// Parameters:
// EChannelSpeakerStyle                    NewStyle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortVoiceChannelSpeaker_C::OnStyleAssigned(EChannelSpeakerStyle NewStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVoiceChannelSpeaker_C", "OnStyleAssigned");

	Params::FortVoiceChannelSpeaker_C_OnStyleAssigned Parms{};

	Parms.NewStyle = NewStyle;

	UObject::ProcessEvent(Func, &Parms);
}

}

