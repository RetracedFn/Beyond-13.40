#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabMouseAndKeyboardOptions_New

#include "Basic.hpp"

#include "TabMouseAndKeyboardOptions_New_classes.hpp"
#include "TabMouseAndKeyboardOptions_New_parameters.hpp"


namespace SDK
{

// Function TabMouseAndKeyboardOptions_New.TabMouseAndKeyboardOptions_New_C.ExecuteUbergraph_TabMouseAndKeyboardOptions_New
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabMouseAndKeyboardOptions_New_C::ExecuteUbergraph_TabMouseAndKeyboardOptions_New(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabMouseAndKeyboardOptions_New_C", "ExecuteUbergraph_TabMouseAndKeyboardOptions_New");

	Params::TabMouseAndKeyboardOptions_New_C_ExecuteUbergraph_TabMouseAndKeyboardOptions_New Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabMouseAndKeyboardOptions_New.TabMouseAndKeyboardOptions_New_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabMouseAndKeyboardOptions_New_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabMouseAndKeyboardOptions_New_C", "CenterOnTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabMouseAndKeyboardOptions_New.TabMouseAndKeyboardOptions_New_C.SettingValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabMouseAndKeyboardOptions_New_C::SettingValueChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabMouseAndKeyboardOptions_New_C", "SettingValueChanged");

	Params::TabMouseAndKeyboardOptions_New_C_SettingValueChanged Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

