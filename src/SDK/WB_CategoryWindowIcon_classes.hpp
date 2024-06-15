#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CategoryWindowIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CategoryWindowIcon.WB_CategoryWindowIcon_C
// 0x0040 (0x02A0 - 0x0260)
class UWB_CategoryWindowIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButtonS5*                              Button_S5;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsP_CategoryIcon;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsP_NewIcon;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   Debug_CategoryAnim;                                // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug_IsSelectAnim;                                // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Debug_IsVisibleNewIcon;                            // 0x0289(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8080[0x2];                                     // 0x028A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CategoryIdx;                                       // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             MouseEvent_OnClickedIcon;                          // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void MouseEvent_OnClickedIcon__DelegateSignature(int32 Param_CategoryIdx);
	void ExecuteUbergraph_WB_CategoryWindowIcon(int32 EntryPoint);
	void BndEvt__WB_CategoryWindowIcon_Button_S5_K2Node_ComponentBoundEvent_0_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void PreConstruct(bool IsDesignTime);
	void SetCategoryIconAnim(class FName AnimPackName, bool IsSelectAnim);
	void SetNewIconVisibility(bool Param_IsVisible);
	void AlignNewIconAnim(float Frame);
	void GetNewIconAnimFrame(float* Frame);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_CategoryWindowIcon_C">();
	}
	static class UWB_CategoryWindowIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CategoryWindowIcon_C>();
	}
};
static_assert(alignof(UWB_CategoryWindowIcon_C) == 0x000008, "Wrong alignment on UWB_CategoryWindowIcon_C");
static_assert(sizeof(UWB_CategoryWindowIcon_C) == 0x0002A0, "Wrong size on UWB_CategoryWindowIcon_C");
static_assert(offsetof(UWB_CategoryWindowIcon_C, UberGraphFrame) == 0x000260, "Member 'UWB_CategoryWindowIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_CategoryWindowIcon_C, Button_S5) == 0x000268, "Member 'UWB_CategoryWindowIcon_C::Button_S5' has a wrong offset!");
static_assert(offsetof(UWB_CategoryWindowIcon_C, SsP_CategoryIcon) == 0x000270, "Member 'UWB_CategoryWindowIcon_C::SsP_CategoryIcon' has a wrong offset!");
static_assert(offsetof(UWB_CategoryWindowIcon_C, SsP_NewIcon) == 0x000278, "Member 'UWB_CategoryWindowIcon_C::SsP_NewIcon' has a wrong offset!");
static_assert(offsetof(UWB_CategoryWindowIcon_C, Debug_CategoryAnim) == 0x000280, "Member 'UWB_CategoryWindowIcon_C::Debug_CategoryAnim' has a wrong offset!");
static_assert(offsetof(UWB_CategoryWindowIcon_C, Debug_IsSelectAnim) == 0x000288, "Member 'UWB_CategoryWindowIcon_C::Debug_IsSelectAnim' has a wrong offset!");
static_assert(offsetof(UWB_CategoryWindowIcon_C, Debug_IsVisibleNewIcon) == 0x000289, "Member 'UWB_CategoryWindowIcon_C::Debug_IsVisibleNewIcon' has a wrong offset!");
static_assert(offsetof(UWB_CategoryWindowIcon_C, CategoryIdx) == 0x00028C, "Member 'UWB_CategoryWindowIcon_C::CategoryIdx' has a wrong offset!");
static_assert(offsetof(UWB_CategoryWindowIcon_C, MouseEvent_OnClickedIcon) == 0x000290, "Member 'UWB_CategoryWindowIcon_C::MouseEvent_OnClickedIcon' has a wrong offset!");

}

