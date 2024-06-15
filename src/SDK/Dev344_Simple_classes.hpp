#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev344_Simple

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DevilBaseLight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Dev344_Simple.Dev344_Simple_C
// 0x0038 (0x0AB8 - 0x0A80)
class ADev344_Simple_C final : public ADevilBaseLight_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Dev344_Simple_C;                    // 0x0A80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpringArmComponent*                    SpringArm_Up;                                      // 0x0A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ParentRotationScene_C*              BP_ParentRotationScene;                            // 0x0A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaStepSmootherComponent_C*          StepSmoother;                                      // 0x0A98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaHeadComponent_C*                  Head;                                              // 0x0AA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaLegComponent_C*                   RightLeg;                                          // 0x0AA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaLegComponent_C*                   LeftLeg;                                           // 0x0AB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Dev344_Simple(int32 EntryPoint);
	void BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Dev344_Simple_C">();
	}
	static class ADev344_Simple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADev344_Simple_C>();
	}
};
static_assert(alignof(ADev344_Simple_C) == 0x000008, "Wrong alignment on ADev344_Simple_C");
static_assert(sizeof(ADev344_Simple_C) == 0x000AB8, "Wrong size on ADev344_Simple_C");
static_assert(offsetof(ADev344_Simple_C, UberGraphFrame_Dev344_Simple_C) == 0x000A80, "Member 'ADev344_Simple_C::UberGraphFrame_Dev344_Simple_C' has a wrong offset!");
static_assert(offsetof(ADev344_Simple_C, SpringArm_Up) == 0x000A88, "Member 'ADev344_Simple_C::SpringArm_Up' has a wrong offset!");
static_assert(offsetof(ADev344_Simple_C, BP_ParentRotationScene) == 0x000A90, "Member 'ADev344_Simple_C::BP_ParentRotationScene' has a wrong offset!");
static_assert(offsetof(ADev344_Simple_C, StepSmoother) == 0x000A98, "Member 'ADev344_Simple_C::StepSmoother' has a wrong offset!");
static_assert(offsetof(ADev344_Simple_C, Head) == 0x000AA0, "Member 'ADev344_Simple_C::Head' has a wrong offset!");
static_assert(offsetof(ADev344_Simple_C, RightLeg) == 0x000AA8, "Member 'ADev344_Simple_C::RightLeg' has a wrong offset!");
static_assert(offsetof(ADev344_Simple_C, LeftLeg) == 0x000AB0, "Member 'ADev344_Simple_C::LeftLeg' has a wrong offset!");

}

