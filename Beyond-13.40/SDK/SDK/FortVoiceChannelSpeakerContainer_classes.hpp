#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortVoiceChannelSpeakerContainer

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortVoiceChannelSpeakerContainer.FortVoiceChannelSpeakerContainer_C
// 0x0010 (0x0300 - 0x02F0)
class UFortVoiceChannelSpeakerContainer_C final : public UFortVoiceSpeakerContainerWidget
{
public:
	class UImage*                                 SpeakerIcon;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortVoiceChannelSpeakerContainer_C">();
	}
	static class UFortVoiceChannelSpeakerContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVoiceChannelSpeakerContainer_C>();
	}
};

}

