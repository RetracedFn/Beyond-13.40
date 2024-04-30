#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowdownTournamentDetailsScoringRule

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShowdownTournamentDetailsScoringRule.ShowdownTournamentDetailsScoringRule_C
// 0x0030 (0x0288 - 0x0258)
class UShowdownTournamentDetailsScoringRule_C final : public UCommonUserWidget
{
public:
	class UCommonBorder*                          CommonBorder_BG;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_TextContainer;                        // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       RuleIcon;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RuleNameText;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RuleValueText;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                             ScoringRuleDisplayData;                            // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetData(const struct FFortShowdownScoringRuleInfo& ScoreRule, const struct FFortTournamentDisplayInfo& TournamentDisplayInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownTournamentDetailsScoringRule_C">();
	}
	static class UShowdownTournamentDetailsScoringRule_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownTournamentDetailsScoringRule_C>();
	}
};

}

