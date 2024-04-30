#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ValetUI

#include "Basic.hpp"


namespace SDK::Params
{

// Function ValetUI.FortAthenaVehicleFuelWidget.OnAddedFuel
// 0x0004 (0x0004 - 0x0000)
struct FortAthenaVehicleFuelWidget_OnAddedFuel final
{
public:
	float                                         NewFuelPercent;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ValetUI.FortAthenaVehicleFuelWidget.OnUpdateRechargeableBoostPercent
// 0x0004 (0x0004 - 0x0000)
struct FortAthenaVehicleFuelWidget_OnUpdateRechargeableBoostPercent final
{
public:
	float                                         BoostPercent;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ValetUI.FortAthenaVehicleFuelWidget.SetupVehicleFuelWidget
// 0x0010 (0x0010 - 0x0000)
struct FortAthenaVehicleFuelWidget_SetupVehicleFuelWidget final
{
public:
	class AActor*                                 NewVehicle;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRequestShowWidget;                                // 0x0008(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4232[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function ValetUI.FortAthenaVehicleFuelWidget.SetVehicleProperties
// 0x0002 (0x0002 - 0x0000)
struct FortAthenaVehicleFuelWidget_SetVehicleProperties final
{
public:
	bool                                          bInfiniteFuel;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsesRechargeableBoost;                            // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ValetUI.FortAthenaVehicleFuelWidget.UpdateFuelWidgetVisibilities
// 0x0001 (0x0001 - 0x0000)
struct FortAthenaVehicleFuelWidget_UpdateFuelWidgetVisibilities final
{
public:
	bool                                          bIsLowOnFuel;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ValetUI.FortAthenaVehicleFuelWidget.UpdateRPMMeter
// 0x0004 (0x0004 - 0x0000)
struct FortAthenaVehicleFuelWidget_UpdateRPMMeter final
{
public:
	float                                         NormalizedRPM;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ValetUI.FortAthenaVehicleFuelWidget.UpdateSecondaryMeter
// 0x0008 (0x0008 - 0x0000)
struct FortAthenaVehicleFuelWidget_UpdateSecondaryMeter final
{
public:
	float                                         FuelPercentage;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsLowOnFuel;                                      // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4233[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function ValetUI.FortAthenaVehicleFuelWidget.UpdateSpeedometer
// 0x0004 (0x0004 - 0x0000)
struct FortAthenaVehicleFuelWidget_UpdateSpeedometer final
{
public:
	float                                         NormalizedSpeed;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ValetUI.FortAthenaVehicleFuelWidget.GetDagwoodVehicle
// 0x0008 (0x0008 - 0x0000)
struct FortAthenaVehicleFuelWidget_GetDagwoodVehicle final
{
public:
	class AFortDagwoodVehicle*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ValetUI.FortAthenaVehicleFuelWidget.GetVehicle
// 0x0008 (0x0008 - 0x0000)
struct FortAthenaVehicleFuelWidget_GetVehicle final
{
public:
	class AActor*                                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

