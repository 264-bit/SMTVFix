#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LineGraphSE

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_LineGraphSE.BP_LineGraphSE_C.ExecuteUbergraph_BP_LineGraphSE
// 0x00D0 (0x00D0 - 0x0000)
struct BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B58[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE) == 0x000008, "Wrong alignment on BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE");
static_assert(sizeof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE) == 0x0000D0, "Wrong size on BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE");
static_assert(offsetof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE, EntryPoint) == 0x000000, "Member 'BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000008, "Member 'BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000010, "Member 'BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000018, "Member 'BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000020, "Member 'BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000B0, "Member 'BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE, K2Node_ComponentBoundEvent_OtherActor) == 0x0000B8, "Member 'BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE, K2Node_ComponentBoundEvent_OtherComp) == 0x0000C0, "Member 'BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000C8, "Member 'BP_LineGraphSE_C_ExecuteUbergraph_BP_LineGraphSE::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");

// Function BP_LineGraphSE.BP_LineGraphSE_C.BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_LineGraphSE.BP_LineGraphSE_C.BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B59[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_LineGraphSE_C_BndEvt__CullBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_LineGraphSE.BP_LineGraphSE_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_LineGraphSE_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LineGraphSE_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_LineGraphSE_C_ReceiveTick");
static_assert(sizeof(BP_LineGraphSE_C_ReceiveTick) == 0x000004, "Wrong size on BP_LineGraphSE_C_ReceiveTick");
static_assert(offsetof(BP_LineGraphSE_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_LineGraphSE_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_LineGraphSE.BP_LineGraphSE_C.UserConstructionScript
// 0x0014 (0x0014 - 0x0000)
struct BP_LineGraphSE_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LineGraphSE_C_UserConstructionScript) == 0x000004, "Wrong alignment on BP_LineGraphSE_C_UserConstructionScript");
static_assert(sizeof(BP_LineGraphSE_C_UserConstructionScript) == 0x000014, "Wrong size on BP_LineGraphSE_C_UserConstructionScript");
static_assert(offsetof(BP_LineGraphSE_C_UserConstructionScript, Temp_int_Variable) == 0x000000, "Member 'BP_LineGraphSE_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000004, "Member 'BP_LineGraphSE_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_LineGraphSE_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'BP_LineGraphSE_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'BP_LineGraphSE_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_LineGraphSE.BP_LineGraphSE_C.TickSELocation
// 0x0180 (0x0180 - 0x0000)
struct BP_LineGraphSE_C_TickSELocation final
{
public:
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B5A[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDebugMenuItemData                     CallFunc_GetDebugMenuItemFromPathName_Name_ReturnValue; // 0x0018(0x00D0)()
	struct FVector                                CallFunc_CalcNearestPointOnSpline_ReturnValue;     // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x00F4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LineGraphSE_C_TickSELocation) == 0x000008, "Wrong alignment on BP_LineGraphSE_C_TickSELocation");
static_assert(sizeof(BP_LineGraphSE_C_TickSELocation) == 0x000180, "Wrong size on BP_LineGraphSE_C_TickSELocation");
static_assert(offsetof(BP_LineGraphSE_C_TickSELocation, CallFunc_GetPlayerPawn_ReturnValue) == 0x000000, "Member 'BP_LineGraphSE_C_TickSELocation::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_TickSELocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_LineGraphSE_C_TickSELocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_TickSELocation, CallFunc_GetDebugMenuItemFromPathName_Name_ReturnValue) == 0x000018, "Member 'BP_LineGraphSE_C_TickSELocation::CallFunc_GetDebugMenuItemFromPathName_Name_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_TickSELocation, CallFunc_CalcNearestPointOnSpline_ReturnValue) == 0x0000E8, "Member 'BP_LineGraphSE_C_TickSELocation::CallFunc_CalcNearestPointOnSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_TickSELocation, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0000F4, "Member 'BP_LineGraphSE_C_TickSELocation::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_LineGraphSE_C_TickSELocation, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00017C, "Member 'BP_LineGraphSE_C_TickSELocation::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

}

