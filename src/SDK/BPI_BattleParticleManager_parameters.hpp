#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleParticleManager

#include "Basic.hpp"

#include "MaterialAnimSetting_T_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_BattleParticleManager.BPI_BattleParticleManager_C.BIAddParticle
// 0x0100 (0x0100 - 0x0000)
struct BPI_BattleParticleManager_C_BIAddParticle final
{
public:
	class UObject*                                ParticleObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2990[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             SpawnTransform;                                    // 0x0010(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FTransform                             RelativeTransform;                                 // 0x0040(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	int32                                         TranslucencyPriority;                              // 0x0070(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSkillEffectPairSetting                PairSetting;                                       // 0x0074(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_2991[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 TargetActor;                                       // 0x00A8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 AttachSocketName;                                  // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          AllowPositionUpdate;                               // 0x00C0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2992[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          ModSkeltal;                                        // 0x00C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      ModAnim;                                           // 0x00D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ModSocketName;                                     // 0x00D8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 HashID;                                            // 0x00E0(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleParticleManager_C_BIAddParticle) == 0x000010, "Wrong alignment on BPI_BattleParticleManager_C_BIAddParticle");
static_assert(sizeof(BPI_BattleParticleManager_C_BIAddParticle) == 0x000100, "Wrong size on BPI_BattleParticleManager_C_BIAddParticle");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle, ParticleObject) == 0x000000, "Member 'BPI_BattleParticleManager_C_BIAddParticle::ParticleObject' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle, SpawnTransform) == 0x000010, "Member 'BPI_BattleParticleManager_C_BIAddParticle::SpawnTransform' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle, RelativeTransform) == 0x000040, "Member 'BPI_BattleParticleManager_C_BIAddParticle::RelativeTransform' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle, TranslucencyPriority) == 0x000070, "Member 'BPI_BattleParticleManager_C_BIAddParticle::TranslucencyPriority' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle, PairSetting) == 0x000074, "Member 'BPI_BattleParticleManager_C_BIAddParticle::PairSetting' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle, TargetActor) == 0x0000A8, "Member 'BPI_BattleParticleManager_C_BIAddParticle::TargetActor' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle, AttachSocketName) == 0x0000B0, "Member 'BPI_BattleParticleManager_C_BIAddParticle::AttachSocketName' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle, AllowPositionUpdate) == 0x0000C0, "Member 'BPI_BattleParticleManager_C_BIAddParticle::AllowPositionUpdate' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle, ModSkeltal) == 0x0000C8, "Member 'BPI_BattleParticleManager_C_BIAddParticle::ModSkeltal' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle, ModAnim) == 0x0000D0, "Member 'BPI_BattleParticleManager_C_BIAddParticle::ModAnim' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle, ModSocketName) == 0x0000D8, "Member 'BPI_BattleParticleManager_C_BIAddParticle::ModSocketName' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle, HashID) == 0x0000E0, "Member 'BPI_BattleParticleManager_C_BIAddParticle::HashID' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle, IsValid) == 0x0000F0, "Member 'BPI_BattleParticleManager_C_BIAddParticle::IsValid' has a wrong offset!");

// Function BPI_BattleParticleManager.BPI_BattleParticleManager_C.BIIsAlive
// 0x0018 (0x0018 - 0x0000)
struct BPI_BattleParticleManager_C_BIIsAlive final
{
public:
	class FString                                 HashID;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsAlive;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleParticleManager_C_BIIsAlive) == 0x000008, "Wrong alignment on BPI_BattleParticleManager_C_BIIsAlive");
static_assert(sizeof(BPI_BattleParticleManager_C_BIIsAlive) == 0x000018, "Wrong size on BPI_BattleParticleManager_C_BIIsAlive");
static_assert(offsetof(BPI_BattleParticleManager_C_BIIsAlive, HashID) == 0x000000, "Member 'BPI_BattleParticleManager_C_BIIsAlive::HashID' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIIsAlive, IsAlive) == 0x000010, "Member 'BPI_BattleParticleManager_C_BIIsAlive::IsAlive' has a wrong offset!");

// Function BPI_BattleParticleManager.BPI_BattleParticleManager_C.BISetBeamParameter
// 0x0020 (0x0020 - 0x0000)
struct BPI_BattleParticleManager_C_BISetBeamParameter final
{
public:
	class FString                                 HashID;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Target;                                            // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Source;                                            // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleParticleManager_C_BISetBeamParameter) == 0x000008, "Wrong alignment on BPI_BattleParticleManager_C_BISetBeamParameter");
static_assert(sizeof(BPI_BattleParticleManager_C_BISetBeamParameter) == 0x000020, "Wrong size on BPI_BattleParticleManager_C_BISetBeamParameter");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetBeamParameter, HashID) == 0x000000, "Member 'BPI_BattleParticleManager_C_BISetBeamParameter::HashID' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetBeamParameter, Target) == 0x000010, "Member 'BPI_BattleParticleManager_C_BISetBeamParameter::Target' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetBeamParameter, Source) == 0x000014, "Member 'BPI_BattleParticleManager_C_BISetBeamParameter::Source' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetBeamParameter, IsValid) == 0x000018, "Member 'BPI_BattleParticleManager_C_BISetBeamParameter::IsValid' has a wrong offset!");

// Function BPI_BattleParticleManager.BPI_BattleParticleManager_C.BISetProjectileParameter
// 0x0028 (0x0028 - 0x0000)
struct BPI_BattleParticleManager_C_BISetProjectileParameter final
{
public:
	class FString                                 HashID;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Target;                                            // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Source;                                            // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Tangent;                                           // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleParticleManager_C_BISetProjectileParameter) == 0x000008, "Wrong alignment on BPI_BattleParticleManager_C_BISetProjectileParameter");
static_assert(sizeof(BPI_BattleParticleManager_C_BISetProjectileParameter) == 0x000028, "Wrong size on BPI_BattleParticleManager_C_BISetProjectileParameter");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetProjectileParameter, HashID) == 0x000000, "Member 'BPI_BattleParticleManager_C_BISetProjectileParameter::HashID' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetProjectileParameter, Target) == 0x000010, "Member 'BPI_BattleParticleManager_C_BISetProjectileParameter::Target' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetProjectileParameter, Source) == 0x000014, "Member 'BPI_BattleParticleManager_C_BISetProjectileParameter::Source' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetProjectileParameter, Speed) == 0x000018, "Member 'BPI_BattleParticleManager_C_BISetProjectileParameter::Speed' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetProjectileParameter, Tangent) == 0x00001C, "Member 'BPI_BattleParticleManager_C_BISetProjectileParameter::Tangent' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetProjectileParameter, IsValid) == 0x000020, "Member 'BPI_BattleParticleManager_C_BISetProjectileParameter::IsValid' has a wrong offset!");

// Function BPI_BattleParticleManager.BPI_BattleParticleManager_C.BIAddParticle2
// 0x00E0 (0x00E0 - 0x0000)
struct BPI_BattleParticleManager_C_BIAddParticle2 final
{
public:
	TScriptInterface<class IBPI_BattleParty_C>    IPartySystem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                ParticleObject;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2993[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBtlTaskDesc                           Desc;                                              // 0x0020(0x00A0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 HashID;                                            // 0x00C0(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x00D0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleParticleManager_C_BIAddParticle2) == 0x000010, "Wrong alignment on BPI_BattleParticleManager_C_BIAddParticle2");
static_assert(sizeof(BPI_BattleParticleManager_C_BIAddParticle2) == 0x0000E0, "Wrong size on BPI_BattleParticleManager_C_BIAddParticle2");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle2, IPartySystem) == 0x000000, "Member 'BPI_BattleParticleManager_C_BIAddParticle2::IPartySystem' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle2, ParticleObject) == 0x000010, "Member 'BPI_BattleParticleManager_C_BIAddParticle2::ParticleObject' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle2, Desc) == 0x000020, "Member 'BPI_BattleParticleManager_C_BIAddParticle2::Desc' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle2, HashID) == 0x0000C0, "Member 'BPI_BattleParticleManager_C_BIAddParticle2::HashID' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BIAddParticle2, IsValid) == 0x0000D0, "Member 'BPI_BattleParticleManager_C_BIAddParticle2::IsValid' has a wrong offset!");

// Function BPI_BattleParticleManager.BPI_BattleParticleManager_C.BIResetTransrateCache
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleParticleManager_C_BIResetTransrateCache final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleParticleManager_C_BIResetTransrateCache) == 0x000001, "Wrong alignment on BPI_BattleParticleManager_C_BIResetTransrateCache");
static_assert(sizeof(BPI_BattleParticleManager_C_BIResetTransrateCache) == 0x000001, "Wrong size on BPI_BattleParticleManager_C_BIResetTransrateCache");
static_assert(offsetof(BPI_BattleParticleManager_C_BIResetTransrateCache, NoUse) == 0x000000, "Member 'BPI_BattleParticleManager_C_BIResetTransrateCache::NoUse' has a wrong offset!");

// Function BPI_BattleParticleManager.BPI_BattleParticleManager_C.BISetDecalParameter
// 0x0058 (0x0058 - 0x0000)
struct BPI_BattleParticleManager_C_BISetDecalParameter final
{
public:
	class FString                                 HashID;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UMaterialInstance*                      Material;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMaterialAnimSetting_T>         AnimSetting;                                       // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         LoopTimes;                                         // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CycleSec;                                          // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0030(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         RotRandMin;                                        // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotRandMax;                                        // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Size;                                              // 0x0044(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AbsolutelyNoRotation;                              // 0x0050(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCastOnlyStaticMesh;                              // 0x0051(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsValid;                                           // 0x0052(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleParticleManager_C_BISetDecalParameter) == 0x000008, "Wrong alignment on BPI_BattleParticleManager_C_BISetDecalParameter");
static_assert(sizeof(BPI_BattleParticleManager_C_BISetDecalParameter) == 0x000058, "Wrong size on BPI_BattleParticleManager_C_BISetDecalParameter");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetDecalParameter, HashID) == 0x000000, "Member 'BPI_BattleParticleManager_C_BISetDecalParameter::HashID' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetDecalParameter, Material) == 0x000010, "Member 'BPI_BattleParticleManager_C_BISetDecalParameter::Material' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetDecalParameter, AnimSetting) == 0x000018, "Member 'BPI_BattleParticleManager_C_BISetDecalParameter::AnimSetting' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetDecalParameter, LoopTimes) == 0x000028, "Member 'BPI_BattleParticleManager_C_BISetDecalParameter::LoopTimes' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetDecalParameter, CycleSec) == 0x00002C, "Member 'BPI_BattleParticleManager_C_BISetDecalParameter::CycleSec' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetDecalParameter, Rotation) == 0x000030, "Member 'BPI_BattleParticleManager_C_BISetDecalParameter::Rotation' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetDecalParameter, RotRandMin) == 0x00003C, "Member 'BPI_BattleParticleManager_C_BISetDecalParameter::RotRandMin' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetDecalParameter, RotRandMax) == 0x000040, "Member 'BPI_BattleParticleManager_C_BISetDecalParameter::RotRandMax' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetDecalParameter, Size) == 0x000044, "Member 'BPI_BattleParticleManager_C_BISetDecalParameter::Size' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetDecalParameter, AbsolutelyNoRotation) == 0x000050, "Member 'BPI_BattleParticleManager_C_BISetDecalParameter::AbsolutelyNoRotation' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetDecalParameter, IsCastOnlyStaticMesh) == 0x000051, "Member 'BPI_BattleParticleManager_C_BISetDecalParameter::IsCastOnlyStaticMesh' has a wrong offset!");
static_assert(offsetof(BPI_BattleParticleManager_C_BISetDecalParameter, IsValid) == 0x000052, "Member 'BPI_BattleParticleManager_C_BISetDecalParameter::IsValid' has a wrong offset!");

// Function BPI_BattleParticleManager.BPI_BattleParticleManager_C.BI_DestroyAll
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleParticleManager_C_BI_DestroyAll final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleParticleManager_C_BI_DestroyAll) == 0x000001, "Wrong alignment on BPI_BattleParticleManager_C_BI_DestroyAll");
static_assert(sizeof(BPI_BattleParticleManager_C_BI_DestroyAll) == 0x000001, "Wrong size on BPI_BattleParticleManager_C_BI_DestroyAll");
static_assert(offsetof(BPI_BattleParticleManager_C_BI_DestroyAll, NoUse) == 0x000000, "Member 'BPI_BattleParticleManager_C_BI_DestroyAll::NoUse' has a wrong offset!");

}
