#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CameraLens_Geyser

#include "Basic.hpp"

#include "B_CameraLens_Geyser_classes.hpp"
#include "B_CameraLens_Geyser_parameters.hpp"


namespace SDK
{

// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ExecuteUbergraph_B_CameraLens_Geyser
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraLens_Geyser_C::ExecuteUbergraph_B_CameraLens_Geyser(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "ExecuteUbergraph_B_CameraLens_Geyser");

	Params::B_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_CameraLens_Geyser_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraLens_Geyser_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AB_CameraLens_Geyser_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AB_CameraLens_Geyser_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

