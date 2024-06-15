#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventNaviDevil289_Moshobou

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "BP_EventMissionBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventNaviDevil289_Moshobou.BP_EventNaviDevil289_Moshobou_C
// 0x0048 (0x0368 - 0x0320)
class ABP_EventNaviDevil289_Moshobou_C final : public ABP_EventMissionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_EventNaviDevil289_Moshobou_C;    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D31[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    NaviMessageAsset;                                  // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  Spawn;                                             // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_NAVI_DEVIL                                  NaviDevilType;                                     // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D32[0x3];                                     // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNaviDevilData                         NaviDevilData;                                     // 0x0344(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_4D33[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AutoRotateFocus_C*                  AutoRotateCtrl;                                    // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnPawn;                                         // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_EventNaviDevil289_Moshobou(int32 EntryPoint);
	void QuestExecute();
	void ReceiveBeginPlay();
	void OnLoaded_EBE363AF48A425B496BADFB703950C78(class UObject* Loaded);
	void OnLoaded_3041E64443A6B1362D255089F55B1AB8(TSubclassOf<class UObject> Loaded);
	void OnLoaded_113C03D44DBBB647C7ECA9AE2606B259(TSubclassOf<class UObject> Loaded);
	void BPI_CheckNaviDevil(bool* NaviDevil);
	void CallDeactivate();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventNaviDevil289_Moshobou_C">();
	}
	static class ABP_EventNaviDevil289_Moshobou_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EventNaviDevil289_Moshobou_C>();
	}
};
static_assert(alignof(ABP_EventNaviDevil289_Moshobou_C) == 0x000008, "Wrong alignment on ABP_EventNaviDevil289_Moshobou_C");
static_assert(sizeof(ABP_EventNaviDevil289_Moshobou_C) == 0x000368, "Wrong size on ABP_EventNaviDevil289_Moshobou_C");
static_assert(offsetof(ABP_EventNaviDevil289_Moshobou_C, UberGraphFrame_BP_EventNaviDevil289_Moshobou_C) == 0x000320, "Member 'ABP_EventNaviDevil289_Moshobou_C::UberGraphFrame_BP_EventNaviDevil289_Moshobou_C' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil289_Moshobou_C, SelectIndex) == 0x000328, "Member 'ABP_EventNaviDevil289_Moshobou_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil289_Moshobou_C, NaviMessageAsset) == 0x000330, "Member 'ABP_EventNaviDevil289_Moshobou_C::NaviMessageAsset' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil289_Moshobou_C, Spawn) == 0x000338, "Member 'ABP_EventNaviDevil289_Moshobou_C::Spawn' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil289_Moshobou_C, NaviDevilType) == 0x000340, "Member 'ABP_EventNaviDevil289_Moshobou_C::NaviDevilType' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil289_Moshobou_C, NaviDevilData) == 0x000344, "Member 'ABP_EventNaviDevil289_Moshobou_C::NaviDevilData' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil289_Moshobou_C, AutoRotateCtrl) == 0x000358, "Member 'ABP_EventNaviDevil289_Moshobou_C::AutoRotateCtrl' has a wrong offset!");
static_assert(offsetof(ABP_EventNaviDevil289_Moshobou_C, SpawnPawn) == 0x000360, "Member 'ABP_EventNaviDevil289_Moshobou_C::SpawnPawn' has a wrong offset!");

}

