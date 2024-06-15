#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NaviDevilCtrlBase

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BP_NaviDevilCtrlBase.BP_NaviDevilCtrlBase_C.GetGimmickInfoList
// 0x0020 (0x0020 - 0x0000)
struct BP_NaviDevilCtrlBase_C_GetGimmickInfoList final
{
public:
	TArray<struct FNaviDevilGimmickActors>        List;                                              // 0x0000(0x0010)(Parm, OutParm)
	TArray<struct FNaviDevilGimmickActors>        K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_NaviDevilCtrlBase_C_GetGimmickInfoList) == 0x000008, "Wrong alignment on BP_NaviDevilCtrlBase_C_GetGimmickInfoList");
static_assert(sizeof(BP_NaviDevilCtrlBase_C_GetGimmickInfoList) == 0x000020, "Wrong size on BP_NaviDevilCtrlBase_C_GetGimmickInfoList");
static_assert(offsetof(BP_NaviDevilCtrlBase_C_GetGimmickInfoList, List) == 0x000000, "Member 'BP_NaviDevilCtrlBase_C_GetGimmickInfoList::List' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilCtrlBase_C_GetGimmickInfoList, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_NaviDevilCtrlBase_C_GetGimmickInfoList::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_NaviDevilCtrlBase.BP_NaviDevilCtrlBase_C.CalcNaviGimmickExist_FromCategory
// 0x0018 (0x0018 - 0x0000)
struct BP_NaviDevilCtrlBase_C_CalcNaviGimmickExist_FromCategory final
{
public:
	TArray<int32>                                 CategoryList;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          NewParam;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_NaviDevilCtrlBase_C_CalcNaviGimmickExist_FromCategory) == 0x000008, "Wrong alignment on BP_NaviDevilCtrlBase_C_CalcNaviGimmickExist_FromCategory");
static_assert(sizeof(BP_NaviDevilCtrlBase_C_CalcNaviGimmickExist_FromCategory) == 0x000018, "Wrong size on BP_NaviDevilCtrlBase_C_CalcNaviGimmickExist_FromCategory");
static_assert(offsetof(BP_NaviDevilCtrlBase_C_CalcNaviGimmickExist_FromCategory, CategoryList) == 0x000000, "Member 'BP_NaviDevilCtrlBase_C_CalcNaviGimmickExist_FromCategory::CategoryList' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilCtrlBase_C_CalcNaviGimmickExist_FromCategory, NewParam) == 0x000010, "Member 'BP_NaviDevilCtrlBase_C_CalcNaviGimmickExist_FromCategory::NewParam' has a wrong offset!");

// Function BP_NaviDevilCtrlBase.BP_NaviDevilCtrlBase_C.ChangeNaviDevil_FromPawn
// 0x0010 (0x0010 - 0x0000)
struct BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromPawn final
{
public:
	class APawn*                                  Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_NAVI_DEVIL                                  NaviDevil;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromPawn) == 0x000008, "Wrong alignment on BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromPawn");
static_assert(sizeof(BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromPawn) == 0x000010, "Wrong size on BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromPawn");
static_assert(offsetof(BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromPawn, Pawn) == 0x000000, "Member 'BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromPawn::Pawn' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromPawn, NaviDevil) == 0x000008, "Member 'BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromPawn::NaviDevil' has a wrong offset!");

// Function BP_NaviDevilCtrlBase.BP_NaviDevilCtrlBase_C.ChangeNaviDevil_FromEnum
// 0x0002 (0x0002 - 0x0000)
struct BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromEnum final
{
public:
	E_NAVI_DEVIL                                  NaviDevil;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CalcOnGround;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromEnum) == 0x000001, "Wrong alignment on BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromEnum");
static_assert(sizeof(BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromEnum) == 0x000002, "Wrong size on BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromEnum");
static_assert(offsetof(BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromEnum, NaviDevil) == 0x000000, "Member 'BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromEnum::NaviDevil' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromEnum, CalcOnGround) == 0x000001, "Member 'BP_NaviDevilCtrlBase_C_ChangeNaviDevil_FromEnum::CalcOnGround' has a wrong offset!");

}

