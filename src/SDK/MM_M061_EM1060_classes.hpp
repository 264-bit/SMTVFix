#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM1060

#include "Basic.hpp"

#include "BP_EventMissionBase_classes.hpp"
#include "Engine_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM1060.MM_M061_EM1060_C
// 0x0050 (0x0370 - 0x0320)
class AMM_M061_EM1060_C final : public ABP_EventMissionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM1060_C;                   // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AB30[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharaBase_C*                           SpawnActor;                                        // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 MissionEvent;                                      // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AutoRotateFocus_C*                  Auto_Rot_Ctrl;                                     // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequestItemId;                                     // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequestItemNum;                                    // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddRewardItemId;                                   // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddRewardItemNum;                                  // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddRewardMakka;                                    // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Change_BGM;                                        // 0x036C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CameraFocusEnd;                                    // 0x036D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MM_M061_EM1060(int32 EntryPoint);
	void Evt_Finish();
	void Evt_FinishComplete();
	void CloseMsgWindow();
	void CameraFocus();
	void EndMission();
	void TalkStart();
	void QuestExecute();
	void ReceiveBeginPlay();
	void OnLoaded_9359270748AD01834AFE32AFA76A76A8(TSubclassOf<class UObject> Loaded);
	void OnLoaded_3D6CADE04E7DA0706C4113ACECF1693F(TSubclassOf<class UObject> Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BCAB883B40(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD2A25E327(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BCE79C8039(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD20683D3F(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BCED15C42F(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD1EE1D3A1(class UObject* Loaded);
	void CallDeactivate();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM1060_C">();
	}
	static class AMM_M061_EM1060_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM1060_C>();
	}
};
static_assert(alignof(AMM_M061_EM1060_C) == 0x000008, "Wrong alignment on AMM_M061_EM1060_C");
static_assert(sizeof(AMM_M061_EM1060_C) == 0x000370, "Wrong size on AMM_M061_EM1060_C");
static_assert(offsetof(AMM_M061_EM1060_C, UberGraphFrame_MM_M061_EM1060_C) == 0x000320, "Member 'AMM_M061_EM1060_C::UberGraphFrame_MM_M061_EM1060_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1060_C, SelectIndex) == 0x000328, "Member 'AMM_M061_EM1060_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1060_C, SpawnActor) == 0x000330, "Member 'AMM_M061_EM1060_C::SpawnActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1060_C, SystemMessageAsset) == 0x000338, "Member 'AMM_M061_EM1060_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1060_C, MissionMessageAsset) == 0x000340, "Member 'AMM_M061_EM1060_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1060_C, MissionEvent) == 0x000348, "Member 'AMM_M061_EM1060_C::MissionEvent' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1060_C, Auto_Rot_Ctrl) == 0x000350, "Member 'AMM_M061_EM1060_C::Auto_Rot_Ctrl' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1060_C, RequestItemId) == 0x000358, "Member 'AMM_M061_EM1060_C::RequestItemId' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1060_C, RequestItemNum) == 0x00035C, "Member 'AMM_M061_EM1060_C::RequestItemNum' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1060_C, AddRewardItemId) == 0x000360, "Member 'AMM_M061_EM1060_C::AddRewardItemId' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1060_C, AddRewardItemNum) == 0x000364, "Member 'AMM_M061_EM1060_C::AddRewardItemNum' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1060_C, AddRewardMakka) == 0x000368, "Member 'AMM_M061_EM1060_C::AddRewardMakka' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1060_C, Change_BGM) == 0x00036C, "Member 'AMM_M061_EM1060_C::Change_BGM' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1060_C, CameraFocusEnd) == 0x00036D, "Member 'AMM_M061_EM1060_C::CameraFocusEnd' has a wrong offset!");

}
