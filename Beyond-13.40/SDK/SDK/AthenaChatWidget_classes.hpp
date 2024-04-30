#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaChatWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaChatWidget.AthenaChatWidget_C
// 0x0048 (0x0340 - 0x02F8)
class UAthenaChatWidget_C final : public UAthenaActivatableChatWidget
{
public:
	struct FDataTableRowHandle                    CloseUserListAction;                               // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    OpenUserListAction;                                // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    CurrentUserListAction;                             // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bEnteringChat;                                     // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7219[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEnteredChat;                                     // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnEnteredChat__DelegateSignature(bool EnteredChat);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChatWidget_C">();
	}
	static class UAthenaChatWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChatWidget_C>();
	}
};

}

