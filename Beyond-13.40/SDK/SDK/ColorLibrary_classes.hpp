#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ColorLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ColorLibrary.ColorLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UColorLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Get_HarvestWeakPoint_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* StyleSheetOut);
	static void Get_Base___Buff_Colors(EFortStatValueDisplayType Display_Type, EFortBuffState Buff_State, const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Base, struct FLinearColor* Buff);
	static void Get_Bolt_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Ice_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Fire_Elemental_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Unique_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Debuff_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Buff_Color(const struct FColorStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ColorLibrary_C">();
	}
	static class UColorLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UColorLibrary_C>();
	}
};

}

