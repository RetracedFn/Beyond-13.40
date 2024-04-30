#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_GenericTriggeredAbility

#include "Basic.hpp"

#include "GAT_GenericTriggeredAbility_classes.hpp"
#include "GAT_GenericTriggeredAbility_parameters.hpp"


namespace SDK
{

// Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.ExecuteUbergraph_GAT_GenericTriggeredAbility
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_GenericTriggeredAbility_C::ExecuteUbergraph_GAT_GenericTriggeredAbility(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_GenericTriggeredAbility_C", "ExecuteUbergraph_GAT_GenericTriggeredAbility");

	Params::GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Param_EventData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_GenericTriggeredAbility_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& Param_EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_GenericTriggeredAbility_C", "K2_ActivateAbilityFromEvent");

	Params::GAT_GenericTriggeredAbility_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.Param_EventData = std::move(Param_EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}

