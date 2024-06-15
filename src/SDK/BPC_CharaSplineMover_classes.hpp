#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_CharaSplineMover

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_CharaSplineMover.BPC_CharaSplineMover_C
// 0x00A8 (0x0158 - 0x00B0)
class UBPC_CharaSplineMover_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                       SplineComponent;                                   // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 Chara;                                             // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SplineLength;                                      // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSplineLoop;                                      // 0x00CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_632A[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MovePerSec;                                        // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSec;                                          // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWalk;                                            // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_632B[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaMovementComponent*                MovementComp;                                      // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SplinePointNum;                                    // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SplinePos;                                         // 0x00EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWalkReverse;                                     // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_632C[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                NextPos;                                           // 0x00F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EvtDis_ArriveSplineEnd;                            // 0x0100(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsFly;                                             // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsSplineChange;                                    // 0x0111(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_632D[0x2];                                     // 0x0112(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TraceRadius;                                       // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TraceHalfHeight;                                   // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceLocalLocation;                                // 0x011C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AccelPerSec;                                       // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_632E[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EvtDis_Stop;                                       // 0x0130(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         MovePerSec_Min;                                    // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MovePerSec_Max;                                    // 0x0144(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSplineSet;                                       // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ArriveEnd;                                         // 0x0149(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NotRotation_;                                      // 0x014A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_632F[0x1];                                     // 0x014B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OffsetZ;                                           // 0x014C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Sweep;                                             // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ManualTick;                                        // 0x0151(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TickEnable;                                        // 0x0152(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EvtDis_ArriveSplineEnd__DelegateSignature(class UBPC_CharaSplineMover_C* ThisComponent);
	void EvtDis_Stop__DelegateSignature(class UBPC_CharaSplineMover_C* ThisComponent);
	void ExecuteUbergraph_BPC_CharaSplineMover(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void SetSplinePos(float Param_SplinePos, bool Move);
	void TickManual(float Param_DeltaSec);
	void Destroy();
	void ReceiveBeginPlay();
	void StartWalk();
	void StopWalk();
	void SetSpeed(float Param_MovePerSec, float Param_AccelPerSec);
	void CalcSplinePos();
	void CalcNextSplinePos(float* Param_NextPos);
	void SetSplineComponent(class USplineComponent* Param_SplineComponent);
	void SetFly(bool Param_IsFly);
	void SetSpeedLimit(float Param_MovePerSec_Min, float Param_MovePerSec_Max);
	void SetCapsuleTraceParam(float Param_TraceRadius, float Param_TraceHalfHeight, const struct FVector& Param_TraceLocalLocation);
	void SetWalkReverse(bool Param_IsWalkReverse);
	void GetDistanceAlongSplineFromWolrdLocation(const struct FVector& WorldLocation, float* Distance);
	void NotRotation(bool Param_NotRotation);
	void SetOffsetZ(float Param_OffsetZ);
	void SetSweep(bool Param_Sweep);
	void SetManualTick(bool Manual);
	void SetTickEnable(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_CharaSplineMover_C">();
	}
	static class UBPC_CharaSplineMover_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPC_CharaSplineMover_C>();
	}
};
static_assert(alignof(UBPC_CharaSplineMover_C) == 0x000008, "Wrong alignment on UBPC_CharaSplineMover_C");
static_assert(sizeof(UBPC_CharaSplineMover_C) == 0x000158, "Wrong size on UBPC_CharaSplineMover_C");
static_assert(offsetof(UBPC_CharaSplineMover_C, UberGraphFrame) == 0x0000B0, "Member 'UBPC_CharaSplineMover_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, SplineComponent) == 0x0000B8, "Member 'UBPC_CharaSplineMover_C::SplineComponent' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, Chara) == 0x0000C0, "Member 'UBPC_CharaSplineMover_C::Chara' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, SplineLength) == 0x0000C8, "Member 'UBPC_CharaSplineMover_C::SplineLength' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, IsSplineLoop) == 0x0000CC, "Member 'UBPC_CharaSplineMover_C::IsSplineLoop' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, MovePerSec) == 0x0000D0, "Member 'UBPC_CharaSplineMover_C::MovePerSec' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, DeltaSec) == 0x0000D4, "Member 'UBPC_CharaSplineMover_C::DeltaSec' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, IsWalk) == 0x0000D8, "Member 'UBPC_CharaSplineMover_C::IsWalk' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, MovementComp) == 0x0000E0, "Member 'UBPC_CharaSplineMover_C::MovementComp' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, SplinePointNum) == 0x0000E8, "Member 'UBPC_CharaSplineMover_C::SplinePointNum' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, SplinePos) == 0x0000EC, "Member 'UBPC_CharaSplineMover_C::SplinePos' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, IsWalkReverse) == 0x0000F0, "Member 'UBPC_CharaSplineMover_C::IsWalkReverse' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, NextPos) == 0x0000F4, "Member 'UBPC_CharaSplineMover_C::NextPos' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, EvtDis_ArriveSplineEnd) == 0x000100, "Member 'UBPC_CharaSplineMover_C::EvtDis_ArriveSplineEnd' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, IsFly) == 0x000110, "Member 'UBPC_CharaSplineMover_C::IsFly' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, IsSplineChange) == 0x000111, "Member 'UBPC_CharaSplineMover_C::IsSplineChange' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, TraceRadius) == 0x000114, "Member 'UBPC_CharaSplineMover_C::TraceRadius' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, TraceHalfHeight) == 0x000118, "Member 'UBPC_CharaSplineMover_C::TraceHalfHeight' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, TraceLocalLocation) == 0x00011C, "Member 'UBPC_CharaSplineMover_C::TraceLocalLocation' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, AccelPerSec) == 0x000128, "Member 'UBPC_CharaSplineMover_C::AccelPerSec' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, EvtDis_Stop) == 0x000130, "Member 'UBPC_CharaSplineMover_C::EvtDis_Stop' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, MovePerSec_Min) == 0x000140, "Member 'UBPC_CharaSplineMover_C::MovePerSec_Min' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, MovePerSec_Max) == 0x000144, "Member 'UBPC_CharaSplineMover_C::MovePerSec_Max' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, IsSplineSet) == 0x000148, "Member 'UBPC_CharaSplineMover_C::IsSplineSet' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, ArriveEnd) == 0x000149, "Member 'UBPC_CharaSplineMover_C::ArriveEnd' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, NotRotation_) == 0x00014A, "Member 'UBPC_CharaSplineMover_C::NotRotation_' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, OffsetZ) == 0x00014C, "Member 'UBPC_CharaSplineMover_C::OffsetZ' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, Sweep) == 0x000150, "Member 'UBPC_CharaSplineMover_C::Sweep' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, ManualTick) == 0x000151, "Member 'UBPC_CharaSplineMover_C::ManualTick' has a wrong offset!");
static_assert(offsetof(UBPC_CharaSplineMover_C, TickEnable) == 0x000152, "Member 'UBPC_CharaSplineMover_C::TickEnable' has a wrong offset!");

}

