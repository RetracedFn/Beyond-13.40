#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CircleArrowButton

#include "Basic.hpp"

#include "CircleArrowButton_classes.hpp"
#include "CircleArrowButton_parameters.hpp"


namespace SDK
{

// Function CircleArrowButton.CircleArrowButton_C.ExecuteUbergraph_CircleArrowButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCircleArrowButton_C::ExecuteUbergraph_CircleArrowButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "ExecuteUbergraph_CircleArrowButton");

	Params::CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UCircleArrowButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UCircleArrowButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UCircleArrowButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CircleArrowButton.CircleArrowButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCircleArrowButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "PreConstruct");

	Params::CircleArrowButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CircleArrowButton.CircleArrowButton_C.UpdateArrowColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Param_HoverColor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCircleArrowButton_C::UpdateArrowColor(const struct FLinearColor& Color, const struct FLinearColor& Param_HoverColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "UpdateArrowColor");

	Params::CircleArrowButton_C_UpdateArrowColor Parms{};

	Parms.Color = std::move(Color);
	Parms.Param_HoverColor = std::move(Param_HoverColor);

	UObject::ProcessEvent(Func, &Parms);
}

}

