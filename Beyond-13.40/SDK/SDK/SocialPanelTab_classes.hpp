#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialPanelTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialPanelTab.SocialPanelTab_C
// 0x0028 (0x0BF8 - 0x0BD0)
class USocialPanelTab_C final : public UFortSocialTab
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BD0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Unselected;                                        // 0x0BD8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnFriendsOnlineUpdated;                            // 0x0BE0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x0BE8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected;                                          // 0x0BF0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SocialPanelTab(int32 EntryPoint);
	void BP_OnDeselected();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void BP_OnHovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanelTab_C">();
	}
	static class USocialPanelTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanelTab_C>();
	}
};

}

