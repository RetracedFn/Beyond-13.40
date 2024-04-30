#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniCraftingIngredientListEntry

#include "Basic.hpp"

#include "MiniCraftingIngredientListEntry_classes.hpp"
#include "MiniCraftingIngredientListEntry_parameters.hpp"


namespace SDK
{

// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Get_ItemCountWidget_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMiniCraftingIngredientListEntry_C::Get_ItemCountWidget_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "Get_ItemCountWidget_ToolTipWidget");

	Params::MiniCraftingIngredientListEntry_C_Get_ItemCountWidget_ToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.RefreshBeingPreviewed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMiniCraftingIngredientListEntry_C::RefreshBeingPreviewed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "RefreshBeingPreviewed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UMiniCraftingIngredientListEntry_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    IsBeingReset                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniCraftingIngredientListEntry_C::HandleDifferentItemOrQuantitySetBP(const bool IsBeingReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "HandleDifferentItemOrQuantitySetBP");

	Params::MiniCraftingIngredientListEntry_C_HandleDifferentItemOrQuantitySetBP Parms{};

	Parms.IsBeingReset = IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewStarted
// (Event, Protected, BlueprintEvent)

void UMiniCraftingIngredientListEntry_C::PreviewStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "PreviewStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewEnded
// (Event, Protected, BlueprintEvent)

void UMiniCraftingIngredientListEntry_C::PreviewEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "PreviewEnded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.RefreshListEntry
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMiniCraftingIngredientListEntry_C::RefreshListEntry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "RefreshListEntry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.ExecuteUbergraph_MiniCraftingIngredientListEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniCraftingIngredientListEntry_C::ExecuteUbergraph_MiniCraftingIngredientListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniCraftingIngredientListEntry_C", "ExecuteUbergraph_MiniCraftingIngredientListEntry");

	Params::MiniCraftingIngredientListEntry_C_ExecuteUbergraph_MiniCraftingIngredientListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

