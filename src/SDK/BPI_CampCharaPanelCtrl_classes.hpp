#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CampCharaPanelCtrl

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CampCharaPanelCtrl.BPI_CampCharaPanelCtrl_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CampCharaPanelCtrl_C final : public IInterface
{
public:
	void ICampCharaPanelSetItemNumPosition(const struct FVector2D& InMainPosition, const struct FVector2D& InStockPosition, bool* OutParam);
	void ICampCharaPanelGetMaxNumberOfItem(int32* OutLevel);
	void ICampCharaPanelIsChangeParameter(bool* OutFlag);
	void ICampCharaPanelLevelUpVisibleOff(bool* OutFlag);
	void ICampCharaPanelRestartLevelUpVisible(bool* OutFlag);
	void ICampCharaPanelRestartLevelUp(bool* OutFlag);
	void ICampCharaPanelIsLevelUp(bool* OutLevelUp);
	void ICampCharaPanelResetPartyMouseFlag(bool* OutParam);
	void ICampCharaPanelResetPartyMouseFocus(bool* OutParam);
	void ICampCharaPanelSetPartyMouseFocus(bool* OutParam);
	void ICampCharaPanelInitializeProc(bool* OutParam);
	void ICampCharaPanelIsInitialized(bool* OutFinished);
	void ICampCharaPanelResetUnselectablePanel(bool* OutParam);
	void ICampCharaPanelResetAllActorPanel(bool* OutParam);
	void ICampCharaPanelGetPanelDispNumber(int32* OutNumber);
	void ICampCharaPanelCalcCharaPanelMove(int32 InType, bool* OutParam);
	void ICampCharaPanelResetStateItemHelp(bool* OutParam);
	void ICampCharaPanelIsStateItemHelp(bool* OutParam);
	void ICampCharaPanelSetAnalyzeButtoneHelp(bool* OutParam);
	void ICampCharaPanelUpdate(bool* OutParam);
	void ICampCharaPanelSetPartyOffsetByNkmIndex(int32 InNkmIndex, bool* OutParam);
	void ICampCharaPanelResetAllNewIcon(bool* OutParam);
	void ICampCharaPanelIsFinishedCharaPanel(bool* OutFinished);
	void ICampCharaPanelSetSkillReserveHPMPParam(bool* OutParam);
	void ICampCharaPanelResetMenuBGOffFlag(bool* OutParam);
	void ICampCharaPanelResetMenuBGOnFlag(bool* OutParam);
	void ICampCharaPanelIsMenuBGOff(bool* OutParam);
	void ICampCharaPanelIsMenuBGOn(bool* OutParam);
	void ICampCharaPanelIsRestartSkillList(bool* OutParam);
	void ICampCharaPanelSetSStatusButtonHelp(int32 InType);
	void ICampCharaPanelIsRestartItemList(bool* OutParam);
	void ICampCharaPanelIsDeleteStatusItemList(bool* OutDelete);
	void ICampCharaPanelResetTitleOnFlag(bool* OutParam);
	void ICampCharaPanelIsMainTitleOn(bool* OutParam);
	void ICampCharaPanelResetTitleOffFlag(bool* OutParam);
	void ICampCharaPanelIsMainTitleOff(bool* OutParam);
	void ICampCharaPanelSetUStatusButtonHelp(int32 InType);
	void ICampCharaPanelSetAStatusButtonHelp(int32 InType);
	void ICampCharaPanelCheckPartyButtonHelp();
	void ICampCharaPanelSkillUserStatusCtrInit(int32 NkmIndex, bool IsParty, bool* Dummy);
	void ICampCharaPanelSkillUserStatusCtrlStart(bool* Dummy);
	void ICampCharaPanelSkillUserStatusCtrl(bool* IsEnd);
	void ICampCharaPanelIsDeleteSStatusSkillList(bool* OutDelete);
	void ICampCharaPanelSetSStatusStep(int32 InStep);
	void ICampCharaPanelGetSStatusStep(int32* OutStep);
	void ICampCharaPanelGetSStatusType(int32* OutType);
	void ICampCharaPanelGetUtsusemiCount(int32* OutNumber);
	void ICampCharaPanelGetAnalyzeCount(int32* OutNumber);
	void ICampCharaPanelResetReserveMPCost(int32 InNkmIndex);
	void ICampCharaPanelSetReserveMPCost(int32 InSkillId, int32 InNkmIndex);
	void ICampCharaPanelIsNewIconOfAllUtsusemiOff(bool* OutParam);
	void ICampCharaPanelIsNewIconOfAllAnalyzesOff(bool* OutParam);
	void ICampCharaPanelSetFadeOut(int32 InMenuType);
	void ICampCharaPanelStopAnimation();
	void ICampCharaPanelRestartUtsusemiSkillList();
	void IIsCampCharaPanelSelectedUtsusemiSkillList(bool* OutParam);
	void ICampCharaPanelGetUtsusemiDevilId(int32* OutDevilId);
	void IIsCampCharaPanelSetUtsusemiSkillList(bool* OutParam);
	void ICampCharaPanelUtsusemiProc(bool* IsCanseled);
	void ICampCharaPanelCreateUtsusemiPanel(E_WIDGET_PRIO InPrio, const struct FVector2D& InMainPosition);
	void ICampCharaPanelGetPartyNkmIndex(int32* OutNkmIndex);
	void IIsCampCharaPanelSetPartySkillList(bool* OutParam);
	void ICampCharaPanelGetAnalyzeDevilId(int32* OutDevilId);
	void IIsCampCharaPanelSetAnalyzeSkillList(bool* OutParam);
	void ICampCharaPanelOn();
	void ICampCharaPanelOff();
	void ICampCharaPanelAnalyzeProc(bool* IsCanseled);
	void ICampCharaPanelCreateAnalyzePanel(E_WIDGET_PRIO InPrio, const struct FVector2D& InMainPosition);
	void ICampCharaPanelResetActorPanel(int32 InNkmIndex);
	void ICampCharaPanelSetActorPanel(int32 InNkmIndex);
	void ICampCharaPanelStartPanelProc();
	void ICampCharaPanelSkillGetCanselType(int32* OutType);
	void ICampCharaPanelSkillRetargetSelectSkill();
	void IIsCampCharaPanelSkillWaitTargetList(bool* OutParam);
	void ICampCharaPanelSkillUseProc(bool* IsCanseled);
	void ICampCharaPanelSetUseSkill(int32 InSkillId, int32 InNkmIndex);
	void IICampCharaPaneltemGetCanselType(int32* OutType);
	void ICampCharaPanelItemRetargetSelectItem();
	void IIsCampCharaPaneltemWaitTargetList(bool* OutParam);
	void ICampCharaPanelItemUseProc(bool* IsCanseled);
	void ICampCharaPanelSetUseItem(int32 InItemId);
	void ICampCharaPanelProc(bool* IsCanseled);
	void ICampCharaPanelRemove();
	void ICampCharaPanelSetPanelType(int32 InIndex, int32 InType);
	void ICampCharaPanelCreate(E_WIDGET_PRIO InPrio, const struct FVector2D& InMainPosition, const struct FVector2D& InStockPosition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CampCharaPanelCtrl_C">();
	}
	static class IBPI_CampCharaPanelCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CampCharaPanelCtrl_C>();
	}
};
static_assert(alignof(IBPI_CampCharaPanelCtrl_C) == 0x000008, "Wrong alignment on IBPI_CampCharaPanelCtrl_C");
static_assert(sizeof(IBPI_CampCharaPanelCtrl_C) == 0x000028, "Wrong size on IBPI_CampCharaPanelCtrl_C");

}

