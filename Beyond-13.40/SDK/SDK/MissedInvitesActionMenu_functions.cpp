#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissedInvitesActionMenu

#include "Basic.hpp"

#include "MissedInvitesActionMenu_classes.hpp"
#include "MissedInvitesActionMenu_parameters.hpp"


namespace SDK
{

// Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.ExecuteUbergraph_MissedInvitesActionMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissedInvitesActionMenu_C::ExecuteUbergraph_MissedInvitesActionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissedInvitesActionMenu_C", "ExecuteUbergraph_MissedInvitesActionMenu");

	Params::MissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)

void UMissedInvitesActionMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissedInvitesActionMenu_C", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UMissedInvitesActionMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissedInvitesActionMenu_C", "OnKeyUp");

	Params::MissedInvitesActionMenu_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

