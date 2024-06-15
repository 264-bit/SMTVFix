#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TutorialWindowCtrl2

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "E_AmuletTutorial_MsgType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_TutorialWindow_WidgetState_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TutorialWindowCtrl2.BP_TutorialWindowCtrl2_C
// 0x0020 (0x0240 - 0x0220)
class ABP_TutorialWindowCtrl2_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_TutorialWindow2_C*                  WB_TutorialWindow2;                                // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_WIDGET_PRIO                                 WidgetPrio;                                        // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGamePadMode;                                     // 0x0239(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_KeyboardLanguage                            KeyboardLanguage;                                  // 0x023A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_GAMEPAD_TYPE                                CurrnetGamePad;                                    // 0x023B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TutorialWindowCtrl2(int32 EntryPoint);
	void OnChangePlatformSetting();
	void ReceiveTick(float DeltaSeconds);
	void BPI_OpenWindow(E_WIDGET_PRIO InWidgetPrio, bool IsPlaySE, bool IsSkipAnimation, bool IsDrawBlackCurtain, bool IsEscClose);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void BPI_SetText_InvalidDLC(const TArray<class FName>& InContentsMsgLabel);
	void BPI_SetText_AmuletMsg(E_AmuletTutorial_MsgType InAmuletType);
	void BPI_SetText_IconHelp();
	void BPI_SetText_BenefitDevil(const class FName InTitleLabel, const struct FBenefitDevilMsgDataList& InDevilMsgList);
	void BPI_SetText_BenefitItem(class FName InTitleLabel, const struct FBenefitItemMsgDataList& InItemMsgList);
	void BPI_CheckInputAndUpdateScroll(bool IsPlaySE);
	void BPI_SetScrollOffset(int32 InScrollOffset, bool IsPlaySE);
	void BPI_Move_Bottom(bool IsPlaySE);
	void BPI_Move_Top(bool IsPlaySE);
	void BPI_SetText_byEnum(E_TUTORIAL_WINDOW_MESSAGE_TYPE InEnumPattern);
	void BPI_SetText_ApplyDLC(const TArray<class FName>& InContentsMsgLabel);
	void BPI_SetText_MimanReward();
	void BPI_SetText_ReleasedKamui(bool IsOpenedByEvent, class FName InEventMsgLabel, const TArray<int32>& InOpenedKamuiID);
	void BPI_SetMainText_byLabel(const class UScriptMessageAsset*& InMessageAsset, class FName InMessageLabel);
	void BPI_SetMainText_byID(const class UScriptMessageAsset*& InMessageAsset, const int32 InMessageId);
	void BPI_SetTitle_byLabel(const class UScriptMessageAsset*& InMessageAsset, class FName InMessageLabel);
	void BPI_SetTitle_byID(const class UScriptMessageAsset*& InMessageAsset, const int32 InMessageId);
	void BPI_Page_Down(bool IsPlaySE);
	void BPI_Page_UP(bool IsPlaySE);
	void BPI_Scroll_Down(bool IsPlaySE);
	void BPI_Scroll_Up(bool IsPlaySE);
	void BPI_SetTextJustification(ETextJustify InJustification);
	void BPI_CloseWindow(bool IsPlaySE, bool IsSkipAnimation);
	void OpenWindow(E_WIDGET_PRIO InWidgetPrio, bool IsPlaySE, bool IsSkipAnimation, bool IsDrawBlacCurtain, bool IsEscCloseIcon);
	void CloseWindow(bool IsPlaySE, bool IsSkipAnimation);
	void SetTextJustification(ETextJustify InJustification);
	void RemoveWidget();
	void SetScrollOffset(int32 InScrollOffset, bool IsPlaySE);
	void Scroll_Up(bool IsPlaySE);
	void Scroll_Down(bool IsPlaySE);
	void Page_Up(bool IsPlaySE);
	void Page_Down(bool IsPlaySE);
	void SetTitleText_byID(class UScriptMessageAsset*& InMessageAsset, int32 InMessageId);
	void SetTitleText_byLabel(class UScriptMessageAsset*& InMessageAsset, class FName InMessageLabel);
	void SetMainText_byID(class UScriptMessageAsset*& InMessageAsset, int32 InMessageId);
	void SetMainText_byLabel(class UScriptMessageAsset*& InMessageAsset, class FName InMessageLabel);
	void SetText_ReleasedKamui(bool IsOpenedByEvent, class FName InEventMsgLabel, TArray<int32>& InOpenedKamuiID);
	void SetText_MimanReward();
	void SetText_AmuletMsg(E_AmuletTutorial_MsgType InAmuletType);
	void SetText_ApplyDLC(TArray<class FName>& InContentsMsgLabel);
	void SetText_InvalidDLC(TArray<class FName>& InContentsMsgLabel);
	void SetText_byEnum(E_TUTORIAL_WINDOW_MESSAGE_TYPE InEnumPattern);
	void Move_Top(bool IsPlaySE);
	void Move_Bottom(bool IsPlaySE);
	void CheckInputAndUpdateScroll(bool IsPlaySE);
	void OnDraggedScrollBar_ByMouse(float InScrollRate);
	void SetText_BenefitItem(class FName InTitleLabel, struct FBenefitItemMsgDataList& InItemMsgList);
	void SetText_BenefitDevil(class FName InTitleLabel, struct FBenefitDevilMsgDataList& InDevilMsgList);
	void SetText_IconHelp();
	void TickUpdateBtnIcon();
	void BPI_GetAnimState(E_TutorialWindow_WidgetState* AnimState);
	void BPI_GetScrollState(bool* IsRequiredScroll, float* ScrollPosRate);
	void BPI_IsClickedByMouse(bool* IsClicked);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TutorialWindowCtrl2_C">();
	}
	static class ABP_TutorialWindowCtrl2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TutorialWindowCtrl2_C>();
	}
};
static_assert(alignof(ABP_TutorialWindowCtrl2_C) == 0x000008, "Wrong alignment on ABP_TutorialWindowCtrl2_C");
static_assert(sizeof(ABP_TutorialWindowCtrl2_C) == 0x000240, "Wrong size on ABP_TutorialWindowCtrl2_C");
static_assert(offsetof(ABP_TutorialWindowCtrl2_C, UberGraphFrame) == 0x000220, "Member 'ABP_TutorialWindowCtrl2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TutorialWindowCtrl2_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_TutorialWindowCtrl2_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TutorialWindowCtrl2_C, WB_TutorialWindow2) == 0x000230, "Member 'ABP_TutorialWindowCtrl2_C::WB_TutorialWindow2' has a wrong offset!");
static_assert(offsetof(ABP_TutorialWindowCtrl2_C, WidgetPrio) == 0x000238, "Member 'ABP_TutorialWindowCtrl2_C::WidgetPrio' has a wrong offset!");
static_assert(offsetof(ABP_TutorialWindowCtrl2_C, IsGamePadMode) == 0x000239, "Member 'ABP_TutorialWindowCtrl2_C::IsGamePadMode' has a wrong offset!");
static_assert(offsetof(ABP_TutorialWindowCtrl2_C, KeyboardLanguage) == 0x00023A, "Member 'ABP_TutorialWindowCtrl2_C::KeyboardLanguage' has a wrong offset!");
static_assert(offsetof(ABP_TutorialWindowCtrl2_C, CurrnetGamePad) == 0x00023B, "Member 'ABP_TutorialWindowCtrl2_C::CurrnetGamePad' has a wrong offset!");

}

