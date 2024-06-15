#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SymbolRoute

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SymbolRoute.BP_SymbolRoute_C.UserConstructionScript
// 0x0098 (0x0098 - 0x0000)
struct BP_SymbolRoute_C_UserConstructionScript final
{
public:
	class ABP_SymbolRoute_C*                      L_Actor;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0008(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SymbolRoute_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_SymbolRoute_C_UserConstructionScript");
static_assert(sizeof(BP_SymbolRoute_C_UserConstructionScript) == 0x000098, "Wrong size on BP_SymbolRoute_C_UserConstructionScript");
static_assert(offsetof(BP_SymbolRoute_C_UserConstructionScript, L_Actor) == 0x000000, "Member 'BP_SymbolRoute_C_UserConstructionScript::L_Actor' has a wrong offset!");
static_assert(offsetof(BP_SymbolRoute_C_UserConstructionScript, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000008, "Member 'BP_SymbolRoute_C_UserConstructionScript::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SymbolRoute_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'BP_SymbolRoute_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_SymbolRoute.BP_SymbolRoute_C.CheckWithinRange
// 0x00B0 (0x00B0 - 0x0000)
struct BP_SymbolRoute_C_CheckWithinRange final
{
public:
	struct FVector                                OtherNodePos;                                      // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WithinRange;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_640A[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue;            // 0x0070(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPointInBoxWithTransform_ReturnValue;    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SymbolRoute_C_CheckWithinRange) == 0x000010, "Wrong alignment on BP_SymbolRoute_C_CheckWithinRange");
static_assert(sizeof(BP_SymbolRoute_C_CheckWithinRange) == 0x0000B0, "Wrong size on BP_SymbolRoute_C_CheckWithinRange");
static_assert(offsetof(BP_SymbolRoute_C_CheckWithinRange, OtherNodePos) == 0x000000, "Member 'BP_SymbolRoute_C_CheckWithinRange::OtherNodePos' has a wrong offset!");
static_assert(offsetof(BP_SymbolRoute_C_CheckWithinRange, WithinRange) == 0x00000C, "Member 'BP_SymbolRoute_C_CheckWithinRange::WithinRange' has a wrong offset!");
static_assert(offsetof(BP_SymbolRoute_C_CheckWithinRange, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'BP_SymbolRoute_C_CheckWithinRange::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SymbolRoute_C_CheckWithinRange, CallFunc_MakeTransform_ReturnValue) == 0x000040, "Member 'BP_SymbolRoute_C_CheckWithinRange::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SymbolRoute_C_CheckWithinRange, CallFunc_ComposeTransforms_ReturnValue) == 0x000070, "Member 'BP_SymbolRoute_C_CheckWithinRange::CallFunc_ComposeTransforms_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SymbolRoute_C_CheckWithinRange, CallFunc_IsPointInBoxWithTransform_ReturnValue) == 0x0000A0, "Member 'BP_SymbolRoute_C_CheckWithinRange::CallFunc_IsPointInBoxWithTransform_ReturnValue' has a wrong offset!");

}

