#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerSurveyPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerSurveyPanel.PlayerSurveyPanel_C
// 0x0020 (0x0488 - 0x0468)
class UPlayerSurveyPanel_C final : public UFortPlayerSurveyPanelBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0468(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x0470(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0478(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UScaleBox*                              PanelScale;                                        // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerSurveyPanel(int32 EntryPoint);
	void OnPlayerSurveyEnded();
	void StartIntro_BP();
	void StartIntro();
	void OutroDone();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSurveyPanel_C">();
	}
	static class UPlayerSurveyPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSurveyPanel_C>();
	}
};

}

