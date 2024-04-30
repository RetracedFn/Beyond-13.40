#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NitrogenUI

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "NitrogenRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "NitrogenUI_structs.hpp"


namespace SDK
{

// Class NitrogenUI.NitrogenWidgetBase
// 0x0018 (0x0300 - 0x02E8)
class UNitrogenWidgetBase : public ULTMWidgetBase
{
public:
	class AFortPlayerStateAthena*                 CurrentViewedPlayerState;                          // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_41FF[0x10];                                    // 0x02F0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleNitrogenGamePhaseChanged(ENitrogenGamePhase NewGamePhase);
	void OnEnterVehicleDriver();
	void OnExitVehicle();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NitrogenWidgetBase">();
	}
	static class UNitrogenWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNitrogenWidgetBase>();
	}
};

// Class NitrogenUI.NitrogenFareBonusWidget
// 0x0028 (0x0328 - 0x0300)
class UNitrogenFareBonusWidget final : public UNitrogenWidgetBase
{
public:
	class UImage*                                 Image_BonusIcon;                                   // 0x0300(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ReminderFrequency;                                 // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4200[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ShowWidgetTimerHandle;                             // 0x0310(0x0008)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         DisplayTime;                                       // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4201[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           HideWidgetTimerHandle;                             // 0x0320(0x0008)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void HideBonus();
	void OnActiveBonusUpdated(struct FNitrogenBonusStat* BonusStat, float Value, bool ShouldAwardBonus);
	void OnBeginFare();
	void OnEndFare(bool bFareCompleted);
	void ShowBonus();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NitrogenFareBonusWidget">();
	}
	static class UNitrogenFareBonusWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNitrogenFareBonusWidget>();
	}
};

// Class NitrogenUI.NitrogenFareMeterWidget
// 0x0060 (0x0360 - 0x0300)
class UNitrogenFareMeterWidget final : public UNitrogenWidgetBase
{
public:
	class UCommonTextBlock*                       DeliveryTimeObjectiveText;                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       BonusObjectiveText;                                // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                   FastDeliveryTimeLeftText;                          // 0x0310(0x0018)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UImage*                                 FarePortrait;                                      // 0x0328(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       FareNameTextBlock;                                 // 0x0330(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ANitrogenFare*                          CurrentFare;                                       // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortPlayerState*                       PassengerPlayerState;                              // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4203[0x18];                                    // 0x0348(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BonusProgressUpdate(float BonusProgressRatio);
	void FastDeliveryTimeUpdate(float RemainingTimeRatio);
	void OnActiveBonusUpdated(struct FNitrogenBonusStat* BonusStat, float Value, bool bShouldAwardBonus);
	void OnBeginFare();
	void OnEndFare(bool bFareCompleted);
	void OnFareBonusFinshed(bool BonusCompleted);
	void SetCurrentFareBaseRewardValue(const int32 Num);
	void SetCurrentFareBonusObjectiveState(const ENitrogenFareObjectiveDisplayState DisplayState, const bool bPlayAnimation);
	void SetCurrentFareTimedDeliveryObjectiveState(const ENitrogenFareObjectiveDisplayState DisplayState, const bool bPlayAnimation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NitrogenFareMeterWidget">();
	}
	static class UNitrogenFareMeterWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNitrogenFareMeterWidget>();
	}
};

// Class NitrogenUI.NitrogenLeaderboardWidget
// 0x0020 (0x0320 - 0x0300)
class UNitrogenLeaderboardWidget final : public UNitrogenWidgetBase
{
public:
	int32                                         MinimumScoreToDisplayTeam;                         // 0x0300(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bUseGenericEnemyTeamName;                          // 0x0304(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4205[0x3];                                     // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   GenericEnemyTeamNameDescription;                   // 0x0308(0x0018)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

public:
	void UpdateLeaderboardUI(const TArray<struct FNitrogenLeaderboardData>& LeaderboardInfo, const int32 GoalScore);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NitrogenLeaderboardWidget">();
	}
	static class UNitrogenLeaderboardWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNitrogenLeaderboardWidget>();
	}
};

// Class NitrogenUI.NitrogenMatchNearEndWidget
// 0x0040 (0x0340 - 0x0300)
class UNitrogenMatchNearEndWidget final : public UNitrogenWidgetBase
{
public:
	class UCommonTextBlock*                       PointsFromWinningText;                             // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                   EnemyTeamWinningDescription;                       // 0x0308(0x0018)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                   PlayerTeamWinningDescription;                      // 0x0320(0x0018)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                          bMatchNearEnd;                                     // 0x0338(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4207[0x7];                                     // 0x0339(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleTopScoreUpdated();
	void OnMatchNearEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NitrogenMatchNearEndWidget">();
	}
	static class UNitrogenMatchNearEndWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNitrogenMatchNearEndWidget>();
	}
};

// Class NitrogenUI.NitrogenObjectiveWidget
// 0x0008 (0x0308 - 0x0300)
class UNitrogenObjectiveWidget final : public UNitrogenWidgetBase
{
public:
	ENitrogenObjectiveWidgetState                 ObjectiveWidgetState;                              // 0x0300(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4208[0x7];                                     // 0x0301(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleVehicleEntered(class AFortAthenaVehicle* NewVehicle);
	void HandleVehicleExited();
	void OnBeginFare();
	void OnEndFare(bool bFareCompleted);
	void SetShouldBeHidden(bool bInShouldBeHidden);
	void UpdateWidgetState(ENitrogenObjectiveWidgetState NewObjectiveWidgetState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NitrogenObjectiveWidget">();
	}
	static class UNitrogenObjectiveWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNitrogenObjectiveWidget>();
	}
};

// Class NitrogenUI.NitrogenPlacementWidget
// 0x0010 (0x0310 - 0x0300)
class UNitrogenPlacementWidget final : public UNitrogenWidgetBase
{
public:
	float                                         UpdateTimerTickDuration;                           // 0x0300(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4209[0xC];                                     // 0x0304(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleScoreChanged(int32 Score);
	void OnEndFare(bool bFareCompleted);
	void OnPlayerFareComplete(int32 StarsGained);
	void OnPlayerPlacementChanged(int32 NewPlacement, int32 OldPlacement);
	void OnPlayerScoreChanged(int32 NewScore);
	void OnPlayerScoringUpdate(const int32 CurrentPlayerTeamScore, const int32 CurrentPlayerTeamPlacement, const int32 GoalScore, const TArray<uint8>& SortedTeamScores);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NitrogenPlacementWidget">();
	}
	static class UNitrogenPlacementWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNitrogenPlacementWidget>();
	}
};

// Class NitrogenUI.NitrogenScoreEventWidget
// 0x0020 (0x0320 - 0x0300)
class UNitrogenScoreEventWidget final : public UNitrogenWidgetBase
{
public:
	FMulticastInlineDelegateProperty_             OnNitrogenScoreEventDisplayed;                     // 0x0300(0x0010)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnNitrogenScoreEventHidden;                        // 0x0310(0x0010)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void DisplayLeadChangedEvent(bool bInLead);
	void DisplayScoreEvent(ENitrogenScoreReason ScoreReason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NitrogenScoreEventWidget">();
	}
	static class UNitrogenScoreEventWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNitrogenScoreEventWidget>();
	}
};

}

