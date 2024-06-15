#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleCommand

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_TutorialWindow_WidgetState_structs.hpp"
#include "UMG_structs.hpp"
#include "BTL_CURSOR_MEMORY_T_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleCommand.BattleCommand_C
// 0x04B0 (0x0560 - 0x00B0)
class UBattleCommand_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TScriptInterface<class IBPI_BattleMain_C>     M_BIMainWork;                                      // 0x00B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77CD[0x8];                                     // 0x00C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBtlParty                              M_DescParty;                                       // 0x00D0(0x0320)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          M_Execute;                                         // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsCounterActor;                                  // 0x03F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsNoMoveCamera;                                  // 0x03F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsIntialized;                                    // 0x03F3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_Pause;                                           // 0x03F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77CE[0x3];                                     // 0x03F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_CursorIndex;                                     // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_TopIndex;                                        // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_LocalStep;                                       // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   M_SeName_Cursor;                                   // 0x0404(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   M_SeName_Ok;                                       // 0x040C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   M_SeName_Cnacel;                                   // 0x0414(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBtlCommand                            M_ResultCommand;                                   // 0x041C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          M_IsFinish;                                        // 0x042C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77CF[0x3];                                     // 0x042D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_ActValidNum;                                     // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77D0[0x4];                                     // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSkillCriticalValueOne>         M_SkillSettleCriticalInfo;                         // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         M_CursorSkillID;                                   // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_CursorItemID;                                    // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsShowPlayerParty;                               // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESlateVisibility                              M_CommonHelpWindowInitialVisibility;               // 0x0451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77D1[0x6];                                     // 0x0452(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_BtlCommandMenu_C*                   M_MainCommandMenu;                                 // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_BtlListMenu_C*                      M_ListMenu;                                        // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 M_ListMenuClass;                                   // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<E_BTL_UI_COMM_STEP>                    M_StepStacks;                                      // 0x0470(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsCallAutoBattle;                                  // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77D2[0x3];                                     // 0x0481(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_AutoBattleStep;                                  // 0x0484(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 M_OptionMenu;                                      // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, struct FBTL_CURSOR_MEMORY_T>      M_CursorMemory;                                    // 0x0490(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_BTL_UI_COMMAND                              M_SelectedCommand;                                 // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsForceAishou100;                                // 0x04E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_BTL_UI_COMM_STEP                            M_RecentReturnFrom;                                // 0x04E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77D3[0x1];                                     // 0x04E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   M_SeName_TargetChange;                             // 0x04E4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   M_SeName_TargetDecide;                             // 0x04EC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   M_SeName_Error;                                    // 0x04F4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_TutorialState;                                   // 0x04FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   M_SeName_WindowOpen;                               // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsIgnoreDialogCursorMove;                        // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77D4[0x7];                                     // 0x0509(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<E_TUTORIAL_WINDOW_MESSAGE_TYPE>        M_TutorialTypes;                                   // 0x0510(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         M_TutorialIndex;                                   // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsOpenTutorialWindow;                            // 0x0524(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77D5[0x3];                                     // 0x0525(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_ConditionStartIndex;                             // 0x0528(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsInTutorial;                                    // 0x052C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsAlreadyOpenTutorialWindow;                     // 0x052D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_BTL_UI_COMMAND                              M_CurrentCommandHelp;                              // 0x052E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsReducedBGM;                                    // 0x052F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         M_OriginBGMVolume;                                 // 0x0530(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_CommandShiftDirection;                           // 0x0534(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_UI_COMMAND                              M_ClickedMainCommand;                              // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_UnHoveredMainCommand;                            // 0x0539(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsContinueUpdate;                                // 0x053A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77D6[0x1];                                     // 0x053B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_ListMenuShiftDirection;                          // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsListMenuSelected;                              // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77D7[0x3];                                     // 0x0541(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_AutoBattleDialogPosition;                        // 0x0544(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_OptionCtrl_C>     M__BPI_OptionCtrl;                                 // 0x0548(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BattleCommand(int32 EntryPoint);
	void SpawnOptionCtrl();
	void OpenTutorialWindow(const TArray<E_TUTORIAL_WINDOW_MESSAGE_TYPE>& MessageType, bool CleanUp);
	void ReceiveTick(float DeltaSeconds);
	void Start_Auto_Battle_Button_Help_Effect();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void CallStep(E_BTL_UI_COMM_STEP M_MainStep, int32 StartCursorIndex, int32 TopIndex);
	void Evt_Initialize();
	void OnLoaded_DDD9B75145880DA34D813688855E615B(TSubclassOf<class UObject> Loaded);
	void OnLoaded_7D39E72949435427115CBCBD25F297DF(TSubclassOf<class UObject> Loaded);
	void OnLoaded_FC22B888429A4250960F64AD7E05ED41(TSubclassOf<class UObject> Loaded);
	void StartSeq(const struct FBtlParty& InParty, TScriptInterface<class IBPI_BattleMain_C> InMainWork, bool IsCounterActor, bool IsNoMoveCamera, bool NewParam, TArray<struct FSkillCriticalValueOne>& SettleCriticalInfo);
	void ChangeStep(E_BTL_UI_COMM_STEP Step, int32 CursorIndex, int32 TopIndex);
	void CallEndStep(E_BTL_UI_COMM_STEP Param_PrevStep);
	void ChangeMenuVisibility(bool IsView);
	void EndCommandMenu();
	void EndSkillMenu(bool CloseList, bool IsCharaChange, bool IsCancel);
	void SetVisibilitySkillList(ESlateVisibility IsVisibility, bool IsCancel);
	void EndItemMenu();
	void SetVisibilityItemList(ESlateVisibility InVisibility);
	void EndCondition();
	void CallEvent();
	void StartCommandMenu();
	void StartSkillMenu(int32 CursorIndex, int32 TopIndex);
	void StartItemMenu(int32 CursorIndex, int32 TopIndex);
	void GetItemData(TArray<struct FBtlUIItemData>* ItemData);
	void StartCondition();
	void SeqCommandMenuFunc();
	void CallCommand(E_BTL_UI_COMMAND Selection, bool* IsCursor, bool* IsOK);
	void PlaySeCommand(bool IsCursor, bool IsOK, bool IsCancel, bool IsTargetChange, bool IsTargetDecide, bool IsError, bool IsWindowOpen);
	void PlaySE(class FName InName);
	void CallSummon();
	void ChangeActChara(int32 InAdd, bool IsSkillMenu, bool* RetValue);
	void CallUnionForm();
	void SeqSkillMenuFunc();
	void StartSkillMenu_Core(int32 Lo_CursorIndex1, int32 Lo_TopIndex1);
	void CheckIsHero(int32 Param_Index, bool* Ret);
	void CheckSkillList(TArray<int32>& Array, TArray<int32>* OutList);
	void SeqItemMenuFunc();
	void SeqEscapeMenuFunc();
	void SeqActEndMenuFunc();
	void SeqTalkMenuFunc();
	void SeqConditionFunc();
	void IsInitialized(bool* RetValue);
	void UIRemoveFromParent();
	void IsFinished(bool* RetValue);
	void GetResult(struct FBtlCommand* RetValue);
	void GetSkillMenuCursor(int32* PartyIndex, int32* Top_Index);
	void GetItemMenuCursor(int32* PartyIndex, int32* TopIndex);
	void EndSeq();
	void Pause(bool Sw);
	void SetMainWork(TScriptInterface<class IBPI_BattleMain_C> MainWork);
	void StartItemMenu_Core(int32 CursorIndex, int32 TopIndex);
	void CheckUsedSkillNahobino(int32 SkillId, TArray<int32>& CheckSkillId, TArray<bool>& IsUsedList, bool* IsUsed);
	void CheckSkillList_UseData(TArray<struct FBtlUISkill_UseData_st>& SkillUseData, TArray<struct FBtlUISkill_UseData_st>* Out);
	void CallCommandCamera();
	void ChangeCursorFunc(bool IsSkill, bool IsTargetStart, bool IsCallCamera);
	void SetAllUIVisibility(bool Sw);
	void SeqTargetSelectFunc();
	void StartTargetSelect();
	void EndTargetSelect(bool IsDoEscape);
	void BI_GetTargetSelect(TScriptInterface<class IBPI_BattleTargetSelect_C>* BPI);
	void GetBPIPTUtilInterface(TScriptInterface<class IBPI_PTUtilInterface>* Ret);
	void GetPTMemDataInterface(TScriptInterface<class IBPI_PTMemDataInterface>* Ret);
	void GetBPIMainInterface(TScriptInterface<class IBPI_MainInterface>* AsBPI_Main_Interface, bool* bSuccess);
	void CallPartyCamera(bool IsSelf);
	void BI_GetBattleMain(TScriptInterface<class IBPI_BattleMain_C>* BattleMain, bool* bSuccess);
	void ShowPlayerParty(bool HideEnemy, bool IsShowOnlyMyself);
	void HidePlayerParty();
	void ShowPartyCheck();
	void CommonHelpWindowFinalize();
	void CommonHelpWindowInitialize();
	void BI_GetBattleUIManager(TScriptInterface<class IBPI_BattleUIManager_C>* Ret);
	void CommandFinished();
	void GetHeroIndex(int32* Param_Index);
	void SetMP_Forecast(int32 Value);
	void SetSkillHelpText(int32 SkillId);
	void OpenCommonHelpWindow();
	void CloseCommonHelpWindow();
	void SetItemHelpText(int32 ItemId);
	void StartActEndMenu(bool NoAutoBattleButtonHelp);
	void EndActEndMenu();
	void ShowActionName(E_BTL_COMM_TYPE OverrideCommType, bool HaveToGoActingPosition);
	void HideActionName();
	bool IsResultCommandRecome();
	void SetCommandHelpText(E_BTL_UI_COMMAND Command);
	void IsHaveToHideActionName(bool* HaveToDo);
	void StackStep(E_BTL_UI_COMM_STEP Step);
	void PopStep(E_BTL_UI_COMM_STEP* PopedStep);
	void ClearStep();
	void TopStep(E_BTL_UI_COMM_STEP* Param_TopStep);
	void CallStartStep(E_BTL_UI_COMM_STEP Step, int32 Param_Index, int32 Top);
	void ReverseStep(int32 CursorIndex, int32 TopIndex);
	void PrevStep(E_BTL_UI_COMM_STEP* Param_PrevStep);
	void SeqAutoBattleCheckFunc();
	void StartAutoBattleCheck();
	void StartOptionMenu();
	void EndOptionMenu();
	void SeqOptionMenuFunc();
	E_SKILL_TARGET CalcItemArea();
	E_ATTRIBUTE_TYPE CalcItemDefenseAishou();
	void IsSkillTargetSelect(bool* IsSkill);
	void IsSelectableTarget(bool* Selectable);
	void IsSummonSkill(bool* IsSummon);
	void UpdateEnemyInfoAishouNotice(bool IsSkill, bool Sw);
	void BI_GetPartySystem(TScriptInterface<class IBPI_BattleParty_C>* PartySystem);
	void GetBPICalc(TScriptInterface<class IBPI_CalcInterface>* AsBPI_Calc_Interface);
	TArray<E_ATTRIBUTE_TYPE> CalcItemDefenseAishouArray();
	void IsAllMenuDisappeared(bool* IsDisappeared);
	void GetActorIndex(int32* M_PartyIndex);
	void HideEnemyInfoAishouNotice(bool ForEnemy, bool ForFriend, bool Immediately);
	void HideEnemyInfo();
	void CheckPenetrationEfficacy(bool IsSkill, bool* IsPenetration);
	void SetItemAishouNotice(int32 ItemId);
	void SetSkillAishouNotice(int32 SkillId);
	void CloseButtonHelp();
	class FString MakeSkillName(int32 ID);
	void CalcSkillAptitude(int32 SkillId, int32* Aptitude);
	bool IsPassSelectable();
	void IsInFirstBattleTutorial(bool* IsTutorial);
	void CheckFirstBattleTutorial(bool* IsTutorial);
	void IsKeyInputOK(bool* OK);
	bool HaveToDoTutorial(const E_BTL_TUTORIAL Tutorial);
	void ReduceBGM(float Rate);
	void ResumeBGM();
	bool IsReturnFromSelfTargeting();
	void IsHeroSleeped(bool* Sleeped);
	void EndEscapeMenu();
	void OnCommandListHovered(int32 ShiftIndex);
	void OnCommandListClicked(E_BTL_UI_COMMAND Command);
	void OnCommandListUnHovered();
	void UpdateCtrl();
	void UpdateUI(float Delta);
	void OnListMenuMoveCursor(int32 MoveDirection);
	void OnListMenuSelected();
	bool CheckCancel();
	bool CheckAction(E_INPUT_TYPE InputType, bool ForSkillAndItem);
	void OpenIconHelpWindow();
	void UpdateIconHelpWindow(bool* WindowClose);
	void OpenAutoBattleActionTypeDialog(bool AllInOne);
	void OpenAutoBattleStartDialog();
	void SetWeakAutoBattle(bool Condition);
	void CalcItemCursorIndex(const int32& ItemId, int32* ItemCursorIndex);
	void RestoreCursorIndex(E_BTL_UI_COMMAND Command);
	void SaveCursorIndex();
	void GetFirstTargetSelfSide(int32* TargetIndex);
	void BI_ResetCursorMemory(int32 PartyIndex, bool* NoUse);
	void BI_HidePlayerParty(bool* NoUse);
	void BI_SetShowPlayerPartyFlag(bool IsShow, bool* NoUse);
	void BI_GetResult(struct FBtlCommand* Result);
	void UpdateComponent(float Delta, bool* ContinueUpdate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleCommand_C">();
	}
	static class UBattleCommand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleCommand_C>();
	}
};
static_assert(alignof(UBattleCommand_C) == 0x000010, "Wrong alignment on UBattleCommand_C");
static_assert(sizeof(UBattleCommand_C) == 0x000560, "Wrong size on UBattleCommand_C");
static_assert(offsetof(UBattleCommand_C, UberGraphFrame) == 0x0000B0, "Member 'UBattleCommand_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_BIMainWork) == 0x0000B8, "Member 'UBattleCommand_C::M_BIMainWork' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_DescParty) == 0x0000D0, "Member 'UBattleCommand_C::M_DescParty' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_Execute) == 0x0003F0, "Member 'UBattleCommand_C::M_Execute' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_IsCounterActor) == 0x0003F1, "Member 'UBattleCommand_C::M_IsCounterActor' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_IsNoMoveCamera) == 0x0003F2, "Member 'UBattleCommand_C::M_IsNoMoveCamera' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_IsIntialized) == 0x0003F3, "Member 'UBattleCommand_C::M_IsIntialized' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_Pause) == 0x0003F4, "Member 'UBattleCommand_C::M_Pause' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_CursorIndex) == 0x0003F8, "Member 'UBattleCommand_C::M_CursorIndex' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_TopIndex) == 0x0003FC, "Member 'UBattleCommand_C::M_TopIndex' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_LocalStep) == 0x000400, "Member 'UBattleCommand_C::M_LocalStep' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_SeName_Cursor) == 0x000404, "Member 'UBattleCommand_C::M_SeName_Cursor' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_SeName_Ok) == 0x00040C, "Member 'UBattleCommand_C::M_SeName_Ok' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_SeName_Cnacel) == 0x000414, "Member 'UBattleCommand_C::M_SeName_Cnacel' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_ResultCommand) == 0x00041C, "Member 'UBattleCommand_C::M_ResultCommand' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_IsFinish) == 0x00042C, "Member 'UBattleCommand_C::M_IsFinish' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_ActValidNum) == 0x000430, "Member 'UBattleCommand_C::M_ActValidNum' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_SkillSettleCriticalInfo) == 0x000438, "Member 'UBattleCommand_C::M_SkillSettleCriticalInfo' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_CursorSkillID) == 0x000448, "Member 'UBattleCommand_C::M_CursorSkillID' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_CursorItemID) == 0x00044C, "Member 'UBattleCommand_C::M_CursorItemID' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_IsShowPlayerParty) == 0x000450, "Member 'UBattleCommand_C::M_IsShowPlayerParty' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_CommonHelpWindowInitialVisibility) == 0x000451, "Member 'UBattleCommand_C::M_CommonHelpWindowInitialVisibility' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_MainCommandMenu) == 0x000458, "Member 'UBattleCommand_C::M_MainCommandMenu' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_ListMenu) == 0x000460, "Member 'UBattleCommand_C::M_ListMenu' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_ListMenuClass) == 0x000468, "Member 'UBattleCommand_C::M_ListMenuClass' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_StepStacks) == 0x000470, "Member 'UBattleCommand_C::M_StepStacks' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, IsCallAutoBattle) == 0x000480, "Member 'UBattleCommand_C::IsCallAutoBattle' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_AutoBattleStep) == 0x000484, "Member 'UBattleCommand_C::M_AutoBattleStep' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_OptionMenu) == 0x000488, "Member 'UBattleCommand_C::M_OptionMenu' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_CursorMemory) == 0x000490, "Member 'UBattleCommand_C::M_CursorMemory' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_SelectedCommand) == 0x0004E0, "Member 'UBattleCommand_C::M_SelectedCommand' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_IsForceAishou100) == 0x0004E1, "Member 'UBattleCommand_C::M_IsForceAishou100' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_RecentReturnFrom) == 0x0004E2, "Member 'UBattleCommand_C::M_RecentReturnFrom' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_SeName_TargetChange) == 0x0004E4, "Member 'UBattleCommand_C::M_SeName_TargetChange' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_SeName_TargetDecide) == 0x0004EC, "Member 'UBattleCommand_C::M_SeName_TargetDecide' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_SeName_Error) == 0x0004F4, "Member 'UBattleCommand_C::M_SeName_Error' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_TutorialState) == 0x0004FC, "Member 'UBattleCommand_C::M_TutorialState' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_SeName_WindowOpen) == 0x000500, "Member 'UBattleCommand_C::M_SeName_WindowOpen' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_IsIgnoreDialogCursorMove) == 0x000508, "Member 'UBattleCommand_C::M_IsIgnoreDialogCursorMove' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_TutorialTypes) == 0x000510, "Member 'UBattleCommand_C::M_TutorialTypes' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_TutorialIndex) == 0x000520, "Member 'UBattleCommand_C::M_TutorialIndex' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_IsOpenTutorialWindow) == 0x000524, "Member 'UBattleCommand_C::M_IsOpenTutorialWindow' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_ConditionStartIndex) == 0x000528, "Member 'UBattleCommand_C::M_ConditionStartIndex' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_IsInTutorial) == 0x00052C, "Member 'UBattleCommand_C::M_IsInTutorial' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_IsAlreadyOpenTutorialWindow) == 0x00052D, "Member 'UBattleCommand_C::M_IsAlreadyOpenTutorialWindow' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_CurrentCommandHelp) == 0x00052E, "Member 'UBattleCommand_C::M_CurrentCommandHelp' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_IsReducedBGM) == 0x00052F, "Member 'UBattleCommand_C::M_IsReducedBGM' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_OriginBGMVolume) == 0x000530, "Member 'UBattleCommand_C::M_OriginBGMVolume' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_CommandShiftDirection) == 0x000534, "Member 'UBattleCommand_C::M_CommandShiftDirection' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_ClickedMainCommand) == 0x000538, "Member 'UBattleCommand_C::M_ClickedMainCommand' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_UnHoveredMainCommand) == 0x000539, "Member 'UBattleCommand_C::M_UnHoveredMainCommand' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_IsContinueUpdate) == 0x00053A, "Member 'UBattleCommand_C::M_IsContinueUpdate' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_ListMenuShiftDirection) == 0x00053C, "Member 'UBattleCommand_C::M_ListMenuShiftDirection' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_IsListMenuSelected) == 0x000540, "Member 'UBattleCommand_C::M_IsListMenuSelected' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M_AutoBattleDialogPosition) == 0x000544, "Member 'UBattleCommand_C::M_AutoBattleDialogPosition' has a wrong offset!");
static_assert(offsetof(UBattleCommand_C, M__BPI_OptionCtrl) == 0x000548, "Member 'UBattleCommand_C::M__BPI_OptionCtrl' has a wrong offset!");

}

