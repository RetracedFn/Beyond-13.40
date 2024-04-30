#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyPlayerPadGadgets

#include "Basic.hpp"

#include "LobbyPlayerPadGadgets_classes.hpp"
#include "LobbyPlayerPadGadgets_parameters.hpp"


namespace SDK
{

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseEntered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadGadgets_C::OnGadgetsMouseEntered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "OnGadgetsMouseEntered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadGadgets_C::OnGadgetsMouseLeft__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "OnGadgetsMouseLeft__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.ExecuteUbergraph_LobbyPlayerPadGadgets
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerPadGadgets_C::ExecuteUbergraph_LobbyPlayerPadGadgets(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "ExecuteUbergraph_LobbyPlayerPadGadgets");

	Params::LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULobbyPlayerPadGadgets_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "OnMouseLeave");

	Params::LobbyPlayerPadGadgets_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULobbyPlayerPadGadgets_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "OnMouseEnter");

	Params::LobbyPlayerPadGadgets_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              TeamMemberInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ULobbyPlayerPadGadgets_C::Refresh(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "Refresh");

	Params::LobbyPlayerPadGadgets_C_Refresh Parms{};

	Parms.TeamMemberInfo = std::move(TeamMemberInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply ULobbyPlayerPadGadgets_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "OnMouseButtonDown");

	Params::LobbyPlayerPadGadgets_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnInputClicked
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadGadgets_C::OnInputClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "OnInputClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_PlayerIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerPadGadgets_C::Initialize(int32 Param_PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "Initialize");

	Params::LobbyPlayerPadGadgets_C_Initialize Parms{};

	Parms.Param_PlayerIndex = Param_PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

