#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapEventHit_Type_INOUT

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MapEventHit_Core_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MapEventHit_Type_INOUT.MapEventHit_Type_INOUT_C
// 0x0038 (0x03B8 - 0x0380)
class AMapEventHit_Type_INOUT_C : public AMapEventHit_Core_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MapEventHit_Type_INOUT_C;           // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        MEC_TASK_OUT;                                      // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable_0;                                          // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8970[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        OutTask;                                           // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMEC_BaseTask_C*>                OutTaskList;                                       // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         TaskIndexOut;                                      // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Overlap;                                           // 0x03B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsHit;                                             // 0x03B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bRecalc_AfterLoaded;                               // 0x03B6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void FlagCh(bool* OK);
	void ReceiveBeginPlay();
	void BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void StartTaskOut();
	void TaskManagerOut();
	void NextCallOutTask();
	void ManualBeginOverlap();
	void RecalcOverlap();
	void OnUnPause_AfterLoad();
	void ManualEndOverlap();
	void ExecuteUbergraph_MapEventHit_Type_INOUT(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapEventHit_Type_INOUT_C">();
	}
	static class AMapEventHit_Type_INOUT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMapEventHit_Type_INOUT_C>();
	}
};
static_assert(alignof(AMapEventHit_Type_INOUT_C) == 0x000008, "Wrong alignment on AMapEventHit_Type_INOUT_C");
static_assert(sizeof(AMapEventHit_Type_INOUT_C) == 0x0003B8, "Wrong size on AMapEventHit_Type_INOUT_C");
static_assert(offsetof(AMapEventHit_Type_INOUT_C, UberGraphFrame_MapEventHit_Type_INOUT_C) == 0x000380, "Member 'AMapEventHit_Type_INOUT_C::UberGraphFrame_MapEventHit_Type_INOUT_C' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_INOUT_C, MEC_TASK_OUT) == 0x000388, "Member 'AMapEventHit_Type_INOUT_C::MEC_TASK_OUT' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_INOUT_C, Enable_0) == 0x000390, "Member 'AMapEventHit_Type_INOUT_C::Enable_0' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_INOUT_C, OutTask) == 0x000398, "Member 'AMapEventHit_Type_INOUT_C::OutTask' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_INOUT_C, OutTaskList) == 0x0003A0, "Member 'AMapEventHit_Type_INOUT_C::OutTaskList' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_INOUT_C, TaskIndexOut) == 0x0003B0, "Member 'AMapEventHit_Type_INOUT_C::TaskIndexOut' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_INOUT_C, Overlap) == 0x0003B4, "Member 'AMapEventHit_Type_INOUT_C::Overlap' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_INOUT_C, IsHit) == 0x0003B5, "Member 'AMapEventHit_Type_INOUT_C::IsHit' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_INOUT_C, bRecalc_AfterLoaded) == 0x0003B6, "Member 'AMapEventHit_Type_INOUT_C::bRecalc_AfterLoaded' has a wrong offset!");

}
