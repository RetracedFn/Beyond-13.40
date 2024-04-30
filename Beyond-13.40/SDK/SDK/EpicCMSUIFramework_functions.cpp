#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EpicCMSUIFramework

#include "Basic.hpp"

#include "EpicCMSUIFramework_classes.hpp"
#include "EpicCMSUIFramework_parameters.hpp"


namespace SDK
{

// Function EpicCMSUIFramework.EpicCMSImage.SetMediaURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           MediaUrl                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSImage::SetMediaURL(const class FString& MediaUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSImage", "SetMediaURL");

	Params::EpicCMSImage_SetMediaURL Parms{};

	Parms.MediaUrl = std::move(MediaUrl);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EpicCMSUIFramework.EpicCMSTileBase.Launch
// (Final, Native, Protected, BlueprintCallable)

void UEpicCMSTileBase::Launch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileBase", "Launch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          TilePageWidget                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::AddTilePage(class UWidget* TilePageWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "AddTilePage");

	Params::EpicCMSTileCarousel_AddTilePage Parms{};

	Parms.TilePageWidget = TilePageWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling
// (Final, Native, Public, BlueprintCallable)

void UEpicCMSTileCarousel::BeginAutoScrolling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "BeginAutoScrolling");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                          TileWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::HandleTilePageAdded(class UWidget* TileWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "HandleTilePageAdded");

	Params::EpicCMSTileCarousel_HandleTilePageAdded Parms{};

	Parms.TileWidget = TileWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bShowNavigation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::NavigationVisibilityChanged(bool bShowNavigation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "NavigationVisibilityChanged");

	Params::EpicCMSTileCarousel_NavigationVisibilityChanged Parms{};

	Parms.bShowNavigation = bShowNavigation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
// (Final, Native, Protected, BlueprintCallable)

void UEpicCMSTileCarousel::NextPage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "NextPage");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
// (Final, Native, Protected, BlueprintCallable)

void UEpicCMSTileCarousel::PreviousPage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "PreviousPage");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                                   PageIndex                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::SetCurrentPageByIndex(const int32 PageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "SetCurrentPageByIndex");

	Params::EpicCMSTileCarousel_SetCurrentPageByIndex Parms{};

	Parms.PageIndex = PageIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEpicCMSTileCarousel::GetCurrentPageIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "GetCurrentPageIndex");

	Params::EpicCMSTileCarousel_GetCurrentPageIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

