#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NaviDevilCollision

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_NaviDevilCollision.BP_NaviDevilCollision_C.ExecuteUbergraph_BP_NaviDevilCollision
// 0x0030 (0x0030 - 0x0000)
struct BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Actor, EEndPlayReason EndPlayReason)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_BC84[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_Actor;                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_CustomEvent_EndPlayReason;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision) == 0x000008, "Wrong alignment on BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision");
static_assert(sizeof(BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision) == 0x000030, "Wrong size on BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision");
static_assert(offsetof(BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision, EntryPoint) == 0x000000, "Member 'BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision, K2Node_CustomEvent_Actor) == 0x000020, "Member 'BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision::K2Node_CustomEvent_Actor' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision, K2Node_CustomEvent_EndPlayReason) == 0x000028, "Member 'BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision::K2Node_CustomEvent_EndPlayReason' has a wrong offset!");

// Function BP_NaviDevilCollision.BP_NaviDevilCollision_C.OnEndPlay_
// 0x0010 (0x0010 - 0x0000)
struct BP_NaviDevilCollision_C_OnEndPlay_ final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                EndPlayReason;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NaviDevilCollision_C_OnEndPlay_) == 0x000008, "Wrong alignment on BP_NaviDevilCollision_C_OnEndPlay_");
static_assert(sizeof(BP_NaviDevilCollision_C_OnEndPlay_) == 0x000010, "Wrong size on BP_NaviDevilCollision_C_OnEndPlay_");
static_assert(offsetof(BP_NaviDevilCollision_C_OnEndPlay_, Actor) == 0x000000, "Member 'BP_NaviDevilCollision_C_OnEndPlay_::Actor' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilCollision_C_OnEndPlay_, EndPlayReason) == 0x000008, "Member 'BP_NaviDevilCollision_C_OnEndPlay_::EndPlayReason' has a wrong offset!");

}

