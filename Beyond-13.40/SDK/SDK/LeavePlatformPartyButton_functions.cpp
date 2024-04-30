#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeavePlatformPartyButton

#include "Basic.hpp"

#include "LeavePlatformPartyButton_classes.hpp"
#include "LeavePlatformPartyButton_parameters.hpp"


namespace SDK
{

// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.ExecuteUbergraph_LeavePlatformPartyButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeavePlatformPartyButton_C::ExecuteUbergraph_LeavePlatformPartyButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePlatformPartyButton_C", "ExecuteUbergraph_LeavePlatformPartyButton");

	Params::LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void ULeavePlatformPartyButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePlatformPartyButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void ULeavePlatformPartyButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePlatformPartyButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             New_Text                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void ULeavePlatformPartyButton_C::SetText(const class FText& New_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePlatformPartyButton_C", "SetText");

	Params::LeavePlatformPartyButton_C_SetText Parms{};

	Parms.New_Text = std::move(New_Text);

	UObject::ProcessEvent(Func, &Parms);
}

}

