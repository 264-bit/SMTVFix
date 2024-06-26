#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MapUI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_MapUI.WB_MapUI_C.ExecuteUbergraph_WB_MapUI
// 0x0004 (0x0004 - 0x0000)
struct WB_MapUI_C_ExecuteUbergraph_WB_MapUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MapUI_C_ExecuteUbergraph_WB_MapUI) == 0x000004, "Wrong alignment on WB_MapUI_C_ExecuteUbergraph_WB_MapUI");
static_assert(sizeof(WB_MapUI_C_ExecuteUbergraph_WB_MapUI) == 0x000004, "Wrong size on WB_MapUI_C_ExecuteUbergraph_WB_MapUI");
static_assert(offsetof(WB_MapUI_C_ExecuteUbergraph_WB_MapUI, EntryPoint) == 0x000000, "Member 'WB_MapUI_C_ExecuteUbergraph_WB_MapUI::EntryPoint' has a wrong offset!");

// Function WB_MapUI.WB_MapUI_C.Show
// 0x0008 (0x0008 - 0x0000)
struct WB_MapUI_C_Show final
{
public:
	int32                                         CallFunc_GetMapID_ReturnValue;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MapUI_C_Show) == 0x000004, "Wrong alignment on WB_MapUI_C_Show");
static_assert(sizeof(WB_MapUI_C_Show) == 0x000008, "Wrong size on WB_MapUI_C_Show");
static_assert(offsetof(WB_MapUI_C_Show, CallFunc_GetMapID_ReturnValue) == 0x000000, "Member 'WB_MapUI_C_Show::CallFunc_GetMapID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MapUI_C_Show, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000004, "Member 'WB_MapUI_C_Show::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WB_MapUI.WB_MapUI_C.ShowMinimap
// 0x0001 (0x0001 - 0x0000)
struct WB_MapUI_C_ShowMinimap final
{
public:
	bool                                          Immediate;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MapUI_C_ShowMinimap) == 0x000001, "Wrong alignment on WB_MapUI_C_ShowMinimap");
static_assert(sizeof(WB_MapUI_C_ShowMinimap) == 0x000001, "Wrong size on WB_MapUI_C_ShowMinimap");
static_assert(offsetof(WB_MapUI_C_ShowMinimap, Immediate) == 0x000000, "Member 'WB_MapUI_C_ShowMinimap::Immediate' has a wrong offset!");

// Function WB_MapUI.WB_MapUI_C.UpdateDebugFogGridTexture
// 0x0008 (0x0008 - 0x0000)
struct WB_MapUI_C_UpdateDebugFogGridTexture final
{
public:
	class UTexture*                               CallFunc_GetFogGridTexture_OutTexture;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MapUI_C_UpdateDebugFogGridTexture) == 0x000008, "Wrong alignment on WB_MapUI_C_UpdateDebugFogGridTexture");
static_assert(sizeof(WB_MapUI_C_UpdateDebugFogGridTexture) == 0x000008, "Wrong size on WB_MapUI_C_UpdateDebugFogGridTexture");
static_assert(offsetof(WB_MapUI_C_UpdateDebugFogGridTexture, CallFunc_GetFogGridTexture_OutTexture) == 0x000000, "Member 'WB_MapUI_C_UpdateDebugFogGridTexture::CallFunc_GetFogGridTexture_OutTexture' has a wrong offset!");

// Function WB_MapUI.WB_MapUI_C.TickMinimap
// 0x0004 (0x0004 - 0x0000)
struct WB_MapUI_C_TickMinimap final
{
public:
	float                                         InDeltaTime;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MapUI_C_TickMinimap) == 0x000004, "Wrong alignment on WB_MapUI_C_TickMinimap");
static_assert(sizeof(WB_MapUI_C_TickMinimap) == 0x000004, "Wrong size on WB_MapUI_C_TickMinimap");
static_assert(offsetof(WB_MapUI_C_TickMinimap, InDeltaTime) == 0x000000, "Member 'WB_MapUI_C_TickMinimap::InDeltaTime' has a wrong offset!");

// Function WB_MapUI.WB_MapUI_C.UpdateTopCamera
// 0x0030 (0x0030 - 0x0000)
struct WB_MapUI_C_UpdateTopCamera final
{
public:
	struct FVector                                CameraLocation;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CameraRotate;                                      // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                HeroLocation;                                      // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               HeroRotate;                                        // 0x0024(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MapUI_C_UpdateTopCamera) == 0x000004, "Wrong alignment on WB_MapUI_C_UpdateTopCamera");
static_assert(sizeof(WB_MapUI_C_UpdateTopCamera) == 0x000030, "Wrong size on WB_MapUI_C_UpdateTopCamera");
static_assert(offsetof(WB_MapUI_C_UpdateTopCamera, CameraLocation) == 0x000000, "Member 'WB_MapUI_C_UpdateTopCamera::CameraLocation' has a wrong offset!");
static_assert(offsetof(WB_MapUI_C_UpdateTopCamera, CameraRotate) == 0x00000C, "Member 'WB_MapUI_C_UpdateTopCamera::CameraRotate' has a wrong offset!");
static_assert(offsetof(WB_MapUI_C_UpdateTopCamera, HeroLocation) == 0x000018, "Member 'WB_MapUI_C_UpdateTopCamera::HeroLocation' has a wrong offset!");
static_assert(offsetof(WB_MapUI_C_UpdateTopCamera, HeroRotate) == 0x000024, "Member 'WB_MapUI_C_UpdateTopCamera::HeroRotate' has a wrong offset!");

// Function WB_MapUI.WB_MapUI_C.SetTopCameraMode
// 0x0001 (0x0001 - 0x0000)
struct WB_MapUI_C_SetTopCameraMode final
{
public:
	bool                                          IsTopCamera;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MapUI_C_SetTopCameraMode) == 0x000001, "Wrong alignment on WB_MapUI_C_SetTopCameraMode");
static_assert(sizeof(WB_MapUI_C_SetTopCameraMode) == 0x000001, "Wrong size on WB_MapUI_C_SetTopCameraMode");
static_assert(offsetof(WB_MapUI_C_SetTopCameraMode, IsTopCamera) == 0x000000, "Member 'WB_MapUI_C_SetTopCameraMode::IsTopCamera' has a wrong offset!");

// Function WB_MapUI.WB_MapUI_C.IsMinimapFocusAction
// 0x0001 (0x0001 - 0x0000)
struct WB_MapUI_C_IsMinimapFocusAction final
{
public:
	bool                                          FocusAction;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MapUI_C_IsMinimapFocusAction) == 0x000001, "Wrong alignment on WB_MapUI_C_IsMinimapFocusAction");
static_assert(sizeof(WB_MapUI_C_IsMinimapFocusAction) == 0x000001, "Wrong size on WB_MapUI_C_IsMinimapFocusAction");
static_assert(offsetof(WB_MapUI_C_IsMinimapFocusAction, FocusAction) == 0x000000, "Member 'WB_MapUI_C_IsMinimapFocusAction::FocusAction' has a wrong offset!");

}

