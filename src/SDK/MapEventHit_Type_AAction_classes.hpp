#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapEventHit_Type_AAction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "MapEventHit_Core_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MapEventHit_Type_AAction.MapEventHit_Type_AAction_C
// 0x0050 (0x03D0 - 0x0380)
class AMapEventHit_Type_AAction_C : public AMapEventHit_Core_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MapEventHit_Type_AAction_C;         // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsHit;                                             // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8946[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMapEventHit_Type_AAction_C*            CurrentAAction;                                    // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_AActionWindowType                           AActionWindowType;                                 // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8947[0x3];                                     // 0x0399(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   AActionLabel;                                      // 0x039C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AActionLock;                                       // 0x03A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AActionSE;                                         // 0x03A5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8948[0x2];                                     // 0x03A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        WallCheckComponent;                                // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WallChecker;                                       // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8949[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         IgnoreActors_WallCheck;                            // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          Activate;                                          // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Overlap;                                           // 0x03C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void FlagCh(bool* OK);
	void ReceiveBeginPlay();
	void EventHitActivate(bool Active);
	void SettingWallCheck(class USceneComponent* CheckPoint, TArray<class AActor*>& IgnoreActors);
	void Action();
	void BndEvt__Hit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Hit_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void CallEventHitOut_();
	void ShowAActionWidget();
	void HideAActionWidget();
	void LockAAction();
	void UnlockAAction();
	void ManualBeginOverlap();
	void RecalcOverlap();
	void OnUnPause_AfterLoad();
	void ExecuteUbergraph_MapEventHit_Type_AAction(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapEventHit_Type_AAction_C">();
	}
	static class AMapEventHit_Type_AAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMapEventHit_Type_AAction_C>();
	}
};
static_assert(alignof(AMapEventHit_Type_AAction_C) == 0x000008, "Wrong alignment on AMapEventHit_Type_AAction_C");
static_assert(sizeof(AMapEventHit_Type_AAction_C) == 0x0003D0, "Wrong size on AMapEventHit_Type_AAction_C");
static_assert(offsetof(AMapEventHit_Type_AAction_C, UberGraphFrame_MapEventHit_Type_AAction_C) == 0x000380, "Member 'AMapEventHit_Type_AAction_C::UberGraphFrame_MapEventHit_Type_AAction_C' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_AAction_C, IsHit) == 0x000388, "Member 'AMapEventHit_Type_AAction_C::IsHit' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_AAction_C, CurrentAAction) == 0x000390, "Member 'AMapEventHit_Type_AAction_C::CurrentAAction' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_AAction_C, AActionWindowType) == 0x000398, "Member 'AMapEventHit_Type_AAction_C::AActionWindowType' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_AAction_C, AActionLabel) == 0x00039C, "Member 'AMapEventHit_Type_AAction_C::AActionLabel' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_AAction_C, AActionLock) == 0x0003A4, "Member 'AMapEventHit_Type_AAction_C::AActionLock' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_AAction_C, AActionSE) == 0x0003A5, "Member 'AMapEventHit_Type_AAction_C::AActionSE' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_AAction_C, WallCheckComponent) == 0x0003A8, "Member 'AMapEventHit_Type_AAction_C::WallCheckComponent' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_AAction_C, WallChecker) == 0x0003B0, "Member 'AMapEventHit_Type_AAction_C::WallChecker' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_AAction_C, IgnoreActors_WallCheck) == 0x0003B8, "Member 'AMapEventHit_Type_AAction_C::IgnoreActors_WallCheck' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_AAction_C, Activate) == 0x0003C8, "Member 'AMapEventHit_Type_AAction_C::Activate' has a wrong offset!");
static_assert(offsetof(AMapEventHit_Type_AAction_C, Overlap) == 0x0003C9, "Member 'AMapEventHit_Type_AAction_C::Overlap' has a wrong offset!");

}
