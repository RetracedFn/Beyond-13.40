#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortWaterBodyBP

#include "Basic.hpp"

#include "FortWaterBodyBP_classes.hpp"
#include "FortWaterBodyBP_parameters.hpp"


namespace SDK
{

// Function FortWaterBodyBP.FortWaterBodyBP_C.ExecuteUbergraph_FortWaterBodyBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFortWaterBodyBP_C::ExecuteUbergraph_FortWaterBodyBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortWaterBodyBP_C", "ExecuteUbergraph_FortWaterBodyBP");

	Params::FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortWaterBodyBP.FortWaterBodyBP_C.OnReceivedBulletImpact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AFortWaterBodyBP_C::OnReceivedBulletImpact(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortWaterBodyBP_C", "OnReceivedBulletImpact");

	Params::FortWaterBodyBP_C_OnReceivedBulletImpact Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortWaterBodyBP.FortWaterBodyBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFortWaterBodyBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortWaterBodyBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortWaterBodyBP.FortWaterBodyBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFortWaterBodyBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortWaterBodyBP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

