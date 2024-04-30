#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrimarySkewButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PrimarySkewButton.PrimarySkewButton_C
// 0x0050 (0x0BC0 - 0x0B70)
class UPrimarySkewButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Pressed;                                           // 0x0B78(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0B80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ButtonTop;                                   // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Shadow;                                      // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ToUpper;                                           // 0x0BA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          XL;                                                // 0x0BA1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C11[0x6];                                     // 0x0BA2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ButtonNameText;                                    // 0x0BA8(0x0018)(Edit, BlueprintVisible)

public:
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnClicked();
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_PrimarySkewButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PrimarySkewButton_C">();
	}
	static class UPrimarySkewButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrimarySkewButton_C>();
	}
};

}

