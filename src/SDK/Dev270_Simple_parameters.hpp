#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev270_Simple

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Dev270_Simple.Dev270_Simple_C.ExecuteUbergraph_Dev270_Simple
// 0x00E0 (0x00E0 - 0x0000)
struct Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C3EF[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C3F0[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0038(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple) == 0x000008, "Wrong alignment on Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple");
static_assert(sizeof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple) == 0x0000E0, "Wrong size on Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, EntryPoint) == 0x000000, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::EntryPoint' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, Temp_int_Variable) == 0x000004, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, Temp_int_Variable_1) == 0x000010, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000018, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000020, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000028, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000030, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, K2Node_ComponentBoundEvent_bFromSweep) == 0x000034, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, K2Node_ComponentBoundEvent_SweepResult) == 0x000038, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000C0, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, K2Node_ComponentBoundEvent_OtherActor) == 0x0000C8, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, K2Node_ComponentBoundEvent_OtherComp) == 0x0000D0, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000D8, "Member 'Dev270_Simple_C_ExecuteUbergraph_Dev270_Simple::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");

// Function Dev270_Simple.Dev270_Simple_C.BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function Dev270_Simple.Dev270_Simple_C.BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C3F1[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Dev270_Simple_C_BndEvt__WaterSurfaceChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Dev270_Simple.Dev270_Simple_C.IsOnWaterSurface
// 0x0002 (0x0002 - 0x0000)
struct Dev270_Simple_C_IsOnWaterSurface final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Dev270_Simple_C_IsOnWaterSurface) == 0x000001, "Wrong alignment on Dev270_Simple_C_IsOnWaterSurface");
static_assert(sizeof(Dev270_Simple_C_IsOnWaterSurface) == 0x000002, "Wrong size on Dev270_Simple_C_IsOnWaterSurface");
static_assert(offsetof(Dev270_Simple_C_IsOnWaterSurface, Result) == 0x000000, "Member 'Dev270_Simple_C_IsOnWaterSurface::Result' has a wrong offset!");
static_assert(offsetof(Dev270_Simple_C_IsOnWaterSurface, CallFunc_Conv_IntToBool_ReturnValue) == 0x000001, "Member 'Dev270_Simple_C_IsOnWaterSurface::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");

}

