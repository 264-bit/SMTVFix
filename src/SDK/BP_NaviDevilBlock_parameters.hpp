#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NaviDevilBlock

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_NaviDevilBlock.BP_NaviDevilBlock_C.UserConstructionScript
// 0x00C8 (0x00C8 - 0x0000)
struct BP_NaviDevilBlock_C_UserConstructionScript final
{
public:
	float                                         CallFunc_BreakVector_X;                            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0018(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50C8[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_NaviDevilBlock_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_NaviDevilBlock_C_UserConstructionScript");
static_assert(sizeof(BP_NaviDevilBlock_C_UserConstructionScript) == 0x0000C8, "Wrong size on BP_NaviDevilBlock_C_UserConstructionScript");
static_assert(offsetof(BP_NaviDevilBlock_C_UserConstructionScript, CallFunc_BreakVector_X) == 0x000000, "Member 'BP_NaviDevilBlock_C_UserConstructionScript::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilBlock_C_UserConstructionScript, CallFunc_BreakVector_Y) == 0x000004, "Member 'BP_NaviDevilBlock_C_UserConstructionScript::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilBlock_C_UserConstructionScript, CallFunc_BreakVector_Z) == 0x000008, "Member 'BP_NaviDevilBlock_C_UserConstructionScript::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilBlock_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x00000C, "Member 'BP_NaviDevilBlock_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilBlock_C_UserConstructionScript, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000018, "Member 'BP_NaviDevilBlock_C_UserConstructionScript::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilBlock_C_UserConstructionScript, CallFunc_GetMaterial_ReturnValue) == 0x0000A0, "Member 'BP_NaviDevilBlock_C_UserConstructionScript::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilBlock_C_UserConstructionScript, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000A8, "Member 'BP_NaviDevilBlock_C_UserConstructionScript::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilBlock_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000B8, "Member 'BP_NaviDevilBlock_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilBlock_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'BP_NaviDevilBlock_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_NaviDevilBlock.BP_NaviDevilBlock_C.CheckHitIN
// 0x0060 (0x0060 - 0x0000)
struct BP_NaviDevilBlock_C_CheckHitIN final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OffsetSize;                                        // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          In;                                                // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50C9[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPointInBoxWithTransform_ReturnValue;    // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_NaviDevilBlock_C_CheckHitIN) == 0x000010, "Wrong alignment on BP_NaviDevilBlock_C_CheckHitIN");
static_assert(sizeof(BP_NaviDevilBlock_C_CheckHitIN) == 0x000060, "Wrong size on BP_NaviDevilBlock_C_CheckHitIN");
static_assert(offsetof(BP_NaviDevilBlock_C_CheckHitIN, Location) == 0x000000, "Member 'BP_NaviDevilBlock_C_CheckHitIN::Location' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilBlock_C_CheckHitIN, OffsetSize) == 0x00000C, "Member 'BP_NaviDevilBlock_C_CheckHitIN::OffsetSize' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilBlock_C_CheckHitIN, In) == 0x000018, "Member 'BP_NaviDevilBlock_C_CheckHitIN::In' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilBlock_C_CheckHitIN, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000020, "Member 'BP_NaviDevilBlock_C_CheckHitIN::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilBlock_C_CheckHitIN, CallFunc_Add_VectorVector_ReturnValue) == 0x000050, "Member 'BP_NaviDevilBlock_C_CheckHitIN::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilBlock_C_CheckHitIN, CallFunc_IsPointInBoxWithTransform_ReturnValue) == 0x00005C, "Member 'BP_NaviDevilBlock_C_CheckHitIN::CallFunc_IsPointInBoxWithTransform_ReturnValue' has a wrong offset!");

}

