#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_E0243

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "BP_EventMissionBase_Direct_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_E0243.MM_M061_E0243_C
// 0x00C0 (0x0380 - 0x02C0)
class AMM_M061_E0243_C final : public ABP_EventMissionBase_Direct_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_E0243_C;                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6357[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   Camera;                                            // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ATargetPoint*>                   Target;                                            // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AActor*                                 Default__View_Target;                              // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          BGM_Cue;                                           // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   UniteCtrl_Soft;                                    // 0x0308(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FRyuketsuData                          NewVar_0;                                          // 0x0330(0x003C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_6358[0x4];                                     // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DefCamera;                                         // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EventCameraBlend_C*                 CameraBlender;                                     // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MM_M061_E0243(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnDestroyed______0(class AActor* DestroyedActor);
	void QuestExecute();
	void CallDeactivate();
	void ReceiveBeginPlay();
	void OnLoaded_FA364C604C5731FCC3E3B4BC75603FDA(TSubclassOf<class UObject> Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_E0243_C">();
	}
	static class AMM_M061_E0243_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_E0243_C>();
	}
};
static_assert(alignof(AMM_M061_E0243_C) == 0x000008, "Wrong alignment on AMM_M061_E0243_C");
static_assert(sizeof(AMM_M061_E0243_C) == 0x000380, "Wrong size on AMM_M061_E0243_C");
static_assert(offsetof(AMM_M061_E0243_C, UberGraphFrame_MM_M061_E0243_C) == 0x0002C0, "Member 'AMM_M061_E0243_C::UberGraphFrame_MM_M061_E0243_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0243_C, SelectIndex) == 0x0002C8, "Member 'AMM_M061_E0243_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0243_C, SystemMessageAsset) == 0x0002D0, "Member 'AMM_M061_E0243_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0243_C, Camera) == 0x0002D8, "Member 'AMM_M061_E0243_C::Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0243_C, Target) == 0x0002E8, "Member 'AMM_M061_E0243_C::Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0243_C, Default__View_Target) == 0x0002F8, "Member 'AMM_M061_E0243_C::Default__View_Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0243_C, BGM_Cue) == 0x000300, "Member 'AMM_M061_E0243_C::BGM_Cue' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0243_C, UniteCtrl_Soft) == 0x000308, "Member 'AMM_M061_E0243_C::UniteCtrl_Soft' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0243_C, NewVar_0) == 0x000330, "Member 'AMM_M061_E0243_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0243_C, DefCamera) == 0x000370, "Member 'AMM_M061_E0243_C::DefCamera' has a wrong offset!");
static_assert(offsetof(AMM_M061_E0243_C, CameraBlender) == 0x000378, "Member 'AMM_M061_E0243_C::CameraBlender' has a wrong offset!");

}

