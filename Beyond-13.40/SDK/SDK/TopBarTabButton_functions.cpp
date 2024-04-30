#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TopBarTabButton

#include "Basic.hpp"

#include "TopBarTabButton_classes.hpp"
#include "TopBarTabButton_parameters.hpp"


namespace SDK
{

// Function TopBarTabButton.TopBarTabButton_C.ExecuteUbergraph_TopBarTabButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarTabButton_C::ExecuteUbergraph_TopBarTabButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "ExecuteUbergraph_TopBarTabButton");

	Params::TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TopBarTabButton.TopBarTabButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UTopBarTabButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TopBarTabButton.TopBarTabButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UTopBarTabButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TopBarTabButton.TopBarTabButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UTopBarTabButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TopBarTabButton.TopBarTabButton_C.HandleSelectionChangedVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarTabButton_C::HandleSelectionChangedVisuals(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "HandleSelectionChangedVisuals");

	Params::TopBarTabButton_C_HandleSelectionChangedVisuals Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TopBarTabButton.TopBarTabButton_C.OnSelectedChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Selected                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarTabButton_C::OnSelectedChangedEvent(class UCommonButton* Button, bool Param_Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "OnSelectedChangedEvent");

	Params::TopBarTabButton_C_OnSelectedChangedEvent Parms{};

	Parms.Button = Button;
	Parms.Param_Selected = Param_Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TopBarTabButton.TopBarTabButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopBarTabButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TopBarTabButton.TopBarTabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopBarTabButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TopBarTabButton.TopBarTabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarTabButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "PreConstruct");

	Params::TopBarTabButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TopBarTabButton.TopBarTabButton_C.InitializeButtonBorderMID
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBarTabButton_C::InitializeButtonBorderMID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "InitializeButtonBorderMID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TopBarTabButton.TopBarTabButton_C.SeedRandomValues
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBarTabButton_C::SeedRandomValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "SeedRandomValues");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TopBarTabButton.TopBarTabButton_C.UpdateMIDWithRandomValues
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBarTabButton_C::UpdateMIDWithRandomValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "UpdateMIDWithRandomValues");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TopBarTabButton.TopBarTabButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_ButtonText                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTopBarTabButton_C::SetText(const class FText& Param_ButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "SetText");

	Params::TopBarTabButton_C_SetText Parms{};

	Parms.Param_ButtonText = std::move(Param_ButtonText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TopBarTabButton.TopBarTabButton_C.OverrideIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                      InSlateBrush                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTopBarTabButton_C::OverrideIcon(bool Show, const struct FSlateBrush& InSlateBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "OverrideIcon");

	Params::TopBarTabButton_C_OverrideIcon Parms{};

	Parms.Show = Show;
	Parms.InSlateBrush = std::move(InSlateBrush);

	UObject::ProcessEvent(Func, &Parms);
}

}

