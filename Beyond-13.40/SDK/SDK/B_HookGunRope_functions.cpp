#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HookGunRope

#include "Basic.hpp"

#include "B_HookGunRope_classes.hpp"
#include "B_HookGunRope_parameters.hpp"


namespace SDK
{

// Function B_HookGunRope.B_HookGunRope_C.ExecuteUbergraph_B_HookGunRope
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_HookGunRope_C::ExecuteUbergraph_B_HookGunRope(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HookGunRope_C", "ExecuteUbergraph_B_HookGunRope");

	Params::B_HookGunRope_C_ExecuteUbergraph_B_HookGunRope Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_HookGunRope.B_HookGunRope_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_HookGunRope_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HookGunRope_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HookGunRope.B_HookGunRope_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_HookGunRope_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HookGunRope_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HookGunRope.B_HookGunRope_C.TightenRope
// (BlueprintCallable, BlueprintEvent)

void AB_HookGunRope_C::TightenRope()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HookGunRope_C", "TightenRope");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HookGunRope.B_HookGunRope_C.End Reel
// (BlueprintCallable, BlueprintEvent)

void AB_HookGunRope_C::End_Reel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HookGunRope_C", "End Reel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HookGunRope.B_HookGunRope_C.Tight__UpdateFunc
// (BlueprintEvent)

void AB_HookGunRope_C::Tight__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HookGunRope_C", "Tight__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HookGunRope.B_HookGunRope_C.Tight__FinishedFunc
// (BlueprintEvent)

void AB_HookGunRope_C::Tight__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HookGunRope_C", "Tight__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HookGunRope.B_HookGunRope_C.Reel In__UpdateFunc
// (BlueprintEvent)

void AB_HookGunRope_C::Reel_In__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HookGunRope_C", "Reel In__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HookGunRope.B_HookGunRope_C.Reel In__FinishedFunc
// (BlueprintEvent)

void AB_HookGunRope_C::Reel_In__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HookGunRope_C", "Reel In__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

