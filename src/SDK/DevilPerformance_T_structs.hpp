#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DevilPerformance_T

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "E_DEVIL_PERFORMANCE_TYPE_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MaterialAnimSetting_T_structs.hpp"


namespace SDK
{

// UserDefinedStruct DevilPerformance_T.DevilPerformance_T
// 0x0118 (0x0118 - 0x0000)
struct FDevilPerformance_T final
{
public:
	E_DEVIL_PERFORMANCE_TYPE                      PerformanceType_2_9ACB098043776172DF9A938487CB43D8; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2537[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class UParticleSystem>> Particle_48_C584490D46FF5B5FD4B60C80CDA6C9A0;      // 0x0008(0x0010)(Edit, BlueprintVisible)
	TSoftObjectPtr<class USoundAtomCue>           SE_15_7C667D0844C20FC5360941A0ED5CC241;            // 0x0018(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundAtomCue>           SE_InstantEvent_44_A085A6AB4D9DC07C450B59AA650AA5F5; // 0x0040(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                   ParticleSocketName_16_8C07E92040D7295D974FE0A3E4124325; // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInstance>       SpawnDecalMaterial_23_3F25778F424A865757AC6082C4876A16; // 0x0070(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FVector                                SpawnDecalSize_37_14B2BE354B3B241E0C652798199839E0; // 0x0098(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2538[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMaterialAnimSetting_T>         SpawnDecalMaterialAnimSetting_31_A75B175C4105C6CE53FFBBA7A6C5A5E9; // 0x00A8(0x0010)(Edit, BlueprintVisible)
	class FName                                   SpawnDecalSocketName_24_DD05D488406195F72863228FD544D6ED; // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnDecalCastOnlyStaticMesh_39_53FCB23F44D104C7EB8217A902A0BBA2; // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2539[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMaterialAnimSetting_T                 SpawnMeshMaterialAnimSetting_34_7375A51249FD5C2904003AA9EB2ED9AB; // 0x00C8(0x0020)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CHARA_MOTION_ID                             MotionID_47_680975054A97F182FCBDCBB5029C95A9;      // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_253A[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UMaterialParameterApplier> MaterialParameterApplier_51_918689B04BECE426DF39AAB9A53CE8D9; // 0x00F0(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FDevilPerformance_T) == 0x000008, "Wrong alignment on FDevilPerformance_T");
static_assert(sizeof(FDevilPerformance_T) == 0x000118, "Wrong size on FDevilPerformance_T");
static_assert(offsetof(FDevilPerformance_T, PerformanceType_2_9ACB098043776172DF9A938487CB43D8) == 0x000000, "Member 'FDevilPerformance_T::PerformanceType_2_9ACB098043776172DF9A938487CB43D8' has a wrong offset!");
static_assert(offsetof(FDevilPerformance_T, Particle_48_C584490D46FF5B5FD4B60C80CDA6C9A0) == 0x000008, "Member 'FDevilPerformance_T::Particle_48_C584490D46FF5B5FD4B60C80CDA6C9A0' has a wrong offset!");
static_assert(offsetof(FDevilPerformance_T, SE_15_7C667D0844C20FC5360941A0ED5CC241) == 0x000018, "Member 'FDevilPerformance_T::SE_15_7C667D0844C20FC5360941A0ED5CC241' has a wrong offset!");
static_assert(offsetof(FDevilPerformance_T, SE_InstantEvent_44_A085A6AB4D9DC07C450B59AA650AA5F5) == 0x000040, "Member 'FDevilPerformance_T::SE_InstantEvent_44_A085A6AB4D9DC07C450B59AA650AA5F5' has a wrong offset!");
static_assert(offsetof(FDevilPerformance_T, ParticleSocketName_16_8C07E92040D7295D974FE0A3E4124325) == 0x000068, "Member 'FDevilPerformance_T::ParticleSocketName_16_8C07E92040D7295D974FE0A3E4124325' has a wrong offset!");
static_assert(offsetof(FDevilPerformance_T, SpawnDecalMaterial_23_3F25778F424A865757AC6082C4876A16) == 0x000070, "Member 'FDevilPerformance_T::SpawnDecalMaterial_23_3F25778F424A865757AC6082C4876A16' has a wrong offset!");
static_assert(offsetof(FDevilPerformance_T, SpawnDecalSize_37_14B2BE354B3B241E0C652798199839E0) == 0x000098, "Member 'FDevilPerformance_T::SpawnDecalSize_37_14B2BE354B3B241E0C652798199839E0' has a wrong offset!");
static_assert(offsetof(FDevilPerformance_T, SpawnDecalMaterialAnimSetting_31_A75B175C4105C6CE53FFBBA7A6C5A5E9) == 0x0000A8, "Member 'FDevilPerformance_T::SpawnDecalMaterialAnimSetting_31_A75B175C4105C6CE53FFBBA7A6C5A5E9' has a wrong offset!");
static_assert(offsetof(FDevilPerformance_T, SpawnDecalSocketName_24_DD05D488406195F72863228FD544D6ED) == 0x0000B8, "Member 'FDevilPerformance_T::SpawnDecalSocketName_24_DD05D488406195F72863228FD544D6ED' has a wrong offset!");
static_assert(offsetof(FDevilPerformance_T, SpawnDecalCastOnlyStaticMesh_39_53FCB23F44D104C7EB8217A902A0BBA2) == 0x0000C0, "Member 'FDevilPerformance_T::SpawnDecalCastOnlyStaticMesh_39_53FCB23F44D104C7EB8217A902A0BBA2' has a wrong offset!");
static_assert(offsetof(FDevilPerformance_T, SpawnMeshMaterialAnimSetting_34_7375A51249FD5C2904003AA9EB2ED9AB) == 0x0000C8, "Member 'FDevilPerformance_T::SpawnMeshMaterialAnimSetting_34_7375A51249FD5C2904003AA9EB2ED9AB' has a wrong offset!");
static_assert(offsetof(FDevilPerformance_T, MotionID_47_680975054A97F182FCBDCBB5029C95A9) == 0x0000E8, "Member 'FDevilPerformance_T::MotionID_47_680975054A97F182FCBDCBB5029C95A9' has a wrong offset!");
static_assert(offsetof(FDevilPerformance_T, MaterialParameterApplier_51_918689B04BECE426DF39AAB9A53CE8D9) == 0x0000F0, "Member 'FDevilPerformance_T::MaterialParameterApplier_51_918689B04BECE426DF39AAB9A53CE8D9' has a wrong offset!");

}

