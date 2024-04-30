#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainTabIconButton

#include "Basic.hpp"

#include "MainTabIconButton_classes.hpp"
#include "MainTabIconButton_parameters.hpp"


namespace SDK
{

// Function MainTabIconButton.MainTabIconButton_C.SetBangType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortBangType                           NewBangType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabIconButton_C::SetBangType(EFortBangType NewBangType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "SetBangType");

	Params::MainTabIconButton_C_SetBangType Parms{};

	Parms.NewBangType = NewBangType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabIconButton.MainTabIconButton_C.StopTabCallout
// (Public, BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::StopTabCallout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "StopTabCallout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.TabAdded
// (Public, BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::TabAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "TabAdded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.TabDialogClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::TabDialogClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "TabDialogClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.TabAnimateInFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::TabAnimateInFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "TabAnimateInFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.SetWrapperNameIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InTutorialNameID                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InBangNameID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabIconButton_C::SetWrapperNameIDs(class FName InTutorialNameID, class FName InBangNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "SetWrapperNameIDs");

	Params::MainTabIconButton_C_SetWrapperNameIDs Parms{};

	Parms.InTutorialNameID = InTutorialNameID;
	Parms.InBangNameID = InBangNameID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabIconButton.MainTabIconButton_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bBangEnabled                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortUIFeature                          UIFeature                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             UIFeatureRevealText                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainTabIconButton_C::Update_Bang_State(bool Param_bBangEnabled, EFortUIFeature UIFeature, const class FText& UIFeatureRevealText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "Update Bang State");

	Params::MainTabIconButton_C_Update_Bang_State Parms{};

	Parms.Param_bBangEnabled = Param_bBangEnabled;
	Parms.UIFeature = UIFeature;
	Parms.UIFeatureRevealText = std::move(UIFeatureRevealText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabIconButton.MainTabIconButton_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           BorderStyle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabIconButton_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "SetTutorialBorderStyle");

	Params::MainTabIconButton_C_SetTutorialBorderStyle Parms{};

	Parms.BorderStyle = BorderStyle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabIconButton.MainTabIconButton_C.ShowText
// (Public, BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::ShowText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "ShowText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      Param_IconBrush                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainTabIconButton_C::Set_Icon(const struct FSlateBrush& Param_IconBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "Set Icon");

	Params::MainTabIconButton_C_Set_Icon Parms{};

	Parms.Param_IconBrush = std::move(Param_IconBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabIconButton.MainTabIconButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_ButtonText                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainTabIconButton_C::Set_Text(const class FText& Param_ButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "Set Text");

	Params::MainTabIconButton_C_Set_Text Parms{};

	Parms.Param_ButtonText = std::move(Param_ButtonText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabIconButton.MainTabIconButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabIconButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "PreConstruct");

	Params::MainTabIconButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabIconButton.MainTabIconButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo          TabLabelInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainTabIconButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "SetTabLabelInfo");

	Params::MainTabIconButton_C_SetTabLabelInfo Parms{};

	Parms.TabLabelInfo = std::move(TabLabelInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabIconButton.MainTabIconButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UMainTabIconButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UMainTabIconButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainTabIconButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UMainTabIconButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UMainTabIconButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UMainTabIconButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.HandleTabAdded
// (BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::HandleTabAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "HandleTabAdded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.HandleTabAnimateInFinished
// (BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::HandleTabAnimateInFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "HandleTabAnimateInFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.HandleTabDialogCLosed
// (BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::HandleTabDialogCLosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "HandleTabDialogCLosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.Handle StopTabCallout
// (BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::Handle_StopTabCallout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "Handle StopTabCallout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.BP_OnDisabled
// (Event, Protected, BlueprintEvent)

void UMainTabIconButton_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "BP_OnDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.BP_OnEnabled
// (Event, Protected, BlueprintEvent)

void UMainTabIconButton_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "BP_OnEnabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabIconButton.MainTabIconButton_C.ExecuteUbergraph_MainTabIconButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabIconButton_C::ExecuteUbergraph_MainTabIconButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabIconButton_C", "ExecuteUbergraph_MainTabIconButton");

	Params::MainTabIconButton_C_ExecuteUbergraph_MainTabIconButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

