#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDetailsStackCounter

#include "Basic.hpp"

#include "ItemDetailsStackCounter_classes.hpp"
#include "ItemDetailsStackCounter_parameters.hpp"


namespace SDK
{

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Refresh Visibility
// (Private, BlueprintCallable, BlueprintEvent)

void UItemDetailsStackCounter_C::Refresh_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsStackCounter_C", "Refresh Visibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Update Stack Count
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemDetailsStackCounter_C::Update_Stack_Count()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsStackCounter_C", "Update Stack Count");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemDetailsStackCounter_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsStackCounter_C", "PreConstruct");

	Params::ItemDetailsStackCounter_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemDetailsStackCounter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsStackCounter_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandlePreDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsStackCounter_C::HandlePreDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsStackCounter_C", "HandlePreDifferentItemToDetailSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsStackCounter_C::HandlePostDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsStackCounter_C", "HandlePostDifferentItemToDetailSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandleOnItemChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bItemChanged                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bAmmoChanged                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIngredientsChanged                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemDetailsStackCounter_C::HandleOnItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsStackCounter_C", "HandleOnItemChanged");

	Params::ItemDetailsStackCounter_C_HandleOnItemChanged Parms{};

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandleQuantityOverrideChanged
// (Event, Protected, BlueprintEvent)

void UItemDetailsStackCounter_C::HandleQuantityOverrideChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsStackCounter_C", "HandleQuantityOverrideChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.ExecuteUbergraph_ItemDetailsStackCounter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemDetailsStackCounter_C::ExecuteUbergraph_ItemDetailsStackCounter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsStackCounter_C", "ExecuteUbergraph_ItemDetailsStackCounter");

	Params::ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

