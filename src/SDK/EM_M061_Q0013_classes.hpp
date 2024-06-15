#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EM_M061_Q0013

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_EventMissionBase_Hit_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EM_M061_Q0013.EM_M061_Q0013_C
// 0x00D8 (0x03A0 - 0x02C8)
class AEM_M061_Q0013_C final : public ABP_EventMissionBase_Hit_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_EM_M061_Q0013_C;                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         _______0_fov_24C6D66F47E93E4834DB42854E8F7779;     // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______0__Direction_24C6D66F47E93E4834DB42854E8F7779; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23D6[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______0;                                          // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Camera_rotation_rot_FCA94C074BFB6B9C74C41BADFFB9D3DE; // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Camera_rotation__Direction_FCA94C074BFB6B9C74C41BADFFB9D3DE; // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23D7[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Camera_rotation;                                   // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectIndex;                                       // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23D8[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DefaultViewTarget;                                 // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   Camera;                                            // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class UCameraComponent*                       Default_Player_Camera;                             // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Default_camera_Rotation;                           // 0x0318(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23D9[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ATargetPoint*>                   Look_at;                                           // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                          Camera_Check;                                      // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23DA[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EventCameraBlend_C*                 Camera_Blender;                                    // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           Instant_Camera;                                    // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefFOV;                                            // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23DB[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EventGaki;                                         // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23DC[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ATargetPoint*>                   TargetGaki;                                        // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ACameraActor*>                   CameraGaki;                                        // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class ABP_EventCameraBlend_C*                 CameraBlender;                                     // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Def_Camera;                                        // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  NaviDevil;                                         // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EM_M061_Q0013(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void MoveEnd();
	void CallDeactivate();
	void QuestExecute();
	void ReceiveBeginPlay();
	void _______0__UpdateFunc();
	void _______0__FinishedFunc();
	void Camera_rotation__UpdateFunc();
	void Camera_rotation__FinishedFunc();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EM_M061_Q0013_C">();
	}
	static class AEM_M061_Q0013_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEM_M061_Q0013_C>();
	}
};
static_assert(alignof(AEM_M061_Q0013_C) == 0x000008, "Wrong alignment on AEM_M061_Q0013_C");
static_assert(sizeof(AEM_M061_Q0013_C) == 0x0003A0, "Wrong size on AEM_M061_Q0013_C");
static_assert(offsetof(AEM_M061_Q0013_C, UberGraphFrame_EM_M061_Q0013_C) == 0x0002C8, "Member 'AEM_M061_Q0013_C::UberGraphFrame_EM_M061_Q0013_C' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, _______0_fov_24C6D66F47E93E4834DB42854E8F7779) == 0x0002D0, "Member 'AEM_M061_Q0013_C::_______0_fov_24C6D66F47E93E4834DB42854E8F7779' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, _______0__Direction_24C6D66F47E93E4834DB42854E8F7779) == 0x0002D4, "Member 'AEM_M061_Q0013_C::_______0__Direction_24C6D66F47E93E4834DB42854E8F7779' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, _______0) == 0x0002D8, "Member 'AEM_M061_Q0013_C::_______0' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, Camera_rotation_rot_FCA94C074BFB6B9C74C41BADFFB9D3DE) == 0x0002E0, "Member 'AEM_M061_Q0013_C::Camera_rotation_rot_FCA94C074BFB6B9C74C41BADFFB9D3DE' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, Camera_rotation__Direction_FCA94C074BFB6B9C74C41BADFFB9D3DE) == 0x0002E4, "Member 'AEM_M061_Q0013_C::Camera_rotation__Direction_FCA94C074BFB6B9C74C41BADFFB9D3DE' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, Camera_rotation) == 0x0002E8, "Member 'AEM_M061_Q0013_C::Camera_rotation' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, SelectIndex) == 0x0002F0, "Member 'AEM_M061_Q0013_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, DefaultViewTarget) == 0x0002F8, "Member 'AEM_M061_Q0013_C::DefaultViewTarget' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, Camera) == 0x000300, "Member 'AEM_M061_Q0013_C::Camera' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, Default_Player_Camera) == 0x000310, "Member 'AEM_M061_Q0013_C::Default_Player_Camera' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, Default_camera_Rotation) == 0x000318, "Member 'AEM_M061_Q0013_C::Default_camera_Rotation' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, Look_at) == 0x000328, "Member 'AEM_M061_Q0013_C::Look_at' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, Camera_Check) == 0x000338, "Member 'AEM_M061_Q0013_C::Camera_Check' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, Camera_Blender) == 0x000340, "Member 'AEM_M061_Q0013_C::Camera_Blender' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, Instant_Camera) == 0x000348, "Member 'AEM_M061_Q0013_C::Instant_Camera' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, DefFOV) == 0x000350, "Member 'AEM_M061_Q0013_C::DefFOV' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, MissionMessageAsset) == 0x000358, "Member 'AEM_M061_Q0013_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, EventGaki) == 0x000360, "Member 'AEM_M061_Q0013_C::EventGaki' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, TargetGaki) == 0x000368, "Member 'AEM_M061_Q0013_C::TargetGaki' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, CameraGaki) == 0x000378, "Member 'AEM_M061_Q0013_C::CameraGaki' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, CameraBlender) == 0x000388, "Member 'AEM_M061_Q0013_C::CameraBlender' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, Def_Camera) == 0x000390, "Member 'AEM_M061_Q0013_C::Def_Camera' has a wrong offset!");
static_assert(offsetof(AEM_M061_Q0013_C, NaviDevil) == 0x000398, "Member 'AEM_M061_Q0013_C::NaviDevil' has a wrong offset!");

}
