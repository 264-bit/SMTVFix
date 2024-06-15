#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pla289

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerDevilBaseParamStruct_structs.hpp"


namespace SDK::Params
{

// Function Pla289.Pla289_C.ExecuteUbergraph_Pla289
// 0x0008 (0x0008 - 0x0000)
struct Pla289_C_ExecuteUbergraph_Pla289 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Pla289_C_ExecuteUbergraph_Pla289) == 0x000004, "Wrong alignment on Pla289_C_ExecuteUbergraph_Pla289");
static_assert(sizeof(Pla289_C_ExecuteUbergraph_Pla289) == 0x000008, "Wrong size on Pla289_C_ExecuteUbergraph_Pla289");
static_assert(offsetof(Pla289_C_ExecuteUbergraph_Pla289, EntryPoint) == 0x000000, "Member 'Pla289_C_ExecuteUbergraph_Pla289::EntryPoint' has a wrong offset!");
static_assert(offsetof(Pla289_C_ExecuteUbergraph_Pla289, K2Node_Event_EndPlayReason) == 0x000004, "Member 'Pla289_C_ExecuteUbergraph_Pla289::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function Pla289.Pla289_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct Pla289_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Pla289_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on Pla289_C_ReceiveEndPlay");
static_assert(sizeof(Pla289_C_ReceiveEndPlay) == 0x000001, "Wrong size on Pla289_C_ReceiveEndPlay");
static_assert(offsetof(Pla289_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'Pla289_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function Pla289.Pla289_C.SetupParam
// 0x0058 (0x0058 - 0x0000)
struct Pla289_C_SetupParam final
{
public:
	struct FPlayerDevilBaseParamStruct            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0000(0x0034)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C6B[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Player_AnimBP_C>  K2Node_DynamicCast_AsBPI_Player_Anim_BP;           // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Pla289_C_SetupParam) == 0x000008, "Wrong alignment on Pla289_C_SetupParam");
static_assert(sizeof(Pla289_C_SetupParam) == 0x000058, "Wrong size on Pla289_C_SetupParam");
static_assert(offsetof(Pla289_C_SetupParam, CallFunc_GetDataTableRowFromName_OutRow) == 0x000000, "Member 'Pla289_C_SetupParam::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Pla289_C_SetupParam, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000034, "Member 'Pla289_C_SetupParam::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Pla289_C_SetupParam, CallFunc_GetAnimInstance_ReturnValue) == 0x000038, "Member 'Pla289_C_SetupParam::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Pla289_C_SetupParam, K2Node_DynamicCast_AsBPI_Player_Anim_BP) == 0x000040, "Member 'Pla289_C_SetupParam::K2Node_DynamicCast_AsBPI_Player_Anim_BP' has a wrong offset!");
static_assert(offsetof(Pla289_C_SetupParam, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'Pla289_C_SetupParam::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

