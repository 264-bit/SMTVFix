#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EncountArea_GiveUp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MapEventHit_Type_SHit_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EncountArea_GiveUp.BP_EncountArea_GiveUp_C
// 0x0018 (0x03A8 - 0x0390)
class ABP_EncountArea_GiveUp_C final : public AMapEventHit_Type_SHit_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_EncountArea_GiveUp_C;            // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                         Temp;                                              // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_EncountArea_GiveUp(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void Giveup(class AActor* Pawn, bool* Success);
	void BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EncountArea_GiveUp_C">();
	}
	static class ABP_EncountArea_GiveUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EncountArea_GiveUp_C>();
	}
};
static_assert(alignof(ABP_EncountArea_GiveUp_C) == 0x000008, "Wrong alignment on ABP_EncountArea_GiveUp_C");
static_assert(sizeof(ABP_EncountArea_GiveUp_C) == 0x0003A8, "Wrong size on ABP_EncountArea_GiveUp_C");
static_assert(offsetof(ABP_EncountArea_GiveUp_C, UberGraphFrame_BP_EncountArea_GiveUp_C) == 0x000390, "Member 'ABP_EncountArea_GiveUp_C::UberGraphFrame_BP_EncountArea_GiveUp_C' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_GiveUp_C, Temp) == 0x000398, "Member 'ABP_EncountArea_GiveUp_C::Temp' has a wrong offset!");

}

