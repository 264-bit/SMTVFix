#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CampSkillCtrl

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CampSkillCtrl.BPI_CampSkillCtrl_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CampSkillCtrl_C final : public IInterface
{
public:
	void ICampSkillIsInSortMenu(bool* OutSort);
	void ICampSkillSetSkillSelectButtonHelp(int32 InNumber, bool InInitialize, bool* OutParam);
	void ICampSkillSetPartyNumber(int32 InPartyNumber, bool* OutParam);
	void ICampSkillIsClosedSortWindow(bool* OutClosed);
	void ICampSkillUpdateFusionResultMagatsuhiSkillList(E_WIDGET_PRIO InPrio, int32 InDevilId, bool bInUnknown);
	void ICampSkillCreateFusionResultMagatsuhiSkillList(E_WIDGET_PRIO InPrio, int32 InDevilId, bool bInUnknown);
	void ICampSkillUpdateFusionResultSkillList(E_WIDGET_PRIO InPrio, int32 InDevilId, bool bInUnknown);
	void ICampSkillUpdateDevilBookMagatsuhiSkillList(E_WIDGET_PRIO InPrio, int32 InDevilId, int32 InDevilBookType);
	void ICampSkillCreateDevilBookMagatsuhiSkillList(E_WIDGET_PRIO InPrio, int32 InDevilId, int32 InDevilBookType);
	void ICampSkillUpdateDevilBookSkillList(E_WIDGET_PRIO InPrio, int32 InDevilId, int32 InDevilBookType);
	void ICampSkillRestartSkillList();
	void ICampSkillUpdateAnalyzeMagatsuhiSkillList(E_WIDGET_PRIO InPriority, int32 InDevilId);
	void ICampSkillCreateAnalyzeMagatsuhiSkillList(E_WIDGET_PRIO InPriority, int32 InDevilId, bool InInitialize);
	void ICampSkillUpdatePartyMagatsuhiSkillList(E_WIDGET_PRIO InPrio, int32 InNkmIndex);
	void ICampSkillCreatePartyMagatsuhiSkillList(E_WIDGET_PRIO InPrio, int32 InNkmIndex);
	void ICampSkillIsOpenStatus(bool* CallStatusOpen);
	void ICampSkillUpdateUtsusemiSkillListForCampOnly(E_WIDGET_PRIO InPrio, int32 InDevilId);
	void ICampSkillCreateUtsusemiSkillListForCampOnly(E_WIDGET_PRIO InPrio, int32 InDevilId);
	void ICampSkillSelectedUtsusemiSkillList();
	void ICampSkillIsListAnimation(bool* OutIsAnimation);
	void ICampSkillIsWaitPartyEnd(bool* OutEnd);
	void ICampSkillGetListFadeOut(bool* OutFlag);
	void ICampSkillUpdateAnalyzeSkillList(E_WIDGET_PRIO InPriorty, int32 InDevilId);
	void ICampSkillUpdateUtsusemiSkillList(E_WIDGET_PRIO InPrio, int32 InDevilId);
	void ICampSkillUpdatePartySkillList(E_WIDGET_PRIO InPrio, int32 InNkmIndex);
	void ICampSkillDeleteFusionResultSkillList();
	void ICampSkillCreateFusionResultSkillList(E_WIDGET_PRIO InPrio, int32 InDevilId, bool bInUnknown);
	void ICampSkillDeleteDevilBookSkillList();
	void ICampSkillCreateDevilBookSkillList(E_WIDGET_PRIO InPrio, int32 InDevilId, int32 InDevilBookType);
	void ICampSkillUtsusemiProc(bool* OutIsCanseled);
	void ICampSkillDeleteUtsusemiSkillList();
	void ICampSkillCreateUtsusemiSkillList(E_WIDGET_PRIO InPrio, int32 InDevilId);
	void ICampSkillDeletePartySkillList();
	void ICampSkillCreatePartySkillList(E_WIDGET_PRIO InPrio, int32 InNkmIndex);
	void ICampSkillDeleteAnalyzeSkillList();
	void ICampSkillCreateAnalyzeSkillList(E_WIDGET_PRIO InPriorty, int32 InDevilId, bool InInitialize);
	void IIsCampSkillMoveCursor(bool* OutMoved);
	void ICampSkillGetSelectedNkmIndex(int32* OutNkmIndex);
	void ICampSkillGetReasonForCansel(E_CAMPSKILLLIST_CANSELTYPE* OutParam);
	void ICampSkillRebuildSkillList();
	void ICampSkillReselectSkill(int32 InType);
	void IIsCampSkillUseSkillProc(bool* OutUsed);
	void ICampSkillGetSelectedSkillId(int32* OutSkillId);
	void ICampSkillProc(bool* OutIsCanseled);
	void ICampSkillIsFinished(bool* OutFinished);
	void ICampSkillRemove();
	void ICampSkillCreate(E_WIDGET_PRIO InPriority);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CampSkillCtrl_C">();
	}
	static class IBPI_CampSkillCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CampSkillCtrl_C>();
	}
};
static_assert(alignof(IBPI_CampSkillCtrl_C) == 0x000008, "Wrong alignment on IBPI_CampSkillCtrl_C");
static_assert(sizeof(IBPI_CampSkillCtrl_C) == 0x000028, "Wrong size on IBPI_CampSkillCtrl_C");

}
