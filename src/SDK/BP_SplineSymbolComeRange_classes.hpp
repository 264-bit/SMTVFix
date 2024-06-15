#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineSymbolComeRange

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SplineSymbolComeRange.BP_SplineSymbolComeRange_C
// 0x0040 (0x0260 - 0x0220)
class ABP_SplineSymbolComeRange_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   BottomPlane;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   TopPlane;                                          // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       SplinePlane;                                       // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeightMax;                                         // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeightMin;                                         // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TraceCheck;                                        // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TopAndBottomView;                                  // 0x0259(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NumberView;                                        // 0x025A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          SplineClockwise;                                   // 0x025B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_SplineSymbolComeRange(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void CheckAreaIN(const struct FVector& Pos, float AddHitSize, bool* AreaIN);
	void GetMinMaxLocation(float* MinX, float* MaxX, float* MinY, float* MaxY);
	void CopySplineData(class USplineComponent* SrcSpline, class USplineComponent* DstSpline, bool PosZ_Fix, float PosZ);
	void CreatePlaneSpline();
	void DestroyPlaneSpline();
	void LineView(bool Trace);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SplineSymbolComeRange_C">();
	}
	static class ABP_SplineSymbolComeRange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SplineSymbolComeRange_C>();
	}
};
static_assert(alignof(ABP_SplineSymbolComeRange_C) == 0x000008, "Wrong alignment on ABP_SplineSymbolComeRange_C");
static_assert(sizeof(ABP_SplineSymbolComeRange_C) == 0x000260, "Wrong size on ABP_SplineSymbolComeRange_C");
static_assert(offsetof(ABP_SplineSymbolComeRange_C, UberGraphFrame) == 0x000220, "Member 'ABP_SplineSymbolComeRange_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SplineSymbolComeRange_C, BottomPlane) == 0x000228, "Member 'ABP_SplineSymbolComeRange_C::BottomPlane' has a wrong offset!");
static_assert(offsetof(ABP_SplineSymbolComeRange_C, TopPlane) == 0x000230, "Member 'ABP_SplineSymbolComeRange_C::TopPlane' has a wrong offset!");
static_assert(offsetof(ABP_SplineSymbolComeRange_C, Spline) == 0x000238, "Member 'ABP_SplineSymbolComeRange_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_SplineSymbolComeRange_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_SplineSymbolComeRange_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SplineSymbolComeRange_C, SplinePlane) == 0x000248, "Member 'ABP_SplineSymbolComeRange_C::SplinePlane' has a wrong offset!");
static_assert(offsetof(ABP_SplineSymbolComeRange_C, HeightMax) == 0x000250, "Member 'ABP_SplineSymbolComeRange_C::HeightMax' has a wrong offset!");
static_assert(offsetof(ABP_SplineSymbolComeRange_C, HeightMin) == 0x000254, "Member 'ABP_SplineSymbolComeRange_C::HeightMin' has a wrong offset!");
static_assert(offsetof(ABP_SplineSymbolComeRange_C, TraceCheck) == 0x000258, "Member 'ABP_SplineSymbolComeRange_C::TraceCheck' has a wrong offset!");
static_assert(offsetof(ABP_SplineSymbolComeRange_C, TopAndBottomView) == 0x000259, "Member 'ABP_SplineSymbolComeRange_C::TopAndBottomView' has a wrong offset!");
static_assert(offsetof(ABP_SplineSymbolComeRange_C, NumberView) == 0x00025A, "Member 'ABP_SplineSymbolComeRange_C::NumberView' has a wrong offset!");
static_assert(offsetof(ABP_SplineSymbolComeRange_C, SplineClockwise) == 0x00025B, "Member 'ABP_SplineSymbolComeRange_C::SplineClockwise' has a wrong offset!");

}
