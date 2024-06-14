#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleParticleManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleParticleManager.BattleParticleManager_C
// 0x00C0 (0x0170 - 0x00B0)
class UBattleParticleManager_C final : public UBattleActorComponentBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class FString, class ABattleSkillParticle_C*> M_BattleParticleMap;                               // 0x00B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         M_RemoveKeys;                                      // 0x0108(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          M_EnableDaath;                                     // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DC3[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_EffectPlayRate;                                  // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FTransform>        M_TransCache;                                      // 0x0120(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BattleParticleManager(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void AddParticle(class UObject* ParticleObject, const struct FTransform& SpawnTransform, const struct FTransform& RelativeTransform, int32 TranslucencyPriority, const struct FSkillEffectPairSetting& PairSetting, class AActor* TargetActor, const class FString& AttackSocketName, bool AllowPositionUpdate, class USkeletalMesh* ModSkeltal, class UAnimSequenceBase* ModAnim, class FName ModSocketName, class FString* HashID, bool* IsValid);
	void IsAlive(const class FString& HashID, bool* Param_IsAlive);
	void GetMainWork(class ABattleMain_C** BattleMain);
	void SetBeamParameter(const class FString& HashID, int32 Target, int32 Source, bool* IsValid);
	void SetProjectileParameter(const class FString& HashID, int32 Target, int32 Source, float Speed, float Tangent, bool* IsValid);
	void DestroyAll();
	void SetPlayRate(float PlayRate);
	void RetrieveCharaTrans(TScriptInterface<class IBPI_BattleParty_C> IPartySystem, int32 PartyIndex, const class FString& SocketName, const struct FTransform& RelativeTrans, bool IsRegister, bool IsWorldRelative, struct FTransform* Trans, class ACharaBase_C** Unit);
	void ApplyMeshRotate(const struct FTransform& InTrans, class ACharaBase_C* Unit, struct FTransform* Trans);
	void SetDecalParameter(const class FString& HashID, class UMaterialInstance* Material, TArray<struct FMaterialAnimSetting_T>& AnimSetting, int32 LoopTimes, float CycleSec, const struct FRotator& Rotation, float RotRandMin, float RotRandMax, const struct FVector& Size, bool AbsolutelyNoRotation, bool IsCastOnlyStaticMesh, bool* IsValid);
	struct FTransform IdentifyTransform();
	void FindUnit(TScriptInterface<class IBPI_BattleParty_C> BPI_BattleParty, int32 PartyIndex, class ACharaBase_C** Unit);
	void BIIsAlive(const class FString& HashID, bool* IsAlive);
	void BIAddParticle(class UObject* ParticleObject, const struct FTransform& SpawnTransform, const struct FTransform& RelativeTransform, int32 TranslucencyPriority, const struct FSkillEffectPairSetting& PairSetting, class AActor* TargetActor, const class FString& AttachSocketName, bool AllowPositionUpdate, class USkeletalMesh* ModSkeltal, class UAnimSequenceBase* ModAnim, class FName ModSocketName, class FString* HashID, bool* IsValid);
	void BISetBeamParameter(const class FString& HashID, int32 Target, int32 Source, bool* IsValid);
	void BISetProjectileParameter(const class FString& HashID, int32 Target, int32 Source, float Speed, float Tangent, bool* IsValid);
	void BIAddParticle2(TScriptInterface<class IBPI_BattleParty_C> IPartySystem, class UObject* ParticleObject, const struct FBtlTaskDesc& Desc, class FString* HashID, bool* IsValid);
	void BIResetTransrateCache(bool* NoUse);
	void BISetDecalParameter(const class FString& HashID, class UMaterialInstance* Material, TArray<struct FMaterialAnimSetting_T>& AnimSetting, int32 LoopTimes, float CycleSec, const struct FRotator& Rotation, float RotRandMin, float RotRandMax, const struct FVector& Size, bool AbsolutelyNoRotation, bool IsCastOnlyStaticMesh, bool* IsValid);
	void BI_DestroyAll(bool* NoUse);
	void UpdateComponent(float Delta, bool* ContinueUpdate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleParticleManager_C">();
	}
	static class UBattleParticleManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleParticleManager_C>();
	}
};
static_assert(alignof(UBattleParticleManager_C) == 0x000008, "Wrong alignment on UBattleParticleManager_C");
static_assert(sizeof(UBattleParticleManager_C) == 0x000170, "Wrong size on UBattleParticleManager_C");
static_assert(offsetof(UBattleParticleManager_C, UberGraphFrame) == 0x0000B0, "Member 'UBattleParticleManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleParticleManager_C, M_BattleParticleMap) == 0x0000B8, "Member 'UBattleParticleManager_C::M_BattleParticleMap' has a wrong offset!");
static_assert(offsetof(UBattleParticleManager_C, M_RemoveKeys) == 0x000108, "Member 'UBattleParticleManager_C::M_RemoveKeys' has a wrong offset!");
static_assert(offsetof(UBattleParticleManager_C, M_EnableDaath) == 0x000118, "Member 'UBattleParticleManager_C::M_EnableDaath' has a wrong offset!");
static_assert(offsetof(UBattleParticleManager_C, M_EffectPlayRate) == 0x00011C, "Member 'UBattleParticleManager_C::M_EffectPlayRate' has a wrong offset!");
static_assert(offsetof(UBattleParticleManager_C, M_TransCache) == 0x000120, "Member 'UBattleParticleManager_C::M_TransCache' has a wrong offset!");

}
