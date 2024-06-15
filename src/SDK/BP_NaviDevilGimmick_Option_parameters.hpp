#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NaviDevilGimmick_Option

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_NaviDevilGimmick_Option.BP_NaviDevilGimmick_Option_C.ExecuteUbergraph_BP_NaviDevilGimmick_Option
// 0x00D0 (0x00D0 - 0x0000)
struct BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97F7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97F8[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option) == 0x000008, "Wrong alignment on BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option");
static_assert(sizeof(BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option) == 0x0000D0, "Wrong size on BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option, EntryPoint) == 0x000000, "Member 'BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000008, "Member 'BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000010, "Member 'BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000018, "Member 'BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000020, "Member 'BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000B0, "Member 'BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option, K2Node_ComponentBoundEvent_OtherActor) == 0x0000B8, "Member 'BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option, K2Node_ComponentBoundEvent_OtherComp) == 0x0000C0, "Member 'BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000C8, "Member 'BP_NaviDevilGimmick_Option_C_ExecuteUbergraph_BP_NaviDevilGimmick_Option::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");

// Function BP_NaviDevilGimmick_Option.BP_NaviDevilGimmick_Option_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_NaviDevilGimmick_Option.BP_NaviDevilGimmick_Option_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97F9[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_NaviDevilGimmick_Option_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_NaviDevilGimmick_Option.BP_NaviDevilGimmick_Option_C.UserConstructionScript
// 0x0020 (0x0020 - 0x0000)
struct BP_NaviDevilGimmick_Option_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97FA[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NaviDevilGimmick_Option_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_NaviDevilGimmick_Option_C_UserConstructionScript");
static_assert(sizeof(BP_NaviDevilGimmick_Option_C_UserConstructionScript) == 0x000020, "Wrong size on BP_NaviDevilGimmick_Option_C_UserConstructionScript");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_NaviDevilGimmick_Option_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'BP_NaviDevilGimmick_Option_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_UserConstructionScript, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000004, "Member 'BP_NaviDevilGimmick_Option_C_UserConstructionScript::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_UserConstructionScript, CallFunc_GetMaterial_ReturnValue) == 0x000010, "Member 'BP_NaviDevilGimmick_Option_C_UserConstructionScript::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000018, "Member 'BP_NaviDevilGimmick_Option_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function BP_NaviDevilGimmick_Option.BP_NaviDevilGimmick_Option_C.CheckOverlap
// 0x0020 (0x0020 - 0x0000)
struct BP_NaviDevilGimmick_Option_C_CheckOverlap final
{
public:
	bool                                          Overlap;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97FB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_NaviDevilGimmick_Option_C_CheckOverlap) == 0x000008, "Wrong alignment on BP_NaviDevilGimmick_Option_C_CheckOverlap");
static_assert(sizeof(BP_NaviDevilGimmick_Option_C_CheckOverlap) == 0x000020, "Wrong size on BP_NaviDevilGimmick_Option_C_CheckOverlap");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_CheckOverlap, Overlap) == 0x000000, "Member 'BP_NaviDevilGimmick_Option_C_CheckOverlap::Overlap' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_CheckOverlap, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000008, "Member 'BP_NaviDevilGimmick_Option_C_CheckOverlap::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_CheckOverlap, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_NaviDevilGimmick_Option_C_CheckOverlap::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NaviDevilGimmick_Option_C_CheckOverlap, CallFunc_Greater_IntInt_ReturnValue) == 0x00001C, "Member 'BP_NaviDevilGimmick_Option_C_CheckOverlap::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}
