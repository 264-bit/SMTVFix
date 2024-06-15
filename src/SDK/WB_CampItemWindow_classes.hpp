#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CampItemWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CampItemWindow.WB_CampItemWindow_C
// 0x00A8 (0x0308 - 0x0260)
class UWB_CampItemWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_ItemList;                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelCategoryMask;                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelItemListArea;                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMessageSimpleTextWidget*               MessageSimpleTextNoData;                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerCursor;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerItemTitle;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerNoData;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerPosition;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerScroll;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CampItemList_C*                     WB_CampItemList_00;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CampItemList_C*                     WB_CampItemList_01;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CampItemList_C*                     WB_CampItemList_02;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CampItemList_C*                     WB_CampItemList_03;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CampItemList_C*                     WB_CampItemList_04;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CampItemList_C*                     WB_CampItemList_05;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CampItemList_C*                     WB_CampItemList_06;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CampItemList_C*                     WB_CampItemList_07;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ScrollBar_C*                        WB_ScrollBar;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              Cursortopposition;                                 // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsListAnimation;                                   // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsExistScrollBar;                                  // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsItScrollBar;                                     // 0x0302(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B1B[0x1];                                     // 0x0303(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scrollbarvalue;                                    // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetScrollNumber(int32 InMaxNumber, int32 InDispNumber);
	void IsItemListArea(bool* OutParam);
	void GetScrollBarValue(float* OutValue);
	void DisableListMouseFocus();
	void EnableListMouseFocus();
	void GetMouseOnHovered(int32* OutIndex);
	void GetMouseOnClicked(int32* OutIndex);
	void ResetMouseFlag();
	void IsItemListAnimationEnd(bool* OutParam);
	void SetScrollRate(float InRate);
	void ItemScrollBarOut();
	void ItemScrollBarIn();
	void IsFinishedItemListAnimation(bool* OutFinished);
	void SetItemListAnimation();
	void CampItemDarkMaskOff(int32 InIndex);
	void CampItemDarkMaskOn(int32 InIndex);
	void SetPanelItemNameColor(int32 InIndex, int32 InUseItem);
	void ItemTitleOff();
	void ItemTitleOn();
	void SetInitPosition();
	void GetCategoryPosition(struct FVector2D* OutVector2D);
	void SetCampItemListCursorPosition(int32 InIndex);
	void SetCampItemListCursorAnimation(int32 InAnimeType);
	void PanelItemNoDataOff();
	void PanelItemNoDataOn();
	void PanelItemOff(int32 InIndex);
	void PanelItemOn(int32 InIndex);
	void SetPanelItem(int32 InIndex, int32 InItemId, int32 InNamerator, int32 InDenominator, int32 InUseItem, bool InDispOnFlag);
	void SetPanelItemCursorAnimation(int32 InIndex, int32 InType, int32 InAnimeType);
	void SetPanelItemDenominator(int32 InIndex, int32 InDenominator);
	void SetPanelItemNumerator(int32 InIndex, int32 InNumerator);
	void GetCampItemList(int32 InIndex, class UWB_CampItemList_C** OutCampItemList);
	void SetPanelItemName(int32 InIndex, int32 InItemId);
	void CampItemListOff();
	void CampItemListOn();
	void BndEvt__WB_CampItemWindow_WB_ScrollBar_K2Node_ComponentBoundEvent_4_OnScrolledByMouse__DelegateSignature(float Position);
	void BndEvt__SsPlayerNoData_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerCursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerItemTitle_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerScroll_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WB_CampItemWindow(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_CampItemWindow_C">();
	}
	static class UWB_CampItemWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CampItemWindow_C>();
	}
};
static_assert(alignof(UWB_CampItemWindow_C) == 0x000008, "Wrong alignment on UWB_CampItemWindow_C");
static_assert(sizeof(UWB_CampItemWindow_C) == 0x000308, "Wrong size on UWB_CampItemWindow_C");
static_assert(offsetof(UWB_CampItemWindow_C, UberGraphFrame) == 0x000260, "Member 'UWB_CampItemWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, CanvasPanel_ItemList) == 0x000268, "Member 'UWB_CampItemWindow_C::CanvasPanel_ItemList' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, CanvasPanelCategoryMask) == 0x000270, "Member 'UWB_CampItemWindow_C::CanvasPanelCategoryMask' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, CanvasPanelItemListArea) == 0x000278, "Member 'UWB_CampItemWindow_C::CanvasPanelItemListArea' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, MessageSimpleTextNoData) == 0x000280, "Member 'UWB_CampItemWindow_C::MessageSimpleTextNoData' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, SsPlayerCursor) == 0x000288, "Member 'UWB_CampItemWindow_C::SsPlayerCursor' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, SsPlayerItemTitle) == 0x000290, "Member 'UWB_CampItemWindow_C::SsPlayerItemTitle' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, SsPlayerNoData) == 0x000298, "Member 'UWB_CampItemWindow_C::SsPlayerNoData' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, SsPlayerPosition) == 0x0002A0, "Member 'UWB_CampItemWindow_C::SsPlayerPosition' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, SsPlayerScroll) == 0x0002A8, "Member 'UWB_CampItemWindow_C::SsPlayerScroll' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, WB_CampItemList_00) == 0x0002B0, "Member 'UWB_CampItemWindow_C::WB_CampItemList_00' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, WB_CampItemList_01) == 0x0002B8, "Member 'UWB_CampItemWindow_C::WB_CampItemList_01' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, WB_CampItemList_02) == 0x0002C0, "Member 'UWB_CampItemWindow_C::WB_CampItemList_02' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, WB_CampItemList_03) == 0x0002C8, "Member 'UWB_CampItemWindow_C::WB_CampItemList_03' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, WB_CampItemList_04) == 0x0002D0, "Member 'UWB_CampItemWindow_C::WB_CampItemList_04' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, WB_CampItemList_05) == 0x0002D8, "Member 'UWB_CampItemWindow_C::WB_CampItemList_05' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, WB_CampItemList_06) == 0x0002E0, "Member 'UWB_CampItemWindow_C::WB_CampItemList_06' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, WB_CampItemList_07) == 0x0002E8, "Member 'UWB_CampItemWindow_C::WB_CampItemList_07' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, WB_ScrollBar) == 0x0002F0, "Member 'UWB_CampItemWindow_C::WB_ScrollBar' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, Cursortopposition) == 0x0002F8, "Member 'UWB_CampItemWindow_C::Cursortopposition' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, IsListAnimation) == 0x000300, "Member 'UWB_CampItemWindow_C::IsListAnimation' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, IsExistScrollBar) == 0x000301, "Member 'UWB_CampItemWindow_C::IsExistScrollBar' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, IsItScrollBar) == 0x000302, "Member 'UWB_CampItemWindow_C::IsItScrollBar' has a wrong offset!");
static_assert(offsetof(UWB_CampItemWindow_C, Scrollbarvalue) == 0x000304, "Member 'UWB_CampItemWindow_C::Scrollbarvalue' has a wrong offset!");

}

