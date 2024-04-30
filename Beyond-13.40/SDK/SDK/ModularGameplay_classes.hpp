#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModularGameplay

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class ModularGameplay.GameFrameworkComponent
// 0x0000 (0x00B0 - 0x00B0)
class UGameFrameworkComponent : public UActorComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFrameworkComponent">();
	}
	static class UGameFrameworkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFrameworkComponent>();
	}
};

// Class ModularGameplay.PlayerStateComponent
// 0x0000 (0x00B0 - 0x00B0)
class UPlayerStateComponent : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayerStateComponent">();
	}
	static class UPlayerStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerStateComponent>();
	}
};

// Class ModularGameplay.ControllerComponent
// 0x0000 (0x00B0 - 0x00B0)
class UControllerComponent : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControllerComponent">();
	}
	static class UControllerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControllerComponent>();
	}
};

// Class ModularGameplay.GameFrameworkComponentManager
// 0x0140 (0x0168 - 0x0028)
class UGameFrameworkComponentManager final : public UObject
{
public:
	uint8                                         Pad_3ED0[0x140];                                   // 0x0028(0x0140)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFrameworkComponentManager">();
	}
	static class UGameFrameworkComponentManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFrameworkComponentManager>();
	}
};

// Class ModularGameplay.GameStateComponent
// 0x0000 (0x00B0 - 0x00B0)
class UGameStateComponent : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameStateComponent">();
	}
	static class UGameStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameStateComponent>();
	}
};

// Class ModularGameplay.PawnComponent
// 0x0000 (0x00B0 - 0x00B0)
class UPawnComponent : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PawnComponent">();
	}
	static class UPawnComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnComponent>();
	}
};

}

