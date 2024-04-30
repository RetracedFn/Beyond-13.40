#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_CurieFireMesh_MolotovCocktail

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "BGA_GenericCurieFuel_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_CurieFireMesh_MolotovCocktail.BGA_CurieFireMesh_MolotovCocktail_C
// 0x0020 (0x0860 - 0x0840)
class ABGA_CurieFireMesh_MolotovCocktail_C final : public ABGA_GenericCurieFuel_Parent_C
{
public:
	struct FScalableFloat                         SelfPropagationFuelRowValue;                       // 0x0840(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_CurieFireMesh_MolotovCocktail_C">();
	}
	static class ABGA_CurieFireMesh_MolotovCocktail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_CurieFireMesh_MolotovCocktail_C>();
	}
};

}

