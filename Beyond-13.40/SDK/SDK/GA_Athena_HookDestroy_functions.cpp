#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_HookDestroy

#include "Basic.hpp"

#include "GA_Athena_HookDestroy_classes.hpp"
#include "GA_Athena_HookDestroy_parameters.hpp"


namespace SDK
{

// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.ExecuteUbergraph_GA_Athena_HookDestroy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::ExecuteUbergraph_GA_Athena_HookDestroy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "ExecuteUbergraph_GA_Athena_HookDestroy");

	Params::GA_Athena_HookDestroy_C_ExecuteUbergraph_GA_Athena_HookDestroy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.ResetDoOnce
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HookDestroy_C::ResetDoOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "ResetDoOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_HookDestroy_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnSync_A7AA33494F9F686A79A026809EAEF410
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HookDestroy_C::OnSync_A7AA33494F9F686A79A026809EAEF410()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnSync_A7AA33494F9F686A79A026809EAEF410");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_1B71851D49048B6433DA75B0D6007B6E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_HookDestroy_C::EventReceived_1B71851D49048B6433DA75B0D6007B6E(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "EventReceived_1B71851D49048B6433DA75B0D6007B6E");

	Params::GA_Athena_HookDestroy_C_EventReceived_1B71851D49048B6433DA75B0D6007B6E Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_7CDAB77949F908D1F388AB845AE6C282
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnCompleted_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnCompleted_7CDAB77949F908D1F388AB845AE6C282");

	Params::GA_Athena_HookDestroy_C_OnCompleted_7CDAB77949F908D1F388AB845AE6C282 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_7CDAB77949F908D1F388AB845AE6C282
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnBlendOut_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnBlendOut_7CDAB77949F908D1F388AB845AE6C282");

	Params::GA_Athena_HookDestroy_C_OnBlendOut_7CDAB77949F908D1F388AB845AE6C282 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_7CDAB77949F908D1F388AB845AE6C282
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnInterrupted_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnInterrupted_7CDAB77949F908D1F388AB845AE6C282");

	Params::GA_Athena_HookDestroy_C_OnInterrupted_7CDAB77949F908D1F388AB845AE6C282 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282");

	Params::GA_Athena_HookDestroy_C_OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282");

	Params::GA_Athena_HookDestroy_C_OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnCompleted_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnCompleted_28C962BC449D96C668F3C4BE36E6CA62");

	Params::GA_Athena_HookDestroy_C_OnCompleted_28C962BC449D96C668F3C4BE36E6CA62 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62");

	Params::GA_Athena_HookDestroy_C_OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62");

	Params::GA_Athena_HookDestroy_C_OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62");

	Params::GA_Athena_HookDestroy_C_OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62");

	Params::GA_Athena_HookDestroy_C_OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_3FEADD91456C78D266936684DE918289
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_HookDestroy_C::EventReceived_3FEADD91456C78D266936684DE918289(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "EventReceived_3FEADD91456C78D266936684DE918289");

	Params::GA_Athena_HookDestroy_C_EventReceived_3FEADD91456C78D266936684DE918289 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnCompleted_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnCompleted_556AB31A412041E7414C21AA5F4A70CC");

	Params::GA_Athena_HookDestroy_C_OnCompleted_556AB31A412041E7414C21AA5F4A70CC Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnBlendOut_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnBlendOut_556AB31A412041E7414C21AA5F4A70CC");

	Params::GA_Athena_HookDestroy_C_OnBlendOut_556AB31A412041E7414C21AA5F4A70CC Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnInterrupted_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnInterrupted_556AB31A412041E7414C21AA5F4A70CC");

	Params::GA_Athena_HookDestroy_C_OnInterrupted_556AB31A412041E7414C21AA5F4A70CC Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC");

	Params::GA_Athena_HookDestroy_C_OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC");

	Params::GA_Athena_HookDestroy_C_OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_056D82C6464BB95E4DA717BEB307DB74
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_HookDestroy_C::EventReceived_056D82C6464BB95E4DA717BEB307DB74(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "EventReceived_056D82C6464BB95E4DA717BEB307DB74");

	Params::GA_Athena_HookDestroy_C_EventReceived_056D82C6464BB95E4DA717BEB307DB74 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnCompleted_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnCompleted_CB1C85E64FAE092AD81A04933C6C3263");

	Params::GA_Athena_HookDestroy_C_OnCompleted_CB1C85E64FAE092AD81A04933C6C3263 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263");

	Params::GA_Athena_HookDestroy_C_OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263");

	Params::GA_Athena_HookDestroy_C_OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263");

	Params::GA_Athena_HookDestroy_C_OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263");

	Params::GA_Athena_HookDestroy_C_OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnRep_AmmoReserves
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HookDestroy_C::OnRep_AmmoReserves()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnRep_AmmoReserves");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.PickGrappleMontage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   PitchAngle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SectionName                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookDestroy_C::PickGrappleMontage(float PitchAngle, class FName* SectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "PickGrappleMontage");

	Params::GA_Athena_HookDestroy_C_PickGrappleMontage Parms{};

	Parms.PitchAngle = PitchAngle;

	UObject::ProcessEvent(Func, &Parms);

	if (SectionName != nullptr)
		*SectionName = Parms.SectionName;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.K2_OnEndAbility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_HookDestroy_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "K2_OnEndAbility");

	Params::GA_Athena_HookDestroy_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnRep_BadgerGrapeDelayFailsafe
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HookDestroy_C::OnRep_BadgerGrapeDelayFailsafe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HookDestroy_C", "OnRep_BadgerGrapeDelayFailsafe");

	UObject::ProcessEvent(Func, nullptr);
}

}

