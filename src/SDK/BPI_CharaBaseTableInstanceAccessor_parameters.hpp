#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CharaBaseTableInstanceAccessor

#include "Basic.hpp"

#include "BadStatusNecessaries_T_structs.hpp"
#include "E_DEVIL_PERFORMANCE_TYPE_structs.hpp"
#include "Project_structs.hpp"
#include "BadStatusDecal_T_structs.hpp"
#include "CharaAttachParticle_T_structs.hpp"
#include "DevilPerformance_T_structs.hpp"
#include "DeadActionParticles_T_structs.hpp"
#include "BadStatusParticles_T_structs.hpp"


namespace SDK::Params
{

// Function BPI_CharaBaseTableInstanceAccessor.BPI_CharaBaseTableInstanceAccessor_C.BI_GetBadStatusSecessariesData
// 0x0020 (0x0020 - 0x0000)
struct BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusSecessariesData final
{
public:
	E_BAD_STATUS                                  Status;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2585[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBadStatusNecessaries_T>        OutRef;                                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Valid;                                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusSecessariesData) == 0x000008, "Wrong alignment on BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusSecessariesData");
static_assert(sizeof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusSecessariesData) == 0x000020, "Wrong size on BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusSecessariesData");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusSecessariesData, Status) == 0x000000, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusSecessariesData::Status' has a wrong offset!");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusSecessariesData, OutRef) == 0x000008, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusSecessariesData::OutRef' has a wrong offset!");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusSecessariesData, Valid) == 0x000018, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusSecessariesData::Valid' has a wrong offset!");

// Function BPI_CharaBaseTableInstanceAccessor.BPI_CharaBaseTableInstanceAccessor_C.BI_GetBadStatusParticleData
// 0x0020 (0x0020 - 0x0000)
struct BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusParticleData final
{
public:
	E_BAD_STATUS                                  Status;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2586[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBadStatusParticles_T>          OutRef;                                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          NoUse;                                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusParticleData) == 0x000008, "Wrong alignment on BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusParticleData");
static_assert(sizeof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusParticleData) == 0x000020, "Wrong size on BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusParticleData");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusParticleData, Status) == 0x000000, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusParticleData::Status' has a wrong offset!");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusParticleData, OutRef) == 0x000008, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusParticleData::OutRef' has a wrong offset!");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusParticleData, NoUse) == 0x000018, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusParticleData::NoUse' has a wrong offset!");

// Function BPI_CharaBaseTableInstanceAccessor.BPI_CharaBaseTableInstanceAccessor_C.BI_GetDeadActionParticleData
// 0x00A8 (0x00A8 - 0x0000)
struct BPI_CharaBaseTableInstanceAccessor_C_BI_GetDeadActionParticleData final
{
public:
	E_BTL_DEAD_EFFECT                             DeadEffect;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2587[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDeadActionParticles_T                 OutRef;                                            // 0x0008(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x00A0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetDeadActionParticleData) == 0x000008, "Wrong alignment on BPI_CharaBaseTableInstanceAccessor_C_BI_GetDeadActionParticleData");
static_assert(sizeof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetDeadActionParticleData) == 0x0000A8, "Wrong size on BPI_CharaBaseTableInstanceAccessor_C_BI_GetDeadActionParticleData");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetDeadActionParticleData, DeadEffect) == 0x000000, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetDeadActionParticleData::DeadEffect' has a wrong offset!");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetDeadActionParticleData, OutRef) == 0x000008, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetDeadActionParticleData::OutRef' has a wrong offset!");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetDeadActionParticleData, Valid) == 0x0000A0, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetDeadActionParticleData::Valid' has a wrong offset!");

// Function BPI_CharaBaseTableInstanceAccessor.BPI_CharaBaseTableInstanceAccessor_C.BI_GetDevilPerformanceData
// 0x0128 (0x0128 - 0x0000)
struct BPI_CharaBaseTableInstanceAccessor_C_BI_GetDevilPerformanceData final
{
public:
	E_DEVIL_PERFORMANCE_TYPE                      Performance;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2588[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDevilPerformance_T                    OutRef;                                            // 0x0008(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x0120(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetDevilPerformanceData) == 0x000008, "Wrong alignment on BPI_CharaBaseTableInstanceAccessor_C_BI_GetDevilPerformanceData");
static_assert(sizeof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetDevilPerformanceData) == 0x000128, "Wrong size on BPI_CharaBaseTableInstanceAccessor_C_BI_GetDevilPerformanceData");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetDevilPerformanceData, Performance) == 0x000000, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetDevilPerformanceData::Performance' has a wrong offset!");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetDevilPerformanceData, OutRef) == 0x000008, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetDevilPerformanceData::OutRef' has a wrong offset!");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetDevilPerformanceData, Valid) == 0x000120, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetDevilPerformanceData::Valid' has a wrong offset!");

// Function BPI_CharaBaseTableInstanceAccessor.BPI_CharaBaseTableInstanceAccessor_C.BI_GetCharaAttachParticle
// 0x0050 (0x0050 - 0x0000)
struct BPI_CharaBaseTableInstanceAccessor_C_BI_GetCharaAttachParticle final
{
public:
	TMap<class FName, struct FCharaAttachParticle_T> CharaAttachParticle;                               // 0x0000(0x0050)(Parm, OutParm)
};
static_assert(alignof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetCharaAttachParticle) == 0x000008, "Wrong alignment on BPI_CharaBaseTableInstanceAccessor_C_BI_GetCharaAttachParticle");
static_assert(sizeof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetCharaAttachParticle) == 0x000050, "Wrong size on BPI_CharaBaseTableInstanceAccessor_C_BI_GetCharaAttachParticle");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetCharaAttachParticle, CharaAttachParticle) == 0x000000, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetCharaAttachParticle::CharaAttachParticle' has a wrong offset!");

// Function BPI_CharaBaseTableInstanceAccessor.BPI_CharaBaseTableInstanceAccessor_C.BI_GetBadStatusDecalData
// 0x0020 (0x0020 - 0x0000)
struct BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusDecalData final
{
public:
	E_BAD_STATUS                                  Status;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2589[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBadStatusDecal_T>              OutRef;                                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          NoUse;                                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusDecalData) == 0x000008, "Wrong alignment on BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusDecalData");
static_assert(sizeof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusDecalData) == 0x000020, "Wrong size on BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusDecalData");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusDecalData, Status) == 0x000000, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusDecalData::Status' has a wrong offset!");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusDecalData, OutRef) == 0x000008, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusDecalData::OutRef' has a wrong offset!");
static_assert(offsetof(BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusDecalData, NoUse) == 0x000018, "Member 'BPI_CharaBaseTableInstanceAccessor_C_BI_GetBadStatusDecalData::NoUse' has a wrong offset!");

}

