#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemUIFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ItemUIFunctionLibrary.ItemUIFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UItemUIFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void IsNullItem(class UObject* ItemObject, class UObject* __WorldContext, bool* Is_Null_Item);
	static void Truncate_Integer_Value(int32 Value, int32 Min_Fractional_Digits, int32 Max_Fractional_Digits, class UObject* __WorldContext, class FText* Formatted_Value);
	static void Convert_Tier_To_Integer(EFortItemTier Tier, class UObject* __WorldContext, int32* Numeric_Tier);
	static void ParseLevelRequiredFromString(const class FString& InString, class UObject* __WorldContext, int32* OutInt);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemUIFunctionLibrary_C">();
	}
	static class UItemUIFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemUIFunctionLibrary_C>();
	}
};

}

