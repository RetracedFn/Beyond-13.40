#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapARPin

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "MagicLeapARPin_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MagicLeapARPin.MagicLeapARPinComponent
// 0x0130 (0x0330 - 0x0200)
class UMagicLeapARPinComponent final : public USceneComponent
{
public:
	class FString                                 ObjectUID;                                         // 0x01F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UserIndex;                                         // 0x0208(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapAutoPinType                         AutoPinType;                                       // 0x020C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldPinActor;                                   // 0x020D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4979[0x2];                                     // 0x020E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UMagicLeapARPinSaveGame>    PinDataClass;                                      // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPersistentEntityPinned;                          // 0x0218(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPersistentEntityPinLost;                         // 0x0228(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGuid                                  PinnedCFUID;                                       // 0x0238(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        PinnedSceneComponent;                              // 0x0248(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMagicLeapARPinSaveGame*                PinData;                                           // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_497A[0xD8];                                    // 0x0258(0x00D8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> Param_PinDataClass);
	bool GetPinnedPinID(struct FGuid* PinID);
	void PersistentEntityPinLost__DelegateSignature();
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
	bool PinActor(class AActor* ActorToPin);
	bool PinSceneComponent(class USceneComponent* ComponentToPin);
	void UnPin();

	bool GetPinState(struct FMagicLeapARPinState* State) const;
	bool IsPinned() const;
	bool PinRestoredOrSynced() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinComponent">();
	}
	static class UMagicLeapARPinComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapARPinComponent>();
	}
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapARPinFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void BindToOnMagicLeapARPinUpdatedDelegate(const TDelegate<void(TArray<struct FGuid>& Added, TArray<struct FGuid>& Updated, TArray<struct FGuid>& Deleted)>& Delegate);
	static EMagicLeapPassableWorldError CreateTracker();
	static EMagicLeapPassableWorldError DestroyTracker();
	static bool GetARPinPositionAndOrientation(const struct FGuid& PinID, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	static bool GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinID, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	static EMagicLeapPassableWorldError GetARPinState(const struct FGuid& PinID, struct FMagicLeapARPinState* State);
	static class FString GetARPinStateToString(const struct FMagicLeapARPinState& State);
	static EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<struct FGuid>* Pins);
	static EMagicLeapPassableWorldError GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinID);
	static EMagicLeapPassableWorldError GetNumAvailableARPins(int32* Count);
	static bool IsTrackerValid();
	static void UnBindToOnMagicLeapARPinUpdatedDelegate(const TDelegate<void(TArray<struct FGuid>& Added, TArray<struct FGuid>& Updated, TArray<struct FGuid>& Deleted)>& Delegate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinFunctionLibrary">();
	}
	static class UMagicLeapARPinFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapARPinFunctionLibrary>();
	}
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// 0x0018 (0x0040 - 0x0028)
class UMagicLeapARPinSettings final : public UObject
{
public:
	float                                         UpdateCheckFrequency;                              // 0x0028(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                   OnUpdatedEventTriggerDelta;                        // 0x002C(0x0010)(Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4986[0x4];                                     // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinSettings">();
	}
	static class UMagicLeapARPinSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapARPinSettings>();
	}
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// 0x0078 (0x00A0 - 0x0028)
class UMagicLeapARPinSaveGame final : public USaveGame
{
public:
	struct FGuid                                  PinnedID;                                          // 0x0028(0x0010)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4987[0x8];                                     // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ComponentWorldTransform;                           // 0x0040(0x0030)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             PinTransform;                                      // 0x0070(0x0030)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinSaveGame">();
	}
	static class UMagicLeapARPinSaveGame* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapARPinSaveGame>();
	}
};

}

