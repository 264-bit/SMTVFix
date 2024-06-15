#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MoonAge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_MoonAgeState_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Project_structs.hpp"
#include "E_MoonAgeAnimationState_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MoonAge.WB_MoonAge_C
// 0x0060 (0x02C0 - 0x0260)
class UWB_MoonAge_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_Number;                                // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Denominator;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Numerator;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Slash;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerWidget_Moon;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerWidget_MoonBG;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerWidget_MoonFont;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerWidget_pos;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_MoonAgeState                                M_State;                                           // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_switch;                                          // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsShow;                                          // 0x02AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_isPlayAnimation;                                 // 0x02AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FD8[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAnimationStateEvent;                             // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAnimationStateEvent__DelegateSignature(E_MoonAgeAnimationState NewParam);
	void ExecuteUbergraph_WB_MoonAge(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__SsPlayerWidget_MoonBG_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void Close(bool InAnimation);
	void Open(bool InAnimation);
	void Construct();
	void PlayBGAnimation();
	void GetMoonAnimPackName(E_MOON_AGE InType, class FName* OutName);
	void ChangeMoonAge(E_MOON_AGE InType);
	void SetImageNumber(class UImage* InImage, int32 InUPosition, int32 InVPosition);
	void GetMoonNumber(E_MOON_AGE InType, int32* OutNumber);
	void IsShowNumber(E_MOON_AGE InType, bool* OutShow);
	void GetFontAnimPackName(E_MOON_AGE InType, class FName* OutName);
	void CheckVisibility();
	void ChangeState(E_MoonAgeState InState);
	void IsPlayAnimation(bool* OutPlay);
	void InitializePosition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MoonAge_C">();
	}
	static class UWB_MoonAge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MoonAge_C>();
	}
};
static_assert(alignof(UWB_MoonAge_C) == 0x000008, "Wrong alignment on UWB_MoonAge_C");
static_assert(sizeof(UWB_MoonAge_C) == 0x0002C0, "Wrong size on UWB_MoonAge_C");
static_assert(offsetof(UWB_MoonAge_C, UberGraphFrame) == 0x000260, "Member 'UWB_MoonAge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MoonAge_C, CanvasPanel_Number) == 0x000268, "Member 'UWB_MoonAge_C::CanvasPanel_Number' has a wrong offset!");
static_assert(offsetof(UWB_MoonAge_C, Image_Denominator) == 0x000270, "Member 'UWB_MoonAge_C::Image_Denominator' has a wrong offset!");
static_assert(offsetof(UWB_MoonAge_C, Image_Numerator) == 0x000278, "Member 'UWB_MoonAge_C::Image_Numerator' has a wrong offset!");
static_assert(offsetof(UWB_MoonAge_C, Image_Slash) == 0x000280, "Member 'UWB_MoonAge_C::Image_Slash' has a wrong offset!");
static_assert(offsetof(UWB_MoonAge_C, SsPlayerWidget_Moon) == 0x000288, "Member 'UWB_MoonAge_C::SsPlayerWidget_Moon' has a wrong offset!");
static_assert(offsetof(UWB_MoonAge_C, SsPlayerWidget_MoonBG) == 0x000290, "Member 'UWB_MoonAge_C::SsPlayerWidget_MoonBG' has a wrong offset!");
static_assert(offsetof(UWB_MoonAge_C, SsPlayerWidget_MoonFont) == 0x000298, "Member 'UWB_MoonAge_C::SsPlayerWidget_MoonFont' has a wrong offset!");
static_assert(offsetof(UWB_MoonAge_C, SsPlayerWidget_pos) == 0x0002A0, "Member 'UWB_MoonAge_C::SsPlayerWidget_pos' has a wrong offset!");
static_assert(offsetof(UWB_MoonAge_C, M_State) == 0x0002A8, "Member 'UWB_MoonAge_C::M_State' has a wrong offset!");
static_assert(offsetof(UWB_MoonAge_C, M_switch) == 0x0002A9, "Member 'UWB_MoonAge_C::M_switch' has a wrong offset!");
static_assert(offsetof(UWB_MoonAge_C, M_IsShow) == 0x0002AA, "Member 'UWB_MoonAge_C::M_IsShow' has a wrong offset!");
static_assert(offsetof(UWB_MoonAge_C, M_isPlayAnimation) == 0x0002AB, "Member 'UWB_MoonAge_C::M_isPlayAnimation' has a wrong offset!");
static_assert(offsetof(UWB_MoonAge_C, OnAnimationStateEvent) == 0x0002B0, "Member 'UWB_MoonAge_C::OnAnimationStateEvent' has a wrong offset!");

}

