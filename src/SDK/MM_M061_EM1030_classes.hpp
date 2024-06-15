#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM1030

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventMissionBase_HitAction_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM1030.MM_M061_EM1030_C
// 0x0078 (0x0370 - 0x02F8)
class AMM_M061_EM1030_C final : public ABP_EventMissionBase_HitAction_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM1030_C;                   // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Select_Index;                                      // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Mission_ID;                                        // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset2;                              // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 Mission_Event;                                     // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   Camera;                                            // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ATargetPoint*>                   Target;                                            // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AActor*                                 Default_View_Target;                               // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Pla_Motion_Stop;                                   // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CF2[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AutoRotateFocus_C*                  Auto_Rot_Ctrl;                                     // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Change_BGM;                                        // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CameraFocusEnd;                                    // 0x0369(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MM_M061_EM1030(int32 EntryPoint);
	void Evt_FinishComplete();
	void EvtDis_Finish();
	void FocusMissionEnd();
	void CloseMsgWindow();
	void CameraFocus();
	void Complete_EM1040();
	void Entry_EM1040();
	void Complete_EM1030();
	void Entry_EM1030();
	void Complete_Mission_Event();
	void Entry_Mission_Event();
	void Not_Report_EM1040();
	void Can_Repor_EM1040();
	void Re_Entry_EM1040();
	void EM_1040();
	void EM_1030();
	void Re_Entry();
	void Not_Report();
	void Can_Report();
	void End_Mission();
	void QuestExecute();
	void OnLoaded_47C000C9417BF847E7B22C96F2C59F46(TSubclassOf<class UObject> Loaded);
	void OnLoaded_2CAE3E5148FCAE2A5B331084D0221248(TSubclassOf<class UObject> Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC5F3FAC2B(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD4F9AAAEF(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC6DA69037(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD9C1F5DEB(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC675938EA(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDC1D8F607(class UObject* Loaded);
	void ResultFadeFunc();
	void CallDeactivate();
	void ReceiveBeginPlay();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM1030_C">();
	}
	static class AMM_M061_EM1030_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM1030_C>();
	}
};
static_assert(alignof(AMM_M061_EM1030_C) == 0x000008, "Wrong alignment on AMM_M061_EM1030_C");
static_assert(sizeof(AMM_M061_EM1030_C) == 0x000370, "Wrong size on AMM_M061_EM1030_C");
static_assert(offsetof(AMM_M061_EM1030_C, UberGraphFrame_MM_M061_EM1030_C) == 0x0002F8, "Member 'AMM_M061_EM1030_C::UberGraphFrame_MM_M061_EM1030_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, Box) == 0x000300, "Member 'AMM_M061_EM1030_C::Box' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, Select_Index) == 0x000308, "Member 'AMM_M061_EM1030_C::Select_Index' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, Mission_ID) == 0x00030C, "Member 'AMM_M061_EM1030_C::Mission_ID' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, SystemMessageAsset) == 0x000310, "Member 'AMM_M061_EM1030_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, MissionMessageAsset) == 0x000318, "Member 'AMM_M061_EM1030_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, MissionMessageAsset2) == 0x000320, "Member 'AMM_M061_EM1030_C::MissionMessageAsset2' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, Mission_Event) == 0x000328, "Member 'AMM_M061_EM1030_C::Mission_Event' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, Camera) == 0x000330, "Member 'AMM_M061_EM1030_C::Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, Target) == 0x000340, "Member 'AMM_M061_EM1030_C::Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, Default_View_Target) == 0x000350, "Member 'AMM_M061_EM1030_C::Default_View_Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, Pla_Motion_Stop) == 0x000358, "Member 'AMM_M061_EM1030_C::Pla_Motion_Stop' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, Auto_Rot_Ctrl) == 0x000360, "Member 'AMM_M061_EM1030_C::Auto_Rot_Ctrl' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, Change_BGM) == 0x000368, "Member 'AMM_M061_EM1030_C::Change_BGM' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1030_C, CameraFocusEnd) == 0x000369, "Member 'AMM_M061_EM1030_C::CameraFocusEnd' has a wrong offset!");

}

