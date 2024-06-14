#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleCharaPanelCtrl

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_BattleCharaPanelCtrl.BPI_BattleCharaPanelCtrl_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_BattleCharaPanelCtrl_C final : public IInterface
{
public:
	void IBattleCharaPanelCreate(E_WIDGET_PRIO InPrio, bool InStartPanel);
	void IBattleCharaPanelOn();
	void IBattleCharaPanelOff();
	void IBattleCharaPanelRemove();
	void IBattleCharaPanelActorPanelOn(int32 InIndex, bool IsSingleCheck);
	void IBattleCharaPanelActorPanelOff(int32 InIndex, bool IsSingleCheck);
	void IBattleCharaPanelCalcHP(int32 InIndex, int32 InCalcHP);
	void IBattleCharaPanelCalcMP(int32 InIndex, int32 InCalcMP, bool InFlag);
	void IBattleCharaPanelSetBst(int32 InIndex, int32 InBst);
	void IBattleCharaPanelResetBst(int32 InIndex, int32 InBst);
	void IBattleCharaPanelSetReserveMPParam(int32 InIndex, int32 InMp);
	void IBattleCharaPanelResetReserveMPParam(int32 InIndex, bool IsSingleCheck);
	void IBattleCharaPanelSetPanelType(int32 InIndex, int32 InType);
	void IBattleCharaPanelSetParam(int32 InType, const struct FBtlParty& InBtlParty);
	void IBattleCharaPanelSetEmptyPanelStack(int32 InIndex, float InStartTime, bool InOptionCheck, bool InVisibleCheck);
	void IBattleCharaPanelSelectPanelOn(int32 InIndex, bool InSingleCheck);
	void IBattleCharaPanelSelectPanelOff(int32 InIndex, bool InSingleCheck);
	void IBattleCharaPanelCalcHPNoLimit(int32 InIndex, int32 InCalcHP, int32 InLimitHp);
	void IBattleCharaPanelSetDamageAnimation(int32 InIndex, bool IsSingleCheck);
	void IBattleCharaPanelSetRecoveryAnimation(int32 InIndex, bool IsSingleCheck, int32 InCalcParam, int32 InType);
	void IBattleCharaPanelSetSupport(int32 InIndex, E_BTL_CNT InSupport, int32 InValue);
	void IBattleCharaPanelResetSupport(int32 InIndex, E_BTL_CNT InSupport);
	void IBattleSummonCharaPanelCreate(E_WIDGET_PRIO InPrio, int32 InPartyIndex, int32 InUseSkillId);
	void IBattleSummonCharaPanelProc(bool* IsCanseled);
	void IBattleSummonCharaPanelIsFinished(bool* IsFinished);
	void IBattleStatusCharaPanelCreate(E_WIDGET_PRIO InPrio, int32 InStartPartyIndex);
	void IBattleStatusCharaPanelProc(bool* IsCanseled);
	void IBattleStatusCharaPanelStartProc();
	void IBattleStatusCharaPanelIsFinished(bool* IsFinished);
	void IBattleSummonGetBattleInParty(int32 InType, int32 InIndex, int32* OutParam);
	void IBattleSummonIsCanseled(bool* OutIsCanseled);
	void IBattleCharaPanelSetBattleInterface(TScriptInterface<class IBPI_BattleMain_C> InBPIBattleMain, TScriptInterface<class IBPI_BattleParty_C> InBPIBattleParty);
	void IBattleStatusGetPartyIndexByIndex(int32 InIndex, int32* OutPartyIndex);
	void IBattleStatusIsCanseled(bool* IsCanseled);
	void IBattleSelectCharaPanelCreate(E_WIDGET_PRIO InPrio, int32 InSelectType, int32 InPartyIndex);
	void IBattleSelectCharaPanelProc(bool* IsCanseled);
	void IBattleSelectCharaPanelIsFinished(bool* IsFinished);
	void IBattleSelectCharaPanelGetPartyIndexByIndex(int32 InIndex, int32* OutPartyIndex);
	void IBattleSelectCharaPanelIsCanseled(bool* IsCanseled);
	void IBattleCharaPanelEnhanceAnimationOn(int32 InIndex);
	void IBattleCharaPanelEnhanceAnimationOff(int32 InIndex);
	void IBattleSummonSetSelectedPanel();
	void IBattleCharaPanelCalcKishibari(int32 InIndex, int32 InCalcHP, int32 InHp, int32 InType);
	void IBattleCharaPanelUpdateBst(int32 InIndex, int32 InBst, int32 InValue);
	void IBattleCharaPanelFadeIn();
	void IBattleCharaPanelFadeOut();
	void IBattleCharaPanelIsFinishedBattleCharaPanel(bool* OutFinished);
	void IBattleCharaPanelSetPanelFadeOutStack(int32 InIndex, float InStartTime, bool InOptionCheck, bool InVisibleCheck, bool* OutParam);
	void IBattleCharaPanelSetEmptyPanel(int32 InIndex, bool* OutParam);
	void IBattleCharaPanelSetParamStack(int32 InType, const struct FBtlParty& InBtlParty, float InStartTime, bool InOptionCheck, bool* OutParam);
	void IBattleCharaPanelIsFinishedPanelFadeOut(int32 InIndex, bool* OutFinished);
	void IBattleCharaPanelCalcSupport(int32 InIndex, const struct FBtlParty& InBtlParty, bool* OutParam);
	void IBattleCharaPanelStartPanel(bool* OutParam);
	void IBattleCharaPanelSetReserveHPParam(int32 InIndex, int32 InHp);
	void IBattleCharaPanelResetReserveHPParam(int32 InIndex, bool InSingleCheck);
	void IBattleCharaPanelIsFinishedInitialized(bool* OutFinished);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_BattleCharaPanelCtrl_C">();
	}
	static class IBPI_BattleCharaPanelCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_BattleCharaPanelCtrl_C>();
	}
};
static_assert(alignof(IBPI_BattleCharaPanelCtrl_C) == 0x000008, "Wrong alignment on IBPI_BattleCharaPanelCtrl_C");
static_assert(sizeof(IBPI_BattleCharaPanelCtrl_C) == 0x000028, "Wrong size on IBPI_BattleCharaPanelCtrl_C");

}
