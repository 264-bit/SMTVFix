#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_CharaBaseTableData

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "E_DEVIL_PERFORMANCE_TYPE_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_CharaBaseTableData.BPL_CharaBaseTableData_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_CharaBaseTableData_C final : public UBlueprintFunctionLibrary
{
public:
	static void BPL_GetBadStatusNecessaries(E_BAD_STATUS BadStatus, class UObject* __WorldContext, struct FBadStatusNecessaries_T* Necessaries);
	static void BPL_GetBadStatusParticleSettings(E_BAD_STATUS Kind, class UObject* __WorldContext, TArray<struct FBadStatusParticles_T>* ParticleSettings);
	static void GetCharaBaseTableDataInstance(class UObject* __WorldContext, TScriptInterface<class IBPI_CharaBaseTableInstanceAccessor_C>* Instance, bool* IsValid);
	static void BPL_GetDeadActionParticle(E_BTL_DEAD_EFFECT DeadEffect, class UObject* __WorldContext, TArray<TSoftObjectPtr<class UParticleSystem>>* Particle, TSoftObjectPtr<class USoundAtomCue>* SE, bool* IsValid, class FName* SocketName);
	static void BPL_GetDevilPerformanceData(E_DEVIL_PERFORMANCE_TYPE PerformanceType, class UObject* __WorldContext, bool* IsValid, TArray<TSoftObjectPtr<class UParticleSystem>>* Particle, TSoftObjectPtr<class USoundAtomCue>* SE, TSoftObjectPtr<class USoundAtomCue>* SE_InstantEvent, class FName* ParticleSocketName, TSoftObjectPtr<class UMaterialInstance>* Spawn_Decal_Material, struct FVector* Spawn_Decal_Size, TArray<struct FMaterialAnimSetting_T>* Spawn_Decal_Material_Anim_Setting, class FName* Spawn_Decal_Socket_Name, bool* SpawnDecalCastOnlyStaticMesh, struct FMaterialAnimSetting_T* Spawn_Mesh_Material_Anim_Setting, E_CHARA_MOTION_ID* MotionID, TSoftObjectPtr<class UMaterialParameterApplier>* MaterialParamApplier);
	static void BPL_GetCharaAttachParticle(class FName Param_Name, class UObject* __WorldContext, bool* IsFound, TSoftObjectPtr<class UParticleSystem>* Particle_Sys);
	static void BPL_GetBadStatusDecalSettings(E_BAD_STATUS Kind, class UObject* __WorldContext, TArray<struct FBadStatusDecal_T>* DecalSettings);
	static void BPL_GetDeadActionMaterial(E_BTL_DEAD_EFFECT DeadEffect, class UObject* __WorldContext, TSoftObjectPtr<class UCurveFloat>* ProgressCurve, TSoftObjectPtr<class UMaterialParameterApplier>* ParamAppplier, bool* IsValid);
	static void BPL_GetBadStatusParticleSetting(E_BAD_STATUS Kind, E_CHARA_BAD_STATUS_APPEAR Timing, class UObject* __WorldContext, struct FBadStatusParticles_T* ParticleSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_CharaBaseTableData_C">();
	}
	static class UBPL_CharaBaseTableData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_CharaBaseTableData_C>();
	}
};
static_assert(alignof(UBPL_CharaBaseTableData_C) == 0x000008, "Wrong alignment on UBPL_CharaBaseTableData_C");
static_assert(sizeof(UBPL_CharaBaseTableData_C) == 0x000028, "Wrong size on UBPL_CharaBaseTableData_C");

}

