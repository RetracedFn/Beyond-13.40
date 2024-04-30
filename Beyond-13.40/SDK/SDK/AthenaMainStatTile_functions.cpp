#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMainStatTile

#include "Basic.hpp"

#include "AthenaMainStatTile_classes.hpp"
#include "AthenaMainStatTile_parameters.hpp"


namespace SDK
{

// Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             StatValueAsText                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaMainStatTile_C::SetStatValue(const class FText& StatValueAsText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMainStatTile_C", "SetStatValue");

	Params::AthenaMainStatTile_C_SetStatValue Parms{};

	Parms.StatValueAsText = std::move(StatValueAsText);

	UObject::ProcessEvent(Func, &Parms);
}

}

