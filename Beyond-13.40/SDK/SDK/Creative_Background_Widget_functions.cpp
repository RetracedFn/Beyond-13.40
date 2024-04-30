#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Creative_Background_Widget

#include "Basic.hpp"

#include "Creative_Background_Widget_classes.hpp"
#include "Creative_Background_Widget_parameters.hpp"


namespace SDK
{

// Function Creative_Background_Widget.Creative_Background_Widget_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCreative_Background_Widget_C::SetText(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetText");

	Params::Creative_Background_Widget_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Background_Widget_C::SetBackgroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetBackgroundColor");

	Params::Creative_Background_Widget_C_SetBackgroundColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FontSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Background_Widget_C::SetTextScale(int32 FontSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetTextScale");

	Params::Creative_Background_Widget_C_SetTextScale Parms{};

	Parms.FontSize = FontSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETextJustify                            Alignment                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Background_Widget_C::SetTextAlignment(ETextJustify Alignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetTextAlignment");

	Params::Creative_Background_Widget_C_SetTextAlignment Parms{};

	Parms.Alignment = Alignment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     TextColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Background_Widget_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetTextColor");

	Params::Creative_Background_Widget_C_SetTextColor Parms{};

	Parms.TextColor = std::move(TextColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextFont                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutlineStrength                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Background_Widget_C::SetTextFont(int32 TextFont, int32 OutlineStrength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetTextFont");

	Params::Creative_Background_Widget_C_SetTextFont Parms{};

	Parms.TextFont = TextFont;
	Parms.OutlineStrength = OutlineStrength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBillboardshadowDirection               Shadow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ShadowScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Background_Widget_C::SetShadow(EBillboardshadowDirection Shadow, float ShadowScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetShadow");

	Params::Creative_Background_Widget_C_SetShadow Parms{};

	Parms.Shadow = Shadow;
	Parms.ShadowScale = ShadowScale;

	UObject::ProcessEvent(Func, &Parms);
}

}

