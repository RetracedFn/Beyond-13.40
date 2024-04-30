#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemUtils

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum OnlineSubsystemUtils.EInAppPurchaseStatus
// NumValues: 0x0007
enum class EInAppPurchaseStatus : uint8
{
	Invalid                                  = 0,
	Failed                                   = 1,
	Deferred                                 = 2,
	Canceled                                 = 3,
	Purchased                                = 4,
	Restored                                 = 5,
	EInAppPurchaseStatus_MAX                 = 6,
};

// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
// NumValues: 0x0005
enum class EOnlineProxyStoreOfferDiscountType : uint8
{
	NotOnSale                                = 0,
	Percentage                               = 1,
	DiscountAmount                           = 2,
	PayAmount                                = 3,
	EOnlineProxyStoreOfferDiscountType_MAX   = 4,
};

// Enum OnlineSubsystemUtils.EBeaconConnectionState
// NumValues: 0x0005
enum class EBeaconConnectionState : uint8
{
	Invalid                                  = 0,
	Closed                                   = 1,
	Pending                                  = 2,
	Open                                     = 3,
	EBeaconConnectionState_MAX               = 4,
};

// Enum OnlineSubsystemUtils.EClientRequestType
// NumValues: 0x0008
enum class EClientRequestType : uint8
{
	NonePending                              = 0,
	ExistingSessionReservation               = 1,
	ReservationUpdate                        = 2,
	EmptyServerReservation                   = 3,
	Reconnect                                = 4,
	Abandon                                  = 5,
	ReservationRemoveMembers                 = 6,
	EClientRequestType_MAX                   = 7,
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
// NumValues: 0x0011
enum class EPartyReservationResult : uint8
{
	NoResult                                 = 0,
	RequestPending                           = 1,
	GeneralError                             = 2,
	PartyLimitReached                        = 3,
	IncorrectPlayerCount                     = 4,
	RequestTimedOut                          = 5,
	ReservationDuplicate                     = 6,
	ReservationNotFound                      = 7,
	ReservationAccepted                      = 8,
	ReservationDenied                        = 9,
	ReservationDenied_CrossPlayRestriction   = 10,
	ReservationDenied_Banned                 = 11,
	ReservationRequestCanceled               = 12,
	ReservationInvalid                       = 13,
	BadSessionId                             = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX              = 16,
};

// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
// NumValues: 0x0007
enum class ESpectatorClientRequestType : uint8
{
	NonePending                              = 0,
	ExistingSessionReservation               = 1,
	ReservationUpdate                        = 2,
	EmptyServerReservation                   = 3,
	Reconnect                                = 4,
	Abandon                                  = 5,
	ESpectatorClientRequestType_MAX          = 6,
};

// Enum OnlineSubsystemUtils.ESpectatorReservationResult
// NumValues: 0x0011
enum class ESpectatorReservationResult : uint8
{
	NoResult                                 = 0,
	RequestPending                           = 1,
	GeneralError                             = 2,
	SpectatorLimitReached                    = 3,
	IncorrectPlayerCount                     = 4,
	RequestTimedOut                          = 5,
	ReservationDuplicate                     = 6,
	ReservationNotFound                      = 7,
	ReservationAccepted                      = 8,
	ReservationDenied                        = 9,
	ReservationDenied_CrossPlayRestriction   = 10,
	ReservationDenied_Banned                 = 11,
	ReservationRequestCanceled               = 12,
	ReservationInvalid                       = 13,
	BadSessionId                             = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX          = 16,
};

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x00B8 (0x00B8 - 0x0000)
struct alignas(0x08) FBlueprintSessionResult final
{
public:
	uint8                                         Pad_3DF0[0xB8];                                    // 0x0000(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0050 (0x0050 - 0x0000)
struct FPlayerReservation final
{
public:
	struct FUniqueNetIdRepl                       UniqueId;                                          // 0x0000(0x0028)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ValidationStr;                                     // 0x0028(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Platform;                                          // 0x0038(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowCrossplay;                                   // 0x0048(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3DF1[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ElapsedTime;                                       // 0x004C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
// 0x0030 (0x0030 - 0x0000)
struct FInAppPurchaseReceiptInfo2 final
{
public:
	class FString                                 ItemName;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ItemId;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ValidationInfo;                                    // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
// 0x0110 (0x0110 - 0x0000)
struct FOnlineProxyStoreOffer final
{
public:
	class FString                                 OfferId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Title;                                             // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   LongDescription;                                   // 0x0040(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   RegularPriceText;                                  // 0x0058(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         RegularPrice;                                      // 0x0070(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3DF2[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PriceText;                                         // 0x0078(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         NumericPrice;                                      // 0x0090(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3DF3[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrencyCode;                                      // 0x0098(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              ReleaseDate;                                       // 0x00A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              ExpirationDate;                                    // 0x00B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOnlineProxyStoreOfferDiscountType            DiscountType;                                      // 0x00B8(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3DF4[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class FString>            DynamicFields;                                     // 0x00C0(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
// 0x0018 (0x0018 - 0x0000)
struct FInAppPurchaseProductRequest2 final
{
public:
	class FString                                 ProductIdentifier;                                 // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsConsumable;                                     // 0x0010(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3DF5[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
// 0x0030 (0x0030 - 0x0000)
struct FInAppPurchaseRestoreInfo2 final
{
public:
	class FString                                 ItemName;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ItemId;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ValidationInfo;                                    // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
// 0x0030 (0x0030 - 0x0000)
struct FInAppPurchaseReceiptInfo final
{
public:
	class FString                                 ItemName;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ItemId;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ValidationInfo;                                    // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
// 0x00F8 (0x00F8 - 0x0000)
struct FInAppPurchaseProductInfo2 final
{
public:
	class FString                                 Identifier;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TransactionIdentifier;                             // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DisplayName;                                       // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DisplayDescription;                                // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DisplayPrice;                                      // 0x0040(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RawPrice;                                          // 0x0050(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3DF6[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrencyCode;                                      // 0x0058(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CurrencySymbol;                                    // 0x0068(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DecimalSeparator;                                  // 0x0078(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GroupingSeparator;                                 // 0x0088(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReceiptData;                                       // 0x0098(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>            DynamicFields;                                     // 0x00A8(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0040 (0x0040 - 0x0000)
struct FPIELoginSettingsInternal final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Token;                                             // 0x0010(0x0010)(Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Type;                                              // 0x0020(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 TokenBytes;                                        // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0050 (0x0050 - 0x0000)
struct FPartyReservation final
{
public:
	int32                                         TeamNum;                                           // 0x0000(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3DF7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       PartyLeader;                                       // 0x0008(0x0028)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerReservation>             PartyMembers;                                      // 0x0030(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerReservation>             RemovedPartyMembers;                               // 0x0040(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
// 0x0078 (0x0078 - 0x0000)
struct FSpectatorReservation final
{
public:
	struct FUniqueNetIdRepl                       SpectatorId;                                       // 0x0000(0x0028)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerReservation                     Spectator;                                         // 0x0028(0x0050)(Transient, NativeAccessSpecifierPublic)
};

}

