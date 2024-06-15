#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MEC_AreaNameIn

#include "Basic.hpp"

#include "AreaNameData_structs.hpp"


namespace SDK::Params
{

// Function MEC_AreaNameIn.MEC_AreaNameIn_C.ExecuteUbergraph_MEC_AreaNameIn
// 0x0030 (0x0030 - 0x0000)
struct MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E61[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetMapUICtrl_MapUICtrl;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MapUICtrl_C>      K2Node_DynamicCast_AsBPI_Map_UICtrl;               // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E62[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAreaNameData                          K2Node_MakeStruct_AreaNameData;                    // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn) == 0x000008, "Wrong alignment on MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn");
static_assert(sizeof(MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn) == 0x000030, "Wrong size on MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn");
static_assert(offsetof(MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn, EntryPoint) == 0x000000, "Member 'MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn::EntryPoint' has a wrong offset!");
static_assert(offsetof(MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn, CallFunc_GetMapUICtrl_MapUICtrl) == 0x000008, "Member 'MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn::CallFunc_GetMapUICtrl_MapUICtrl' has a wrong offset!");
static_assert(offsetof(MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn, K2Node_DynamicCast_AsBPI_Map_UICtrl) == 0x000010, "Member 'MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn::K2Node_DynamicCast_AsBPI_Map_UICtrl' has a wrong offset!");
static_assert(offsetof(MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn, K2Node_MakeStruct_AreaNameData) == 0x000024, "Member 'MEC_AreaNameIn_C_ExecuteUbergraph_MEC_AreaNameIn::K2Node_MakeStruct_AreaNameData' has a wrong offset!");

}

