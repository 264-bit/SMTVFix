#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_es615_m061_01

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_es615_m061_01.BP_es615_m061_01_C.ExecuteUbergraph_BP_es615_m061_01
// 0x0060 (0x0060 - 0x0000)
struct BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActive_IsActive;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckEventFlag_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E8B[0xA];                                     // 0x0006(0x000A)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckEventFlag_ReturnValue_1;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E8C[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANpc615_C*                              CallFunc_FinishSpawningActor_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01) == 0x000010, "Wrong alignment on BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01");
static_assert(sizeof(BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01) == 0x000060, "Wrong size on BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01");
static_assert(offsetof(BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01, EntryPoint) == 0x000000, "Member 'BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01, CallFunc_GetActive_IsActive) == 0x000004, "Member 'BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01::CallFunc_GetActive_IsActive' has a wrong offset!");
static_assert(offsetof(BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01, CallFunc_CheckEventFlag_ReturnValue) == 0x000005, "Member 'BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01::CallFunc_CheckEventFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01, CallFunc_CheckEventFlag_ReturnValue_1) == 0x000040, "Member 'BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01::CallFunc_CheckEventFlag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000048, "Member 'BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01, CallFunc_FinishSpawningActor_ReturnValue) == 0x000050, "Member 'BP_es615_m061_01_C_ExecuteUbergraph_BP_es615_m061_01::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

