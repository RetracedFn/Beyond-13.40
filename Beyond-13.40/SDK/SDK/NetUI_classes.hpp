#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetUI

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class NetUI.BadNetworkIndicator
// 0x0028 (0x0258 - 0x0230)
class UBadNetworkIndicator final : public UUserWidget
{
public:
	bool                                          bEnabled;                                          // 0x0230(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_46F9[0x3];                                     // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinimumDisplayTime;                                // 0x0234(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         UpdateTime;                                        // 0x0238(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         InitialDelay;                                      // 0x023C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_46FA[0x18];                                    // 0x0240(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void UpdateDisplay();

	float GetPacketLoss() const;
	float GetPing() const;
	bool HasBadPacketLoss() const;
	bool HasBadPing() const;
	bool HasSeverePacketLoss() const;
	bool HasSeverePing() const;
	bool ShouldDisplay() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BadNetworkIndicator">();
	}
	static class UBadNetworkIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBadNetworkIndicator>();
	}
};

// Class NetUI.NetDebugWidget
// 0x00E8 (0x0318 - 0x0230)
class UNetDebugWidget final : public UUserWidget
{
public:
	class UCommonTextBlock*                       PingUI;                                            // 0x0230(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       PacketInRateUI;                                    // 0x0238(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       PacketOutRateUI;                                   // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       PacketInLossUI;                                    // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       PacketOutLossUI;                                   // 0x0250(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       UpBandwidthUI;                                     // 0x0258(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       DownBandwidthUI;                                   // 0x0260(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_46FB[0xB0];                                    // 0x0268(0x00B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void StartTimer();
	void StopTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetDebugWidget">();
	}
	static class UNetDebugWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetDebugWidget>();
	}
};

// Class NetUI.NetGraph
// 0x0030 (0x0260 - 0x0230)
class UNetGraph final : public UUserWidget
{
public:
	struct FColor                                 BackgroundColor;                                   // 0x0230(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                 PingLineColor;                                     // 0x0234(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                 QueuedBunchesLineColor;                            // 0x0238(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                 PacketLossLineColor;                               // 0x023C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                              DesiredSize;                                       // 0x0240(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MaxPingToGraph;                                    // 0x0248(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_46FC[0x14];                                    // 0x024C(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetGraph">();
	}
	static class UNetGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetGraph>();
	}
};

}

