#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowdownDivisionDetailsInfo

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShowdownDivisionDetailsInfo.ShowdownDivisionDetailsInfo_C
// 0x0018 (0x0640 - 0x0628)
class UShowdownDivisionDetailsInfo_C final : public UFortDivisionDetailsInfo
{
public:
	class UImage*                                 Hidden_Delete_;                                    // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_66;                                          // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_AboutLeagues;                        // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownDivisionDetailsInfo_C">();
	}
	static class UShowdownDivisionDetailsInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownDivisionDetailsInfo_C>();
	}
};

}

