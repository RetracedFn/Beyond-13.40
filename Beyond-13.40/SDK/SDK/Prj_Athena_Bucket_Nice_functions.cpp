#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prj_Athena_Bucket_Nice

#include "Basic.hpp"

#include "Prj_Athena_Bucket_Nice_classes.hpp"
#include "Prj_Athena_Bucket_Nice_parameters.hpp"


namespace SDK
{

// Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.ExecuteUbergraph_Prj_Athena_Bucket_Nice
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrj_Athena_Bucket_Nice_C::ExecuteUbergraph_Prj_Athena_Bucket_Nice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_Athena_Bucket_Nice_C", "ExecuteUbergraph_Prj_Athena_Bucket_Nice");

	Params::Prj_Athena_Bucket_Nice_C_ExecuteUbergraph_Prj_Athena_Bucket_Nice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   HitActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FHitResult>               HitResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void APrj_Athena_Bucket_Nice_C::OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_Athena_Bucket_Nice_C", "OnExploded");

	Params::Prj_Athena_Bucket_Nice_C_OnExploded Parms{};

	Parms.HitActors = std::move(HitActors);
	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.OnRep_TurnOffTrail
// (BlueprintCallable, BlueprintEvent)

void APrj_Athena_Bucket_Nice_C::OnRep_TurnOffTrail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_Athena_Bucket_Nice_C", "OnRep_TurnOffTrail");

	UObject::ProcessEvent(Func, nullptr);
}

}

