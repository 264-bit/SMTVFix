#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapEventHit_Type_SHitSphere

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MapEventHit_Type_SHitSphere.MapEventHit_Type_SHitSphere_C.ExecuteUbergraph_MapEventHit_Type_SHitSphere
// 0x00B8 (0x00B8 - 0x0000)
struct MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEventHitPaused_Paused;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EA6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EA7[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FlagCh_OK;                                // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMyArea_IsMyArea;                        // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere) == 0x000008, "Wrong alignment on MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere");
static_assert(sizeof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere) == 0x0000B8, "Wrong size on MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere, EntryPoint) == 0x000000, "Member 'MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere, CallFunc_IsEventHitPaused_Paused) == 0x000004, "Member 'MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere::CallFunc_IsEventHitPaused_Paused' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere, CallFunc_Not_PreBool_ReturnValue) == 0x0000B0, "Member 'MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere, CallFunc_FlagCh_OK) == 0x0000B1, "Member 'MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere::CallFunc_FlagCh_OK' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere, CallFunc_IsMyArea_IsMyArea) == 0x0000B2, "Member 'MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere::CallFunc_IsMyArea_IsMyArea' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere, CallFunc_BooleanAND_ReturnValue) == 0x0000B3, "Member 'MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function MapEventHit_Type_SHitSphere.MapEventHit_Type_SHitSphere_C.BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EA8[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function MapEventHit_Type_SHitSphere.MapEventHit_Type_SHitSphere_C.FlagCh
// 0x0002 (0x0002 - 0x0000)
struct MapEventHit_Type_SHitSphere_C_FlagCh final
{
public:
	bool                                          OK;                                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FlagCh_OK;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapEventHit_Type_SHitSphere_C_FlagCh) == 0x000001, "Wrong alignment on MapEventHit_Type_SHitSphere_C_FlagCh");
static_assert(sizeof(MapEventHit_Type_SHitSphere_C_FlagCh) == 0x000002, "Wrong size on MapEventHit_Type_SHitSphere_C_FlagCh");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_FlagCh, OK) == 0x000000, "Member 'MapEventHit_Type_SHitSphere_C_FlagCh::OK' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_SHitSphere_C_FlagCh, CallFunc_FlagCh_OK) == 0x000001, "Member 'MapEventHit_Type_SHitSphere_C_FlagCh::CallFunc_FlagCh_OK' has a wrong offset!");

}

