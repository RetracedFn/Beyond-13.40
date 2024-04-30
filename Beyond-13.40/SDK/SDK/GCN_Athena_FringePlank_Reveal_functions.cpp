#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_FringePlank_Reveal

#include "Basic.hpp"

#include "GCN_Athena_FringePlank_Reveal_classes.hpp"
#include "GCN_Athena_FringePlank_Reveal_parameters.hpp"


namespace SDK
{

// Function GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C.ExecuteUbergraph_GCN_Athena_FringePlank_Reveal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Athena_FringePlank_Reveal_C::ExecuteUbergraph_GCN_Athena_FringePlank_Reveal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_FringePlank_Reveal_C", "ExecuteUbergraph_GCN_Athena_FringePlank_Reveal");

	Params::GCN_Athena_FringePlank_Reveal_C_ExecuteUbergraph_GCN_Athena_FringePlank_Reveal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C.PlayWorldSweep
// (BlueprintCallable, BlueprintEvent)

void AGCN_Athena_FringePlank_Reveal_C::PlayWorldSweep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_FringePlank_Reveal_C", "PlayWorldSweep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C.BeginSweepFX
// (BlueprintCallable, BlueprintEvent)

void AGCN_Athena_FringePlank_Reveal_C::BeginSweepFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_FringePlank_Reveal_C", "BeginSweepFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Athena_FringePlank_Reveal_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_FringePlank_Reveal_C", "ReceiveEndPlay");

	Params::GCN_Athena_FringePlank_Reveal_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C.EndSweepFX
// (BlueprintCallable, BlueprintEvent)

void AGCN_Athena_FringePlank_Reveal_C::EndSweepFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_FringePlank_Reveal_C", "EndSweepFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C.OnExecute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCN_Athena_FringePlank_Reveal_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_FringePlank_Reveal_C", "OnExecute");

	Params::GCN_Athena_FringePlank_Reveal_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

