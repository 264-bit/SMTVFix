#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShinseiGetEffect

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ShinseiGetEffect.BP_ShinseiGetEffect_C.ExecuteUbergraph_BP_ShinseiGetEffect
// 0x0160 (0x0160 - 0x0000)
struct BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EA4[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UParticleSystemComponent* PSystem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class ACustomPawn*                            K2Node_DynamicCast_AsCustom_Pawn;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EA5[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x005C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromXZ_ReturnValue;                // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EA6[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0114(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue_1;                      // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue_2;                      // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               K2Node_CustomEvent_PSystem;                        // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue_3;                      // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0150(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect) == 0x000008, "Wrong alignment on BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect");
static_assert(sizeof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect) == 0x000160, "Wrong size on BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, EntryPoint) == 0x000000, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_MakeVector_ReturnValue) == 0x000010, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_GetPlayerPawn_ReturnValue) == 0x000020, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, K2Node_DynamicCast_AsCustom_Pawn) == 0x000038, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::K2Node_DynamicCast_AsCustom_Pawn' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_GetSocketLocation_ReturnValue) == 0x000044, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000050, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x00005C, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000E4, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_Normal_ReturnValue) == 0x0000F0, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_MakeRotFromXZ_ReturnValue) == 0x0000FC, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_MakeRotFromXZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_VSize_ReturnValue) == 0x000108, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_K2_SetActorRotation_ReturnValue) == 0x00010C, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000110, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_MakeVector_ReturnValue_1) == 0x000114, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_VSize_ReturnValue_1) == 0x000120, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_MakeVector_ReturnValue_2) == 0x000124, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_VSize_ReturnValue_2) == 0x000130, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_VSize_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000134, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, K2Node_CustomEvent_PSystem) == 0x000138, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::K2Node_CustomEvent_PSystem' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, K2Node_Event_DeltaSeconds) == 0x000140, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_VSize_ReturnValue_3) == 0x000144, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_VSize_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000148, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x00014C, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000150, "Member 'BP_ShinseiGetEffect_C_ExecuteUbergraph_BP_ShinseiGetEffect::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");

// Function BP_ShinseiGetEffect.BP_ShinseiGetEffect_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ShinseiGetEffect_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShinseiGetEffect_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ShinseiGetEffect_C_ReceiveTick");
static_assert(sizeof(BP_ShinseiGetEffect_C_ReceiveTick) == 0x000004, "Wrong size on BP_ShinseiGetEffect_C_ReceiveTick");
static_assert(offsetof(BP_ShinseiGetEffect_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ShinseiGetEffect_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_ShinseiGetEffect.BP_ShinseiGetEffect_C.Finish
// 0x0008 (0x0008 - 0x0000)
struct BP_ShinseiGetEffect_C_Finish final
{
public:
	class UParticleSystemComponent*               PSystem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShinseiGetEffect_C_Finish) == 0x000008, "Wrong alignment on BP_ShinseiGetEffect_C_Finish");
static_assert(sizeof(BP_ShinseiGetEffect_C_Finish) == 0x000008, "Wrong size on BP_ShinseiGetEffect_C_Finish");
static_assert(offsetof(BP_ShinseiGetEffect_C_Finish, PSystem) == 0x000000, "Member 'BP_ShinseiGetEffect_C_Finish::PSystem' has a wrong offset!");

}

