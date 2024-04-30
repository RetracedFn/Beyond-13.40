#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Frontend_EventLevel_NavObject_MapTable

#include "Basic.hpp"

#include "BP_Frontend_EventLevel_NavObject_MapTable_classes.hpp"
#include "BP_Frontend_EventLevel_NavObject_MapTable_parameters.hpp"


namespace SDK
{

// Function BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C.ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_MapTable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_MapTable_C::ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_MapTable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_MapTable_C", "ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_MapTable");

	Params::BP_Frontend_EventLevel_NavObject_MapTable_C_ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_MapTable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C.OnActiveEventsChanged
// (Event, Public, BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_MapTable_C::OnActiveEventsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_MapTable_C", "OnActiveEventsChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C.ApplyMinimapTextures
// (BlueprintCallable, BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_MapTable_C::ApplyMinimapTextures()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_MapTable_C", "ApplyMinimapTextures");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_MapTable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_MapTable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C.OnLoaded_A68B6D734D1ACDA59664A699214A131F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_MapTable_C::OnLoaded_A68B6D734D1ACDA59664A699214A131F(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_MapTable_C", "OnLoaded_A68B6D734D1ACDA59664A699214A131F");

	Params::BP_Frontend_EventLevel_NavObject_MapTable_C_OnLoaded_A68B6D734D1ACDA59664A699214A131F Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C.OnLoaded_F6AE426C44DA5A3F148FEB87D7046DD0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_MapTable_C::OnLoaded_F6AE426C44DA5A3F148FEB87D7046DD0(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_MapTable_C", "OnLoaded_F6AE426C44DA5A3F148FEB87D7046DD0");

	Params::BP_Frontend_EventLevel_NavObject_MapTable_C_OnLoaded_F6AE426C44DA5A3F148FEB87D7046DD0 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C.GetMinimapTextures
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        MinimapTexture                                         (Parm, OutParm, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        MinimapDiscoveryMask                                   (Parm, OutParm, HasGetValueTypeHash)
// int32                                   MinimapIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_MapTable_C::GetMinimapTextures(TSoftObjectPtr<class UTexture2D>* MinimapTexture, TSoftObjectPtr<class UTexture2D>* MinimapDiscoveryMask, int32* MinimapIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_MapTable_C", "GetMinimapTextures");

	Params::BP_Frontend_EventLevel_NavObject_MapTable_C_GetMinimapTextures Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MinimapTexture != nullptr)
		*MinimapTexture = Parms.MinimapTexture;

	if (MinimapDiscoveryMask != nullptr)
		*MinimapDiscoveryMask = Parms.MinimapDiscoveryMask;

	if (MinimapIndex != nullptr)
		*MinimapIndex = Parms.MinimapIndex;
}


// Function BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C.GetMinimapIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_MapTable_C::GetMinimapIndex(int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_MapTable_C", "GetMinimapIndex");

	Params::BP_Frontend_EventLevel_NavObject_MapTable_C_GetMinimapIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C.Update Water Level
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Frontend_EventLevel_NavObject_MapTable_C::Update_Water_Level()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_MapTable_C", "Update Water Level");

	UObject::ProcessEvent(Func, nullptr);
}

}

