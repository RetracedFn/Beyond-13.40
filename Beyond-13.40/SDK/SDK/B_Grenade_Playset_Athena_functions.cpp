#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Grenade_Playset_Athena

#include "Basic.hpp"

#include "B_Grenade_Playset_Athena_classes.hpp"
#include "B_Grenade_Playset_Athena_parameters.hpp"


namespace SDK
{

// Function B_Grenade_Playset_Athena.B_Grenade_Playset_Athena_C.ExecuteUbergraph_B_Grenade_Playset_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Grenade_Playset_Athena_C::ExecuteUbergraph_B_Grenade_Playset_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Grenade_Playset_Athena_C", "ExecuteUbergraph_B_Grenade_Playset_Athena");

	Params::B_Grenade_Playset_Athena_C_ExecuteUbergraph_B_Grenade_Playset_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Grenade_Playset_Athena.B_Grenade_Playset_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Grenade_Playset_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Grenade_Playset_Athena_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Grenade_Playset_Athena.B_Grenade_Playset_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_Grenade_Playset_Athena_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Grenade_Playset_Athena_C", "OnWeaponAttached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Grenade_Playset_Athena.B_Grenade_Playset_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_Grenade_Playset_Athena_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Grenade_Playset_Athena_C", "K2_OnUnEquip");

	UObject::ProcessEvent(Func, nullptr);
}

}

