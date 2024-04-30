#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Hook_Athena

#include "Basic.hpp"

#include "B_Prj_Hook_Athena_classes.hpp"
#include "B_Prj_Hook_Athena_parameters.hpp"


namespace SDK
{

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ExecuteUbergraph_B_Prj_Hook_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::ExecuteUbergraph_B_Prj_Hook_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "ExecuteUbergraph_B_Prj_Hook_Athena");

	Params::B_Prj_Hook_Athena_C_ExecuteUbergraph_B_Prj_Hook_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.Grapple
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::Grapple()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "Grapple");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*              WaterBody                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWaterInteractionComponent*   Param_WaterInteractionComponent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsFirstBody                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Hook_Athena_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");

	Params::B_Prj_Hook_Athena_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature Parms{};

	Parms.WaterBody = WaterBody;
	Parms.Param_WaterInteractionComponent = Param_WaterInteractionComponent;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.LaunchCheck
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::LaunchCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "LaunchCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GrappleVehicle
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::GrappleVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "GrappleVehicle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelfMoved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Param_HitLocation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Hook_Athena_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& Param_HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "ReceiveHit");

	Params::B_Prj_Hook_Athena_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.Param_HitLocation = std::move(Param_HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.WeaponCheck
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::WeaponCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "WeaponCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.Travel
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Param_HitLocation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::Travel(const struct FVector& Param_HitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "Travel");

	Params::B_Prj_Hook_Athena_C_Travel Parms{};

	Parms.Param_HitLocation = std::move(Param_HitLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Prj_Hook_Athena_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Hook_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_93AE81F64BBD13E0E55C399F05E160E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnCompleted_93AE81F64BBD13E0E55C399F05E160E3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnCompleted_93AE81F64BBD13E0E55C399F05E160E3");

	Params::B_Prj_Hook_Athena_C_OnCompleted_93AE81F64BBD13E0E55C399F05E160E3 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3");

	Params::B_Prj_Hook_Athena_C_OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3");

	Params::B_Prj_Hook_Athena_C_OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3");

	Params::B_Prj_Hook_Athena_C_OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3");

	Params::B_Prj_Hook_Athena_C_OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4");

	Params::B_Prj_Hook_Athena_C_OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4");

	Params::B_Prj_Hook_Athena_C_OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4");

	Params::B_Prj_Hook_Athena_C_OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4");

	Params::B_Prj_Hook_Athena_C_OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4");

	Params::B_Prj_Hook_Athena_C_OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_0A1B172F45DE2A614770489FAD619748
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnCompleted_0A1B172F45DE2A614770489FAD619748(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnCompleted_0A1B172F45DE2A614770489FAD619748");

	Params::B_Prj_Hook_Athena_C_OnCompleted_0A1B172F45DE2A614770489FAD619748 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_0A1B172F45DE2A614770489FAD619748
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnBlendOut_0A1B172F45DE2A614770489FAD619748(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnBlendOut_0A1B172F45DE2A614770489FAD619748");

	Params::B_Prj_Hook_Athena_C_OnBlendOut_0A1B172F45DE2A614770489FAD619748 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_0A1B172F45DE2A614770489FAD619748
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnInterrupted_0A1B172F45DE2A614770489FAD619748(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnInterrupted_0A1B172F45DE2A614770489FAD619748");

	Params::B_Prj_Hook_Athena_C_OnInterrupted_0A1B172F45DE2A614770489FAD619748 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_0A1B172F45DE2A614770489FAD619748
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnNotifyBegin_0A1B172F45DE2A614770489FAD619748(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnNotifyBegin_0A1B172F45DE2A614770489FAD619748");

	Params::B_Prj_Hook_Athena_C_OnNotifyBegin_0A1B172F45DE2A614770489FAD619748 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_0A1B172F45DE2A614770489FAD619748
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::OnNotifyEnd_0A1B172F45DE2A614770489FAD619748(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnNotifyEnd_0A1B172F45DE2A614770489FAD619748");

	Params::B_Prj_Hook_Athena_C_OnNotifyEnd_0A1B172F45DE2A614770489FAD619748 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PlayStickSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::PlayStickSounds(const struct FVector& Location, class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "PlayStickSounds");

	Params::B_Prj_Hook_Athena_C_PlayStickSounds Parms{};

	Parms.Location = std::move(Location);
	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleHits
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                           Param_Target                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::HandleHits(const struct FHitResult& Hit, class AActor** Param_Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "HandleHits");

	Params::B_Prj_Hook_Athena_C_HandleHits Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Target != nullptr)
		*Param_Target = Parms.Param_Target;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.IncapacitateTarget
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::IncapacitateTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "IncapacitateTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.CalculateYankForce
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::CalculateYankForce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "CalculateYankForce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_Target
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::OnRep_Target()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnRep_Target");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_HookStopped
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::OnRep_HookStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnRep_HookStopped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PickGrappleMontage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   PitchAngle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InHoverboard                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             SectionName                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::PickGrappleMontage(float PitchAngle, bool InHoverboard, class FName* SectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "PickGrappleMontage");

	Params::B_Prj_Hook_Athena_C_PickGrappleMontage Parms{};

	Parms.PitchAngle = PitchAngle;
	Parms.InHoverboard = InHoverboard;

	UObject::ProcessEvent(Func, &Parms);

	if (SectionName != nullptr)
		*SectionName = Parms.SectionName;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleSticks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::HandleSticks(class UObject* Object, class UPrimitiveComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "HandleSticks");

	Params::B_Prj_Hook_Athena_C_HandleSticks Parms{};

	Parms.Object = Object;
	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::HandleStuckVehicle(class UObject* Object, class UPrimitiveComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "HandleStuckVehicle");

	Params::B_Prj_Hook_Athena_C_HandleStuckVehicle Parms{};

	Parms.Object = Object;
	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::HandleStuckBuilding(class UObject* Object, class UPrimitiveComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "HandleStuckBuilding");

	Params::B_Prj_Hook_Athena_C_HandleStuckBuilding Parms{};

	Parms.Object = Object;
	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckSupplyDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::HandleStuckSupplyDrop(class UObject* Object, class UPrimitiveComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "HandleStuckSupplyDrop");

	Params::B_Prj_Hook_Athena_C_HandleStuckSupplyDrop Parms{};

	Parms.Object = Object;
	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_StruckActor
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::OnRep_StruckActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnRep_StruckActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckProjectiles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::HandleStuckProjectiles(class UObject* Object, class UPrimitiveComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "HandleStuckProjectiles");

	Params::B_Prj_Hook_Athena_C_HandleStuckProjectiles Parms{};

	Parms.Object = Object;
	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleMomentum
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::HandleMomentum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "HandleMomentum");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_Momentum
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::OnRep_Momentum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "OnRep_Momentum");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleLaunch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    JumpPadding_                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Hook_Athena_C::HandleLaunch(bool* JumpPadding_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "HandleLaunch");

	Params::B_Prj_Hook_Athena_C_HandleLaunch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (JumpPadding_ != nullptr)
		*JumpPadding_ = Parms.JumpPadding_;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.JackalCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::JackalCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "JackalCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.SpawnRope
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  Param_PlayerPawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_HookGunRope_C*                 RopeSpawned                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::SpawnRope(class AFortPlayerPawn* Param_PlayerPawn, class AB_HookGunRope_C** RopeSpawned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "SpawnRope");

	Params::B_Prj_Hook_Athena_C_SpawnRope Parms{};

	Parms.Param_PlayerPawn = Param_PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

	if (RopeSpawned != nullptr)
		*RopeSpawned = Parms.RopeSpawned;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GiveQuestCredit
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::GiveQuestCredit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "GiveQuestCredit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.MomentumCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          A2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AB_Prj_Hook_Athena_C::MomentumCheck(const struct FVector& A, const struct FVector& A2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "MomentumCheck");

	Params::B_Prj_Hook_Athena_C_MomentumCheck Parms{};

	Parms.A = std::move(A);
	Parms.A2 = std::move(A2);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GetVehicleArc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AB_Prj_Hook_Athena_C::GetVehicleArc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "GetVehicleArc");

	Params::B_Prj_Hook_Athena_C_GetVehicleArc Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GetVehicleLaunchMult
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AB_Prj_Hook_Athena_C::GetVehicleLaunchMult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "GetVehicleLaunchMult");

	Params::B_Prj_Hook_Athena_C_GetVehicleLaunchMult Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PickGrappleMontageSection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   PitchAngle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SectionName                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Hook_Athena_C::PickGrappleMontageSection(float PitchAngle, class FName* SectionName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Hook_Athena_C", "PickGrappleMontageSection");

	Params::B_Prj_Hook_Athena_C_PickGrappleMontageSection Parms{};

	Parms.PitchAngle = PitchAngle;

	UObject::ProcessEvent(Func, &Parms);

	if (SectionName != nullptr)
		*SectionName = Parms.SectionName;
}

}

