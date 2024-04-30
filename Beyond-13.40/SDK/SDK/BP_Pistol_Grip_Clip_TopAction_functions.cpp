#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pistol_Grip_Clip_TopAction

#include "Basic.hpp"

#include "BP_Pistol_Grip_Clip_TopAction_classes.hpp"
#include "BP_Pistol_Grip_Clip_TopAction_parameters.hpp"


namespace SDK
{

// Function BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C.ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Pistol_Grip_Clip_TopAction_C::ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Pistol_Grip_Clip_TopAction_C", "ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction");

	Params::BP_Pistol_Grip_Clip_TopAction_C_ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UBP_Pistol_Grip_Clip_TopAction_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Pistol_Grip_Clip_TopAction_C", "AnimGraph");

	Params::BP_Pistol_Grip_Clip_TopAction_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

