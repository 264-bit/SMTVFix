#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EncountArea_OptionHit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MapEventHit_Type_SHit_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EncountArea_OptionHit.BP_EncountArea_OptionHit_C
// 0x0058 (0x03E8 - 0x0390)
class ABP_EncountArea_OptionHit_C final : public AMapEventHit_Type_SHit_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_EncountArea_OptionHit_C;         // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsInner;                                           // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8DEE[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EvtDis_Action;                                     // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EvtDis_Out;                                        // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Action;                                            // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSphereHit;                                       // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8DEF[0x6];                                     // 0x03C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USphereComponent*                       SphereHit;                                         // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCylinderHit;                                     // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8DF0[0x7];                                     // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCapsuleComponent*                      CapsuleHit;                                        // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CapsuleOverlap;                                    // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BoxOverlap;                                        // 0x03E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EvtDis_Action__DelegateSignature();
	void EvtDis_Out__DelegateSignature();
	void ExecuteUbergraph_BP_EncountArea_OptionHit(int32 EntryPoint);
	void OnCapsuleComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnCapsuleComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnSphereComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnSphereComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Hit_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UserConstructionScript();
	void CalcCapsuleOverlap(bool* Overlap);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EncountArea_OptionHit_C">();
	}
	static class ABP_EncountArea_OptionHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EncountArea_OptionHit_C>();
	}
};
static_assert(alignof(ABP_EncountArea_OptionHit_C) == 0x000008, "Wrong alignment on ABP_EncountArea_OptionHit_C");
static_assert(sizeof(ABP_EncountArea_OptionHit_C) == 0x0003E8, "Wrong size on ABP_EncountArea_OptionHit_C");
static_assert(offsetof(ABP_EncountArea_OptionHit_C, UberGraphFrame_BP_EncountArea_OptionHit_C) == 0x000390, "Member 'ABP_EncountArea_OptionHit_C::UberGraphFrame_BP_EncountArea_OptionHit_C' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_OptionHit_C, IsInner) == 0x000398, "Member 'ABP_EncountArea_OptionHit_C::IsInner' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_OptionHit_C, EvtDis_Action) == 0x0003A0, "Member 'ABP_EncountArea_OptionHit_C::EvtDis_Action' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_OptionHit_C, EvtDis_Out) == 0x0003B0, "Member 'ABP_EncountArea_OptionHit_C::EvtDis_Out' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_OptionHit_C, Action) == 0x0003C0, "Member 'ABP_EncountArea_OptionHit_C::Action' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_OptionHit_C, IsSphereHit) == 0x0003C1, "Member 'ABP_EncountArea_OptionHit_C::IsSphereHit' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_OptionHit_C, SphereHit) == 0x0003C8, "Member 'ABP_EncountArea_OptionHit_C::SphereHit' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_OptionHit_C, IsCylinderHit) == 0x0003D0, "Member 'ABP_EncountArea_OptionHit_C::IsCylinderHit' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_OptionHit_C, CapsuleHit) == 0x0003D8, "Member 'ABP_EncountArea_OptionHit_C::CapsuleHit' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_OptionHit_C, CapsuleOverlap) == 0x0003E0, "Member 'ABP_EncountArea_OptionHit_C::CapsuleOverlap' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_OptionHit_C, BoxOverlap) == 0x0003E1, "Member 'ABP_EncountArea_OptionHit_C::BoxOverlap' has a wrong offset!");

}

