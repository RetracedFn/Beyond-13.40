#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErrorWindow

#include "Basic.hpp"

#include "ErrorWindow_classes.hpp"
#include "ErrorWindow_parameters.hpp"


namespace SDK
{

// Function ErrorWindow.ErrorWindow_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent                InAnalogInputEvent                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UErrorWindow_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "OnAnalogValueChanged");

	Params::ErrorWindow_C_OnAnalogValueChanged Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InAnalogInputEvent = std::move(InAnalogInputEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ErrorWindow.ErrorWindow_C.Initialize Close Button
// (Public, BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::Initialize_Close_Button()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "Initialize Close Button");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ErrorWindow.ErrorWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UErrorWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ErrorWindow.ErrorWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UErrorWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ErrorWindow.ErrorWindow_C.OnBeginOutro
// (Event, Protected, BlueprintEvent)

void UErrorWindow_C::OnBeginOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "OnBeginOutro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ErrorWindow.ErrorWindow_C.OnBeginIntro
// (Event, Protected, BlueprintEvent)

void UErrorWindow_C::OnBeginIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "OnBeginIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ErrorWindow.ErrorWindow_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UErrorWindow_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ErrorWindow.ErrorWindow_C.HandleLlamaAnimFinish
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::HandleLlamaAnimFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "HandleLlamaAnimFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ErrorWindow.ErrorWindow_C.LlamaReverse
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::LlamaReverse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "LlamaReverse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ErrorWindow.ErrorWindow_C.HandleLlamaCycleFinished
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::HandleLlamaCycleFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "HandleLlamaCycleFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ErrorWindow.ErrorWindow_C.PlayRandomAmbientLlama
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::PlayRandomAmbientLlama()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "PlayRandomAmbientLlama");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ErrorWindow.ErrorWindow_C.StartAmbientLlamaSequence
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::StartAmbientLlamaSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "StartAmbientLlamaSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ErrorWindow.ErrorWindow_C.ResetLlamas
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::ResetLlamas()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "ResetLlamas");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ErrorWindow.ErrorWindow_C.OnOverrideCloseButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             OverrideText                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UErrorWindow_C::OnOverrideCloseButtonText(const class FText& OverrideText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "OnOverrideCloseButtonText");

	Params::ErrorWindow_C_OnOverrideCloseButtonText Parms{};

	Parms.OverrideText = std::move(OverrideText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UErrorWindow_C::ExecuteUbergraph_ErrorWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorWindow_C", "ExecuteUbergraph_ErrorWindow");

	Params::ErrorWindow_C_ExecuteUbergraph_ErrorWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

