#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RailSightChecker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_RailSightChecker.BP_RailSightChecker_C.CheckObstruction
// 0x01D0 (0x01D0 - 0x0000)
struct BP_RailSightChecker_C_CheckObstruction final
{
public:
	int32                                         Divide;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5868[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      TraceObject;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsClear;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5869[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Lo_GrainSize;                                      // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_586A[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDrawDebugTrace                               Temp_byte_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDrawDebugTrace                               Temp_byte_Variable_1;                              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDrawDebugTrace                               K2Node_Select_Default;                             // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_586B[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_586C[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCurrentLocationAndRotation_retLocation; // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCurrentLocationAndRotation_retDirection; // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCurrentLocationAndRotation_retRotation; // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Select_Default_1;                           // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00A4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x012E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_586D[0x1];                                     // 0x012F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0144(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0150(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x015C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0194(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_586E[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RailSightChecker_C_CheckObstruction) == 0x000008, "Wrong alignment on BP_RailSightChecker_C_CheckObstruction");
static_assert(sizeof(BP_RailSightChecker_C_CheckObstruction) == 0x0001D0, "Wrong size on BP_RailSightChecker_C_CheckObstruction");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, Divide) == 0x000000, "Member 'BP_RailSightChecker_C_CheckObstruction::Divide' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, TraceObject) == 0x000008, "Member 'BP_RailSightChecker_C_CheckObstruction::TraceObject' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, IsClear) == 0x000018, "Member 'BP_RailSightChecker_C_CheckObstruction::IsClear' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, Lo_GrainSize) == 0x00001C, "Member 'BP_RailSightChecker_C_CheckObstruction::Lo_GrainSize' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000020, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, Temp_bool_Variable) == 0x000024, "Member 'BP_RailSightChecker_C_CheckObstruction::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000028, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, Temp_byte_Variable) == 0x00002C, "Member 'BP_RailSightChecker_C_CheckObstruction::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, Temp_byte_Variable_1) == 0x00002D, "Member 'BP_RailSightChecker_C_CheckObstruction::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, Temp_bool_Variable_1) == 0x00002E, "Member 'BP_RailSightChecker_C_CheckObstruction::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, K2Node_Select_Default) == 0x00002F, "Member 'BP_RailSightChecker_C_CheckObstruction::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, Temp_int_Variable) == 0x000030, "Member 'BP_RailSightChecker_C_CheckObstruction::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000034, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000040, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000044, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_GetSplineLength_ReturnValue) == 0x000048, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00004C, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_GetCurrentLocationAndRotation_retLocation) == 0x000050, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_GetCurrentLocationAndRotation_retLocation' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_GetCurrentLocationAndRotation_retDirection) == 0x00005C, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_GetCurrentLocationAndRotation_retDirection' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_GetCurrentLocationAndRotation_retRotation) == 0x000068, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_GetCurrentLocationAndRotation_retRotation' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_GetForwardVector_ReturnValue) == 0x000074, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000080, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_Add_VectorVector_ReturnValue) == 0x00008C, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, K2Node_Select_Default_1) == 0x000098, "Member 'BP_RailSightChecker_C_CheckObstruction::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_LineTraceSingle_OutHit) == 0x0000A4, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_LineTraceSingle_ReturnValue) == 0x00012C, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_bBlockingHit) == 0x00012D, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_bInitialOverlap) == 0x00012E, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_Time) == 0x000130, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_Distance) == 0x000134, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_Location) == 0x000138, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_ImpactPoint) == 0x000144, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_Normal) == 0x000150, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_ImpactNormal) == 0x00015C, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_PhysMat) == 0x000168, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_HitActor) == 0x000170, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_HitComponent) == 0x000178, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_HitBoneName) == 0x000180, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_HitItem) == 0x000188, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_ElementIndex) == 0x00018C, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_FaceIndex) == 0x000190, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_TraceStart) == 0x000194, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_BreakHitResult_TraceEnd) == 0x0001A0, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_GetDisplayName_ReturnValue) == 0x0001B0, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_CheckObstruction, CallFunc_Concat_StrStr_ReturnValue) == 0x0001C0, "Member 'BP_RailSightChecker_C_CheckObstruction::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function BP_RailSightChecker.BP_RailSightChecker_C.SetCheckData
// 0x02B0 (0x02B0 - 0x0000)
struct BP_RailSightChecker_C_SetCheckData final
{
public:
	struct FTransform                             Position;                                          // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FTransform                             OffsetTransform;                                   // 0x0030(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	TArray<struct FCustomSplinePoint>             SplinePoint;                                       // 0x0060(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FRigRailPlayInfo                       PlayInfo;                                          // 0x0070(0x0034)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	float                                         AdjustScale;                                       // 0x00A4(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_586F[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x00D0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5870[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x015C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5871[0x8];                                     // 0x0168(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0170(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddActorWorldTransform_SweepHitResult; // 0x01A0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_AddActorLocalTransform_SweepHitResult; // 0x0228(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_RailSightChecker_C_SetCheckData) == 0x000010, "Wrong alignment on BP_RailSightChecker_C_SetCheckData");
static_assert(sizeof(BP_RailSightChecker_C_SetCheckData) == 0x0002B0, "Wrong size on BP_RailSightChecker_C_SetCheckData");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, Position) == 0x000000, "Member 'BP_RailSightChecker_C_SetCheckData::Position' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, OffsetTransform) == 0x000030, "Member 'BP_RailSightChecker_C_SetCheckData::OffsetTransform' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, SplinePoint) == 0x000060, "Member 'BP_RailSightChecker_C_SetCheckData::SplinePoint' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, PlayInfo) == 0x000070, "Member 'BP_RailSightChecker_C_SetCheckData::PlayInfo' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, AdjustScale) == 0x0000A4, "Member 'BP_RailSightChecker_C_SetCheckData::AdjustScale' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, K2Node_SwitchEnum_CmpSuccess) == 0x0000A8, "Member 'BP_RailSightChecker_C_SetCheckData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, CallFunc_BreakTransform_Location) == 0x0000AC, "Member 'BP_RailSightChecker_C_SetCheckData::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, CallFunc_BreakTransform_Rotation) == 0x0000B8, "Member 'BP_RailSightChecker_C_SetCheckData::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, CallFunc_BreakTransform_Scale) == 0x0000C4, "Member 'BP_RailSightChecker_C_SetCheckData::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x0000D0, "Member 'BP_RailSightChecker_C_SetCheckData::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000158, "Member 'BP_RailSightChecker_C_SetCheckData::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00015C, "Member 'BP_RailSightChecker_C_SetCheckData::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, CallFunc_MakeTransform_ReturnValue) == 0x000170, "Member 'BP_RailSightChecker_C_SetCheckData::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, CallFunc_K2_AddActorWorldTransform_SweepHitResult) == 0x0001A0, "Member 'BP_RailSightChecker_C_SetCheckData::CallFunc_K2_AddActorWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_SetCheckData, CallFunc_K2_AddActorLocalTransform_SweepHitResult) == 0x000228, "Member 'BP_RailSightChecker_C_SetCheckData::CallFunc_K2_AddActorLocalTransform_SweepHitResult' has a wrong offset!");

// Function BP_RailSightChecker.BP_RailSightChecker_C.SetTargetLocation
// 0x000C (0x000C - 0x0000)
struct BP_RailSightChecker_C_SetTargetLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RailSightChecker_C_SetTargetLocation) == 0x000004, "Wrong alignment on BP_RailSightChecker_C_SetTargetLocation");
static_assert(sizeof(BP_RailSightChecker_C_SetTargetLocation) == 0x00000C, "Wrong size on BP_RailSightChecker_C_SetTargetLocation");
static_assert(offsetof(BP_RailSightChecker_C_SetTargetLocation, Location) == 0x000000, "Member 'BP_RailSightChecker_C_SetTargetLocation::Location' has a wrong offset!");

// Function BP_RailSightChecker.BP_RailSightChecker_C.AddIgnoreActor
// 0x0010 (0x0010 - 0x0000)
struct BP_RailSightChecker_C_AddIgnoreActor final
{
public:
	class AActor*                                 IgnoreActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RailSightChecker_C_AddIgnoreActor) == 0x000008, "Wrong alignment on BP_RailSightChecker_C_AddIgnoreActor");
static_assert(sizeof(BP_RailSightChecker_C_AddIgnoreActor) == 0x000010, "Wrong size on BP_RailSightChecker_C_AddIgnoreActor");
static_assert(offsetof(BP_RailSightChecker_C_AddIgnoreActor, IgnoreActor) == 0x000000, "Member 'BP_RailSightChecker_C_AddIgnoreActor::IgnoreActor' has a wrong offset!");
static_assert(offsetof(BP_RailSightChecker_C_AddIgnoreActor, CallFunc_Array_Add_ReturnValue) == 0x000008, "Member 'BP_RailSightChecker_C_AddIgnoreActor::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

