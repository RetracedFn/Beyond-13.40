#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BadgerBangsLayerAnimBP

#include "Basic.hpp"

#include "BadgerBangsLayerAnimBP_classes.hpp"
#include "BadgerBangsLayerAnimBP_parameters.hpp"


namespace SDK
{

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ExecuteUbergraph_BadgerBangsLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBadgerBangsLayerAnimBP_C::ExecuteUbergraph_BadgerBangsLayerAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ExecuteUbergraph_BadgerBangsLayerAnimBP");

	Params::BadgerBangsLayerAnimBP_C_ExecuteUbergraph_BadgerBangsLayerAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "AnimGraph");

	Params::BadgerBangsLayerAnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemSwimJumpStart                                (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemSwimJumpStart(struct FPoseLink* Param_ItemSwimJumpStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemSwimJumpStart");

	Params::BadgerBangsLayerAnimBP_C_ItemSwimJumpStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemSwimJumpStart != nullptr)
		*Param_ItemSwimJumpStart = std::move(Parms.Param_ItemSwimJumpStart);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseRelaxedEntry                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemRelaxedEntry                                 (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* Param_ItemRelaxedEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemRelaxedEntry");

	Params::BadgerBangsLayerAnimBP_C_ItemRelaxedEntry Parms{};

	Parms.InPoseRelaxedEntry = std::move(InPoseRelaxedEntry);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemRelaxedEntry != nullptr)
		*Param_ItemRelaxedEntry = std::move(Parms.Param_ItemRelaxedEntry);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyJogPostPivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseLowerBodyJogPostPivot                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemLowerBodyJogPostPivot                        (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* Param_ItemLowerBodyJogPostPivot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemLowerBodyJogPostPivot");

	Params::BadgerBangsLayerAnimBP_C_ItemLowerBodyJogPostPivot Parms{};

	Parms.InPoseLowerBodyJogPostPivot = std::move(InPoseLowerBodyJogPostPivot);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemLowerBodyJogPostPivot != nullptr)
		*Param_ItemLowerBodyJogPostPivot = std::move(Parms.Param_ItemLowerBodyJogPostPivot);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyJogPrePivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseLowerBodyJogPrePivot                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemLowerBodyJogPrePivot                         (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* Param_ItemLowerBodyJogPrePivot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemLowerBodyJogPrePivot");

	Params::BadgerBangsLayerAnimBP_C_ItemLowerBodyJogPrePivot Parms{};

	Parms.InPoseLowerBodyJogPrePivot = std::move(InPoseLowerBodyJogPrePivot);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemLowerBodyJogPrePivot != nullptr)
		*Param_ItemLowerBodyJogPrePivot = std::move(Parms.Param_ItemLowerBodyJogPrePivot);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyJogStop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseLowerBodyJogStop                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemLowerBodyJogStop                             (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* Param_ItemLowerBodyJogStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemLowerBodyJogStop");

	Params::BadgerBangsLayerAnimBP_C_ItemLowerBodyJogStop Parms{};

	Parms.InPoseLowerBodyJogStop = std::move(InPoseLowerBodyJogStop);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemLowerBodyJogStop != nullptr)
		*Param_ItemLowerBodyJogStop = std::move(Parms.Param_ItemLowerBodyJogStop);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyJogStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseLowerBodyJogStart                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemLowerBodyJogStart                            (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* Param_ItemLowerBodyJogStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemLowerBodyJogStart");

	Params::BadgerBangsLayerAnimBP_C_ItemLowerBodyJogStart Parms{};

	Parms.InPoseLowerBodyJogStart = std::move(InPoseLowerBodyJogStart);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemLowerBodyJogStart != nullptr)
		*Param_ItemLowerBodyJogStart = std::move(Parms.Param_ItemLowerBodyJogStart);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyLeanAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseLowerBodyLeanAdditive                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemLowerBodyLeanAdditive                        (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* Param_ItemLowerBodyLeanAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemLowerBodyLeanAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemLowerBodyLeanAdditive Parms{};

	Parms.InPoseLowerBodyLeanAdditive = std::move(InPoseLowerBodyLeanAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemLowerBodyLeanAdditive != nullptr)
		*Param_ItemLowerBodyLeanAdditive = std::move(Parms.Param_ItemLowerBodyLeanAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseLowerBodyMovement                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemLowerBodyMovement                            (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* Param_ItemLowerBodyMovement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemLowerBodyMovement");

	Params::BadgerBangsLayerAnimBP_C_ItemLowerBodyMovement Parms{};

	Parms.InPoseLowerBodyMovement = std::move(InPoseLowerBodyMovement);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemLowerBodyMovement != nullptr)
		*Param_ItemLowerBodyMovement = std::move(Parms.Param_ItemLowerBodyMovement);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJogPostPivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPosePostPivotAdditive                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemJogPostPivotAdditive                         (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* Param_ItemJogPostPivotAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemJogPostPivotAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemJogPostPivotAdditive Parms{};

	Parms.InPosePostPivotAdditive = std::move(InPosePostPivotAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJogPostPivotAdditive != nullptr)
		*Param_ItemJogPostPivotAdditive = std::move(Parms.Param_ItemJogPostPivotAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJogPrePivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPosePrePivotAdditive                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemJogPrePivotAdditive                          (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* Param_ItemJogPrePivotAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemJogPrePivotAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemJogPrePivotAdditive Parms{};

	Parms.InPosePrePivotAdditive = std::move(InPosePrePivotAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJogPrePivotAdditive != nullptr)
		*Param_ItemJogPrePivotAdditive = std::move(Parms.Param_ItemJogPrePivotAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJogStopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseJogStopAdditive                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemJogStopAdditive                              (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* Param_ItemJogStopAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemJogStopAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemJogStopAdditive Parms{};

	Parms.InPoseJogStopAdditive = std::move(InPoseJogStopAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJogStopAdditive != nullptr)
		*Param_ItemJogStopAdditive = std::move(Parms.Param_ItemJogStopAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJogStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseJogStartAdditive                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemJogStartAdditive                             (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* Param_ItemJogStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemJogStartAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemJogStartAdditive Parms{};

	Parms.InPoseJogStartAdditive = std::move(InPoseJogStartAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJogStartAdditive != nullptr)
		*Param_ItemJogStartAdditive = std::move(Parms.Param_ItemJogStartAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFlyModeLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemFlyModeLoopAdditive                          (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemFlyModeLoopAdditive(struct FPoseLink* Param_ItemFlyModeLoopAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemFlyModeLoopAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemFlyModeLoopAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemFlyModeLoopAdditive != nullptr)
		*Param_ItemFlyModeLoopAdditive = std::move(Parms.Param_ItemFlyModeLoopAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFlyModeStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemFlyModeStartAdditive                         (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemFlyModeStartAdditive(struct FPoseLink* Param_ItemFlyModeStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemFlyModeStartAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemFlyModeStartAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemFlyModeStartAdditive != nullptr)
		*Param_ItemFlyModeStartAdditive = std::move(Parms.Param_ItemFlyModeStartAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemZipLineStartAdditive                         (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemZipLineStartAdditive(struct FPoseLink* Param_ItemZipLineStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemZipLineStartAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemZipLineStartAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemZipLineStartAdditive != nullptr)
		*Param_ItemZipLineStartAdditive = std::move(Parms.Param_ItemZipLineStartAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemJetPackJumpAdditive                          (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemJetPackJumpAdditive(struct FPoseLink* Param_ItemJetPackJumpAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemJetPackJumpAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemJetPackJumpAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJetPackJumpAdditive != nullptr)
		*Param_ItemJetPackJumpAdditive = std::move(Parms.Param_ItemJetPackJumpAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemJetPackStartAdditive                         (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemJetPackStartAdditive(struct FPoseLink* Param_ItemJetPackStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemJetPackStartAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemJetPackStartAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJetPackStartAdditive != nullptr)
		*Param_ItemJetPackStartAdditive = std::move(Parms.Param_ItemJetPackStartAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemFallLandAdditive                             (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemFallLandAdditive(struct FPoseLink* Param_ItemFallLandAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemFallLandAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemFallLandAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemFallLandAdditive != nullptr)
		*Param_ItemFallLandAdditive = std::move(Parms.Param_ItemFallLandAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemFallAdditive                                 (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemFallAdditive(struct FPoseLink* Param_ItemFallAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemFallAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemFallAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemFallAdditive != nullptr)
		*Param_ItemFallAdditive = std::move(Parms.Param_ItemFallAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemJumpLoopAdditive                             (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemJumpLoopAdditive(struct FPoseLink* Param_ItemJumpLoopAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemJumpLoopAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemJumpLoopAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJumpLoopAdditive != nullptr)
		*Param_ItemJumpLoopAdditive = std::move(Parms.Param_ItemJumpLoopAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemJumpUpAdditive                               (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemJumpUpAdditive(struct FPoseLink* Param_ItemJumpUpAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemJumpUpAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemJumpUpAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemJumpUpAdditive != nullptr)
		*Param_ItemJumpUpAdditive = std::move(Parms.Param_ItemJumpUpAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSlopeSliding
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemSlopeSliding                                 (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemSlopeSliding(struct FPoseLink* Param_ItemSlopeSliding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemSlopeSliding");

	Params::BadgerBangsLayerAnimBP_C_ItemSlopeSliding Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemSlopeSliding != nullptr)
		*Param_ItemSlopeSliding = std::move(Parms.Param_ItemSlopeSliding);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemCrouchTurningAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemCrouchTurningAdditive                        (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemCrouchTurningAdditive(struct FPoseLink* Param_ItemCrouchTurningAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemCrouchTurningAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemCrouchTurningAdditive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemCrouchTurningAdditive != nullptr)
		*Param_ItemCrouchTurningAdditive = std::move(Parms.Param_ItemCrouchTurningAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseIdleAdditive                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemIdleAdditive                                 (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* Param_ItemIdleAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemIdleAdditive");

	Params::BadgerBangsLayerAnimBP_C_ItemIdleAdditive Parms{};

	Parms.InPoseIdleAdditive = std::move(InPoseIdleAdditive);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemIdleAdditive != nullptr)
		*Param_ItemIdleAdditive = std::move(Parms.Param_ItemIdleAdditive);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFullBodySprint
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseSprint                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemFullBodySprint                               (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* Param_ItemFullBodySprint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemFullBodySprint");

	Params::BadgerBangsLayerAnimBP_C_ItemFullBodySprint Parms{};

	Parms.InPoseSprint = std::move(InPoseSprint);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemFullBodySprint != nullptr)
		*Param_ItemFullBodySprint = std::move(Parms.Param_ItemFullBodySprint);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPoseUpperBody                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_AdjustedAim       Param_InputParam                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_ItemUpperBody                                    (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& Param_InputParam, struct FPoseLink* Param_ItemUpperBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemUpperBody");

	Params::BadgerBangsLayerAnimBP_C_ItemUpperBody Parms{};

	Parms.InPoseUpperBody = std::move(InPoseUpperBody);
	Parms.Param_InputParam = std::move(Param_InputParam);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemUpperBody != nullptr)
		*Param_ItemUpperBody = std::move(Parms.Param_ItemUpperBody);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpStartLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemSwimJumpStartLoop                            (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemSwimJumpStartLoop(struct FPoseLink* Param_ItemSwimJumpStartLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemSwimJumpStartLoop");

	Params::BadgerBangsLayerAnimBP_C_ItemSwimJumpStartLoop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemSwimJumpStartLoop != nullptr)
		*Param_ItemSwimJumpStartLoop = std::move(Parms.Param_ItemSwimJumpStartLoop);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpFallLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemSwimJumpFallLoop                             (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemSwimJumpFallLoop(struct FPoseLink* Param_ItemSwimJumpFallLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemSwimJumpFallLoop");

	Params::BadgerBangsLayerAnimBP_C_ItemSwimJumpFallLoop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemSwimJumpFallLoop != nullptr)
		*Param_ItemSwimJumpFallLoop = std::move(Parms.Param_ItemSwimJumpFallLoop);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpSurfaceLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemSwimJumpSurfaceLoop                          (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* Param_ItemSwimJumpSurfaceLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemSwimJumpSurfaceLoop");

	Params::BadgerBangsLayerAnimBP_C_ItemSwimJumpSurfaceLoop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemSwimJumpSurfaceLoop != nullptr)
		*Param_ItemSwimJumpSurfaceLoop = std::move(Parms.Param_ItemSwimJumpSurfaceLoop);
}


// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpSurfaceEnd
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_ItemSwimJumpSurfaceEnd                           (Parm, OutParm, NoDestructor)

void UBadgerBangsLayerAnimBP_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* Param_ItemSwimJumpSurfaceEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgerBangsLayerAnimBP_C", "ItemSwimJumpSurfaceEnd");

	Params::BadgerBangsLayerAnimBP_C_ItemSwimJumpSurfaceEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemSwimJumpSurfaceEnd != nullptr)
		*Param_ItemSwimJumpSurfaceEnd = std::move(Parms.Param_ItemSwimJumpSurfaceEnd);
}

}

