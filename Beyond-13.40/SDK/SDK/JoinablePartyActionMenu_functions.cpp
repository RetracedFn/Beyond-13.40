#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JoinablePartyActionMenu

#include "Basic.hpp"

#include "JoinablePartyActionMenu_classes.hpp"
#include "JoinablePartyActionMenu_parameters.hpp"


namespace SDK
{

// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.ExecuteUbergraph_JoinablePartyActionMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinablePartyActionMenu_C::ExecuteUbergraph_JoinablePartyActionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinablePartyActionMenu_C", "ExecuteUbergraph_JoinablePartyActionMenu");

	Params::JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)

void UJoinablePartyActionMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinablePartyActionMenu_C", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnToggleConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJoinablePartyActionMenu_C::OnToggleConfirmation(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinablePartyActionMenu_C", "OnToggleConfirmation");

	Params::JoinablePartyActionMenu_C_OnToggleConfirmation Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

