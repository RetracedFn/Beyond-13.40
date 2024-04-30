#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DA_Butterfly

#include "Basic.hpp"

#include "DA_Butterfly_classes.hpp"
#include "DA_Butterfly_parameters.hpp"


namespace SDK
{

// Function DA_Butterfly.DA_Butterfly_C.ExecuteUbergraph_DA_Butterfly
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_Butterfly_C::ExecuteUbergraph_DA_Butterfly(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_Butterfly_C", "ExecuteUbergraph_DA_Butterfly");

	Params::DA_Butterfly_C_ExecuteUbergraph_DA_Butterfly Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DA_Butterfly.DA_Butterfly_C.BPReleaseSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*                  FortDecoHelper                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_Butterfly_C::BPReleaseSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_Butterfly_C", "BPReleaseSecondaryFire");

	Params::DA_Butterfly_C_BPReleaseSecondaryFire Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DA_Butterfly.DA_Butterfly_C.BPOnUnEquip
// (Event, Public, BlueprintEvent)

void ADA_Butterfly_C::BPOnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_Butterfly_C", "BPOnUnEquip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DA_Butterfly.DA_Butterfly_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*                  FortDecoHelper                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_Butterfly_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_Butterfly_C", "BPPressTrigger");

	Params::DA_Butterfly_C_BPPressTrigger Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DA_Butterfly.DA_Butterfly_C.BPPressSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*                  FortDecoHelper                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_Butterfly_C::BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_Butterfly_C", "BPPressSecondaryFire");

	Params::DA_Butterfly_C_BPPressSecondaryFire Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);
}

}

