#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InScreenWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InScreenWidget.InScreenWidget_C
// 0x0008 (0x0238 - 0x0230)
class UInScreenWidget_C final : public UUserWidget
{
public:
	class UImage*                                 InScreenMedia;                                     // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InScreenWidget_C">();
	}
	static class UInScreenWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInScreenWidget_C>();
	}
};

}

