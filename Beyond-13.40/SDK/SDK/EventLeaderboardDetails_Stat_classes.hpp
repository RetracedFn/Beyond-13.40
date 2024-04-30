#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventLeaderboardDetails_Stat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C
// 0x0028 (0x0258 - 0x0230)
class UEventLeaderboardDetails_Stat_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UpdateStat;                                        // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_StatName;                                     // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_StatValue;                                    // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         StatItemIndex;                                     // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EventLeaderboardDetails_Stat(int32 EntryPoint);
	void EventStatAnim();
	void Construct();
	void SetStatData(const class FText& Param_Name, float Value, int32 NumFractionalDigits);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardDetails_Stat_C">();
	}
	static class UEventLeaderboardDetails_Stat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardDetails_Stat_C>();
	}
};

}

