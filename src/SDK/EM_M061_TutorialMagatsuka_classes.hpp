#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EM_M061_TutorialMagatsuka

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_EventMissionBase_Hit_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EM_M061_TutorialMagatsuka.EM_M061_TutorialMagatsuka_C
// 0x0098 (0x0360 - 0x02C8)
class AEM_M061_TutorialMagatsuka_C final : public ABP_EventMissionBase_Hit_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_EM_M061_TutorialMagatsuka_C;        // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         CamereaFOV_FOV_A40D38F64AE7A8A5D3EC7A82414D0B3D;   // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CamereaFOV__Direction_A40D38F64AE7A8A5D3EC7A82414D0B3D; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C7E2[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CamereaFOV;                                        // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraRot_rot_A294B97949C46D6E3147D0AD3F5237C0;    // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CameraRot__Direction_A294B97949C46D6E3147D0AD3F5237C0; // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C7E3[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CameraRot;                                         // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectIndex;                                       // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C7E4[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 Mission_Event;                                     // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   Camera;                                            // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ATargetPoint*>                   Target;                                            // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class ACameraActor*                           InstantCamera;                                     // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefFOV;                                            // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               DefInstatCameraRoll;                               // 0x033C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AActor*                                 DefCamera;                                         // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EventCameraBlend_C*                 CameraBlender;                                     // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  NaviDevil;                                         // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EM_M061_TutorialMagatsuka(int32 EntryPoint);
	void EvtDis_FinishComplete();
	void EvtDis_Finish();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void CallDeactivate();
	void QuestExecute();
	void ReceiveBeginPlay();
	void CamereaFOV__UpdateFunc();
	void CamereaFOV__FinishedFunc();
	void CameraRot__UpdateFunc();
	void CameraRot__FinishedFunc();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EM_M061_TutorialMagatsuka_C">();
	}
	static class AEM_M061_TutorialMagatsuka_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEM_M061_TutorialMagatsuka_C>();
	}
};
static_assert(alignof(AEM_M061_TutorialMagatsuka_C) == 0x000008, "Wrong alignment on AEM_M061_TutorialMagatsuka_C");
static_assert(sizeof(AEM_M061_TutorialMagatsuka_C) == 0x000360, "Wrong size on AEM_M061_TutorialMagatsuka_C");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, UberGraphFrame_EM_M061_TutorialMagatsuka_C) == 0x0002C8, "Member 'AEM_M061_TutorialMagatsuka_C::UberGraphFrame_EM_M061_TutorialMagatsuka_C' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, CamereaFOV_FOV_A40D38F64AE7A8A5D3EC7A82414D0B3D) == 0x0002D0, "Member 'AEM_M061_TutorialMagatsuka_C::CamereaFOV_FOV_A40D38F64AE7A8A5D3EC7A82414D0B3D' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, CamereaFOV__Direction_A40D38F64AE7A8A5D3EC7A82414D0B3D) == 0x0002D4, "Member 'AEM_M061_TutorialMagatsuka_C::CamereaFOV__Direction_A40D38F64AE7A8A5D3EC7A82414D0B3D' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, CamereaFOV) == 0x0002D8, "Member 'AEM_M061_TutorialMagatsuka_C::CamereaFOV' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, CameraRot_rot_A294B97949C46D6E3147D0AD3F5237C0) == 0x0002E0, "Member 'AEM_M061_TutorialMagatsuka_C::CameraRot_rot_A294B97949C46D6E3147D0AD3F5237C0' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, CameraRot__Direction_A294B97949C46D6E3147D0AD3F5237C0) == 0x0002E4, "Member 'AEM_M061_TutorialMagatsuka_C::CameraRot__Direction_A294B97949C46D6E3147D0AD3F5237C0' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, CameraRot) == 0x0002E8, "Member 'AEM_M061_TutorialMagatsuka_C::CameraRot' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, SelectIndex) == 0x0002F0, "Member 'AEM_M061_TutorialMagatsuka_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, SystemMessageAsset) == 0x0002F8, "Member 'AEM_M061_TutorialMagatsuka_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, MissionMessageAsset) == 0x000300, "Member 'AEM_M061_TutorialMagatsuka_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, Mission_Event) == 0x000308, "Member 'AEM_M061_TutorialMagatsuka_C::Mission_Event' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, Camera) == 0x000310, "Member 'AEM_M061_TutorialMagatsuka_C::Camera' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, Target) == 0x000320, "Member 'AEM_M061_TutorialMagatsuka_C::Target' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, InstantCamera) == 0x000330, "Member 'AEM_M061_TutorialMagatsuka_C::InstantCamera' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, DefFOV) == 0x000338, "Member 'AEM_M061_TutorialMagatsuka_C::DefFOV' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, DefInstatCameraRoll) == 0x00033C, "Member 'AEM_M061_TutorialMagatsuka_C::DefInstatCameraRoll' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, DefCamera) == 0x000348, "Member 'AEM_M061_TutorialMagatsuka_C::DefCamera' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, CameraBlender) == 0x000350, "Member 'AEM_M061_TutorialMagatsuka_C::CameraBlender' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialMagatsuka_C, NaviDevil) == 0x000358, "Member 'AEM_M061_TutorialMagatsuka_C::NaviDevil' has a wrong offset!");

}

