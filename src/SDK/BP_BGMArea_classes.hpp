#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BGMArea

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BGMArea.BP_BGMArea_C
// 0x0030 (0x0250 - 0x0220)
class ABP_BGMArea_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          OuterBox;                                          // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InnerBox;                                          // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          Cue;                                               // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Priority;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFadeType                                     FadeType;                                          // 0x024C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInArea;                                           // 0x024D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_BGMArea(int32 EntryPoint);
	void DeactivateBGMArea();
	void ActivateBGMArea();
	void BndEvt__OuterBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__InnerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BGMArea_C">();
	}
	static class ABP_BGMArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BGMArea_C>();
	}
};
static_assert(alignof(ABP_BGMArea_C) == 0x000008, "Wrong alignment on ABP_BGMArea_C");
static_assert(sizeof(ABP_BGMArea_C) == 0x000250, "Wrong size on ABP_BGMArea_C");
static_assert(offsetof(ABP_BGMArea_C, UberGraphFrame) == 0x000220, "Member 'ABP_BGMArea_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BGMArea_C, OuterBox) == 0x000228, "Member 'ABP_BGMArea_C::OuterBox' has a wrong offset!");
static_assert(offsetof(ABP_BGMArea_C, InnerBox) == 0x000230, "Member 'ABP_BGMArea_C::InnerBox' has a wrong offset!");
static_assert(offsetof(ABP_BGMArea_C, Root) == 0x000238, "Member 'ABP_BGMArea_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_BGMArea_C, Cue) == 0x000240, "Member 'ABP_BGMArea_C::Cue' has a wrong offset!");
static_assert(offsetof(ABP_BGMArea_C, Priority) == 0x000248, "Member 'ABP_BGMArea_C::Priority' has a wrong offset!");
static_assert(offsetof(ABP_BGMArea_C, FadeType) == 0x00024C, "Member 'ABP_BGMArea_C::FadeType' has a wrong offset!");
static_assert(offsetof(ABP_BGMArea_C, bInArea) == 0x00024D, "Member 'ABP_BGMArea_C::bInArea' has a wrong offset!");

}

