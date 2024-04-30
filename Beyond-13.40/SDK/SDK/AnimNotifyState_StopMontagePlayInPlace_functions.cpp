#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyState_StopMontagePlayInPlace

#include "Basic.hpp"

#include "AnimNotifyState_StopMontagePlayInPlace_classes.hpp"
#include "AnimNotifyState_StopMontagePlayInPlace_parameters.hpp"


namespace SDK
{

// Function AnimNotifyState_StopMontagePlayInPlace.AnimNotifyState_StopMontagePlayInPlace_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FrameDeltaTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAnimNotifyState_StopMontagePlayInPlace_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_StopMontagePlayInPlace_C", "Received_NotifyTick");

	Params::AnimNotifyState_StopMontagePlayInPlace_C_Received_NotifyTick Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

