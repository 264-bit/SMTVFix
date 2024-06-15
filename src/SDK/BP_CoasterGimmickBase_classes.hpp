#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CoasterGimmickBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MapEventHit_Type_AAction_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CoasterGimmickBase.BP_CoasterGimmickBase_C
// 0x0098 (0x0468 - 0x03D0)
class ABP_CoasterGimmickBase_C : public AMapEventHit_Type_AAction_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CoasterGimmickBase_C;            // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                        Decal;                                             // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Cm_420_000;                                        // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CameraLook;                                        // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CameraPos;                                         // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_ResidentSound_C*                   BPC_ResidentSound;                                 // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        StopPoint;                                         // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EvtDis_Action;                                     // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_CoasterSplineBase_C*                CoasterSpline;                                     // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       DMIs;                                              // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             EvtDis_EndFoundGimmick;                            // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EvtDis_EndFadeOut_FoundGimmick;                    // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AActor*                                 NaviGimmickActor;                                  // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EvtDis_Action__DelegateSignature();
	void EvtDis_EndFoundGimmick__DelegateSignature();
	void EvtDis_EndFadeOut_FoundGimmick__DelegateSignature();
	void ExecuteUbergraph_BP_CoasterGimmickBase(int32 EntryPoint);
	void Init();
	void FoundGimmick();
	void SetMeshParam(bool Open, bool Animation);
	void MakeDMI();
	void GetOtherGimmick(class ABP_CoasterGimmickBase_C** Gimmick);
	void CheckActive(bool* Active);
	void CheckView(bool* View);
	void CalcIconDataID();
	void OpenIcon();
	void ProcRelay(bool RideOn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CoasterGimmickBase_C">();
	}
	static class ABP_CoasterGimmickBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CoasterGimmickBase_C>();
	}
};
static_assert(alignof(ABP_CoasterGimmickBase_C) == 0x000008, "Wrong alignment on ABP_CoasterGimmickBase_C");
static_assert(sizeof(ABP_CoasterGimmickBase_C) == 0x000468, "Wrong size on ABP_CoasterGimmickBase_C");
static_assert(offsetof(ABP_CoasterGimmickBase_C, UberGraphFrame_BP_CoasterGimmickBase_C) == 0x0003D0, "Member 'ABP_CoasterGimmickBase_C::UberGraphFrame_BP_CoasterGimmickBase_C' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, Decal) == 0x0003D8, "Member 'ABP_CoasterGimmickBase_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, Cm_420_000) == 0x0003E0, "Member 'ABP_CoasterGimmickBase_C::Cm_420_000' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, CameraLook) == 0x0003E8, "Member 'ABP_CoasterGimmickBase_C::CameraLook' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, CameraPos) == 0x0003F0, "Member 'ABP_CoasterGimmickBase_C::CameraPos' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, BPC_ResidentSound) == 0x0003F8, "Member 'ABP_CoasterGimmickBase_C::BPC_ResidentSound' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, Arrow) == 0x000400, "Member 'ABP_CoasterGimmickBase_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, StaticMesh) == 0x000408, "Member 'ABP_CoasterGimmickBase_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, StopPoint) == 0x000410, "Member 'ABP_CoasterGimmickBase_C::StopPoint' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, EvtDis_Action) == 0x000418, "Member 'ABP_CoasterGimmickBase_C::EvtDis_Action' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, CoasterSpline) == 0x000428, "Member 'ABP_CoasterGimmickBase_C::CoasterSpline' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, DMIs) == 0x000430, "Member 'ABP_CoasterGimmickBase_C::DMIs' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, EvtDis_EndFoundGimmick) == 0x000440, "Member 'ABP_CoasterGimmickBase_C::EvtDis_EndFoundGimmick' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, EvtDis_EndFadeOut_FoundGimmick) == 0x000450, "Member 'ABP_CoasterGimmickBase_C::EvtDis_EndFadeOut_FoundGimmick' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmickBase_C, NaviGimmickActor) == 0x000460, "Member 'ABP_CoasterGimmickBase_C::NaviGimmickActor' has a wrong offset!");

}

