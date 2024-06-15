#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MEC_CALL_EVENT_IN_Playerchange

#include "Basic.hpp"


namespace SDK::Params
{

// Function MEC_CALL_EVENT_IN_Playerchange.MEC_CALL_EVENT_IN_Playerchange_C.ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange
// 0x0028 (0x0028 - 0x0000)
struct MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BC6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetMapCommon_rerutn;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MapCommon_C>      K2Node_DynamicCast_AsBPI_Map_Common;               // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FadeOut_Black_ReturnValue;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange) == 0x000008, "Wrong alignment on MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange");
static_assert(sizeof(MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange) == 0x000028, "Wrong size on MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange");
static_assert(offsetof(MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange, EntryPoint) == 0x000000, "Member 'MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange::EntryPoint' has a wrong offset!");
static_assert(offsetof(MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange, CallFunc_GetMapCommon_rerutn) == 0x000008, "Member 'MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange::CallFunc_GetMapCommon_rerutn' has a wrong offset!");
static_assert(offsetof(MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange, K2Node_DynamicCast_AsBPI_Map_Common) == 0x000010, "Member 'MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange::K2Node_DynamicCast_AsBPI_Map_Common' has a wrong offset!");
static_assert(offsetof(MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange, CallFunc_FadeOut_Black_ReturnValue) == 0x000021, "Member 'MEC_CALL_EVENT_IN_Playerchange_C_ExecuteUbergraph_MEC_CALL_EVENT_IN_Playerchange::CallFunc_FadeOut_Black_ReturnValue' has a wrong offset!");

// Function MEC_CALL_EVENT_IN_Playerchange.MEC_CALL_EVENT_IN_Playerchange_C.IsHitEnabled
// 0x0002 (0x0002 - 0x0000)
struct MEC_CALL_EVENT_IN_Playerchange_C_IsHitEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_IsCollisionEnabled_ReturnValue;        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MEC_CALL_EVENT_IN_Playerchange_C_IsHitEnabled) == 0x000001, "Wrong alignment on MEC_CALL_EVENT_IN_Playerchange_C_IsHitEnabled");
static_assert(sizeof(MEC_CALL_EVENT_IN_Playerchange_C_IsHitEnabled) == 0x000002, "Wrong size on MEC_CALL_EVENT_IN_Playerchange_C_IsHitEnabled");
static_assert(offsetof(MEC_CALL_EVENT_IN_Playerchange_C_IsHitEnabled, ReturnValue) == 0x000000, "Member 'MEC_CALL_EVENT_IN_Playerchange_C_IsHitEnabled::ReturnValue' has a wrong offset!");
static_assert(offsetof(MEC_CALL_EVENT_IN_Playerchange_C_IsHitEnabled, CallFunc_K2_IsCollisionEnabled_ReturnValue) == 0x000001, "Member 'MEC_CALL_EVENT_IN_Playerchange_C_IsHitEnabled::CallFunc_K2_IsCollisionEnabled_ReturnValue' has a wrong offset!");

// Function MEC_CALL_EVENT_IN_Playerchange.MEC_CALL_EVENT_IN_Playerchange_C.GetMapEventId
// 0x0004 (0x0004 - 0x0000)
struct MEC_CALL_EVENT_IN_Playerchange_C_GetMapEventId final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MEC_CALL_EVENT_IN_Playerchange_C_GetMapEventId) == 0x000004, "Wrong alignment on MEC_CALL_EVENT_IN_Playerchange_C_GetMapEventId");
static_assert(sizeof(MEC_CALL_EVENT_IN_Playerchange_C_GetMapEventId) == 0x000004, "Wrong size on MEC_CALL_EVENT_IN_Playerchange_C_GetMapEventId");
static_assert(offsetof(MEC_CALL_EVENT_IN_Playerchange_C_GetMapEventId, ReturnValue) == 0x000000, "Member 'MEC_CALL_EVENT_IN_Playerchange_C_GetMapEventId::ReturnValue' has a wrong offset!");

// Function MEC_CALL_EVENT_IN_Playerchange.MEC_CALL_EVENT_IN_Playerchange_C.EnableHit
// 0x0002 (0x0002 - 0x0000)
struct MEC_CALL_EVENT_IN_Playerchange_C_EnableHit final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MEC_CALL_EVENT_IN_Playerchange_C_EnableHit) == 0x000001, "Wrong alignment on MEC_CALL_EVENT_IN_Playerchange_C_EnableHit");
static_assert(sizeof(MEC_CALL_EVENT_IN_Playerchange_C_EnableHit) == 0x000002, "Wrong size on MEC_CALL_EVENT_IN_Playerchange_C_EnableHit");
static_assert(offsetof(MEC_CALL_EVENT_IN_Playerchange_C_EnableHit, IsEnable) == 0x000000, "Member 'MEC_CALL_EVENT_IN_Playerchange_C_EnableHit::IsEnable' has a wrong offset!");
static_assert(offsetof(MEC_CALL_EVENT_IN_Playerchange_C_EnableHit, ReturnValue) == 0x000001, "Member 'MEC_CALL_EVENT_IN_Playerchange_C_EnableHit::ReturnValue' has a wrong offset!");

// Function MEC_CALL_EVENT_IN_Playerchange.MEC_CALL_EVENT_IN_Playerchange_C.EnableIcon
// 0x0002 (0x0002 - 0x0000)
struct MEC_CALL_EVENT_IN_Playerchange_C_EnableIcon final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MEC_CALL_EVENT_IN_Playerchange_C_EnableIcon) == 0x000001, "Wrong alignment on MEC_CALL_EVENT_IN_Playerchange_C_EnableIcon");
static_assert(sizeof(MEC_CALL_EVENT_IN_Playerchange_C_EnableIcon) == 0x000002, "Wrong size on MEC_CALL_EVENT_IN_Playerchange_C_EnableIcon");
static_assert(offsetof(MEC_CALL_EVENT_IN_Playerchange_C_EnableIcon, IsEnable) == 0x000000, "Member 'MEC_CALL_EVENT_IN_Playerchange_C_EnableIcon::IsEnable' has a wrong offset!");
static_assert(offsetof(MEC_CALL_EVENT_IN_Playerchange_C_EnableIcon, ReturnValue) == 0x000001, "Member 'MEC_CALL_EVENT_IN_Playerchange_C_EnableIcon::ReturnValue' has a wrong offset!");

}

