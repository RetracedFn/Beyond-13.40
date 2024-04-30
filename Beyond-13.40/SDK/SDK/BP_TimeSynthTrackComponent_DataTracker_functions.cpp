#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TimeSynthTrackComponent_DataTracker

#include "Basic.hpp"

#include "BP_TimeSynthTrackComponent_DataTracker_classes.hpp"
#include "BP_TimeSynthTrackComponent_DataTracker_parameters.hpp"


namespace SDK
{

// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.ExecuteUbergraph_BP_TimeSynthTrackComponent_DataTracker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::ExecuteUbergraph_BP_TimeSynthTrackComponent_DataTracker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "ExecuteUbergraph_BP_TimeSynthTrackComponent_DataTracker");

	Params::BP_TimeSynthTrackComponent_DataTracker_C_ExecuteUbergraph_BP_TimeSynthTrackComponent_DataTracker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_TimeSynthTrackComponent_DataTracker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnReady_FFC0E068479278E143D010AF8EB81D0D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*             GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*                    Playlist                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnReady_FFC0E068479278E143D010AF8EB81D0D(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnReady_FFC0E068479278E143D010AF8EB81D0D");

	Params::BP_TimeSynthTrackComponent_DataTracker_C_OnReady_FFC0E068479278E143D010AF8EB81D0D Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnDataTrackerStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnDataTrackerStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnDataTrackerUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnDataTrackerUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnDataTrackerEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnDataTrackerEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GetDataTrackerComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortGameplayDataTrackerComponent*Param_DataTrackerComponent                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::GetDataTrackerComponent(class UFortGameplayDataTrackerComponent** Param_DataTrackerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "GetDataTrackerComponent");

	Params::BP_TimeSynthTrackComponent_DataTracker_C_GetDataTrackerComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_DataTrackerComponent != nullptr)
		*Param_DataTrackerComponent = Parms.Param_DataTrackerComponent;
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.AssignDataTrackerComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGameplayDataTrackerComponent*Param_DataTrackerComponent                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::AssignDataTrackerComponent(class UFortGameplayDataTrackerComponent* Param_DataTrackerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "AssignDataTrackerComponent");

	Params::BP_TimeSynthTrackComponent_DataTracker_C_AssignDataTrackerComponent Parms{};

	Parms.Param_DataTrackerComponent = Param_DataTrackerComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GetDataTrackerComponentManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_TimeSynthTrackComponent_DataTracker_C::GetDataTrackerComponentManager()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "GetDataTrackerComponentManager");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerComponentRegistered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGameplayDataTrackerComponent*Data_Tracker_Component                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnDataTrackerComponentRegistered(class UFortGameplayDataTrackerComponent* Data_Tracker_Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnDataTrackerComponentRegistered");

	Params::BP_TimeSynthTrackComponent_DataTracker_C_OnDataTrackerComponentRegistered Parms{};

	Parms.Data_Tracker_Component = Data_Tracker_Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerComponentUnRegistered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGameplayDataTrackerComponent*Data_Tracker_Component                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnDataTrackerComponentUnRegistered(class UFortGameplayDataTrackerComponent* Data_Tracker_Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnDataTrackerComponentUnRegistered");

	Params::BP_TimeSynthTrackComponent_DataTracker_C_OnDataTrackerComponentUnRegistered Parms{};

	Parms.Data_Tracker_Component = Data_Tracker_Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnAnyEventValueChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGameplayDataTrackerComponent*Data_Tracker_Component                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Has_Event_Values                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TimeSynthTrackComponent_DataTracker_C::OnAnyEventValueChanged(class UFortGameplayDataTrackerComponent* Data_Tracker_Component, bool Has_Event_Values)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "OnAnyEventValueChanged");

	Params::BP_TimeSynthTrackComponent_DataTracker_C_OnAnyEventValueChanged Parms{};

	Parms.Data_Tracker_Component = Data_Tracker_Component;
	Parms.Has_Event_Values = Has_Event_Values;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GetRemainingEventCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Cooldown                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TimeSynthTrackComponent_DataTracker_C::GetRemainingEventCooldown(float* Cooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "GetRemainingEventCooldown");

	Params::BP_TimeSynthTrackComponent_DataTracker_C_GetRemainingEventCooldown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Cooldown != nullptr)
		*Cooldown = Parms.Cooldown;
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GetIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_Enabled                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TimeSynthTrackComponent_DataTracker_C::GetIsEnabled(bool* Param_Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "GetIsEnabled");

	Params::BP_TimeSynthTrackComponent_DataTracker_C_GetIsEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Enabled != nullptr)
		*Param_Enabled = Parms.Param_Enabled;
}


// Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.QueueTrackStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Play_Outro                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TimeSynthTrackComponent_DataTracker_C::QueueTrackStop(bool Play_Outro)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TimeSynthTrackComponent_DataTracker_C", "QueueTrackStop");

	Params::BP_TimeSynthTrackComponent_DataTracker_C_QueueTrackStop Parms{};

	Parms.Play_Outro = Play_Outro;

	UObject::ProcessEvent(Func, &Parms);
}

}

