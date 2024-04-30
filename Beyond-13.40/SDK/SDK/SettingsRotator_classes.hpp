#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsRotator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SettingsRotator.SettingsRotator_C
// 0x0010 (0x0BD8 - 0x0BC8)
class USettingsRotator_C final : public UFortSettingsRotator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Background;                                        // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SettingsRotator(int32 EntryPoint);
	void BP_OnDefaultOptionSpecified(int32 DefaultOptionIndex);
	void BP_OnOptionSelected(int32 Param_Index);
	void BP_OnOptionsPopulated(int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsRotator_C">();
	}
	static class USettingsRotator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsRotator_C>();
	}
};

}

