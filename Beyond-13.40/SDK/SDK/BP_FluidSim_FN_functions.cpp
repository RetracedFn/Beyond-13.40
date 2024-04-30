#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluidSim_FN

#include "Basic.hpp"

#include "BP_FluidSim_FN_classes.hpp"
#include "BP_FluidSim_FN_parameters.hpp"


namespace SDK
{

// Function BP_FluidSim_FN.BP_FluidSim_FN_C.ExecuteUbergraph_BP_FluidSim_FN
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluidSim_FN_C::ExecuteUbergraph_BP_FluidSim_FN(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidSim_FN_C", "ExecuteUbergraph_BP_FluidSim_FN");

	Params::BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetPlayerPawnForces
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_FN_C::GetPlayerPawnForces()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidSim_FN_C", "GetPlayerPawnForces");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetLocalPawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                            Pawn                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluidSim_FN_C::GetLocalPawn(class APawn** Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidSim_FN_C", "GetLocalPawn");

	Params::BP_FluidSim_FN_C_GetLocalPawn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pawn != nullptr)
		*Pawn = Parms.Pawn;
}


// Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetFortnitePawnForces
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_FN_C::GetFortnitePawnForces()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidSim_FN_C", "GetFortnitePawnForces");

	UObject::ProcessEvent(Func, nullptr);
}

}

