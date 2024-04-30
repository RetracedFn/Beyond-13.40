#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildPatchServices

#include "Basic.hpp"

#include "BuildPatchServices_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class BuildPatchServices.BuildPatchManifest
// 0x00F8 (0x0120 - 0x0028)
class UBuildPatchManifest final : public UObject
{
public:
	uint8                                         ManifestFileVersion;                               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsFileData;                                       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4B9C[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        AppID;                                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AppName;                                           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 BuildVersion;                                      // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LaunchExe;                                         // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LaunchCommand;                                     // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class FString>                           PrereqIds;                                         // 0x0070(0x0050)(NativeAccessSpecifierPublic)
	class FString                                 PrereqName;                                        // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PrereqPath;                                        // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PrereqArgs;                                        // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFileManifestData>              FileManifestList;                                  // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChunkInfoData>                 ChunkList;                                         // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomFieldData>               CustomFields;                                      // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BuildPatchManifest">();
	}
	static class UBuildPatchManifest* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuildPatchManifest>();
	}
};

}

