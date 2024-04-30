#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Space_Wanderer_Head_AnimBP

#include "Basic.hpp"

#include "Space_Wanderer_Head_AnimBP_classes.hpp"
#include "Space_Wanderer_Head_AnimBP_parameters.hpp"


namespace SDK
{

// Function Space_Wanderer_Head_AnimBP.Space_Wanderer_Head_AnimBP_C.ExecuteUbergraph_Space_Wanderer_Head_AnimBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpace_Wanderer_Head_AnimBP_C::ExecuteUbergraph_Space_Wanderer_Head_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Space_Wanderer_Head_AnimBP_C", "ExecuteUbergraph_Space_Wanderer_Head_AnimBP");

	Params::Space_Wanderer_Head_AnimBP_C_ExecuteUbergraph_Space_Wanderer_Head_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Space_Wanderer_Head_AnimBP.Space_Wanderer_Head_AnimBP_C.OnCharacterCustomizationLoaded
// (Event, Public, BlueprintEvent)

void USpace_Wanderer_Head_AnimBP_C::OnCharacterCustomizationLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Space_Wanderer_Head_AnimBP_C", "OnCharacterCustomizationLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Space_Wanderer_Head_AnimBP.Space_Wanderer_Head_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void USpace_Wanderer_Head_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Space_Wanderer_Head_AnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Space_Wanderer_Head_AnimBP.Space_Wanderer_Head_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpace_Wanderer_Head_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Space_Wanderer_Head_AnimBP_C", "BlueprintUpdateAnimation");

	Params::Space_Wanderer_Head_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Space_Wanderer_Head_AnimBP.Space_Wanderer_Head_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void USpace_Wanderer_Head_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Space_Wanderer_Head_AnimBP_C", "AnimGraph");

	Params::Space_Wanderer_Head_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

