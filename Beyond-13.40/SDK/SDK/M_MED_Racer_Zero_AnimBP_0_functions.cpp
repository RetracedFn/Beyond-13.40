#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_MED_Racer_Zero_AnimBP_0

#include "Basic.hpp"

#include "M_MED_Racer_Zero_AnimBP_0_classes.hpp"
#include "M_MED_Racer_Zero_AnimBP_0_parameters.hpp"


namespace SDK
{

// Function M_MED_Racer_Zero_AnimBP.M_MED_Racer_Zero_AnimBP_C.ExecuteUbergraph_M_MED_Racer_Zero_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void M_MED_Racer_Zero_AnimBP_0::UM_MED_Racer_Zero_AnimBP_C::ExecuteUbergraph_M_MED_Racer_Zero_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_MED_Racer_Zero_AnimBP_C", "ExecuteUbergraph_M_MED_Racer_Zero_AnimBP");

	Params::M_MED_Racer_Zero_AnimBP_C_ExecuteUbergraph_M_MED_Racer_Zero_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function M_MED_Racer_Zero_AnimBP.M_MED_Racer_Zero_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void M_MED_Racer_Zero_AnimBP_0::UM_MED_Racer_Zero_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_MED_Racer_Zero_AnimBP_C", "AnimGraph");

	Params::M_MED_Racer_Zero_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

