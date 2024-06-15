#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CharaBaseTableInstanceAccessor

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "E_DEVIL_PERFORMANCE_TYPE_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CharaBaseTableInstanceAccessor.BPI_CharaBaseTableInstanceAccessor_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CharaBaseTableInstanceAccessor_C final : public IInterface
{
public:
	void BI_GetBadStatusSecessariesData(E_BAD_STATUS Status, TArray<struct FBadStatusNecessaries_T>& OutRef, bool* Valid);
	void BI_GetBadStatusParticleData(E_BAD_STATUS Status, TArray<struct FBadStatusParticles_T>& OutRef, bool* NoUse);
	void BI_GetDeadActionParticleData(E_BTL_DEAD_EFFECT DeadEffect, struct FDeadActionParticles_T& OutRef, bool* Valid);
	void BI_GetDevilPerformanceData(E_DEVIL_PERFORMANCE_TYPE Performance, struct FDevilPerformance_T& OutRef, bool* Valid);
	void BI_GetCharaAttachParticle(TMap<class FName, struct FCharaAttachParticle_T>* CharaAttachParticle);
	void BI_GetBadStatusDecalData(E_BAD_STATUS Status, TArray<struct FBadStatusDecal_T>& OutRef, bool* NoUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CharaBaseTableInstanceAccessor_C">();
	}
	static class IBPI_CharaBaseTableInstanceAccessor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CharaBaseTableInstanceAccessor_C>();
	}
};
static_assert(alignof(IBPI_CharaBaseTableInstanceAccessor_C) == 0x000008, "Wrong alignment on IBPI_CharaBaseTableInstanceAccessor_C");
static_assert(sizeof(IBPI_CharaBaseTableInstanceAccessor_C) == 0x000028, "Wrong size on IBPI_CharaBaseTableInstanceAccessor_C");

}

