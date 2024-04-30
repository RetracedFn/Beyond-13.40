#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabMouseAndKeyboardBindingOptions_New

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabMouseAndKeyboardBindingOptions_New.TabMouseAndKeyboardBindingOptions_New_C
// 0x0008 (0x0328 - 0x0320)
class UTabMouseAndKeyboardBindingOptions_New_C final : public UFortTabMouseAndKeyboardBindingsOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_TabMouseAndKeyboardBindingOptions_New(int32 EntryPoint);
	void BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature(class UFortSetting* Setting, class FName Action);
	void SettingValueChanged(float Value);
	void CenterOnTab();
	void DialogResult_686847584DA2D10A8A0FBD8D84ED21B2(EFortDialogResult Result, class FName ResultName);
	void OnComplete_CABEB38E4A74A3AE7304669F10DD9A94(class UUserWidget* UserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabMouseAndKeyboardBindingOptions_New_C">();
	}
	static class UTabMouseAndKeyboardBindingOptions_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabMouseAndKeyboardBindingOptions_New_C>();
	}
};

}

