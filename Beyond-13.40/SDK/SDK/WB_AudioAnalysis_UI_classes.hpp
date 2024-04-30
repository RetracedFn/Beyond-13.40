#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AudioAnalysis_UI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
// 0x0020 (0x0250 - 0x0230)
class UWB_AudioAnalysis_UI_C final : public UFortAudioAnalysisDebugWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           GraphBox;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWB_AudioAnalysis_FloatGraph_C*> Widgets;                                           // 0x0240(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_AudioAnalysis_UI(int32 EntryPoint);
	void AddMPCParameter(class FName ParamName, class UMaterialParameterCollection* Collection, int32 Vec4Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_AudioAnalysis_UI_C">();
	}
	static class UWB_AudioAnalysis_UI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_AudioAnalysis_UI_C>();
	}
};

}

