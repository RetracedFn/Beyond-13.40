#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLobby

#include "Basic.hpp"

#include "AthenaLobby_classes.hpp"
#include "AthenaLobby_parameters.hpp"


namespace SDK
{

// Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::ExecuteUbergraph_AthenaLobby(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "ExecuteUbergraph_AthenaLobby");

	Params::AthenaLobby_C_ExecuteUbergraph_AthenaLobby Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLobby.AthenaLobby_C.DisplayGlyphQuestUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   NewGlyphs                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::DisplayGlyphQuestUpdated(int32 NewGlyphs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "DisplayGlyphQuestUpdated");

	Params::AthenaLobby_C_DisplayGlyphQuestUpdated Parms{};

	Parms.NewGlyphs = NewGlyphs;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLobby.AthenaLobby_C.OnPlaylistChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortLobbyType                          LobbyType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylistAthena*              PlaylistData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::OnPlaylistChanged(EFortLobbyType LobbyType, const class UFortPlaylistAthena* PlaylistData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "OnPlaylistChanged");

	Params::AthenaLobby_C_OnPlaylistChanged Parms{};

	Parms.LobbyType = LobbyType;
	Parms.PlaylistData = PlaylistData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLobby.AthenaLobby_C.BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature
// (BlueprintEvent)

void UAthenaLobby_C::BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobby.AthenaLobby_C.TryToastAgainNextFrame
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::TryToastAgainNextFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "TryToastAgainNextFrame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobby.AthenaLobby_C.AttemptToShowToast
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::AttemptToShowToast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "AttemptToShowToast");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobby.AthenaLobby_C.DisplayStoreUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStoreToastRequest*               StoreUpdatedRequest                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::DisplayStoreUpdated(class UStoreToastRequest* StoreUpdatedRequest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "DisplayStoreUpdated");

	Params::AthenaLobby_C_DisplayStoreUpdated Parms{};

	Parms.StoreUpdatedRequest = StoreUpdatedRequest;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLobby.AthenaLobby_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaLobby_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobby.AthenaLobby_C.BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature");

	Params::AthenaLobby_C_BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLobby.AthenaLobby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaLobby_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobby.AthenaLobby_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaLobby_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobby.AthenaLobby_C.OnComplete_9036807A49B907A7A1B78EB727BAB97A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      UserWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::OnComplete_9036807A49B907A7A1B78EB727BAB97A(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "OnComplete_9036807A49B907A7A1B78EB727BAB97A");

	Params::AthenaLobby_C_OnComplete_9036807A49B907A7A1B78EB727BAB97A Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLobby.AthenaLobby_C.OnSuccess_DA5E62624D068772EA890193344BA4AE
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::OnSuccess_DA5E62624D068772EA890193344BA4AE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "OnSuccess_DA5E62624D068772EA890193344BA4AE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobby.AthenaLobby_C.OnFailure_DA5E62624D068772EA890193344BA4AE
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::OnFailure_DA5E62624D068772EA890193344BA4AE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "OnFailure_DA5E62624D068772EA890193344BA4AE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobby.AthenaLobby_C.StartAthenaLobbyMusic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::StartAthenaLobbyMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "StartAthenaLobbyMusic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobby.AthenaLobby_C.ConfigureGenericLinkButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::ConfigureGenericLinkButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "ConfigureGenericLinkButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobby.AthenaLobby_C.HandleLobbyColorSchemeChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     NewColorScheme                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseDefaultScheme                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::HandleLobbyColorSchemeChange(const struct FLinearColor& NewColorScheme, bool UseDefaultScheme)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobby_C", "HandleLobbyColorSchemeChange");

	Params::AthenaLobby_C_HandleLobbyColorSchemeChange Parms{};

	Parms.NewColorScheme = std::move(NewColorScheme);
	Parms.UseDefaultScheme = UseDefaultScheme;

	UObject::ProcessEvent(Func, &Parms);
}

}

