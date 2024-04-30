#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCardWidget

#include "Basic.hpp"

#include "ItemCardWidget_classes.hpp"
#include "ItemCardWidget_parameters.hpp"


namespace SDK
{

// Function ItemCardWidget.ItemCardWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UItemCardWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "OnFocusReceived");

	Params::ItemCardWidget_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ItemCardWidget.ItemCardWidget_C.OnCentered
// (BlueprintCallable, BlueprintEvent)

void UItemCardWidget_C::OnCentered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "OnCentered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCardWidget.ItemCardWidget_C.PlayShow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Idx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCardWidget_C::PlayShow(int32 Idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "PlayShow");

	Params::ItemCardWidget_C_PlayShow Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCardWidget.ItemCardWidget_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UItemCardWidget_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "OnFocusLost");

	Params::ItemCardWidget_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCardWidget.ItemCardWidget_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UItemCardWidget_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCardWidget.ItemCardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemCardWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCardWidget.ItemCardWidget_C.ExecuteUbergraph_ItemCardWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCardWidget_C::ExecuteUbergraph_ItemCardWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "ExecuteUbergraph_ItemCardWidget");

	Params::ItemCardWidget_C_ExecuteUbergraph_ItemCardWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCardWidget.ItemCardWidget_C.OnHoveredEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReceivedItemLootInfo        NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemCardWidget_C::OnHoveredEvent__DelegateSignature(const struct FFortReceivedItemLootInfo& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "OnHoveredEvent__DelegateSignature");

	Params::ItemCardWidget_C_OnHoveredEvent__DelegateSignature Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}

}

