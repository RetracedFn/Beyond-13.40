#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ComicReader

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "ComicReader_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// Class ComicReader.ComicBook
// 0x0018 (0x0048 - 0x0030)
class UComicBook final : public UDataAsset
{
public:
	TArray<class UFortComicPage*>                 Pages;                                             // 0x0030(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ExportStartingWithPageIndex;                       // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         PagesToExport;                                     // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void CopyToClipboardForCMS();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ComicBook">();
	}
	static class UComicBook* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComicBook>();
	}
};

// Class ComicReader.FortComicReader
// 0x0068 (0x0170 - 0x0108)
class UFortComicReader final : public UWidget
{
public:
	uint8                                         Pad_C89[0x28];                                     // 0x0108(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortComicPage*>                 Pages;                                             // 0x0130(0x0010)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortComicPanelReference               CurrentPanel;                                      // 0x0140(0x0008)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	EFortComicViewMode                            ViewMode;                                          // 0x0148(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_C8A[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             BP_OnPanelChanged;                                 // 0x0150(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_             BP_OnHoverZoneChanged;                             // 0x0160(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

public:
	void Next();
	void Previous();
	void SetCurrentPage(int32 InPageIndex);
	void ToggleViewMode();

	int32 GetCurrentPageIndex() const;
	int32 GetCurrentPageNumber() const;
	int32 GetCurrentPanelIndex() const;
	int32 GetNumPanelsOnPage(int32 InPageNum) const;
	int32 GetTotalPageNumber() const;
	EFortComicViewMode GetViewMode() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortComicReader">();
	}
	static class UFortComicReader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortComicReader>();
	}
};

// Class ComicReader.FortComicScreen
// 0x0020 (0x0390 - 0x0370)
class UFortComicScreen final : public UAthenaSpatialScreen
{
public:
	uint8                                         Pad_C8B[0x10];                                     // 0x0370(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortComicReader*                       ComicReader;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                 LoadingSpinner;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void HandlePreprocessorNavInput(EUINavigation InNavDirection);
	void OnPreProcessedNavInput(EUINavigation NavInput);
	void UpdateComicTitle(const class FString& InComicTitle);
	void UpdateShowContinueOnLastPage(bool InShowContinue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortComicScreen">();
	}
	static class UFortComicScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortComicScreen>();
	}
};

// Class ComicReader.SaveData_ComicBook
// 0x0008 (0x0048 - 0x0040)
class USaveData_ComicBook final : public USaveData
{
public:
	int32                                         LastPage;                                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_C8C[0x4];                                      // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SaveData_ComicBook">();
	}
	static class USaveData_ComicBook* GetDefaultObj()
	{
		return GetDefaultObjImpl<USaveData_ComicBook>();
	}
};

// Class ComicReader.FortComicPage
// 0x0098 (0x00C0 - 0x0028)
class UFortComicPage final : public UObject
{
public:
	struct FSlateBrush                            PageBrush;                                         // 0x0028(0x0088)(Edit, NativeAccessSpecifierPrivate)
	TArray<struct FFortComicPanel>                Panels;                                            // 0x00B0(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortComicPage">();
	}
	static class UFortComicPage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortComicPage>();
	}
};

}

