#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatsModeItemDetailsHostPanel_Store

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatsModeItemDetailsHostPanel_Store.StatsModeItemDetailsHostPanel_Store_C
// 0x0028 (0x0368 - 0x0340)
class UStatsModeItemDetailsHostPanel_Store_C final : public UFortItemManagementItemDetailsPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UItemDetailsHeader_C*                   HeaderWidget;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemAttributesDetailWidget_C*          ItemAttributesDetailWidget;                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MarkedForMulchingBackgroundImage;                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeImage*                    MarkedForMulchingIndicatorImage;                   // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void HandleHasItemMarkedForMulchingChanged();
	void ExecuteUbergraph_StatsModeItemDetailsHostPanel_Store(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatsModeItemDetailsHostPanel_Store_C">();
	}
	static class UStatsModeItemDetailsHostPanel_Store_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatsModeItemDetailsHostPanel_Store_C>();
	}
};

}

