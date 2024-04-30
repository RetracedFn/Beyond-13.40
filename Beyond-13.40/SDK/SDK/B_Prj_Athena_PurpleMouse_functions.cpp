#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_PurpleMouse

#include "Basic.hpp"

#include "B_Prj_Athena_PurpleMouse_classes.hpp"
#include "B_Prj_Athena_PurpleMouse_parameters.hpp"


namespace SDK
{

// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.ExecuteUbergraph_B_Prj_Athena_PurpleMouse
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_PurpleMouse_C::ExecuteUbergraph_B_Prj_Athena_PurpleMouse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_PurpleMouse_C", "ExecuteUbergraph_B_Prj_Athena_PurpleMouse");

	Params::B_Prj_Athena_PurpleMouse_C_ExecuteUbergraph_B_Prj_Athena_PurpleMouse Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.SetTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   Param_Team                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_PurpleMouse_C::SetTeam(uint8 Param_Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_PurpleMouse_C", "SetTeam");

	Params::B_Prj_Athena_PurpleMouse_C_SetTeam Parms{};

	Parms.Param_Team = Param_Team;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_PurpleMouse_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_PurpleMouse_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.SpawnBGA_
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Normal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              HitComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Pos                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    FromWater                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* AB_Prj_Athena_PurpleMouse_C::SpawnBGA_(const struct FVector& Normal, class AActor* HitActor, class UPrimitiveComponent* HitComp, const struct FVector& Pos, bool FromWater)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_PurpleMouse_C", "SpawnBGA_");

	Params::B_Prj_Athena_PurpleMouse_C_SpawnBGA_ Parms{};

	Parms.Normal = std::move(Normal);
	Parms.HitActor = HitActor;
	Parms.HitComp = HitComp;
	Parms.Pos = std::move(Pos);
	Parms.FromWater = FromWater;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

