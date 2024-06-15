#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleHitStopCtrl

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BattleSkillHitStop_T_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleHitStopCtrl.BattleHitStopCtrl_C
// 0x0150 (0x0370 - 0x0220)
class ABattleHitStopCtrl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HitStopTimeLine_PostProcFogColor_43423AD64391B6CA0C8D6EB332327EE7; // 0x0230(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HitStopTimeLine_YugamiSilhouetteColor_43423AD64391B6CA0C8D6EB332327EE7; // 0x0240(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HitStopTimeLine_YugamiFresnelColor_43423AD64391B6CA0C8D6EB332327EE7; // 0x0250(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitStopTimeLine_YugamiFresnel_43423AD64391B6CA0C8D6EB332327EE7; // 0x0260(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HitStopTimeLine_CameraFovy_43423AD64391B6CA0C8D6EB332327EE7; // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HitStopTimeLine_Weight_43423AD64391B6CA0C8D6EB332327EE7; // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HitStopTimeLine_Dilation_43423AD64391B6CA0C8D6EB332327EE7; // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            HitStopTimeLine__Direction_43423AD64391B6CA0C8D6EB332327EE7; // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E8F[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     HitStopTimeLine;                                   // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleMain_C>     BI_BattleMain;                                     // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                         M_OriginCameraFovy;                                // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_GlobalTimeDilationBeforeHitStop;                 // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCallWhiteOut;                                    // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5E90[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PlayRate;                                          // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         WhiteOutDeadTarget;                                // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsHeroAlive;                                       // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5E91[0x3];                                     // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBattleSkillHitStop_T                  HItStopParam_Default;                              // 0x02B0(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBattleSkillHitStop_T                  HItStopParam_WhiteOut;                             // 0x02E8(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EndHitStopCallback;                                // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsOverrideHitStopParam;                            // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5E92[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBattleSkillHitStop_T                  OverrideHItStopParam;                              // 0x0338(0x0038)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void EndHitStopCallback__DelegateSignature();
	void ExecuteUbergraph_BattleHitStopCtrl(int32 EntryPoint);
	void EndHitStop();
	void BeginHitStop();
	void ReceiveBeginPlay();
	void HitStopTimeLine__WhiteOut__EventFunc();
	void HitStopTimeLine__PlayDeadVoice__EventFunc();
	void HitStopTimeLine__UpdateFunc();
	void HitStopTimeLine__FinishedFunc();
	void InitTimeLine();
	void SetOverrideHitStopParam(const struct FBattleSkillHitStop_T& OverrideParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleHitStopCtrl_C">();
	}
	static class ABattleHitStopCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABattleHitStopCtrl_C>();
	}
};
static_assert(alignof(ABattleHitStopCtrl_C) == 0x000008, "Wrong alignment on ABattleHitStopCtrl_C");
static_assert(sizeof(ABattleHitStopCtrl_C) == 0x000370, "Wrong size on ABattleHitStopCtrl_C");
static_assert(offsetof(ABattleHitStopCtrl_C, UberGraphFrame) == 0x000220, "Member 'ABattleHitStopCtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, DefaultSceneRoot) == 0x000228, "Member 'ABattleHitStopCtrl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, HitStopTimeLine_PostProcFogColor_43423AD64391B6CA0C8D6EB332327EE7) == 0x000230, "Member 'ABattleHitStopCtrl_C::HitStopTimeLine_PostProcFogColor_43423AD64391B6CA0C8D6EB332327EE7' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, HitStopTimeLine_YugamiSilhouetteColor_43423AD64391B6CA0C8D6EB332327EE7) == 0x000240, "Member 'ABattleHitStopCtrl_C::HitStopTimeLine_YugamiSilhouetteColor_43423AD64391B6CA0C8D6EB332327EE7' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, HitStopTimeLine_YugamiFresnelColor_43423AD64391B6CA0C8D6EB332327EE7) == 0x000250, "Member 'ABattleHitStopCtrl_C::HitStopTimeLine_YugamiFresnelColor_43423AD64391B6CA0C8D6EB332327EE7' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, HitStopTimeLine_YugamiFresnel_43423AD64391B6CA0C8D6EB332327EE7) == 0x000260, "Member 'ABattleHitStopCtrl_C::HitStopTimeLine_YugamiFresnel_43423AD64391B6CA0C8D6EB332327EE7' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, HitStopTimeLine_CameraFovy_43423AD64391B6CA0C8D6EB332327EE7) == 0x00026C, "Member 'ABattleHitStopCtrl_C::HitStopTimeLine_CameraFovy_43423AD64391B6CA0C8D6EB332327EE7' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, HitStopTimeLine_Weight_43423AD64391B6CA0C8D6EB332327EE7) == 0x000270, "Member 'ABattleHitStopCtrl_C::HitStopTimeLine_Weight_43423AD64391B6CA0C8D6EB332327EE7' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, HitStopTimeLine_Dilation_43423AD64391B6CA0C8D6EB332327EE7) == 0x000274, "Member 'ABattleHitStopCtrl_C::HitStopTimeLine_Dilation_43423AD64391B6CA0C8D6EB332327EE7' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, HitStopTimeLine__Direction_43423AD64391B6CA0C8D6EB332327EE7) == 0x000278, "Member 'ABattleHitStopCtrl_C::HitStopTimeLine__Direction_43423AD64391B6CA0C8D6EB332327EE7' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, HitStopTimeLine) == 0x000280, "Member 'ABattleHitStopCtrl_C::HitStopTimeLine' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, BI_BattleMain) == 0x000288, "Member 'ABattleHitStopCtrl_C::BI_BattleMain' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, M_OriginCameraFovy) == 0x000298, "Member 'ABattleHitStopCtrl_C::M_OriginCameraFovy' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, M_GlobalTimeDilationBeforeHitStop) == 0x00029C, "Member 'ABattleHitStopCtrl_C::M_GlobalTimeDilationBeforeHitStop' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, IsCallWhiteOut) == 0x0002A0, "Member 'ABattleHitStopCtrl_C::IsCallWhiteOut' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, PlayRate) == 0x0002A4, "Member 'ABattleHitStopCtrl_C::PlayRate' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, WhiteOutDeadTarget) == 0x0002A8, "Member 'ABattleHitStopCtrl_C::WhiteOutDeadTarget' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, IsHeroAlive) == 0x0002AC, "Member 'ABattleHitStopCtrl_C::IsHeroAlive' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, HItStopParam_Default) == 0x0002B0, "Member 'ABattleHitStopCtrl_C::HItStopParam_Default' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, HItStopParam_WhiteOut) == 0x0002E8, "Member 'ABattleHitStopCtrl_C::HItStopParam_WhiteOut' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, EndHitStopCallback) == 0x000320, "Member 'ABattleHitStopCtrl_C::EndHitStopCallback' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, IsOverrideHitStopParam) == 0x000330, "Member 'ABattleHitStopCtrl_C::IsOverrideHitStopParam' has a wrong offset!");
static_assert(offsetof(ABattleHitStopCtrl_C, OverrideHItStopParam) == 0x000338, "Member 'ABattleHitStopCtrl_C::OverrideHItStopParam' has a wrong offset!");

}

