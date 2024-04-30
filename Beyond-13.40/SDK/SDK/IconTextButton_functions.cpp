#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IconTextButton

#include "Basic.hpp"

#include "IconTextButton_classes.hpp"
#include "IconTextButton_parameters.hpp"


namespace SDK
{

// Function IconTextButton.IconTextButton_C.ExecuteUbergraph_IconTextButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButton_C::ExecuteUbergraph_IconTextButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "ExecuteUbergraph_IconTextButton");

	Params::IconTextButton_C_ExecuteUbergraph_IconTextButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconTextButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconTextButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UIconTextButton_C::OnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnActionComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HeldPercent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButton_C::OnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnActionProgress");

	Params::IconTextButton_C_OnActionProgress Parms{};

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle              NewTriggeredAction                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UIconTextButton_C::OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnTriggeredInputActionChanged");

	Params::IconTextButton_C_OnTriggeredInputActionChanged Parms{};

	Parms.NewTriggeredAction = std::move(NewTriggeredAction);

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo          TabLabelInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTextButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetTabLabelInfo");

	Params::IconTextButton_C_SetTabLabelInfo Parms{};

	Parms.TabLabelInfo = std::move(TabLabelInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "PreConstruct");

	Params::IconTextButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UIconTextButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_ButtonText                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButton_C::Set_Text(const class FText& Param_ButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Set Text");

	Params::IconTextButton_C_Set_Text Parms{};

	Parms.Param_ButtonText = std::move(Param_ButtonText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      Param_IconBrush                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButton_C::Set_Icon(const struct FSlateBrush& Param_IconBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Set Icon");

	Params::IconTextButton_C_Set_Icon Parms{};

	Parms.Param_IconBrush = std::move(Param_IconBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextButton_C::InitializeButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "InitializeButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButton_C::UpdateTextAndStyle(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateTextAndStyle");

	Params::IconTextButton_C_UpdateTextAndStyle Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.SetControllerStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_ControllerInputStyle                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButton_C::SetControllerStyle(class UClass* Param_ControllerInputStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetControllerStyle");

	Params::IconTextButton_C_SetControllerStyle Parms{};

	Parms.Param_ControllerInputStyle = Param_ControllerInputStyle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconTextButton_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UsingGamepad                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButton_C::UpdateStyle(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateStyle");

	Params::IconTextButton_C_UpdateStyle Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.SetMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_ControllerInputStyle                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButton_C::SetMouseKeyboardStyle(class UClass* Param_ControllerInputStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetMouseKeyboardStyle");

	Params::IconTextButton_C_SetMouseKeyboardStyle Parms{};

	Parms.Param_ControllerInputStyle = Param_ControllerInputStyle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)

void UIconTextButton_C::UpdateContentAlignment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateContentAlignment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHorizontalAlignment                    Param_ContentAlignment                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButton_C::SetContentAlignment(EHorizontalAlignment Param_ContentAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetContentAlignment");

	Params::IconTextButton_C_SetContentAlignment Parms{};

	Parms.Param_ContentAlignment = Param_ContentAlignment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.UpdateTextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextButton_C::UpdateTextStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "UpdateTextStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.SetInitialMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextButton_C::SetInitialMouseKeyboardStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetInitialMouseKeyboardStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconTextButton.IconTextButton_C.SetTextInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InButtonText                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButton_C::SetTextInternal(const class FText& InButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "SetTextInternal");

	Params::IconTextButton_C_SetTextInternal Parms{};

	Parms.InButtonText = std::move(InButtonText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.ShowIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShouldShow                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTextButton_C::ShowIcon(bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "ShowIcon");

	Params::IconTextButton_C_ShowIcon Parms{};

	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconTextButton.IconTextButton_C.Get Dynamic Material
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         Ret_Material                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButton_C::Get_Dynamic_Material(class UMaterialInstanceDynamic** Ret_Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "Get Dynamic Material");

	Params::IconTextButton_C_Get_Dynamic_Material Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret_Material != nullptr)
		*Ret_Material = Parms.Ret_Material;
}


// Function IconTextButton.IconTextButton_C.GetPressProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Progress                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTextButton_C::GetPressProgress(float* Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTextButton_C", "GetPressProgress");

	Params::IconTextButton_C_GetPressProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;
}

}

