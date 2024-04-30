#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CMSImageSlideShow

#include "Basic.hpp"

#include "CMSImageSlideShow_classes.hpp"
#include "CMSImageSlideShow_parameters.hpp"


namespace SDK
{

// Function CMSImageSlideShow.CMSImageSlideShow_C.CarouselIndexChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentPageIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCMSImageSlideShow_C::CarouselIndexChanged__DelegateSignature(int32 CurrentPageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CMSImageSlideShow_C", "CarouselIndexChanged__DelegateSignature");

	Params::CMSImageSlideShow_C_CarouselIndexChanged__DelegateSignature Parms{};

	Parms.CurrentPageIndex = CurrentPageIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CMSImageSlideShow.CMSImageSlideShow_C.ExecuteUbergraph_CMSImageSlideShow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCMSImageSlideShow_C::ExecuteUbergraph_CMSImageSlideShow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CMSImageSlideShow_C", "ExecuteUbergraph_CMSImageSlideShow");

	Params::CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CMSImageSlideShow.CMSImageSlideShow_C.BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonWidgetCarousel*            CarouselWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentPageIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCMSImageSlideShow_C::BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature(class UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CMSImageSlideShow_C", "BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature");

	Params::CMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature Parms{};

	Parms.CarouselWidget = CarouselWidget;
	Parms.CurrentPageIndex = CurrentPageIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CMSImageSlideShow.CMSImageSlideShow_C.SetMediaURLs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   MediaURLs                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UCMSImageSlideShow_C::SetMediaURLs(const TArray<class FString>& MediaURLs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CMSImageSlideShow_C", "SetMediaURLs");

	Params::CMSImageSlideShow_C_SetMediaURLs Parms{};

	Parms.MediaURLs = std::move(MediaURLs);

	UObject::ProcessEvent(Func, &Parms);
}

}

