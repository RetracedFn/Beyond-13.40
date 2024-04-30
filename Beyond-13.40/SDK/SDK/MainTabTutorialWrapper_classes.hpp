#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainTabTutorialWrapper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainTabTutorialWrapper.MainTabTutorialWrapper_C
// 0x0028 (0x02A0 - 0x0278)
class UMainTabTutorialWrapper_C final : public UFortBangWrapper_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       TutorialGlow;                                      // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTutorialToastWidget_C*                 TutorialToastWidget;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundBase*                             Play_Callout_Sound;                                // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          ParentButton;                                      // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void TutorialWrapperFinished();
	void SetParentButton(class UCommonButton* Param_ParentButton);
	void GetTutorialCalloutData(const struct FFortUITutorialData& TutorialData, struct FFortToastDisplayInfo* FortToastDisplayInfo);
	void HasValidData(const struct FFortUITutorialData& FortUITutorialData, bool* Result);
	void HandleTutorialCallout(const class FName& TutorialObjectiveName, ETutorialType TutorialType);
	void CheckFinishTutorialWrapper();
	void OnStopCallout();
	void OnStartCallout(class FName TutorialObjectiveName, ETutorialType TutorialType);
	void Construct();
	void Destruct();
	void OnFinishedToast();
	void ExecuteUbergraph_MainTabTutorialWrapper(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainTabTutorialWrapper_C">();
	}
	static class UMainTabTutorialWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainTabTutorialWrapper_C>();
	}
};

}

