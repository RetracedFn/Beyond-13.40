#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlterationWidgetButton

#include "Basic.hpp"

#include "AlterationWidgetButton_classes.hpp"
#include "AlterationWidgetButton_parameters.hpp"


namespace SDK
{

// Function AlterationWidgetButton.AlterationWidgetButton_C.Setup Triangles
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationWidgetButton_C::Setup_Triangles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidgetButton_C", "Setup Triangles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.Update Colors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidgetButton_C::Update_Colors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidgetButton_C", "Update Colors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.IntroStart
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationWidgetButton_C::IntroStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidgetButton_C", "IntroStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.IntroReset
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationWidgetButton_C::IntroReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidgetButton_C", "IntroReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.TriggerModificationAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationWidgetButton_C::TriggerModificationAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidgetButton_C", "TriggerModificationAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.OnSetup
// (Event, Public, BlueprintEvent)

void UAlterationWidgetButton_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidgetButton_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAlterationWidgetButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidgetButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.ExecuteUbergraph_AlterationWidgetButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidgetButton_C::ExecuteUbergraph_AlterationWidgetButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidgetButton_C", "ExecuteUbergraph_AlterationWidgetButton");

	Params::AlterationWidgetButton_C_ExecuteUbergraph_AlterationWidgetButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

