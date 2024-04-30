#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLoadoutTile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaLoadoutTile.AthenaLoadoutTile_C
// 0x0008 (0x0B90 - 0x0B88)
class UAthenaLoadoutTile_C final : public UFortCosmeticLoadoutListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B88(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AthenaLoadoutTile(int32 EntryPoint);
	void BP_OnEntryReleased();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnUnhovered();
	void BP_OnHovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLoadoutTile_C">();
	}
	static class UAthenaLoadoutTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLoadoutTile_C>();
	}
};

}

