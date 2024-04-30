#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ZipLine_Athena_Harness

#include "Basic.hpp"

#include "BP_ZipLine_Athena_Harness_classes.hpp"
#include "BP_ZipLine_Athena_Harness_parameters.hpp"


namespace SDK
{

// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZipLine_Athena_Harness_C::ExecuteUbergraph_BP_ZipLine_Athena_Harness(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "ExecuteUbergraph_BP_ZipLine_Athena_Harness");

	Params::BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Chime Visual
// (BlueprintCallable, BlueprintEvent)

void ABP_ZipLine_Athena_Harness_C::Chime_Visual()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "Chime Visual");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.HandleOnDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              FHitComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZipLine_Athena_Harness_C::HandleOnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "HandleOnDied");

	Params::BP_ZipLine_Athena_Harness_C_HandleOnDied Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_ZipLine_Athena_Harness_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Stop Travel Audio
// (BlueprintCallable, BlueprintEvent)

void ABP_ZipLine_Athena_Harness_C::Stop_Travel_Audio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "Stop Travel Audio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Start Travel Audio
// (BlueprintCallable, BlueprintEvent)

void ABP_ZipLine_Athena_Harness_C::Start_Travel_Audio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "Start Travel Audio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZipLine_Athena_Harness_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

