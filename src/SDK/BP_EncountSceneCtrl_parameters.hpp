#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EncountSceneCtrl

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_EncountSceneCtrl.BP_EncountSceneCtrl_C.ExecuteUbergraph_BP_EncountSceneCtrl
// 0x0060 (0x0060 - 0x0000)
struct BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F81[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class ABP_EncountSceneMainCtrl_C*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl) == 0x000010, "Wrong alignment on BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl");
static_assert(sizeof(BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl) == 0x000060, "Wrong size on BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl");
static_assert(offsetof(BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl, EntryPoint) == 0x000000, "Member 'BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000040, "Member 'BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl, CallFunc_FinishSpawningActor_ReturnValue) == 0x000058, "Member 'BP_EncountSceneCtrl_C_ExecuteUbergraph_BP_EncountSceneCtrl::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

