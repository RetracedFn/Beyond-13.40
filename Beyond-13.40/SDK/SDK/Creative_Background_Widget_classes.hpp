#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Creative_Background_Widget

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "EBillboardshadowDirection_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Creative_Background_Widget.Creative_Background_Widget_C
// 0x0010 (0x0240 - 0x0230)
class UCreative_Background_Widget_C final : public UUserWidget
{
public:
	class UBorder*                                Border_0;                                          // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             UserText;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetText(const class FString& Text);
	void SetBackgroundColor(const struct FLinearColor& Color);
	void SetTextScale(int32 FontSize);
	void SetTextAlignment(ETextJustify Alignment);
	void SetTextColor(const struct FLinearColor& TextColor);
	void SetTextFont(int32 TextFont, int32 OutlineStrength);
	void SetShadow(EBillboardshadowDirection Shadow, float ShadowScale);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Creative_Background_Widget_C">();
	}
	static class UCreative_Background_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreative_Background_Widget_C>();
	}
};

}

