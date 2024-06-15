#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapEventHit_Type_Walk

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MapEventHit_Type_Walk.MapEventHit_Type_Walk_C.FlagCh
// 0x0002 (0x0002 - 0x0000)
struct MapEventHit_Type_Walk_C_FlagCh final
{
public:
	bool                                          OK;                                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FlagCh_OK;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapEventHit_Type_Walk_C_FlagCh) == 0x000001, "Wrong alignment on MapEventHit_Type_Walk_C_FlagCh");
static_assert(sizeof(MapEventHit_Type_Walk_C_FlagCh) == 0x000002, "Wrong size on MapEventHit_Type_Walk_C_FlagCh");
static_assert(offsetof(MapEventHit_Type_Walk_C_FlagCh, OK) == 0x000000, "Member 'MapEventHit_Type_Walk_C_FlagCh::OK' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_FlagCh, CallFunc_FlagCh_OK) == 0x000001, "Member 'MapEventHit_Type_Walk_C_FlagCh::CallFunc_FlagCh_OK' has a wrong offset!");

// Function MapEventHit_Type_Walk.MapEventHit_Type_Walk_C.BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89AD[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'MapEventHit_Type_Walk_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function MapEventHit_Type_Walk.MapEventHit_Type_Walk_C.ExecuteUbergraph_MapEventHit_Type_Walk
// 0x0128 (0x0128 - 0x0000)
struct MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEventHitPaused_Paused;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89AE[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89AF[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetMapCommon_rerutn;                      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MapCommon_C>      K2Node_DynamicCast_AsBPI_Map_Common;               // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FlagCh_OK;                                // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FlagCh_OK_1;                              // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89B0[0x5];                                     // 0x00CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetMapCommon_rerutn_1;                    // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MapCommon_C>      K2Node_DynamicCast_AsBPI_Map_Common_1;             // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89B1[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89B2[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerMovementComponent*               CallFunc_GetComponentByClass_ReturnValue;          // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMyArea_IsMyArea;                        // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMyArea_IsMyArea_1;                      // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0123(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk) == 0x000008, "Wrong alignment on MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk");
static_assert(sizeof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk) == 0x000128, "Wrong size on MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, EntryPoint) == 0x000000, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_IsEventHitPaused_Paused) == 0x000004, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_IsEventHitPaused_Paused' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_GetMapCommon_rerutn) == 0x0000B0, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_GetMapCommon_rerutn' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, K2Node_DynamicCast_AsBPI_Map_Common) == 0x0000B8, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::K2Node_DynamicCast_AsBPI_Map_Common' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_FlagCh_OK) == 0x0000C9, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_FlagCh_OK' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_FlagCh_OK_1) == 0x0000CA, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_FlagCh_OK_1' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_GetMapCommon_rerutn_1) == 0x0000D0, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_GetMapCommon_rerutn_1' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_GetPlayerPawn_ReturnValue) == 0x0000D8, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, K2Node_DynamicCast_AsBPI_Map_Common_1) == 0x0000E0, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::K2Node_DynamicCast_AsBPI_Map_Common_1' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, K2Node_DynamicCast_bSuccess_1) == 0x0000F0, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_GetActorForwardVector_ReturnValue) == 0x0000F4, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000100, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x000110, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_GetComponentByClass_ReturnValue) == 0x000118, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_IsMyArea_IsMyArea) == 0x000120, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_IsMyArea_IsMyArea' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_IsMyArea_IsMyArea_1) == 0x000121, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_IsMyArea_IsMyArea_1' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_BooleanAND_ReturnValue) == 0x000122, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk, CallFunc_BooleanAND_ReturnValue_1) == 0x000123, "Member 'MapEventHit_Type_Walk_C_ExecuteUbergraph_MapEventHit_Type_Walk::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}

