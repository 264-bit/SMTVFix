#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TemplateSequence

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CinematicCamera_structs.hpp"
#include "TemplateSequence_structs.hpp"


namespace SDK
{

// Class TemplateSequence.TemplateSequenceSection
// 0x0018 (0x0180 - 0x0168)
class UTemplateSequenceSection final : public UMovieSceneSubSection
{
public:
	uint8                                         Pad_112C[0x8];                                     // 0x0168(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTemplateSectionPropertyScale>  PropertyScales;                                    // 0x0170(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequenceSection">();
	}
	static class UTemplateSequenceSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequenceSection>();
	}
};
static_assert(alignof(UTemplateSequenceSection) == 0x000008, "Wrong alignment on UTemplateSequenceSection");
static_assert(sizeof(UTemplateSequenceSection) == 0x000180, "Wrong size on UTemplateSequenceSection");
static_assert(offsetof(UTemplateSequenceSection, PropertyScales) == 0x000170, "Member 'UTemplateSequenceSection::PropertyScales' has a wrong offset!");

// Class TemplateSequence.TemplateSequence
// 0x00A8 (0x0108 - 0x0060)
class UTemplateSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                            MovieScene;                                        // 0x0060(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   BoundActorClass;                                   // 0x0068(0x0028)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                  BoundPreviewActor;                                 // 0x0090(0x0028)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGuid, class FName>               BoundActorComponents;                              // 0x00B8(0x0050)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequence">();
	}
	static class UTemplateSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequence>();
	}
};
static_assert(alignof(UTemplateSequence) == 0x000008, "Wrong alignment on UTemplateSequence");
static_assert(sizeof(UTemplateSequence) == 0x000108, "Wrong size on UTemplateSequence");
static_assert(offsetof(UTemplateSequence, MovieScene) == 0x000060, "Member 'UTemplateSequence::MovieScene' has a wrong offset!");
static_assert(offsetof(UTemplateSequence, BoundActorClass) == 0x000068, "Member 'UTemplateSequence::BoundActorClass' has a wrong offset!");
static_assert(offsetof(UTemplateSequence, BoundPreviewActor) == 0x000090, "Member 'UTemplateSequence::BoundPreviewActor' has a wrong offset!");
static_assert(offsetof(UTemplateSequence, BoundActorComponents) == 0x0000B8, "Member 'UTemplateSequence::BoundActorComponents' has a wrong offset!");

// Class TemplateSequence.CameraAnimationSequence
// 0x0000 (0x0108 - 0x0108)
class UCameraAnimationSequence final : public UTemplateSequence
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationSequence">();
	}
	static class UCameraAnimationSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationSequence>();
	}
};
static_assert(alignof(UCameraAnimationSequence) == 0x000008, "Wrong alignment on UCameraAnimationSequence");
static_assert(sizeof(UCameraAnimationSequence) == 0x000108, "Wrong size on UCameraAnimationSequence");

// Class TemplateSequence.SequenceCameraShakeCameraStandIn
// 0x0648 (0x0670 - 0x0028)
class USequenceCameraShakeCameraStandIn final : public UObject
{
public:
	uint8                                         Pad_112D[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FieldOfView;                                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bConstrainAspectRatio : 1;                         // 0x0034(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_112E[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AspectRatio;                                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_112F[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   PostProcessSettings;                               // 0x0040(0x0560)(NativeAccessSpecifierPublic)
	float                                         PostProcessBlendWeight;                            // 0x05A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings                Filmback;                                          // 0x05A4(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                    LensSettings;                                      // 0x05B0(0x0018)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraFocusSettings                   FocusSettings;                                     // 0x05C8(0x0058)(NativeAccessSpecifierPublic)
	float                                         CurrentFocalLength;                                // 0x0620(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentAperture;                                   // 0x0624(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentFocusDistance;                              // 0x0628(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1130[0x44];                                    // 0x062C(0x0044)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequenceCameraShakeCameraStandIn">();
	}
	static class USequenceCameraShakeCameraStandIn* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequenceCameraShakeCameraStandIn>();
	}
};
static_assert(alignof(USequenceCameraShakeCameraStandIn) == 0x000010, "Wrong alignment on USequenceCameraShakeCameraStandIn");
static_assert(sizeof(USequenceCameraShakeCameraStandIn) == 0x000670, "Wrong size on USequenceCameraShakeCameraStandIn");
static_assert(offsetof(USequenceCameraShakeCameraStandIn, FieldOfView) == 0x000030, "Member 'USequenceCameraShakeCameraStandIn::FieldOfView' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakeCameraStandIn, AspectRatio) == 0x000038, "Member 'USequenceCameraShakeCameraStandIn::AspectRatio' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakeCameraStandIn, PostProcessSettings) == 0x000040, "Member 'USequenceCameraShakeCameraStandIn::PostProcessSettings' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakeCameraStandIn, PostProcessBlendWeight) == 0x0005A0, "Member 'USequenceCameraShakeCameraStandIn::PostProcessBlendWeight' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakeCameraStandIn, Filmback) == 0x0005A4, "Member 'USequenceCameraShakeCameraStandIn::Filmback' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakeCameraStandIn, LensSettings) == 0x0005B0, "Member 'USequenceCameraShakeCameraStandIn::LensSettings' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakeCameraStandIn, FocusSettings) == 0x0005C8, "Member 'USequenceCameraShakeCameraStandIn::FocusSettings' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakeCameraStandIn, CurrentFocalLength) == 0x000620, "Member 'USequenceCameraShakeCameraStandIn::CurrentFocalLength' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakeCameraStandIn, CurrentAperture) == 0x000624, "Member 'USequenceCameraShakeCameraStandIn::CurrentAperture' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakeCameraStandIn, CurrentFocusDistance) == 0x000628, "Member 'USequenceCameraShakeCameraStandIn::CurrentFocusDistance' has a wrong offset!");

// Class TemplateSequence.SequenceCameraShakePattern
// 0x0030 (0x0058 - 0x0028)
class USequenceCameraShakePattern final : public UCameraShakePattern
{
public:
	class UCameraAnimationSequence*               Sequence;                                          // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PlayRate;                                          // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendInTime;                                       // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendOutTime;                                      // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RandomSegmentDuration;                             // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRandomSegment;                                    // 0x0044(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1131[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USequenceCameraShakeSequencePlayer*     Player;                                            // 0x0048(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USequenceCameraShakeCameraStandIn*      CameraStandIn;                                     // 0x0050(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequenceCameraShakePattern">();
	}
	static class USequenceCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequenceCameraShakePattern>();
	}
};
static_assert(alignof(USequenceCameraShakePattern) == 0x000008, "Wrong alignment on USequenceCameraShakePattern");
static_assert(sizeof(USequenceCameraShakePattern) == 0x000058, "Wrong size on USequenceCameraShakePattern");
static_assert(offsetof(USequenceCameraShakePattern, Sequence) == 0x000028, "Member 'USequenceCameraShakePattern::Sequence' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, PlayRate) == 0x000030, "Member 'USequenceCameraShakePattern::PlayRate' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, Scale) == 0x000034, "Member 'USequenceCameraShakePattern::Scale' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, BlendInTime) == 0x000038, "Member 'USequenceCameraShakePattern::BlendInTime' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, BlendOutTime) == 0x00003C, "Member 'USequenceCameraShakePattern::BlendOutTime' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, RandomSegmentDuration) == 0x000040, "Member 'USequenceCameraShakePattern::RandomSegmentDuration' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, bRandomSegment) == 0x000044, "Member 'USequenceCameraShakePattern::bRandomSegment' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, Player) == 0x000048, "Member 'USequenceCameraShakePattern::Player' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, CameraStandIn) == 0x000050, "Member 'USequenceCameraShakePattern::CameraStandIn' has a wrong offset!");

// Class TemplateSequence.SequenceCameraShakeSequencePlayer
// 0x0400 (0x0428 - 0x0028)
class USequenceCameraShakeSequencePlayer final : public UObject
{
public:
	uint8                                         Pad_1132[0x2A8];                                   // 0x0028(0x02A8)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                BoundObjectOverride;                               // 0x02D0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSequence*                    Sequence;                                          // 0x02D8(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x02E0(0x00E8)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1133[0x60];                                    // 0x03C8(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequenceCameraShakeSequencePlayer">();
	}
	static class USequenceCameraShakeSequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequenceCameraShakeSequencePlayer>();
	}
};
static_assert(alignof(USequenceCameraShakeSequencePlayer) == 0x000008, "Wrong alignment on USequenceCameraShakeSequencePlayer");
static_assert(sizeof(USequenceCameraShakeSequencePlayer) == 0x000428, "Wrong size on USequenceCameraShakeSequencePlayer");
static_assert(offsetof(USequenceCameraShakeSequencePlayer, BoundObjectOverride) == 0x0002D0, "Member 'USequenceCameraShakeSequencePlayer::BoundObjectOverride' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakeSequencePlayer, Sequence) == 0x0002D8, "Member 'USequenceCameraShakeSequencePlayer::Sequence' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakeSequencePlayer, RootTemplateInstance) == 0x0002E0, "Member 'USequenceCameraShakeSequencePlayer::RootTemplateInstance' has a wrong offset!");

// Class TemplateSequence.TemplateSequenceActor
// 0x0058 (0x0278 - 0x0220)
class ATemplateSequenceActor final : public AActor
{
public:
	uint8                                         Pad_1134[0x10];                                    // 0x0220(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    PlaybackSettings;                                  // 0x0230(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1135[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTemplateSequencePlayer*                SequencePlayer;                                    // 0x0248(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        TemplateSequence;                                  // 0x0250(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTemplateSequenceBindingOverrideData   BindingOverride;                                   // 0x0268(0x000C)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1136[0x4];                                     // 0x0274(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetBinding(class AActor* Actor, bool bOverridesDefault);
	void SetSequence(class UTemplateSequence* InSequence);

	class UTemplateSequence* GetSequence() const;
	class UTemplateSequencePlayer* GetSequencePlayer() const;
	class UTemplateSequence* LoadSequence() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequenceActor">();
	}
	static class ATemplateSequenceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATemplateSequenceActor>();
	}
};
static_assert(alignof(ATemplateSequenceActor) == 0x000008, "Wrong alignment on ATemplateSequenceActor");
static_assert(sizeof(ATemplateSequenceActor) == 0x000278, "Wrong size on ATemplateSequenceActor");
static_assert(offsetof(ATemplateSequenceActor, PlaybackSettings) == 0x000230, "Member 'ATemplateSequenceActor::PlaybackSettings' has a wrong offset!");
static_assert(offsetof(ATemplateSequenceActor, SequencePlayer) == 0x000248, "Member 'ATemplateSequenceActor::SequencePlayer' has a wrong offset!");
static_assert(offsetof(ATemplateSequenceActor, TemplateSequence) == 0x000250, "Member 'ATemplateSequenceActor::TemplateSequence' has a wrong offset!");
static_assert(offsetof(ATemplateSequenceActor, BindingOverride) == 0x000268, "Member 'ATemplateSequenceActor::BindingOverride' has a wrong offset!");

// Class TemplateSequence.TemplateSequencePlayer
// 0x0008 (0x04F0 - 0x04E8)
class UTemplateSequencePlayer final : public UMovieSceneSequencePlayer
{
public:
	uint8                                         Pad_1138[0x8];                                     // 0x04E8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequencePlayer">();
	}
	static class UTemplateSequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequencePlayer>();
	}
};
static_assert(alignof(UTemplateSequencePlayer) == 0x000008, "Wrong alignment on UTemplateSequencePlayer");
static_assert(sizeof(UTemplateSequencePlayer) == 0x0004F0, "Wrong size on UTemplateSequencePlayer");

// Class TemplateSequence.TemplateSequenceSystem
// 0x0070 (0x00B0 - 0x0040)
class UTemplateSequenceSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_113A[0x70];                                    // 0x0040(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequenceSystem">();
	}
	static class UTemplateSequenceSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequenceSystem>();
	}
};
static_assert(alignof(UTemplateSequenceSystem) == 0x000008, "Wrong alignment on UTemplateSequenceSystem");
static_assert(sizeof(UTemplateSequenceSystem) == 0x0000B0, "Wrong size on UTemplateSequenceSystem");

// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
// 0x0058 (0x0098 - 0x0040)
class UTemplateSequencePropertyScalingInstantiatorSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_113B[0x58];                                    // 0x0040(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequencePropertyScalingInstantiatorSystem">();
	}
	static class UTemplateSequencePropertyScalingInstantiatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequencePropertyScalingInstantiatorSystem>();
	}
};
static_assert(alignof(UTemplateSequencePropertyScalingInstantiatorSystem) == 0x000008, "Wrong alignment on UTemplateSequencePropertyScalingInstantiatorSystem");
static_assert(sizeof(UTemplateSequencePropertyScalingInstantiatorSystem) == 0x000098, "Wrong size on UTemplateSequencePropertyScalingInstantiatorSystem");

// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
// 0x0050 (0x0090 - 0x0040)
class UTemplateSequencePropertyScalingEvaluatorSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_113C[0x50];                                    // 0x0040(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequencePropertyScalingEvaluatorSystem">();
	}
	static class UTemplateSequencePropertyScalingEvaluatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequencePropertyScalingEvaluatorSystem>();
	}
};
static_assert(alignof(UTemplateSequencePropertyScalingEvaluatorSystem) == 0x000008, "Wrong alignment on UTemplateSequencePropertyScalingEvaluatorSystem");
static_assert(sizeof(UTemplateSequencePropertyScalingEvaluatorSystem) == 0x000090, "Wrong size on UTemplateSequencePropertyScalingEvaluatorSystem");

// Class TemplateSequence.TemplateSequenceTrack
// 0x0000 (0x00A0 - 0x00A0)
class UTemplateSequenceTrack final : public UMovieSceneSubTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequenceTrack">();
	}
	static class UTemplateSequenceTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequenceTrack>();
	}
};
static_assert(alignof(UTemplateSequenceTrack) == 0x000008, "Wrong alignment on UTemplateSequenceTrack");
static_assert(sizeof(UTemplateSequenceTrack) == 0x0000A0, "Wrong size on UTemplateSequenceTrack");

}

