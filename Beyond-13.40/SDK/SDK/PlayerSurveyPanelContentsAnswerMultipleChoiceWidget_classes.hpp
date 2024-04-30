#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerSurveyPanelContentsAnswerMultipleChoiceWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C
// 0x0048 (0x0368 - 0x0320)
class UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C final : public UFortPlayerSurveyButtonGroupMultipleChoiceAnswerWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDynamicEntryBox*                       ChoicesEntryBox;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonHierarchicalScrollBox*           ChoicesScrollBox;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                DummyButton;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UCommonButton*>                  ChoiceButtons;                                     // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class FText                                   Text_Subtitle;                                     // 0x0350(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget(int32 EntryPoint);
	void HandleButtonFocused(int32 ButtonIndex);
	void HandleButtonClicked(int32 ButtonIndex);
	void HandleQuestionChanged();
	void HandleAnswerChanged(const struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo);
	void HandleCommitCurrentAnswer();
	void Construct();
	void HandlePlayerRequestAnswer(int32 AnswerIndex);
	void UpdateEntryBoxContents();
	void ScrollSelectedItemIntoView(bool FallBackToDefault, bool AnimateScroll, bool OverrideScrollDestination);

	class UWidget* GetDefaultFocusedWidget() const;
	class FText GetSubtitleText() const;
	void GetDefaultFocusedWidgetPostDummy(EUINavigation Param_Navigation, class UWidget** Widget) const;
	void GetDefaultInitialChoiceIndex(int32* Param_Index) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C">();
	}
	static class UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C>();
	}
};

}

