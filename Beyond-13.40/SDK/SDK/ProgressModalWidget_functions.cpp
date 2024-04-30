#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressModalWidget

#include "Basic.hpp"

#include "ProgressModalWidget_classes.hpp"
#include "ProgressModalWidget_parameters.hpp"


namespace SDK
{

// Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent                InAnalogInputEvent                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UProgressModalWidget_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "OnAnalogValueChanged");

	Params::ProgressModalWidget_C_OnAnalogValueChanged Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InAnalogInputEvent = std::move(InAnalogInputEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ProgressModalWidget.ProgressModalWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProgressModalWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded
// (BlueprintCallable, BlueprintEvent)

void UProgressModalWidget_C::HandleIntroEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "HandleIntroEnded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded
// (BlueprintCallable, BlueprintEvent)

void UProgressModalWidget_C::HandleOutroEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "HandleOutroEnded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro
// (Event, Protected, BlueprintEvent)

void UProgressModalWidget_C::OnBeginIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "OnBeginIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro
// (Event, Protected, BlueprintEvent)

void UProgressModalWidget_C::OnBeginOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "OnBeginOutro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgressModalWidget.ProgressModalWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProgressModalWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressModalWidget_C::ExecuteUbergraph_ProgressModalWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressModalWidget_C", "ExecuteUbergraph_ProgressModalWidget");

	Params::ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

