#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SphereFadeArea

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SphereFadeArea.BP_SphereFadeArea_C
// 0x0038 (0x0258 - 0x0220)
class ABP_SphereFadeArea_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       OuterSphere;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       InnerSphere;                                       // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         InnerRadius;                                       // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OuterRadius;                                       // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOverlapInnerSphere;                               // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bOverlapOuterSphere;                               // 0x0251(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_205B[0x2];                                     // 0x0252(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InnerScale;                                        // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SphereFadeArea(int32 EntryPoint);
	void ReceiveBeginPlay();
	void BndEvt__OuterSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__OuterSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__InnerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__InnerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UserConstructionScript();
	void GetFadeRate(float* FadeRate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SphereFadeArea_C">();
	}
	static class ABP_SphereFadeArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SphereFadeArea_C>();
	}
};
static_assert(alignof(ABP_SphereFadeArea_C) == 0x000008, "Wrong alignment on ABP_SphereFadeArea_C");
static_assert(sizeof(ABP_SphereFadeArea_C) == 0x000258, "Wrong size on ABP_SphereFadeArea_C");
static_assert(offsetof(ABP_SphereFadeArea_C, UberGraphFrame) == 0x000220, "Member 'ABP_SphereFadeArea_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SphereFadeArea_C, Billboard) == 0x000228, "Member 'ABP_SphereFadeArea_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_SphereFadeArea_C, Scene) == 0x000230, "Member 'ABP_SphereFadeArea_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_SphereFadeArea_C, OuterSphere) == 0x000238, "Member 'ABP_SphereFadeArea_C::OuterSphere' has a wrong offset!");
static_assert(offsetof(ABP_SphereFadeArea_C, InnerSphere) == 0x000240, "Member 'ABP_SphereFadeArea_C::InnerSphere' has a wrong offset!");
static_assert(offsetof(ABP_SphereFadeArea_C, InnerRadius) == 0x000248, "Member 'ABP_SphereFadeArea_C::InnerRadius' has a wrong offset!");
static_assert(offsetof(ABP_SphereFadeArea_C, OuterRadius) == 0x00024C, "Member 'ABP_SphereFadeArea_C::OuterRadius' has a wrong offset!");
static_assert(offsetof(ABP_SphereFadeArea_C, bOverlapInnerSphere) == 0x000250, "Member 'ABP_SphereFadeArea_C::bOverlapInnerSphere' has a wrong offset!");
static_assert(offsetof(ABP_SphereFadeArea_C, bOverlapOuterSphere) == 0x000251, "Member 'ABP_SphereFadeArea_C::bOverlapOuterSphere' has a wrong offset!");
static_assert(offsetof(ABP_SphereFadeArea_C, InnerScale) == 0x000254, "Member 'ABP_SphereFadeArea_C::InnerScale' has a wrong offset!");

}

