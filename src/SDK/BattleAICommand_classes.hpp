#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleAICommand

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleAICommand.BattleAICommand_C
// 0x0008 (0x00B8 - 0x00B0)
class UBattleAICommand_C final : public UBattleAICommandBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BattleAICommand(int32 EntryPoint);
	void BI_Test_AI();
	void Act_Attack(bool* Success);
	void Tar_Random();
	bool Chk_MyHPPerc(int32 Perc);
	void GetActorIndex(int32* RetValue);
	void CalcRate(int32 Num, int32 Max, int32* RetValue);
	void CalcHPRate(int32 PartyIndex, int32* RetValue);
	bool Chk_PLHPPerc(int32 Perc);
	bool Chk_PLHPPercOver(int32 Perc);
	bool Chk_ENHPPerc(int32 Perc);
	bool Chk_ENHPPercOver(int32 Perc);
	bool Chk_ENHPPercID(int32 DevilID, int32 Perc);
	bool Chk_MyLvOver(int32 Level);
	void Chk_PLLvOver(int32 Level, bool* RetValue);
	void Chk_ENLvOver(int32 Level, bool* RetValue);
	void Chk_ENCnt(int32 Num, bool* RetValue);
	bool Chk_MyBst(E_BAD_STATUS bst);
	void Chk_PLBst(E_BAD_STATUS bst, bool* RetValue);
	void Chk_ENBst(E_BAD_STATUS bst, bool* RetValue);
	void Chk_PLID(int32 ID, bool* RetValue);
	void Chk_ENID(int32 ID, bool* RetValue);
	void Act_Skill(int32 SkillId, bool* Success);
	void Chk_ENHojoPlusNum(E_AI_SERCH_AID InHojo, int32 InValue, bool* RetValue);
	void ChangeHojoType(E_AI_SERCH_AID InHojo, E_BTL_CNT* RetValue);
	void Chk_PLHojoPlusNum(E_AI_SERCH_AID InHojo, int32 InValue, bool* RetValue);
	void Chk_ENHojoMinusNum(E_AI_SERCH_AID InHojo, int32 InValue, bool* RetValue);
	void Chk_PLHojoMinusNum(E_AI_SERCH_AID InHojo, int32 InValue, bool* RetValue);
	void Chk_PLAishouPlus(E_ATTRIBUTE_TYPE InAttr, bool* RetValue);
	void Chk_PLAishouFlat(E_ATTRIBUTE_TYPE InAttr, bool* RetValue);
	void Chk_PLAishouMinus(E_ATTRIBUTE_TYPE InAttr, bool* RetValue);
	void Chk_MyUsedAttr(E_ATTRIBUTE_TYPE InAttr, bool* RetValue);
	void IsUsedPrevSkillAttr(int32 InPartyIndex, E_ATTRIBUTE_TYPE InAttr, bool* RetValue);
	void IsUsedPrevSkillID(int32 InPartyIndex, int32 InSkillId, bool* RetValue);
	void Chk_MyUsedSkillID(int32 InSkillId, bool* RetValue);
	void Chk_MyCharged(bool* RetValue);
	void Chk_MyKaishingan(bool* RetValue);
	void Tar_AI();
	void Tar_HPMin();
	void Tar_HPMax();
	void Tar_ID(int32 InID);
	void Tar_NotID(int32 InID);
	void Tar_Self();
	void Tar_AishouPlus(E_ATTRIBUTE_TYPE InAishou);
	void Tar_AishouNotPlus(E_ATTRIBUTE_TYPE InAishou);
	void Tar_AishouFlat(E_ATTRIBUTE_TYPE InAishou);
	void Tar_AishouNotFlat(E_ATTRIBUTE_TYPE InAishou);
	void Tar_AishouMinus(E_ATTRIBUTE_TYPE InAishou);
	void Tar_AishouNotMinus(E_ATTRIBUTE_TYPE InAishou);
	void GetMyHP(int32* RetValue);
	void TempFlagOn(uint8 InValue);
	void TempFlagOff(uint8 InValue);
	void TempFlagChk(uint8 InValue, bool* Ret_Value);
	void TempFlagClear();
	void Chk_ENBstOver(E_BAD_STATUS bst, int32 Num, bool* RetValue);
	void Chk_PLBstOver(E_BAD_STATUS bst, int32 Num, bool* RetValue);
	void Tar_Bst(E_BAD_STATUS bst);
	void Tar_NotBst(E_BAD_STATUS bst);
	void Tar_SelfSideOther();
	void Tar_HPPerc(int32 Perc);
	void GetMySkillID(int32 N, int32* RetValue);
	void GetMySkillIDAttr(int32 N, E_ATTRIBUTE_TYPE* RetValue);
	void Opt_NextCritical();
	void Opt_NextMiss();
	void Chk_PLNotBst(E_BAD_STATUS bst, bool* RetValue);
	void Chk_PLCritical(bool* RetValue);
	void Chk_ENIDHojoMinus(int32 ID, E_EFFICACY_BD N, int32 N2, bool* RetValue);
	void GetEfficacyToBtlCnt(E_EFFICACY_BD N, E_BTL_CNT* RetValue);
	void GetENDevilID_AIAtkType(E_AI_ATK_TYPE Type, int32* DevilID);
	void Tar_SetTargetHojoMIN(E_EFFICACY_BD Efficacy);
	void Act_Summon(int32 DevilID_0, int32 DevilID_1, int32 DevilID_2, int32 DevilID_3, int32 SkillId, bool* Success);
	void Tar_Summon();
	void Chk_ENIDHojoPlus(int32 DevilID, E_EFFICACY_BD N, int32 N2, bool* RetValue);
	void Chk_PLBstOver2(E_BAD_STATUS N, int32 Num, bool* RetValue);
	void Chk_ENBstOver2(E_BAD_STATUS N, bool* RetValue);
	void Chk_PLAllHP(int32 N, bool* RetValue);
	void Chk_ENAllHP(int32 N, bool* RetValue);
	void Chk_MyConsentrate(bool* RetValue);
	void Chk_PLUsed_Skill_ID(int32 InSkillId, int32 TurnCnt, bool* RetValue);
	void Chk_ENUsedSkillID(int32 InSkillId, int32 TurnCnt, bool* RetValue);
	void Tar_SetTargetHojoMAX(E_EFFICACY_BD Efficacy);
	void Tar_NotBst2(E_BAD_STATUS Efficacy, int32 Num);
	void SetTempValue(int32 InValue, int32 Param_Index);
	void GetTempValue(int32 Param_Index, int32* RetValue);
	void ClearTempValue(int32 Param_Index);
	void ClearTempValueAll();
	void Chk_PLCnt(int32 Num, bool* RetValue);
	E_SKILL_TARGET GetMySkillTargetArea(int32 SkillIndex);
	void GetSkillHaveBst(int32 SkillId, E_BAD_STATUS* RetValue);
	void GetPTUtilInterface(TScriptInterface<class IBPI_PTUtilInterface>* RetValue);
	void GetPTMemInterface(TScriptInterface<class IBPI_PTMemDataInterface>* RetValue);
	void GetMainInterface(TScriptInterface<class IBPI_MainInterface>* AsBPI_Main_Interface);
	int32 GetGlobalActNum();
	int32 GetMyActNum();
	int32 GetMyActPassNum();
	int32 GetBlockTargetNum();
	void GetMyBstNum(E_BAD_STATUS bst, int32* Num);
	void GetBIMainWork(TScriptInterface<class IBPI_BattleMain_C>* Ret);
	void GetBIPartySystem(TScriptInterface<class IBPI_BattleParty_C>* Ret);
	void SetActionSelectList(TArray<uint8>& List);
	void GetBPIActorAction(TScriptInterface<class IBPI_BattleCharAction_C>* Action);
	void GetActionSelectList(TArray<uint8>* List);
	void ChkActNum(int32 Value, bool* Ret);
	void ChkENTargetAll(int32 TurnNum, bool* Ret);
	void ChkMyUpLifting(bool* RetValue);
	void ChkENUpLiftingStage(int32 Gauge, bool* RetValue);
	void Tar_AishouReflection(E_ATTRIBUTE_TYPE Attr);
	void Tar_AishouAbsorption(E_ATTRIBUTE_TYPE Attr);
	void Tar_AishouBlock(E_ATTRIBUTE_TYPE Attr);
	void Tar_AishouNotReflection(E_ATTRIBUTE_TYPE Attr);
	void Tar_AishouNotAbsorption(E_ATTRIBUTE_TYPE Attr);
	void Tar_AishouNotBlock(E_ATTRIBUTE_TYPE Attr);
	void Tar_Guard();
	void Tar_NotGuard();
	void Tar_TarTetra();
	void Tar_TarNotTetra();
	void Tar_TarMakra();
	void Tar_TarNotMakra();
	void Act_Summon_Tsukuyomi(int32 DevilID_0, int32 DevilID_1, int32 DevilID_2, int32 DevilID_3, int32 SkillId, bool* Success);
	void Tar_TarAutoBattle();
	void GetMySkillIDByType(E_SKILL_TYPE SkillType, int32* SkillId);
	void GetHojoSkillValidTarget(int32 SkillId, int32* Num);
	void GetMyHPHealSkillID(int32* SkillId);
	void GetUpliftProbability(int32* Propability);
	void IsUsedPrevSkillIDTurn(int32 InPartyIndex, int32 InSkillId, int32 InTurn, bool* IsUsed);
	void IsUsedPrevSkillIDAct(int32 InPartyIndex, int32 InSkillId, int32 InTurn, bool* RetValue);
	void ChkEventEncount(bool* RetValue);
	void Get_MyAidCounter(E_BTL_CNT AidCounter, int32* RetValue);
	void Chk_ENIDUsedSkillIDTurn(int32 DevilID, int32 SkillId, int32 Turn, bool* RetValue);
	void GetSelUseSkill(TArray<struct FBtlAISkillData>& AISkillData, int32* SkillId);
	void Get_HojoMinusTotal(E_BTL_SIDE Inside, E_AI_SERCH_AID InHojo, int32 InValue, int32* RetValue);
	void Get_HojoPlusTotal(E_BTL_SIDE Inside, E_AI_SERCH_AID InHojo, int32 InValue, int32* RetValue);
	void Tar_Smart();
	void GetENIDCounter(E_BTL_CNT AidCounter, int32 DevilID, int32* RetValue);
	void GetRandomIntegerInArray(TArray<struct FBtlAISkillData>& AISkillData, int32* Ret);
	void GetPLBstCnt(int32* RetValue);
	void GetBstCnt_PartyIndex(int32 PartyIndex, int32* Cnt);
	void Tar_ENAnalyze();
	void ChkDisabledAishou_ENAnalyze(TArray<int32>* CharaIdArray, TArray<bool>* CheckRetArray);
	void Act_Summon_EmptyPos(int32 DevilID_0, int32 DevilID_1, int32 DevilID_2, int32 DevilID_3, int32 SkillId, bool IsExclusionLeader, bool* Success);
	void Tar_Weak();
	void GetMyMagatsuhiSkillIDArray(TArray<int32>* RetValue);
	void Tar_ValidSkill();
	void Tar_Chohatsu();
	void ChkDisabledAishou_ENAnalyze2(TArray<int32>* CharaIdArray, TArray<bool>* CheckRetArray);
	void BI_ActSkill(int32 SkillId, bool* RetValue);
	void BI_ActAttack(bool* RetValue);
	void BI_TarAI(bool* RetValue);
	void BI_TarAishouNotPlus(E_ATTRIBUTE_TYPE InValue, bool* RetValue);
	void BI_TarRandom(bool* RetValue);
	void BI_ChkMyHPPerc(int32 Perc, bool* RetValue);
	void BI_TempFlagOff(uint8 InValue, bool* RetValue);
	void BI_TempFlagOn(uint8 InValue, bool* RetValue);
	void BI_TempFlagCheck(uint8 InValue, bool* RetValue);
	void BI_TempFlagClear(bool* RetValue);
	void BI_ChkPLHPPerc(int32 InValue, bool* RetValue);
	void BI_ChkPLHPPercOver(int32 Perc, bool* RetValue);
	void BI_TarHPMin(bool* RetValue);
	void BI_TarHPMax(bool* RetValue);
	void BI_ChkENBstOver(E_BAD_STATUS bst, int32 InValue, bool* RetValue);
	void BI_ChkPLBstOver(E_BAD_STATUS bst, int32 InValue, bool* RetValue);
	void BI_TarNotBst(E_BAD_STATUS bst, bool* RetValue);
	void BI_TarBst(E_BAD_STATUS bst, bool* RetValue);
	void BI_OptNextMiss(bool* RetValue);
	void BI_OptNextCritical(bool* RetValue);
	void BI_GetMySkillID(int32 Slot, int32* RetValue);
	void BI_GetMySkillIDAttr(int32 Slot, E_ATTRIBUTE_TYPE* RetValue);
	void BI_ChkPLAishouMinus(E_ATTRIBUTE_TYPE Attr, bool* RetValue);
	void BI_ChkPLAishouFlat(E_ATTRIBUTE_TYPE Attr, bool* RetValue);
	void BI_ChkPLAishouPlus(E_ATTRIBUTE_TYPE Attr, bool* RetValue);
	void BI_TarAishouNotMinus(E_ATTRIBUTE_TYPE Attr, bool* RetValue);
	void BI_TarAishouMinus(E_ATTRIBUTE_TYPE Attr, bool* RetValue);
	void BI_TarHPPerc(int32 InHp, bool* RetValue);
	void BI_TarID(int32 InID, bool* RetValue);
	void BI_TarPartyIndex(int32 InPartyIndex, bool* RetValue);
	void BI_TarHero(bool* RetValue);
	void BI_TarNotHero(bool* RetValue);
	void BI_TarNotID(int32 InID, bool* RetValue);
	void BI_TarSelf(bool* RetValue);
	void BI_TarAishouFlat(E_ATTRIBUTE_TYPE InAishou, bool* RetValue);
	void BI_TarAishouNotFlat(E_ATTRIBUTE_TYPE InAishou, bool* RetValue);
	void BI_TarSelfSideOther(bool* RetValue);
	void BI_ChkENHPPerc(int32 Perc, bool* RetValue);
	void BI_ChkENHPPercOver(int32 Perc, bool* RetValue);
	void BI_ChkENLvOver(int32 Level, bool* RetValue);
	void BI_ChkPLLvOver(int32 Level, bool* RetValue);
	void BI_ChkMyLvOver(int32 Level, bool* RetValue);
	void BI_ChkENCnt(int32 Num, bool* RetValue);
	void BI_ChkENBst(E_BAD_STATUS bst, bool* RetValue);
	void BI_ChkPLBst(E_BAD_STATUS bst, bool* RetValue);
	void BI_ChkMyBst(E_BAD_STATUS bst, bool* RetValue);
	void BI_ChkENID(int32 ID, bool* RetValue);
	void BI_ChkPLID(int32 ID, bool* RetValue);
	void BI_ChkPLHojoMinusNum(E_AI_SERCH_AID InHojo, int32 InValue, bool* RetValue);
	void BI_ChkENHojoMinusNum(E_AI_SERCH_AID InHojo, int32 InValue, bool* RetValue);
	void BI_ChkPLHojoPlusNum(E_AI_SERCH_AID InHojo, int32 InValue, bool* RetValue);
	void BI_ChkENHojoPlusNum(E_AI_SERCH_AID InHojo, int32 InValue, bool* RetValue);
	void BI_ChkMyKaishingan(bool* RetValue);
	void BI_ChkMyCharged(bool* RetValue);
	void BI_Chk_PLNotBst(E_BAD_STATUS bst, bool* RetValue);
	void BI_Chk_PLCritical(bool* RetValue);
	void BI_Chk_ENIDHojoMinus(int32 InID, E_EFFICACY_BD N, int32 N2, bool* RetValue);
	void BI_Chk_ENID(int32 DevilID, bool* RetValue);
	void BI_GetENDevilID_AIAtkType(E_AI_ATK_TYPE AtkType, int32* DevilID);
	void BI_Tar_SetTargetHojoMIN(E_EFFICACY_BD Efficacy, bool* RetValue);
	void BI_ActSummon(int32 DevilID_0, int32 DevilID_1, int32 DevilID_2, int32 DevilID_3, int32 SkillId, bool* RetValue);
	void BI_Chk_ENBstOver2(E_BAD_STATUS N, bool* RetValue);
	void BI_Chk_PLBstOver2(E_BAD_STATUS N, int32 Num, bool* RetValue);
	void BI_Chk_PLAllHP(int32 N, bool* RetValue);
	void BI_Chk_ENAllHP(int32 N, bool* RetValue);
	void BI_Chk_MyConsentrate(bool* RetValue);
	void BI_Tar_SetTargetHojoMAX(E_EFFICACY_BD N, bool* RetValue);
	void BI_TarNotBst2(E_BAD_STATUS N, int32 Num, bool* RetValue);
	void BI_SetTempValue(int32 InValue, int32 Param_Index, bool* RetValue);
	void BI_GetTempValue(int32 Param_Index, int32* RetValue);
	void BI_ClearTempValueAll(bool* RetValue);
	void _BI_ClearTempValue(int32 Param_Index, bool* RetValue);
	void BI_ChkPLCnt(int32 Num, bool* RetValue);
	void BI_GetMySkillTargetArea(int32 SkillIndex, E_SKILL_TARGET* RetValue);
	void BI_ChkMyUsedAttr(E_ATTRIBUTE_TYPE InAttr, bool* RetValue);
	void BI_ChkMyUsedSkillID(int32 InSkillId, bool* RetValue);
	void BI_Chk_PLUsedSkillID(int32 SkillId, int32 TurnCnt, bool* RetValue);
	void BI_Chk_ENUsedSkillID(int32 SkillId, int32 TurnCnt, bool* RetValue);
	void BI_GetSkillHaveBst(int32 SkillId, E_BAD_STATUS* RetValue);
	void BI_Tar_AishouPlus(E_ATTRIBUTE_TYPE Attr, bool* RetValue);
	void BI_GetMyHP(int32* RetValue);
	void BI_GetGlobalActNum(int32* RetValue);
	void BI_GetMyActNum(int32* RetValue);
	void BI_GetMyActPassNum(int32* RetValue);
	void BI_GetENBlockTargetNum(int32* RetValue);
	void BI_GetMyPartnerID(E_PARTNER_ID* RetValue);
	void BI_GetPartnerNum(int32* RetValue);
	void BI_GetMyBstNum(E_BAD_STATUS bst, int32* Value);
	void BI_GetTurnMod(int32 Mod, int32* Value);
	void BI_ChkAllTurn(int32 Value, bool* Ret);
	void BI_ChkActNum(int32 Value, bool* Ret);
	void BI_ChkENTargetAll(int32 TurnNum, bool* Ret);
	void BI_ChkMyUpLifting(bool* RetValue);
	void BI_ChkENUpLiftingStage(int32 GaugeValue, bool* RetValue);
	void BI_GetPress(int32* RetValue);
	void BI_GetPressFull(int32* RetValue);
	void BI_GetPressHalf(int32* RetValue);
	void BI_OptUpLifting(bool* RetValue);
	void BI_TarAishouReflection(E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_TarAishouAbsorption(E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_TarAishouBlock(E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_TarAishouNotReflection(E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_TarAishouNotAbsorption(E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_TarAishouNotBlock(E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_TarGuard(bool* Ret);
	void BI_TarNotGuard(bool* Ret);
	void BI_ChkPLAishouReflection(E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_ChkPLAishouAbsorption(E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_ChkPLAishouBlock(E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_ChkPLGuard(bool* Ret);
	void BI_ChkPLNotGuard(bool* Ret);
	void BI_ChkPLTetra(bool* Ret);
	void BI_TarNotTetra(bool* Ret);
	void BI_TarMakra(bool* Ret);
	void BI_TarNotMakra(bool* Ret);
	void BI_ChkPLNotTetra(bool* Ret);
	void BI_ChkPLMakra(bool* Ret);
	void BI_ChkPLNotMakra(bool* Ret);
	void BI_TarTetra(bool* Ret);
	void BI_OptUpLifting_TurnEnd(int32 DevilID, bool* Ret);
	void BI_GetElectrification(int32* RetValue);
	void BI_GetDown(int32 InID, int32* RetValue);
	void BI_ActSummonTsukuyomi(int32 DevilID_0, int32 DevilID_1, int32 DevilID_2, int32 DevilID_3, int32 SkillId, bool* RetValue);
	void BI_TarSummon(bool* Ret);
	void BI_GetPLAishouReflection(E_ATTRIBUTE_TYPE Attr, int32* Ret);
	void BI_GetPLAishouAbsorption(E_ATTRIBUTE_TYPE Attr, int32* Ret);
	void BI_GetPLAishouBlock(E_ATTRIBUTE_TYPE Attr, int32* Ret);
	void BI_GetPLAishouPlus(E_ATTRIBUTE_TYPE Attr, int32* Ret);
	void BI_GetPLAishouFlat(E_ATTRIBUTE_TYPE Attr, int32* Ret);
	void BI_GetPLAishouMinus(E_ATTRIBUTE_TYPE Attr, int32* Ret);
	void BI_ChkPLChohatsu(bool* Ret);
	void BI_ChkMyAtcReflectionBefTurn(E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_ChkMyAtcAbsorptionBefTurn(E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_ChkMyAtcBlockBefTurn(E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_ChkMyDmgAishouBefTurn(E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_GetMyDmgAishouMinusBefTurn(int32* Ret);
	void BI_GetMySkillIDByType(E_SKILL_TYPE SkillType, int32* SkillId);
	void BI_GetHojoSkillValidTarget(int32 SkillId, int32* Num);
	void BI_GetHPHealSkillID(int32* SkillId);
	void BI_GetUpliftProbability(int32* Probability);
	void BI_ChkEnemySurpriseTurn(bool* IsSurprise);
	void BI_GetAttackSkillID(bool IsAll, int32* SkillId);
	void BI_ChkMyUsedSkillIDTurn(int32 InSkillId, int32 InTurn, bool* RetValue);
	void BI_ChkMyUsedSkillIDAct(int32 InSkillId, int32 InActNum, bool* IsUsed);
	void BI_ChkEventEncount(bool* IsEventEncount);
	void BI_ChkMyFirstAct(bool* IsFirstAct);
	void BI_GetMyAidCounter(E_BTL_CNT AidCounter, int32* RetValue);
	bool BI_ChkENHPPercID(int32 DevilID, int32 Perc);
	void BI_Chk_ENIDUsedSkillIDTurn(int32 DevilID, int32 SkillId, int32 Turn, bool* Used);
	void BI_GetSelUseSkill(TArray<struct FBtlAISkillData>& AISkillData, int32* SkillId);
	void BI_GetHojoPlusTotal(E_BTL_SIDE Inside, E_AI_SERCH_AID InHojo, int32 InValue, int32* OutTotal);
	void BI_GetHojoMinusTotal(E_BTL_SIDE Inside, E_AI_SERCH_AID InHojo, int32 InValue, int32* OutTotal);
	void BI_Chk_SummonPositionDevilID(int32 SummonIndex, int32 DevilID, bool* Ret);
	void BI_TarSmart(bool* Ret);
	void BI_ChkENTetraID(int32 DevilID, bool* RetValue);
	void BI_ChkENMakraID(int32 DevilID, bool* RetValue);
	void BI_ChkENIDHojoPlus(int32 InDevilId, E_EFFICACY_BD InHojo, int32 InValue, bool* RetValue);
	void BI_GetENIDAidCounter(E_BTL_CNT AidCounter, int32 DevilID, int32* RetValue);
	void BI_TarHPRatioMIN(bool* Ret);
	void BI_TarHPRatioMAX(bool* Ret);
	void BI_GetDekajaEffectiveTotal(int32* Total);
	void BI_GetDekundaEffectiveTotal(int32* Total);
	void BI_GetRandomIntegerInArray(TArray<struct FBtlAISkillData>& AISkillData, int32* Ret);
	void BI_GetPLBstCnt(int32* Cnt);
	void BI_GetPhysicalChargeEffectiveSkillID(int32* SkillId);
	void BI_GetMagicChargeEffectiveSkillID(int32* SkillId);
	void BI_ChkMyPhysicalCharge(bool* Ret);
	void BI_ChkMyMagicCharge(bool* Ret);
	void BI_GetChargeSkillID(int32* SkillId);
	void BI_GetHojoSkillIDNotCharge(int32* SkillId);
	void BI_GetSkillOverwriteBst(int32 SkillId, E_BAD_STATUS* bst);
	void BI_TarENAnalyze(bool* RetValue);
	void BI_GetTarIdPLChohatsu_ENAnalyze(int32* DevilID);
	void BI_GetPLNumVaildSkill_ENAnalyze(int32 SkillId, int32* Num);
	void BI_ChkVaildAttrPLID_ENAnalyze(int32 DevilID, E_ATTRIBUTE_TYPE Attr, bool* RetValue);
	void BI_ChkVaildSkillPLID_ENAnalyze(int32 DevilID, int32 SkillId, bool* RetValue);
	void BI_GetPLNumVaildAttr_ENAnalyze(E_ATTRIBUTE_TYPE Attr, int32* Num);
	void BI_ChkDisabledAishou_ENAnalyze(TArray<int32>* CharaIdArray, TArray<bool>* FlagCheckArray);
	void BI_ActSummon_EmptyPos(int32 DevilID_0, int32 DevilID_1, int32 DevilID_2, int32 DevilID_3, int32 SkillId, bool IsExclusionLeader, bool* Success);
	void BI_TarWeak(bool* Ret);
	void BI_Chk_BattleEventFlag(bool* Ret);
	void BI_ChkENUsedSkillIDTurn(int32 SkillId, int32 Turn, bool* Used);
	void BI_Chk_BattleEventFlag2(bool* Ret);
	void BI_GetMyMagatsuhiSkillIDArray(TArray<int32>* SkillIDArray);
	void BI_GetMagatsuhiDevilNum(int32* Num);
	void BI_GetStealDevilID(int32* DevilID);
	void BI_GetDifficulty(E_GAME_DIFFICULTY* Difficulty);
	void BI_GetPLAishouShield(E_ATTRIBUTE_TYPE Attr, int32* Num);
	void BI_GetPLNumVaildSkill(int32 SkillId, int32* Num);
	void BI_GetPLNumVaildAttr(E_ATTRIBUTE_TYPE Attr, int32* Num);
	void BI_TarValidSkill(bool* Ret);
	void BI_TarChohatsu(bool* Ret);
	void BI_GetTarIdPLChohatsu(int32* Devil_id);
	void BI_ChkVaildSkillPLID(int32 DevilID, int32 SkillId, bool* Ret);
	void BI_ChkVaildAttrPLID(int32 DevilID, E_ATTRIBUTE_TYPE Attr, bool* Ret);
	void BI_GetMyAishouChangeThisTurn(TArray<E_ATTRIBUTE_TYPE>* List);
	void BI_GetMyAisyouChangeAll(TArray<E_ATTRIBUTE_TYPE>* List);
	void BI_TarENAnalyze2(bool* RetValue);
	void BI_GetPLNumVaildAttr_ENAnalyze2(E_ATTRIBUTE_TYPE Attr, int32* Num);
	void BI_GetPLNumVaildSkill_ENAnalyze2(int32 SkillId, int32* Num);
	void BI_ChkVaildAttrPLID_ENAnalyze2(int32 DevilID, E_ATTRIBUTE_TYPE Attr, bool* RetValue);
	void BI_ChkVaildSkillPLID_ENAnalyze2(int32 DevilID, int32 SkillId, bool* RetValue);
	void BI_ChkDisabledAishou_ENAnalyze2(TArray<int32>* CharaIdArray, TArray<bool>* FlagCheckArray);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleAICommand_C">();
	}
	static class UBattleAICommand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleAICommand_C>();
	}
};
static_assert(alignof(UBattleAICommand_C) == 0x000008, "Wrong alignment on UBattleAICommand_C");
static_assert(sizeof(UBattleAICommand_C) == 0x0000B8, "Wrong size on UBattleAICommand_C");
static_assert(offsetof(UBattleAICommand_C, UberGraphFrame) == 0x0000B0, "Member 'UBattleAICommand_C::UberGraphFrame' has a wrong offset!");

}
