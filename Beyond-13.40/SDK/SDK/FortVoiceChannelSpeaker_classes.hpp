#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortVoiceChannelSpeaker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C
// 0x0020 (0x02F0 - 0x02D0)
class UFortVoiceChannelSpeaker_C final : public UFortVoiceChannelSpeakerWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimateVoice;                                      // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_OnlineStatusIndicator;                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Content;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FortVoiceChannelSpeaker(int32 EntryPoint);
	void OnAnimateTalkingChanged(bool bIsNowTalking);
	void PreConstruct(bool IsDesignTime);
	void OnStyleAssigned(EChannelSpeakerStyle NewStyle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortVoiceChannelSpeaker_C">();
	}
	static class UFortVoiceChannelSpeaker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVoiceChannelSpeaker_C>();
	}
};

}

