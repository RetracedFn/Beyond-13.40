#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaVariantTileButton

#include "Basic.hpp"

#include "AthenaVariantTileButton_classes.hpp"
#include "AthenaVariantTileButton_parameters.hpp"


namespace SDK
{

// Function AthenaVariantTileButton.AthenaVariantTileButton_C.ExecuteUbergraph_AthenaVariantTileButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaVariantTileButton_C::ExecuteUbergraph_AthenaVariantTileButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaVariantTileButton_C", "ExecuteUbergraph_AthenaVariantTileButton");

	Params::AthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaVariantTileButton.AthenaVariantTileButton_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaVariantTileButton_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaVariantTileButton_C", "OnListItemObjectSet");

	Params::AthenaVariantTileButton_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

}

