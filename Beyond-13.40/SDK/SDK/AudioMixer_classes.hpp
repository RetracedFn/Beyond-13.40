#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioMixer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AudioExtensions_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "AudioMixer_structs.hpp"


namespace SDK
{

// Class AudioMixer.SynthSound
// 0x0020 (0x0390 - 0x0370)
class alignas(0x10) USynthSound final : public USoundWaveProcedural
{
public:
	class USynthComponent*                        OwningSynthComponent;                              // 0x0370(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3EB0[0x18];                                    // 0x0378(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthSound">();
	}
	static class USynthSound* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthSound>();
	}
};

// Class AudioMixer.AudioGenerator
// 0x0080 (0x00A8 - 0x0028)
class UAudioGenerator final : public UObject
{
public:
	uint8                                         Pad_3EB1[0x80];                                    // 0x0028(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGenerator">();
	}
	static class UAudioGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGenerator>();
	}
};

// Class AudioMixer.SynthComponent
// 0x04E0 (0x06E0 - 0x0200)
class USynthComponent : public USceneComponent
{
public:
	uint8                                         bAutoDestroy : 1;                                  // 0x01F8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bStopWhenOwnerDestroyed : 1;                       // 0x01F8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAllowSpatialization : 1;                          // 0x01F8(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideAttenuation : 1;                          // 0x01F8(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_76 : 4;                                     // 0x00F8(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
	uint8                                         Pad_3EB2[0x3];                                     // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bOutputToBusOnly : 1;                              // 0x01FC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_3EB3[0x3];                                     // 0x01FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundAttenuation*                      AttenuationSettings;                               // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings              AttenuationOverrides;                              // 0x0208(0x03A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                      ConcurrencySettings;                               // 0x05A8(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class USoundConcurrency*>                ConcurrencySet;                                    // 0x05B0(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundClass*                            SoundClass;                                        // 0x0600(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*          SourceEffectChain;                                 // 0x0608(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmixBase*                       SoundSubmix;                                       // 0x0610(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>           SoundSubmixSends;                                  // 0x0618(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>        BusSends;                                          // 0x0628(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundModulation                       Modulation;                                        // 0x0638(0x0010)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>        PreEffectBusSends;                                 // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsUISound : 1;                                    // 0x0658(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsPreviewSound : 1;                               // 0x0658(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_3EB4[0x3];                                     // 0x0659(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EnvelopeFollowerAttackTime;                        // 0x065C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EnvelopeFollowerReleaseTime;                       // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3EB5[0x4];                                     // 0x0664(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAudioEnvelopeValue;                              // 0x0668(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_3EB6[0x20];                                    // 0x0678(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	class USynthSound*                            Synth;                                             // 0x0698(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                        AudioComponent;                                    // 0x06A0(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3EB7[0x38];                                    // 0x06A8(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
	void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
	void SetVolumeMultiplier(float VolumeMultiplier);
	void Start();
	void Stop();

	bool IsPlaying() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthComponent">();
	}
	static class USynthComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthComponent>();
	}
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioMixerBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void AddSourceEffectToPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	static int32 AddSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void ClearMasterSubmixEffects(const class UObject* WorldContextObject);
	static void ClearSubmixEffects(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
	static void GetMagnitudeForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
	static int32 GetNumberOfEntriesInSourceEffectChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	static void GetPhaseForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
	static bool IsAudioBusActive(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	static void PauseRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
	static void PrimeSoundForPlayback(class USoundWave* SoundWave, const TDelegate<void(class USoundWave* LoadedSoundWave, bool WasCancelled)> OnLoadCompletion);
	static void RemoveMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void RemoveSourceEffectFromPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
	static void RemoveSubmixEffectPreset(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void RemoveSubmixEffectPresetAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	static void ReplaceSoundEffectSubmix(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void ResumeRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void SetBypassSourceEffectChainEntry(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
	static void StartAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
	static void StartAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
	static void StartRecordingOutput(const class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	static void StopAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	static void StopAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
	static class USoundWave* StopRecordingOutput(const class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Param_Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	static float TrimAudioCache(float InMegabytesToFree);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMixerBlueprintLibrary">();
	}
	static class UAudioMixerBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioMixerBlueprintLibrary>();
	}
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x00C8 (0x0130 - 0x0068)
class USubmixEffectDynamicsProcessorPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_3EC8[0x78];                                    // 0x0068(0x0078)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0x00E0(0x0050)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

public:
	void SetExternalSubmix(class USoundSubmix* Submix);
	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Param_Settings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectDynamicsProcessorPreset">();
	}
	static class USubmixEffectDynamicsProcessorPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectDynamicsProcessorPreset>();
	}
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x00B0 - 0x0068)
class USubmixEffectSubmixEQPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_3EC9[0x38];                                    // 0x0068(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSubmixEffectSubmixEQSettings          Settings;                                          // 0x00A0(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectSubmixEQPreset">();
	}
	static class USubmixEffectSubmixEQPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectSubmixEQPreset>();
	}
};

// Class AudioMixer.SubmixEffectReverbPreset
// 0x0090 (0x00F8 - 0x0068)
class USubmixEffectReverbPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_3ECA[0x5C];                                    // 0x0068(0x005C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSubmixEffectReverbSettings            Settings;                                          // 0x00C4(0x0034)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

public:
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
	void SetSettingsWithReverbEffect(const class UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectReverbPreset">();
	}
	static class USubmixEffectReverbPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectReverbPreset>();
	}
};

// Class AudioMixer.SubmixEffectReverbFastPreset
// 0x0098 (0x0100 - 0x0068)
class USubmixEffectReverbFastPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_3ECB[0x60];                                    // 0x0068(0x0060)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSubmixEffectReverbFastSettings        Settings;                                          // 0x00C8(0x0038)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

public:
	void SetSettings(const struct FSubmixEffectReverbFastSettings& InSettings);
	void SetSettingsWithReverbEffect(const class UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectReverbFastPreset">();
	}
	static class USubmixEffectReverbFastPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectReverbFastPreset>();
	}
};

}

