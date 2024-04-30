#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeInfoPanelEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C
// 0x0028 (0x02B0 - 0x0288)
class UChallengeInfoPanelEntry_C final : public UAthenaChallengeInfoPanelEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PartyAssistInfoIntro;                              // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AmbientPartyAssistAttention;                       // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UGroupChallengeTag_C*                   GroupChallengeTag_124;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherContent;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ChallengeInfoPanelEntry(int32 EntryPoint);
	void OnLocalPlayerMissingAssistedChallenge();
	void OnChallengeInfoSet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChallengeInfoPanelEntry_C">();
	}
	static class UChallengeInfoPanelEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChallengeInfoPanelEntry_C>();
	}
};

}

