#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemPresentationEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemPresentationEntry.ItemPresentationEntry_C
// 0x0030 (0x0C80 - 0x0C50)
class UItemPresentationEntry_C final : public UFortItemPresentationEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x0C58(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0C60(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x0C68(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Content;                                   // 0x0C70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsSelected;                                       // 0x0C78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCanHover;                                         // 0x0C79(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ItemPresentationEntry(int32 EntryPoint);
	void BP_OnDeselected();
	void BP_OnSelected();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void Construct();
	void DelayIntroAnimation();
	void BP_OnUnhovered();
	void BP_OnHovered();
	void HandleHover();
	void HandleUnhover();
	void HandleSelectedAnim();
	void HandelDeselectedAnim();
	void PlayIntro(float TimeBeforeStart);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemPresentationEntry_C">();
	}
	static class UItemPresentationEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemPresentationEntry_C>();
	}
};

}

