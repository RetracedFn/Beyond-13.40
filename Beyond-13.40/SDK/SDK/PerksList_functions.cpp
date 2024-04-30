#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerksList

#include "Basic.hpp"

#include "PerksList_classes.hpp"
#include "PerksList_parameters.hpp"


namespace SDK
{

// Function PerksList.PerksList_C.ResetVariables
// (Public, BlueprintCallable, BlueprintEvent)

void UPerksList_C::ResetVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerksList_C", "ResetVariables");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerksList.PerksList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPerksList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerksList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerksList.PerksList_C.OnGeneratePerkTier
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIPerkTier                  FortPerkTier                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UFortPerkTierWidget_NUI*          PerkTierWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerksList_C::OnGeneratePerkTier(const struct FFortUIPerkTier& FortPerkTier, class UFortPerkTierWidget_NUI* PerkTierWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerksList_C", "OnGeneratePerkTier");

	Params::PerksList_C_OnGeneratePerkTier Parms{};

	Parms.FortPerkTier = std::move(FortPerkTier);
	Parms.PerkTierWidget = PerkTierWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerksList.PerksList_C.OnGeneratePerk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIPerk                      FortPerk                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortPerkWidget_NUI*              PerkWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerksList_C::OnGeneratePerk(const struct FFortUIPerk& FortPerk, class UFortPerkWidget_NUI* PerkWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerksList_C", "OnGeneratePerk");

	Params::PerksList_C_OnGeneratePerk Parms{};

	Parms.FortPerk = std::move(FortPerk);
	Parms.PerkWidget = PerkWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerksList.PerksList_C.OnHeroChanged
// (Event, Public, BlueprintEvent)

void UPerksList_C::OnHeroChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerksList_C", "OnHeroChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerksList.PerksList_C.OnStateChanged
// (Event, Public, BlueprintEvent)

void UPerksList_C::OnStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerksList_C", "OnStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerksList.PerksList_C.ExecuteUbergraph_PerksList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerksList_C::ExecuteUbergraph_PerksList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerksList_C", "ExecuteUbergraph_PerksList");

	Params::PerksList_C_ExecuteUbergraph_PerksList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

