#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FlameCounter

#include "Basic.hpp"

#include "FlameCounter_classes.hpp"
#include "FlameCounter_parameters.hpp"


namespace SDK
{

// Function FlameCounter.FlameCounter_C.ExecuteUbergraph_FlameCounter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlameCounter_C::ExecuteUbergraph_FlameCounter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlameCounter_C", "ExecuteUbergraph_FlameCounter");

	Params::FlameCounter_C_ExecuteUbergraph_FlameCounter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlameCounter.FlameCounter_C.PlayFadeIn
// (Event, Protected, BlueprintEvent)

void UFlameCounter_C::PlayFadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlameCounter_C", "PlayFadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlameCounter.FlameCounter_C.PlayFadeOut
// (Event, Protected, BlueprintEvent)

void UFlameCounter_C::PlayFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlameCounter_C", "PlayFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlameCounter.FlameCounter_C.PlayIdle
// (Event, Protected, BlueprintEvent)

void UFlameCounter_C::PlayIdle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlameCounter_C", "PlayIdle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlameCounter.FlameCounter_C.PlayIncreaseVote
// (Event, Protected, BlueprintEvent)

void UFlameCounter_C::PlayIncreaseVote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlameCounter_C", "PlayIncreaseVote");

	UObject::ProcessEvent(Func, nullptr);
}

}

