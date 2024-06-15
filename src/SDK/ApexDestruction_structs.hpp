#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ApexDestruction

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ApexDestruction.EImpactDamageOverride
// NumValues: 0x0004
enum class EImpactDamageOverride : uint8
{
	IDO_None                                 = 0,
	IDO_On                                   = 1,
	IDO_Off                                  = 2,
	IDO_MAX                                  = 3,
};

// ScriptStruct ApexDestruction.DestructibleChunkParameters
// 0x0004 (0x0004 - 0x0000)
struct FDestructibleChunkParameters final
{
public:
	bool                                          bIsSupportChunk;                                   // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDoNotFracture;                                    // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDoNotDamage;                                      // 0x0002(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDoNotCrumble;                                     // 0x0003(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDestructibleChunkParameters) == 0x000001, "Wrong alignment on FDestructibleChunkParameters");
static_assert(sizeof(FDestructibleChunkParameters) == 0x000004, "Wrong size on FDestructibleChunkParameters");
static_assert(offsetof(FDestructibleChunkParameters, bIsSupportChunk) == 0x000000, "Member 'FDestructibleChunkParameters::bIsSupportChunk' has a wrong offset!");
static_assert(offsetof(FDestructibleChunkParameters, bDoNotFracture) == 0x000001, "Member 'FDestructibleChunkParameters::bDoNotFracture' has a wrong offset!");
static_assert(offsetof(FDestructibleChunkParameters, bDoNotDamage) == 0x000002, "Member 'FDestructibleChunkParameters::bDoNotDamage' has a wrong offset!");
static_assert(offsetof(FDestructibleChunkParameters, bDoNotCrumble) == 0x000003, "Member 'FDestructibleChunkParameters::bDoNotCrumble' has a wrong offset!");

// ScriptStruct ApexDestruction.FractureMaterial
// 0x0024 (0x0024 - 0x0000)
struct FFractureMaterial final
{
public:
	struct FVector2D                              UVScale;                                           // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UVOffset;                                          // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Tangent;                                           // 0x0010(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UAngle;                                            // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InteriorElementIndex;                              // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFractureMaterial) == 0x000004, "Wrong alignment on FFractureMaterial");
static_assert(sizeof(FFractureMaterial) == 0x000024, "Wrong size on FFractureMaterial");
static_assert(offsetof(FFractureMaterial, UVScale) == 0x000000, "Member 'FFractureMaterial::UVScale' has a wrong offset!");
static_assert(offsetof(FFractureMaterial, UVOffset) == 0x000008, "Member 'FFractureMaterial::UVOffset' has a wrong offset!");
static_assert(offsetof(FFractureMaterial, Tangent) == 0x000010, "Member 'FFractureMaterial::Tangent' has a wrong offset!");
static_assert(offsetof(FFractureMaterial, UAngle) == 0x00001C, "Member 'FFractureMaterial::UAngle' has a wrong offset!");
static_assert(offsetof(FFractureMaterial, InteriorElementIndex) == 0x000020, "Member 'FFractureMaterial::InteriorElementIndex' has a wrong offset!");

// ScriptStruct ApexDestruction.DestructibleDamageParameters
// 0x001C (0x001C - 0x0000)
struct FDestructibleDamageParameters final
{
public:
	float                                         DamageThreshold;                                   // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DamageSpread;                                      // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableImpactDamage;                               // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DE9[0x3];                                      // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ImpactDamage;                                      // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DefaultImpactDamageDepth;                          // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCustomImpactResistance;                           // 0x0014(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DEA[0x3];                                      // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ImpactResistance;                                  // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDestructibleDamageParameters) == 0x000004, "Wrong alignment on FDestructibleDamageParameters");
static_assert(sizeof(FDestructibleDamageParameters) == 0x00001C, "Wrong size on FDestructibleDamageParameters");
static_assert(offsetof(FDestructibleDamageParameters, DamageThreshold) == 0x000000, "Member 'FDestructibleDamageParameters::DamageThreshold' has a wrong offset!");
static_assert(offsetof(FDestructibleDamageParameters, DamageSpread) == 0x000004, "Member 'FDestructibleDamageParameters::DamageSpread' has a wrong offset!");
static_assert(offsetof(FDestructibleDamageParameters, bEnableImpactDamage) == 0x000008, "Member 'FDestructibleDamageParameters::bEnableImpactDamage' has a wrong offset!");
static_assert(offsetof(FDestructibleDamageParameters, ImpactDamage) == 0x00000C, "Member 'FDestructibleDamageParameters::ImpactDamage' has a wrong offset!");
static_assert(offsetof(FDestructibleDamageParameters, DefaultImpactDamageDepth) == 0x000010, "Member 'FDestructibleDamageParameters::DefaultImpactDamageDepth' has a wrong offset!");
static_assert(offsetof(FDestructibleDamageParameters, bCustomImpactResistance) == 0x000014, "Member 'FDestructibleDamageParameters::bCustomImpactResistance' has a wrong offset!");
static_assert(offsetof(FDestructibleDamageParameters, ImpactResistance) == 0x000018, "Member 'FDestructibleDamageParameters::ImpactResistance' has a wrong offset!");

// ScriptStruct ApexDestruction.DestructibleDebrisParameters
// 0x002C (0x002C - 0x0000)
struct FDestructibleDebrisParameters final
{
public:
	float                                         DebrisLifetimeMin;                                 // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebrisLifetimeMax;                                 // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebrisMaxSeparationMin;                            // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DebrisMaxSeparationMax;                            // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                   ValidBounds;                                       // 0x0010(0x001C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDestructibleDebrisParameters) == 0x000004, "Wrong alignment on FDestructibleDebrisParameters");
static_assert(sizeof(FDestructibleDebrisParameters) == 0x00002C, "Wrong size on FDestructibleDebrisParameters");
static_assert(offsetof(FDestructibleDebrisParameters, DebrisLifetimeMin) == 0x000000, "Member 'FDestructibleDebrisParameters::DebrisLifetimeMin' has a wrong offset!");
static_assert(offsetof(FDestructibleDebrisParameters, DebrisLifetimeMax) == 0x000004, "Member 'FDestructibleDebrisParameters::DebrisLifetimeMax' has a wrong offset!");
static_assert(offsetof(FDestructibleDebrisParameters, DebrisMaxSeparationMin) == 0x000008, "Member 'FDestructibleDebrisParameters::DebrisMaxSeparationMin' has a wrong offset!");
static_assert(offsetof(FDestructibleDebrisParameters, DebrisMaxSeparationMax) == 0x00000C, "Member 'FDestructibleDebrisParameters::DebrisMaxSeparationMax' has a wrong offset!");
static_assert(offsetof(FDestructibleDebrisParameters, ValidBounds) == 0x000010, "Member 'FDestructibleDebrisParameters::ValidBounds' has a wrong offset!");

// ScriptStruct ApexDestruction.DestructibleAdvancedParameters
// 0x0010 (0x0010 - 0x0000)
struct FDestructibleAdvancedParameters final
{
public:
	float                                         DamageCap;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ImpactVelocityThreshold;                           // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxChunkSpeed;                                     // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FractureImpulseScale;                              // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDestructibleAdvancedParameters) == 0x000004, "Wrong alignment on FDestructibleAdvancedParameters");
static_assert(sizeof(FDestructibleAdvancedParameters) == 0x000010, "Wrong size on FDestructibleAdvancedParameters");
static_assert(offsetof(FDestructibleAdvancedParameters, DamageCap) == 0x000000, "Member 'FDestructibleAdvancedParameters::DamageCap' has a wrong offset!");
static_assert(offsetof(FDestructibleAdvancedParameters, ImpactVelocityThreshold) == 0x000004, "Member 'FDestructibleAdvancedParameters::ImpactVelocityThreshold' has a wrong offset!");
static_assert(offsetof(FDestructibleAdvancedParameters, MaxChunkSpeed) == 0x000008, "Member 'FDestructibleAdvancedParameters::MaxChunkSpeed' has a wrong offset!");
static_assert(offsetof(FDestructibleAdvancedParameters, FractureImpulseScale) == 0x00000C, "Member 'FDestructibleAdvancedParameters::FractureImpulseScale' has a wrong offset!");

// ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
// 0x0014 (0x0014 - 0x0000)
struct FDestructibleSpecialHierarchyDepths final
{
public:
	int32                                         SupportDepth;                                      // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinimumFractureDepth;                              // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDebris;                                     // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DEB[0x3];                                      // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DebrisDepth;                                       // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EssentialDepth;                                    // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDestructibleSpecialHierarchyDepths) == 0x000004, "Wrong alignment on FDestructibleSpecialHierarchyDepths");
static_assert(sizeof(FDestructibleSpecialHierarchyDepths) == 0x000014, "Wrong size on FDestructibleSpecialHierarchyDepths");
static_assert(offsetof(FDestructibleSpecialHierarchyDepths, SupportDepth) == 0x000000, "Member 'FDestructibleSpecialHierarchyDepths::SupportDepth' has a wrong offset!");
static_assert(offsetof(FDestructibleSpecialHierarchyDepths, MinimumFractureDepth) == 0x000004, "Member 'FDestructibleSpecialHierarchyDepths::MinimumFractureDepth' has a wrong offset!");
static_assert(offsetof(FDestructibleSpecialHierarchyDepths, bEnableDebris) == 0x000008, "Member 'FDestructibleSpecialHierarchyDepths::bEnableDebris' has a wrong offset!");
static_assert(offsetof(FDestructibleSpecialHierarchyDepths, DebrisDepth) == 0x00000C, "Member 'FDestructibleSpecialHierarchyDepths::DebrisDepth' has a wrong offset!");
static_assert(offsetof(FDestructibleSpecialHierarchyDepths, EssentialDepth) == 0x000010, "Member 'FDestructibleSpecialHierarchyDepths::EssentialDepth' has a wrong offset!");

// ScriptStruct ApexDestruction.DestructibleDepthParameters
// 0x0001 (0x0001 - 0x0000)
struct FDestructibleDepthParameters final
{
public:
	EImpactDamageOverride                         ImpactDamageOverride;                              // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDestructibleDepthParameters) == 0x000001, "Wrong alignment on FDestructibleDepthParameters");
static_assert(sizeof(FDestructibleDepthParameters) == 0x000001, "Wrong size on FDestructibleDepthParameters");
static_assert(offsetof(FDestructibleDepthParameters, ImpactDamageOverride) == 0x000000, "Member 'FDestructibleDepthParameters::ImpactDamageOverride' has a wrong offset!");

// ScriptStruct ApexDestruction.DestructibleParametersFlag
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FDestructibleParametersFlag final
{
public:
	uint8                                         bAccumulateDamage : 1;                             // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAssetDefinedSupport : 1;                          // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bWorldSupport : 1;                                 // 0x0000(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDebrisTimeout : 1;                                // 0x0000(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDebrisMaxSeparation : 1;                          // 0x0000(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCrumbleSmallestChunks : 1;                        // 0x0000(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAccurateRaycasts : 1;                             // 0x0000(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseValidBounds : 1;                               // 0x0000(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFormExtendedStructures : 1;                       // 0x0001(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_DEC[0x2];                                      // 0x0002(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDestructibleParametersFlag) == 0x000004, "Wrong alignment on FDestructibleParametersFlag");
static_assert(sizeof(FDestructibleParametersFlag) == 0x000004, "Wrong size on FDestructibleParametersFlag");

// ScriptStruct ApexDestruction.DestructibleParameters
// 0x0088 (0x0088 - 0x0000)
struct FDestructibleParameters final
{
public:
	struct FDestructibleDamageParameters          DamageParameters;                                  // 0x0000(0x001C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDestructibleDebrisParameters          DebrisParameters;                                  // 0x001C(0x002C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDestructibleAdvancedParameters        AdvancedParameters;                                // 0x0048(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDestructibleSpecialHierarchyDepths    SpecialHierarchyDepths;                            // 0x0058(0x0014)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_DED[0x4];                                      // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDestructibleDepthParameters>   DepthParameters;                                   // 0x0070(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDestructibleParametersFlag            Flags;                                             // 0x0080(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_DEE[0x4];                                      // 0x0084(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDestructibleParameters) == 0x000008, "Wrong alignment on FDestructibleParameters");
static_assert(sizeof(FDestructibleParameters) == 0x000088, "Wrong size on FDestructibleParameters");
static_assert(offsetof(FDestructibleParameters, DamageParameters) == 0x000000, "Member 'FDestructibleParameters::DamageParameters' has a wrong offset!");
static_assert(offsetof(FDestructibleParameters, DebrisParameters) == 0x00001C, "Member 'FDestructibleParameters::DebrisParameters' has a wrong offset!");
static_assert(offsetof(FDestructibleParameters, AdvancedParameters) == 0x000048, "Member 'FDestructibleParameters::AdvancedParameters' has a wrong offset!");
static_assert(offsetof(FDestructibleParameters, SpecialHierarchyDepths) == 0x000058, "Member 'FDestructibleParameters::SpecialHierarchyDepths' has a wrong offset!");
static_assert(offsetof(FDestructibleParameters, DepthParameters) == 0x000070, "Member 'FDestructibleParameters::DepthParameters' has a wrong offset!");
static_assert(offsetof(FDestructibleParameters, Flags) == 0x000080, "Member 'FDestructibleParameters::Flags' has a wrong offset!");

}

