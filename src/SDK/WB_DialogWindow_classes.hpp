#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_DialogWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_DialogWindow.WB_DialogWindow_C
// 0x0050 (0x02B0 - 0x0260)
class UWB_DialogWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           MainPanel;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageRichTextWidget*                 MessageRichTextDialog;                             // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerBlackCurtain;                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerDialogWindow;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerIcon;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerPosition;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerRunningIcon;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_DialogSelectMenu_C*                 WB_DialogSelectMenu;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsOpenDialogWindowFlag;                            // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCloseDialogWindowFlag;                           // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSetMessageFlag;                                  // 0x02AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsUseRunningIconFlag;                              // 0x02AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSelectCursor;                                    // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsWindowCloseCheck;                                // 0x02AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_DialogWindow(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__SsPlayerIcon_K2Node_ComponentBoundEvent_3_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void OpenDialogWindow();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CloseDialogWindow();
	void RunningIconOut(bool InExecutionFlag);
	void RunningIconIn(bool InExecutionFlag);
	void BndEvt__SsPlayerRunningIcon_K2Node_ComponentBoundEvent_2_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerDialogWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BlackcurtainOut();
	void BlackcurtainIn();
	void BndEvt__SsPlayerBlackCurtain_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void IsOpenDialogWindow(bool* OutFinished);
	void IsCloseDialogWindow(bool* OutFinished);
	void SetMessageText(class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, bool InExecutionText, bool InBuildText);
	void IsSetMessageText(bool* OutFinished);
	void MessageClear();
	void ExecutionOpenDialogWindow(bool InUseRunningIcon);
	void ExecutionCloseDialogWindow();
	void SetDialogSelectMenu(int32 InMunuNumber, int32 InInitCursorPosition, class UScriptMessageAsset* InScriptMessageAsset, TArray<class FName>& InSelectItemNme);
	void SetDialogSelectMenuByIndex(int32 InMenuNumber, int32 InInitCursorPosition, class UScriptMessageAsset* InScriptMessageAsset, TArray<int32>& InSelectItemIndex);
	void AddDialogSelect();
	void DecDialogSelect();
	void SetDialogSelectCursorOffset(int32 Defaultcursorpos);
	void SetDialogSelectMenuOff();
	void DecidesDialogSelectCursor(int32* OutParam);
	void SetInitPosition();
	void GetDialogCursorIndex(int32* OutIndex);
	void DeleteDialogSelectWindow();
	void SetRichTextValueParam(int32 InIndex, int32 InValueParam);
	void SetRichTextBuildText();
	void SetRichTextProgramValue(int32 InIndex, const class FString& InString);
	void SetRevealPageText();
	void GetDialogSelectNumber(int32* OutNumber);
	void StartIconAnimation();
	void ExecutionIconAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_DialogWindow_C">();
	}
	static class UWB_DialogWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_DialogWindow_C>();
	}
};
static_assert(alignof(UWB_DialogWindow_C) == 0x000008, "Wrong alignment on UWB_DialogWindow_C");
static_assert(sizeof(UWB_DialogWindow_C) == 0x0002B0, "Wrong size on UWB_DialogWindow_C");
static_assert(offsetof(UWB_DialogWindow_C, UberGraphFrame) == 0x000260, "Member 'UWB_DialogWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, MainPanel) == 0x000268, "Member 'UWB_DialogWindow_C::MainPanel' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, MessageRichTextDialog) == 0x000270, "Member 'UWB_DialogWindow_C::MessageRichTextDialog' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, SsPlayerBlackCurtain) == 0x000278, "Member 'UWB_DialogWindow_C::SsPlayerBlackCurtain' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, SsPlayerDialogWindow) == 0x000280, "Member 'UWB_DialogWindow_C::SsPlayerDialogWindow' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, SsPlayerIcon) == 0x000288, "Member 'UWB_DialogWindow_C::SsPlayerIcon' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, SsPlayerPosition) == 0x000290, "Member 'UWB_DialogWindow_C::SsPlayerPosition' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, SsPlayerRunningIcon) == 0x000298, "Member 'UWB_DialogWindow_C::SsPlayerRunningIcon' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, WB_DialogSelectMenu) == 0x0002A0, "Member 'UWB_DialogWindow_C::WB_DialogSelectMenu' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, IsOpenDialogWindowFlag) == 0x0002A8, "Member 'UWB_DialogWindow_C::IsOpenDialogWindowFlag' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, IsCloseDialogWindowFlag) == 0x0002A9, "Member 'UWB_DialogWindow_C::IsCloseDialogWindowFlag' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, IsSetMessageFlag) == 0x0002AA, "Member 'UWB_DialogWindow_C::IsSetMessageFlag' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, IsUseRunningIconFlag) == 0x0002AB, "Member 'UWB_DialogWindow_C::IsUseRunningIconFlag' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, IsSelectCursor) == 0x0002AC, "Member 'UWB_DialogWindow_C::IsSelectCursor' has a wrong offset!");
static_assert(offsetof(UWB_DialogWindow_C, IsWindowCloseCheck) == 0x0002AD, "Member 'UWB_DialogWindow_C::IsWindowCloseCheck' has a wrong offset!");

}

