#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitonDetails_RefundDisclaimer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAcquisitonDetails_RefundDisclaimer.AthenaDirectAcquisitonDetails_RefundDisclaimer_C
// 0x0030 (0x0260 - 0x0230)
class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       DisclaimerText;                                    // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBoxDisclaimer;                           // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   OverrideText;                                      // 0x0248(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly)

public:
	void ExecuteUbergraph_AthenaDirectAcquisitonDetails_RefundDisclaimer(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAcquisitonDetails_RefundDisclaimer_C">();
	}
	static class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAcquisitonDetails_RefundDisclaimer_C>();
	}
};

}

