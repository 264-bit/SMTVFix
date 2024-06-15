#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DG_ToMove

#include "Basic.hpp"

#include "DaathTypeList_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MapEventHit_Type_SHit_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DG_ToMove.BP_DG_ToMove_C
// 0x0060 (0x03F0 - 0x0390)
class ABP_DG_ToMove_C final : public AMapEventHit_Type_SHit_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DG_ToMove_C;                     // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         StopRateTimeline_StopRate_BD227A6543EF3F2BF1377D935F053607; // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            StopRateTimeline__Direction_BD227A6543EF3F2BF1377D935F053607; // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B6C7[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     StopRateTimeline;                                  // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                        EnvStop;                                           // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         EffectDuration;                                    // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B6C8[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ModelRef;                                          // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMinimapIconTableHelper                IconHelper;                                        // 0x03C8(0x000C)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_B6C9[0x4];                                     // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPrimaryAssetId>                EffectLevelArray;                                  // 0x03D8(0x0010)(Edit, BlueprintVisible)
	float                                         TIME_LINE_SPEED;                                   // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TIME_LINE_WAIT;                                    // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DG_ToMove(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void EventHitAction();
	void StopRateTimeline__UpdateFunc();
	void StopRateTimeline__FinishedFunc();
	void UserConstructionScript();
	void LinkModel();
	void MoveParticles();
	void RestoreEffectParam();
	void SetMinimapIconTableRow(int32 Param_Index, struct FMinimapIconTableRow* OutRow, bool* NeedToAddMore);
	void BPI_SetDataId(int32 DataId, bool* Dummy);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DG_ToMove_C">();
	}
	static class ABP_DG_ToMove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DG_ToMove_C>();
	}
};
static_assert(alignof(ABP_DG_ToMove_C) == 0x000008, "Wrong alignment on ABP_DG_ToMove_C");
static_assert(sizeof(ABP_DG_ToMove_C) == 0x0003F0, "Wrong size on ABP_DG_ToMove_C");
static_assert(offsetof(ABP_DG_ToMove_C, UberGraphFrame_BP_DG_ToMove_C) == 0x000390, "Member 'ABP_DG_ToMove_C::UberGraphFrame_BP_DG_ToMove_C' has a wrong offset!");
static_assert(offsetof(ABP_DG_ToMove_C, StopRateTimeline_StopRate_BD227A6543EF3F2BF1377D935F053607) == 0x000398, "Member 'ABP_DG_ToMove_C::StopRateTimeline_StopRate_BD227A6543EF3F2BF1377D935F053607' has a wrong offset!");
static_assert(offsetof(ABP_DG_ToMove_C, StopRateTimeline__Direction_BD227A6543EF3F2BF1377D935F053607) == 0x00039C, "Member 'ABP_DG_ToMove_C::StopRateTimeline__Direction_BD227A6543EF3F2BF1377D935F053607' has a wrong offset!");
static_assert(offsetof(ABP_DG_ToMove_C, StopRateTimeline) == 0x0003A0, "Member 'ABP_DG_ToMove_C::StopRateTimeline' has a wrong offset!");
static_assert(offsetof(ABP_DG_ToMove_C, EnvStop) == 0x0003A8, "Member 'ABP_DG_ToMove_C::EnvStop' has a wrong offset!");
static_assert(offsetof(ABP_DG_ToMove_C, EffectDuration) == 0x0003B8, "Member 'ABP_DG_ToMove_C::EffectDuration' has a wrong offset!");
static_assert(offsetof(ABP_DG_ToMove_C, ModelRef) == 0x0003C0, "Member 'ABP_DG_ToMove_C::ModelRef' has a wrong offset!");
static_assert(offsetof(ABP_DG_ToMove_C, IconHelper) == 0x0003C8, "Member 'ABP_DG_ToMove_C::IconHelper' has a wrong offset!");
static_assert(offsetof(ABP_DG_ToMove_C, EffectLevelArray) == 0x0003D8, "Member 'ABP_DG_ToMove_C::EffectLevelArray' has a wrong offset!");
static_assert(offsetof(ABP_DG_ToMove_C, TIME_LINE_SPEED) == 0x0003E8, "Member 'ABP_DG_ToMove_C::TIME_LINE_SPEED' has a wrong offset!");
static_assert(offsetof(ABP_DG_ToMove_C, TIME_LINE_WAIT) == 0x0003EC, "Member 'ABP_DG_ToMove_C::TIME_LINE_WAIT' has a wrong offset!");

}
