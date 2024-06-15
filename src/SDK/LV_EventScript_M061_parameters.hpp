#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LV_EventScript_M061

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function LV_EventScript_M061.LV_EventScript_M061_C.ExecuteUbergraph_LV_EventScript_M061
// 0x0088 (0x0088 - 0x0000)
struct LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	E_OldNewRoute                                 CallFunc_GetOldNewRoute_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6127[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProjectGameMode_C*                     K2Node_DynamicCast_AsProject_Game_Mode;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6128[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetMapCommon_rerutn;                      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MapCommon_C>      K2Node_DynamicCast_AsBPI_Map_Common;               // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6129[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BPI_GetMapGimmickTrigger_Actor;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MapGimmickTrigger_C*                K2Node_DynamicCast_AsBP_Map_Gimmick_Trigger;       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061) == 0x000008, "Wrong alignment on LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061");
static_assert(sizeof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061) == 0x000088, "Wrong size on LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, EntryPoint) == 0x000000, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::EntryPoint' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, CallFunc_GetOldNewRoute_ReturnValue) == 0x000034, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::CallFunc_GetOldNewRoute_ReturnValue' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000035, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, CallFunc_GetGameMode_ReturnValue) == 0x000038, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, K2Node_DynamicCast_AsProject_Game_Mode) == 0x000040, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::K2Node_DynamicCast_AsProject_Game_Mode' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, CallFunc_GetMapCommon_rerutn) == 0x000050, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::CallFunc_GetMapCommon_rerutn' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, K2Node_DynamicCast_AsBPI_Map_Common) == 0x000058, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::K2Node_DynamicCast_AsBPI_Map_Common' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, CallFunc_BPI_GetMapGimmickTrigger_Actor) == 0x000070, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::CallFunc_BPI_GetMapGimmickTrigger_Actor' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, K2Node_DynamicCast_AsBP_Map_Gimmick_Trigger) == 0x000078, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::K2Node_DynamicCast_AsBP_Map_Gimmick_Trigger' has a wrong offset!");
static_assert(offsetof(LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061, K2Node_DynamicCast_bSuccess_2) == 0x000080, "Member 'LV_EventScript_M061_C_ExecuteUbergraph_LV_EventScript_M061::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

}

