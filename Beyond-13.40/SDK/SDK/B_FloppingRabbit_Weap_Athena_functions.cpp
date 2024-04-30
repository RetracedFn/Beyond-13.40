#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_FloppingRabbit_Weap_Athena

#include "Basic.hpp"

#include "B_FloppingRabbit_Weap_Athena_classes.hpp"
#include "B_FloppingRabbit_Weap_Athena_parameters.hpp"


namespace SDK
{

// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ExecuteUbergraph_B_FloppingRabbit_Weap_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_FloppingRabbit_Weap_Athena_C::ExecuteUbergraph_B_FloppingRabbit_Weap_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "ExecuteUbergraph_B_FloppingRabbit_Weap_Athena");

	Params::B_FloppingRabbit_Weap_Athena_C_ExecuteUbergraph_B_FloppingRabbit_Weap_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnTetherDetached
// (Event, Public, BlueprintEvent)

void AB_FloppingRabbit_Weap_Athena_C::OnTetherDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnTetherDetached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ForceKillFishing
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_FloppingRabbit_Weap_Athena_C::ForceKillFishing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "ForceKillFishing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_FloppingRabbit_Weap_Athena_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnWeaponAttached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_FloppingRabbit_Weap_Athena_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "K2_OnUnEquip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_FloppingRabbit_Weap_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnRep_HideBobber
// (BlueprintCallable, BlueprintEvent)

void AB_FloppingRabbit_Weap_Athena_C::OnRep_HideBobber()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnRep_HideBobber");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnRep_OneHandGrip
// (BlueprintCallable, BlueprintEvent)

void AB_FloppingRabbit_Weap_Athena_C::OnRep_OneHandGrip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnRep_OneHandGrip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.DetermineFishLootTierNameAndSetLootForSpawner
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsExplosion                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName AB_FloppingRabbit_Weap_Athena_C::DetermineFishLootTierNameAndSetLootForSpawner(bool bIsExplosion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "DetermineFishLootTierNameAndSetLootForSpawner");

	Params::B_FloppingRabbit_Weap_Athena_C_DetermineFishLootTierNameAndSetLootForSpawner Parms{};

	Parms.bIsExplosion = bIsExplosion;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

