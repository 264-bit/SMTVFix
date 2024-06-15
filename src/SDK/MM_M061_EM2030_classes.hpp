#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM2030

#include "Basic.hpp"

#include "BP_EventMissionBase_classes.hpp"
#include "Engine_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM2030.MM_M061_EM2030_C
// 0x01B8 (0x04D8 - 0x0320)
class AMM_M061_EM2030_C final : public ABP_EventMissionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM2030_C;                   // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1E6[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADevilBase_C*                           SpawnActor;                                        // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 MissionEvent;                                      // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EventCameraBlend_C*                 CameraBlender;                                     // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChangeBGM;                                         // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1E7[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DefCamera;                                         // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEventNow;                                        // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1E8[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AutoRotateFocus_C*                  AutoRotControl;                                    // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CameraFocusEnd;                                    // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1E9[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ATargetPoint*>                   Target;                                            // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AActor*                                 RadarFocus_Location;                               // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           Em2030Camera;                                      // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    Seq_Actor;                                         // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ScrollEnd;                                         // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1EA[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNkmData                               Chotonda;                                          // 0x03B0(0x0120)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_EventScriptFade_C*                  FadeManager;                                       // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MM_M061_EM2030(int32 EntryPoint);
	void Evt_FinishComplete();
	void Evt_Finish();
	void ReportMSG();
	void AddEntryMission();
	void CameraFocus();
	void FirstEvent();
	void TalkStart();
	void QuestExecute();
	void ReceiveBeginPlay();
	void OnLoaded_9A031B74445E812208CB059EEA960370(TSubclassOf<class UObject> Loaded);
	void OnLoaded_43EB33854C55FDF0444450A0FF152B5D(TSubclassOf<class UObject> Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FA48B0F51(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FD992B3BC(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FC4BB7B43(class UObject* Loaded);
	void PlayerPawnTeleport();
	void CallDeactivate();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM2030_C">();
	}
	static class AMM_M061_EM2030_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM2030_C>();
	}
};
static_assert(alignof(AMM_M061_EM2030_C) == 0x000008, "Wrong alignment on AMM_M061_EM2030_C");
static_assert(sizeof(AMM_M061_EM2030_C) == 0x0004D8, "Wrong size on AMM_M061_EM2030_C");
static_assert(offsetof(AMM_M061_EM2030_C, UberGraphFrame_MM_M061_EM2030_C) == 0x000320, "Member 'AMM_M061_EM2030_C::UberGraphFrame_MM_M061_EM2030_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, SelectIndex) == 0x000328, "Member 'AMM_M061_EM2030_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, SpawnActor) == 0x000330, "Member 'AMM_M061_EM2030_C::SpawnActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, SystemMessageAsset) == 0x000338, "Member 'AMM_M061_EM2030_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, MissionMessageAsset) == 0x000340, "Member 'AMM_M061_EM2030_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, MissionEvent) == 0x000348, "Member 'AMM_M061_EM2030_C::MissionEvent' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, CameraBlender) == 0x000350, "Member 'AMM_M061_EM2030_C::CameraBlender' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, ChangeBGM) == 0x000358, "Member 'AMM_M061_EM2030_C::ChangeBGM' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, DefCamera) == 0x000360, "Member 'AMM_M061_EM2030_C::DefCamera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, IsEventNow) == 0x000368, "Member 'AMM_M061_EM2030_C::IsEventNow' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, AutoRotControl) == 0x000370, "Member 'AMM_M061_EM2030_C::AutoRotControl' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, CameraFocusEnd) == 0x000378, "Member 'AMM_M061_EM2030_C::CameraFocusEnd' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, Target) == 0x000380, "Member 'AMM_M061_EM2030_C::Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, RadarFocus_Location) == 0x000390, "Member 'AMM_M061_EM2030_C::RadarFocus_Location' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, Em2030Camera) == 0x000398, "Member 'AMM_M061_EM2030_C::Em2030Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, Seq_Actor) == 0x0003A0, "Member 'AMM_M061_EM2030_C::Seq_Actor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, ScrollEnd) == 0x0003A8, "Member 'AMM_M061_EM2030_C::ScrollEnd' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, Chotonda) == 0x0003B0, "Member 'AMM_M061_EM2030_C::Chotonda' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2030_C, FadeManager) == 0x0004D0, "Member 'AMM_M061_EM2030_C::FadeManager' has a wrong offset!");

}
