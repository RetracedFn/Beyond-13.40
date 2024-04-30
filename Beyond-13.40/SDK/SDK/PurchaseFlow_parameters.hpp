#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PurchaseFlow

#include "Basic.hpp"

#include "PurchaseFlow_structs.hpp"


namespace SDK::Params
{

// Function PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID
// 0x0020 (0x0020 - 0x0000)
struct PurchaseFlowJSBridge_GetDefaultExternalBrowserID final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName
// 0x0020 (0x0020 - 0x0000)
struct PurchaseFlowJSBridge_GetExternalBrowserName final
{
public:
	class FString                                 BrowserId;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath
// 0x0020 (0x0020 - 0x0000)
struct PurchaseFlowJSBridge_GetExternalBrowserPath final
{
public:
	class FString                                 BrowserId;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl
// 0x0018 (0x0018 - 0x0000)
struct PurchaseFlowJSBridge_LaunchExternalBrowserUrl final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4743[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl
// 0x0028 (0x0028 - 0x0000)
struct PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl final
{
public:
	class FString                                 AllowedBrowserID;                                  // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 URL;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4744[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function PurchaseFlow.PurchaseFlowJSBridge.Receipt
// 0x0030 (0x0030 - 0x0000)
struct PurchaseFlowJSBridge_Receipt final
{
public:
	struct FPurchaseFlowReceiptParam              Param_Receipt;                                     // 0x0000(0x0030)(Parm, NativeAccessSpecifierPublic)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
// 0x0010 (0x0010 - 0x0000)
struct PurchaseFlowJSBridge_RequestClose final
{
public:
	class FString                                 CloseInfo;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

