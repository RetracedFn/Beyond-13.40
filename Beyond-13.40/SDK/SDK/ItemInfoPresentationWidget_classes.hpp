#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInfoPresentationWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInfoPresentationWidget.ItemInfoPresentationWidget_C
// 0x0018 (0x02A0 - 0x0288)
class UItemInfoPresentationWidget_C final : public UFortItemInfoPresentationWidget
{
public:
	class UWidgetAnimation*                       FadeAnim;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InitialState;                                      // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       IntroAnim;                                         // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void HandleIntro();
	void HandleInitialState();
	void HandleOutro();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInfoPresentationWidget_C">();
	}
	static class UItemInfoPresentationWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInfoPresentationWidget_C>();
	}
};

}

