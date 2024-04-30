#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_MED_Sandcastle_AnimBP

#include "Basic.hpp"

#include "M_MED_Sandcastle_AnimBP_classes.hpp"
#include "M_MED_Sandcastle_AnimBP_parameters.hpp"


namespace SDK
{

// Function M_MED_Sandcastle_AnimBP.M_MED_Sandcastle_AnimBP_C.ExecuteUbergraph_M_MED_Sandcastle_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Sandcastle_AnimBP_C::ExecuteUbergraph_M_MED_Sandcastle_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_MED_Sandcastle_AnimBP_C", "ExecuteUbergraph_M_MED_Sandcastle_AnimBP");

	Params::M_MED_Sandcastle_AnimBP_C_ExecuteUbergraph_M_MED_Sandcastle_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function M_MED_Sandcastle_AnimBP.M_MED_Sandcastle_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Sandcastle_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_MED_Sandcastle_AnimBP_C", "BlueprintUpdateAnimation");

	Params::M_MED_Sandcastle_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function M_MED_Sandcastle_AnimBP.M_MED_Sandcastle_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UM_MED_Sandcastle_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_MED_Sandcastle_AnimBP_C", "AnimGraph");

	Params::M_MED_Sandcastle_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

