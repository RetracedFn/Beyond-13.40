#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PedestalGroup_Primary

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PedestalGroup_Primary.PedestalGroup_Primary_C
// 0x0020 (0x0270 - 0x0250)
class APedestalGroup_Primary_C final : public AAthenaSquadPedestalGroup
{
public:
	class UChildActorComponent*                   CAC_Pedestal3;                                     // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   CAC_Pedestal2;                                     // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   CAC_Pedestal1;                                     // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   CAC_Pedestal0;                                     // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PedestalGroup_Primary_C">();
	}
	static class APedestalGroup_Primary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APedestalGroup_Primary_C>();
	}
};

}

