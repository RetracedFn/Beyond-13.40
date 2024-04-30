#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RebootVanIndicator

#include "Basic.hpp"

#include "RebootVanIndicator_classes.hpp"
#include "RebootVanIndicator_parameters.hpp"


namespace SDK
{

// Function RebootVanIndicator.RebootVanIndicator_C.ExecuteUbergraph_RebootVanIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URebootVanIndicator_C::ExecuteUbergraph_RebootVanIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootVanIndicator_C", "ExecuteUbergraph_RebootVanIndicator");

	Params::RebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RebootVanIndicator.RebootVanIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URebootVanIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootVanIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

