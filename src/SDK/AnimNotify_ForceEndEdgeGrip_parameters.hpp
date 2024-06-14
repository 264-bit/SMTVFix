#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_ForceEndEdgeGrip

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimNotify_ForceEndEdgeGrip.AnimNotify_ForceEndEdgeGrip_C.Received_Notify
// 0x0038 (0x0038 - 0x0000)
struct AnimNotify_ForceEndEdgeGrip_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FC8[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_EdgeGripper_C>    K2Node_DynamicCast_AsBPI_Edge_Gripper;             // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_ForceEndEdgeGrip_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_ForceEndEdgeGrip_C_Received_Notify");
static_assert(sizeof(AnimNotify_ForceEndEdgeGrip_C_Received_Notify) == 0x000038, "Wrong size on AnimNotify_ForceEndEdgeGrip_C_Received_Notify");
static_assert(offsetof(AnimNotify_ForceEndEdgeGrip_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_ForceEndEdgeGrip_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_ForceEndEdgeGrip_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_ForceEndEdgeGrip_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_ForceEndEdgeGrip_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AnimNotify_ForceEndEdgeGrip_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ForceEndEdgeGrip_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AnimNotify_ForceEndEdgeGrip_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ForceEndEdgeGrip_C_Received_Notify, K2Node_DynamicCast_AsBPI_Edge_Gripper) == 0x000020, "Member 'AnimNotify_ForceEndEdgeGrip_C_Received_Notify::K2Node_DynamicCast_AsBPI_Edge_Gripper' has a wrong offset!");
static_assert(offsetof(AnimNotify_ForceEndEdgeGrip_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AnimNotify_ForceEndEdgeGrip_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
