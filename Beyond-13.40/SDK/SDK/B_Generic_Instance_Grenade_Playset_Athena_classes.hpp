#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Generic_Instance_Grenade_Playset_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Grenade_Playset_Athena_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Generic_Instance_Grenade_Playset_Athena.B_Generic_Instance_Grenade_Playset_Athena_C
// 0x0008 (0x0C40 - 0x0C38)
class AB_Generic_Instance_Grenade_Playset_Athena_C final : public AB_Grenade_Playset_Athena_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Generic_Instance_Grenade_Playset_Athena_C; // 0x0C38(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_Generic_Instance_Grenade_Playset_Athena(int32 EntryPoint);
	void OnWeaponAttached();
	void K2_OnUnEquip();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Generic_Instance_Grenade_Playset_Athena_C">();
	}
	static class AB_Generic_Instance_Grenade_Playset_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Generic_Instance_Grenade_Playset_Athena_C>();
	}
};

}

