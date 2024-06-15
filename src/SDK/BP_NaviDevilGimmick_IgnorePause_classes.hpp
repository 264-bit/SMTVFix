#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NaviDevilGimmick_IgnorePause

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MapEventHit_Type_INOUT_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NaviDevilGimmick_IgnorePause.BP_NaviDevilGimmick_IgnorePause_C
// 0x00F0 (0x04A8 - 0x03B8)
class ABP_NaviDevilGimmick_IgnorePause_C : public AMapEventHit_Type_INOUT_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_NaviDevilGimmick_IgnorePause_C;  // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   FollowBox;                                         // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          FollowHit;                                         // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         ManualMapID;                                       // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseManualMapID;                                    // 0x03DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97FC[0x3];                                     // 0x03DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_BP_NaviDevilGimmick_IgnorePause_C;           // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CalcAll;                                           // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97FD[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CategoryId;                                        // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExistNum_Min;                                      // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExistNum_Max;                                      // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SaveId;                                            // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CalcSaveID;                                        // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97FE[0x3];                                     // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OutHit_AddSize;                                    // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SameCategoryNum;                                   // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97FF[0x4];                                     // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 NaviMovePoint;                                     // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FollowHitSize;                                     // 0x0410(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SafeZoneID;                                        // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ManualSafeZone;                                    // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9800[0x7];                                     // 0x0421(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_NaviDevilGimmick_Option_C*>  IgnoreBoxList;                                     // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                          IsIgnoreHit;                                       // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsActive;                                          // 0x0439(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsShowIcon;                                        // 0x043A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9801[0x5];                                     // 0x043B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EvtDis_GoalGimmick;                                // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EvtDis_LeaveTarget;                                // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBPC_CharaFollower_C*                   FollowerComp;                                      // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Actors;                                            // 0x0470(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          HitView_Inner;                                     // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9802[0x7];                                     // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EventNaviDevil_C*                   EventNavi;                                         // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TutorialGimmick;                                   // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFoundHit;                                        // 0x0491(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFollowHit;                                       // 0x0492(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9803[0x5];                                     // 0x0493(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CoasterGimmickBase_C*               CoasterGimmick;                                    // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CheckObstacle_WhenGotoGimmick;                     // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CheckGotoGimmickMoving;                            // 0x04A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ViewMermaidEffectRot;                              // 0x04A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void EvtDis_GoalGimmick__DelegateSignature();
	void EvtDis_LeaveTarget__DelegateSignature();
	void ExecuteUbergraph_BP_NaviDevilGimmick_IgnorePause(int32 EntryPoint);
	void EndOverlap_FollowHit();
	void BeginOverlap_FollowHit();
	void Evt_WarpBasePos(class AActor* Target, class UBPC_CharaFollower_C* This);
	void EvtDis_EndEvent_();
	void EvtDis_LeaveTarget_(class AActor* Target, class UBPC_CharaFollower_C* This);
	void EvtDis_GoalGimmick_(class AActor* Target, class UBPC_CharaFollower_C* This);
	void EvtDis_EndOverlap_();
	void EvtDis_BeginOverlap_();
	void BndEvt__FollowHit_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__FollowHit_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BPI_SetNaviGimmickDebugView(bool View);
	void BPI_SetNaviGimmickActive(bool Active);
	void EventHitOUT();
	void EventHitIN();
	void ReceiveBeginPlay();
	void OnLoaded_3040A93845BE129A9498D9B94AC20E0D(class UObject* Loaded);
	void OnLoaded_A2400B66439F28435BD53BB0D9184B44(class UObject* Loaded);
	void UserConstructionScript();
	void CalcExistNum();
	void CalcSave();
	void DebugText();
	void CheckIgnoreBox(bool* Lock);
	void ShowIcon();
	void HideIcon();
	void GetNaviParam(struct FNaviDevilParam_st* Param);
	void CallOuterTutorial();
	void CallInnerTutorial();
	void CallInnerMovedTutorial();
	void LineTrace(const struct FVector& Start, const struct FVector& End, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool* Param_Hit);
	void GetAroundLocation(const struct FVector& BaseLocation, const struct FVector& BaseDir, float Distance, int32 LocationNum, TArray<struct FVector>* LocationList);
	void BPI_GetNaviGimmickExistNum(int32* Num);
	void BPI_GetNaviGimmickCategory(int32* Category);
	void BPI_GetNaviGimmickSaveID(int32* Param_SaveId);
	void BPI_CanExistNaviGimmick(bool* CanExist);
	void BPI_IsCheckObstacle_WhenGotoGimmick(bool* Param_CheckObstacle_WhenGotoGimmick);
	void BPI_IsCheckGotoGimmickMoving(bool* Param_CheckGotoGimmickMoving);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NaviDevilGimmick_IgnorePause_C">();
	}
	static class ABP_NaviDevilGimmick_IgnorePause_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NaviDevilGimmick_IgnorePause_C>();
	}
};
static_assert(alignof(ABP_NaviDevilGimmick_IgnorePause_C) == 0x000008, "Wrong alignment on ABP_NaviDevilGimmick_IgnorePause_C");
static_assert(sizeof(ABP_NaviDevilGimmick_IgnorePause_C) == 0x0004A8, "Wrong size on ABP_NaviDevilGimmick_IgnorePause_C");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, UberGraphFrame_BP_NaviDevilGimmick_IgnorePause_C) == 0x0003B8, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::UberGraphFrame_BP_NaviDevilGimmick_IgnorePause_C' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, FollowBox) == 0x0003C0, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::FollowBox' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, FollowHit) == 0x0003C8, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::FollowHit' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, TextRender) == 0x0003D0, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, ManualMapID) == 0x0003D8, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::ManualMapID' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, UseManualMapID) == 0x0003DC, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::UseManualMapID' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, Index_BP_NaviDevilGimmick_IgnorePause_C) == 0x0003E0, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::Index_BP_NaviDevilGimmick_IgnorePause_C' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, CalcAll) == 0x0003E4, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::CalcAll' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, CategoryId) == 0x0003E8, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::CategoryId' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, ExistNum_Min) == 0x0003EC, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::ExistNum_Min' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, ExistNum_Max) == 0x0003F0, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::ExistNum_Max' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, SaveId) == 0x0003F4, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::SaveId' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, CalcSaveID) == 0x0003F8, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::CalcSaveID' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, OutHit_AddSize) == 0x0003FC, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::OutHit_AddSize' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, SameCategoryNum) == 0x000400, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::SameCategoryNum' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, NaviMovePoint) == 0x000408, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::NaviMovePoint' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, FollowHitSize) == 0x000410, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::FollowHitSize' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, SafeZoneID) == 0x00041C, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::SafeZoneID' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, ManualSafeZone) == 0x000420, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::ManualSafeZone' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, IgnoreBoxList) == 0x000428, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::IgnoreBoxList' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, IsIgnoreHit) == 0x000438, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::IsIgnoreHit' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, IsActive) == 0x000439, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::IsActive' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, IsShowIcon) == 0x00043A, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::IsShowIcon' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, EvtDis_GoalGimmick) == 0x000440, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::EvtDis_GoalGimmick' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, EvtDis_LeaveTarget) == 0x000450, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::EvtDis_LeaveTarget' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, FollowerComp) == 0x000460, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::FollowerComp' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, TargetActor) == 0x000468, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::TargetActor' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, Actors) == 0x000470, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::Actors' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, HitView_Inner) == 0x000480, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::HitView_Inner' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, EventNavi) == 0x000488, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::EventNavi' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, TutorialGimmick) == 0x000490, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::TutorialGimmick' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, IsFoundHit) == 0x000491, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::IsFoundHit' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, IsFollowHit) == 0x000492, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::IsFollowHit' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, CoasterGimmick) == 0x000498, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::CoasterGimmick' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, CheckObstacle_WhenGotoGimmick) == 0x0004A0, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::CheckObstacle_WhenGotoGimmick' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, CheckGotoGimmickMoving) == 0x0004A1, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::CheckGotoGimmickMoving' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilGimmick_IgnorePause_C, ViewMermaidEffectRot) == 0x0004A2, "Member 'ABP_NaviDevilGimmick_IgnorePause_C::ViewMermaidEffectRot' has a wrong offset!");

}

