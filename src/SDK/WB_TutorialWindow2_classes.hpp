#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TutorialWindow2

#include "Basic.hpp"

#include "E_AmuletTutorial_MsgType_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_TutorialWindow_WidgetState_structs.hpp"
#include "Project_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_TutorialWindow2.WB_TutorialWindow2_C
// 0x0098 (0x02F8 - 0x0260)
class UWB_TutorialWindow2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_BtnHelp;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_CheckScroll;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_VisibleBG;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             EscText;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_EscClose;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageRichTextWidget*                 MsgRichTxt_Title;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Base;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_BlackCurtain;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Window;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TextOverlay;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BtnHelpSlot2_C*                     WB_BtnHelp;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_KeyboardIcon_C*                     WB_EscIcon;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MultiLineRichText_C*                WB_MainText;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ScrollBar_C*                        WB_ScrollBar;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_TutorialWindow_WidgetState                  AnimState;                                         // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F29[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AnimPlayRate;                                      // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             MouseEvent_MovedScrollBar;                         // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsEscClose;                                        // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void MouseEvent_MovedScrollBar__DelegateSignature(float ScrollRate);
	void ExecuteUbergraph_WB_TutorialWindow2(int32 EntryPoint);
	void Destruct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Init();
	void GetAnimState(E_TutorialWindow_WidgetState* Param_AnimState);
	void SetAnimState(E_TutorialWindow_WidgetState InState);
	void Tick_Base();
	void Tick_FrameIn();
	void Tick_FrameOut();
	void GetScrollState(bool* IsRequiredScroll, float* ScrollPosRate, int32* ScrollOffset);
	void GetMaxScrollOffset(int32* MaxOffset);
	void SetScrollOffset(int32 InScrollOffset, bool* IsScrolled);
	void Scroll_Up(bool* IsScrolled);
	void Scroll_Down(bool* IsScrolled);
	void Page_Up(bool* IsScrolled);
	void Page_Down(bool* IsScrolled);
	void SetTitle_byID(const class UScriptMessageAsset*& InMessageAsset, int32 InMessageId);
	void SetTitle_byLabel(const class UScriptMessageAsset*& InMessageAsset, class FName InMessageLabel);
	void SetJustification(ETextJustify InJustification);
	void SetMainText_byID(const class UScriptMessageAsset*& InMessageAsset, int32 InMessageId);
	void SetMainText_byLabel(const class UScriptMessageAsset*& InMessageAsset, class FName InMessageLabel);
	void SetText_ReleasedKamui(bool IsOpenedByEvent, class FName InEventMsgLabel, TArray<int32>& InOpenedKamuiID);
	void SetText_MimanReward();
	void SetText_AmuletMsg(E_AmuletTutorial_MsgType InAmuletType);
	void SetText_IconHelp();
	void SetText_ApplyDLC(TArray<class FName>& InContentsMsgLabel);
	void SetVisibility_BlackCurtain(bool IsVivible);
	void SetText_InvalidDLC(TArray<class FName>& InContentsMsgLabel);
	void SetText_byEnum(E_TUTORIAL_WINDOW_MESSAGE_TYPE InEnumPattern);
	void Move_Top(bool* IsScrolled);
	void Move_Bottom(bool* IsScrolled);
	void IsEnableMouseWheel(bool* IsEnableScroll);
	void OnMovedScrollBar_ByMouse(float InScrollRate);
	void SetBtnHelpMode(bool IsGamePad);
	void UpdateBtnHelpInfo();
	void SetText_BenefitItem(class FName InTitleLabel, struct FBenefitItemMsgDataList& InItemMsgList);
	void SetText_BenefitDevil(class FName InTitleLabel, struct FBenefitDevilMsgDataList& InDevilMsgList);
	void SetCloseIconType(bool Param_IsEscClose);
	void ReloadMainText();
	void ReloadKeyboardHelpText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_TutorialWindow2_C">();
	}
	static class UWB_TutorialWindow2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_TutorialWindow2_C>();
	}
};
static_assert(alignof(UWB_TutorialWindow2_C) == 0x000008, "Wrong alignment on UWB_TutorialWindow2_C");
static_assert(sizeof(UWB_TutorialWindow2_C) == 0x0002F8, "Wrong size on UWB_TutorialWindow2_C");
static_assert(offsetof(UWB_TutorialWindow2_C, UberGraphFrame) == 0x000260, "Member 'UWB_TutorialWindow2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, Canvas_BtnHelp) == 0x000268, "Member 'UWB_TutorialWindow2_C::Canvas_BtnHelp' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, Canvas_CheckScroll) == 0x000270, "Member 'UWB_TutorialWindow2_C::Canvas_CheckScroll' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, Canvas_VisibleBG) == 0x000278, "Member 'UWB_TutorialWindow2_C::Canvas_VisibleBG' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, EscText) == 0x000280, "Member 'UWB_TutorialWindow2_C::EscText' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, HorizontalBox_EscClose) == 0x000288, "Member 'UWB_TutorialWindow2_C::HorizontalBox_EscClose' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, MsgRichTxt_Title) == 0x000290, "Member 'UWB_TutorialWindow2_C::MsgRichTxt_Title' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, SsPlayer_Base) == 0x000298, "Member 'UWB_TutorialWindow2_C::SsPlayer_Base' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, SsPlayer_BlackCurtain) == 0x0002A0, "Member 'UWB_TutorialWindow2_C::SsPlayer_BlackCurtain' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, SsPlayer_Window) == 0x0002A8, "Member 'UWB_TutorialWindow2_C::SsPlayer_Window' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, TextOverlay) == 0x0002B0, "Member 'UWB_TutorialWindow2_C::TextOverlay' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, WB_BtnHelp) == 0x0002B8, "Member 'UWB_TutorialWindow2_C::WB_BtnHelp' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, WB_EscIcon) == 0x0002C0, "Member 'UWB_TutorialWindow2_C::WB_EscIcon' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, WB_MainText) == 0x0002C8, "Member 'UWB_TutorialWindow2_C::WB_MainText' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, WB_ScrollBar) == 0x0002D0, "Member 'UWB_TutorialWindow2_C::WB_ScrollBar' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, AnimState) == 0x0002D8, "Member 'UWB_TutorialWindow2_C::AnimState' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, AnimPlayRate) == 0x0002DC, "Member 'UWB_TutorialWindow2_C::AnimPlayRate' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, MouseEvent_MovedScrollBar) == 0x0002E0, "Member 'UWB_TutorialWindow2_C::MouseEvent_MovedScrollBar' has a wrong offset!");
static_assert(offsetof(UWB_TutorialWindow2_C, IsEscClose) == 0x0002F0, "Member 'UWB_TutorialWindow2_C::IsEscClose' has a wrong offset!");

}

