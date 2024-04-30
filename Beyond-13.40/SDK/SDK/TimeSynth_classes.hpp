#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeSynth

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "TimeSynth_structs.hpp"
#include "AudioMixer_classes.hpp"


namespace SDK
{

// Class TimeSynth.TimeSynthVolumeGroup
// 0x0008 (0x0030 - 0x0028)
class UTimeSynthVolumeGroup final : public UObject
{
public:
	float                                         DefaultVolume;                                     // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B1[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TimeSynthVolumeGroup">();
	}
	static class UTimeSynthVolumeGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeSynthVolumeGroup>();
	}
};

// Class TimeSynth.TimeSynthClip
// 0x0040 (0x0068 - 0x0028)
class UTimeSynthClip final : public UObject
{
public:
	TArray<struct FTimeSynthClipSound>            Sounds;                                            // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              VolumeScaleDb;                                     // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              PitchScaleSemitones;                               // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimeSynthTimeDef                      FadeInTime;                                        // 0x0048(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bApplyFadeOut;                                     // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B2[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimeSynthTimeDef                      FadeOutTime;                                       // 0x0054(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTimeSynthTimeDef                      ClipDuration;                                      // 0x005C(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	ETimeSynthEventClipQuantization               ClipQuantization;                                  // 0x0064(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B3[0x3];                                     // 0x0065(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TimeSynthClip">();
	}
	static class UTimeSynthClip* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeSynthClip>();
	}
};

// Class TimeSynth.TimeSynthComponent
// 0x0A50 (0x1130 - 0x06E0)
class UTimeSynthComponent final : public USynthComponent
{
public:
	struct FTimeSynthQuantizationSettings         QuantizationSettings;                              // 0x06E0(0x0014)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         bEnableSpectralAnalysis : 1;                       // 0x06F4(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_47B4[0x3];                                     // 0x06F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 FrequenciesToAnalyze;                              // 0x06F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETimeSynthFFTSize                             FFTSize;                                           // 0x0708(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B5[0x7];                                     // 0x0709(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPlaybackTime;                                    // 0x0710(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         bIsFilterAEnabled : 1;                             // 0x0720(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsFilterBEnabled : 1;                             // 0x0720(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_47B6[0x3];                                     // 0x0721(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimeSynthFilterSettings               FilterASettings;                                   // 0x0724(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTimeSynthFilterSettings               FilterBSettings;                                   // 0x0730(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         bIsEnvelopeFollowerEnabled : 1;                    // 0x073C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_47B7[0x3];                                     // 0x073D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimeSynthEnvelopeFollowerSettings     EnvelopeFollowerSettings;                          // 0x0740(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         MaxPoolSize;                                       // 0x074C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B8[0x9E0];                                   // 0x0750(0x09E0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, const TDelegate<void(ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat)>& OnQuantizationEvent);
	bool HasActiveClips();
	struct FTimeSynthClipHandle PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup);
	void ResetSeed();
	void SetBPM(const float BeatsPerMinute);
	void SetEnvelopeFollowerEnabled(bool bInIsEnabled);
	void SetEnvelopeFollowerSettings(const struct FTimeSynthEnvelopeFollowerSettings& InSettings);
	void SetFFTSize(ETimeSynthFFTSize InFFTSize);
	void SetFilterEnabled(ETimeSynthFilter Filter, bool bIsEnabled);
	void SetFilterSettings(ETimeSynthFilter Filter, const struct FTimeSynthFilterSettings& InSettings);
	void SetQuantizationSettings(const struct FTimeSynthQuantizationSettings& InQuantizationSettings);
	void SetSeed(int32 InSeed);
	void SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec);
	void StopClip(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization);
	void StopClipWithFadeOverride(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime);
	void StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization);
	void StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime);

	int32 GetBPM() const;
	float GetEnvelopeFollowerValue() const;
	int32 GetMaxActiveClipLimit() const;
	TArray<struct FTimeSynthSpectralData> GetSpectralData() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TimeSynthComponent">();
	}
	static class UTimeSynthComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeSynthComponent>();
	}
};

}

