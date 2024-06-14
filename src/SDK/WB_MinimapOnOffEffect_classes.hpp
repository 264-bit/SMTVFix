#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MinimapOnOffEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MinimapOnOffEffect.WB_MinimapOnOffEffect_C
// 0x0010 (0x0270 - 0x0260)
class UWB_MinimapOnOffEffect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USsPlayerWidget*                        SsPlayerWidget_OnOff;                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_MinimapOnOffEffect(int32 EntryPoint);
	void BndEvt__WB_MinimapOnOffEffect_SsPlayerWidget_OnOff_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void StartAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MinimapOnOffEffect_C">();
	}
	static class UWB_MinimapOnOffEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MinimapOnOffEffect_C>();
	}
};
static_assert(alignof(UWB_MinimapOnOffEffect_C) == 0x000008, "Wrong alignment on UWB_MinimapOnOffEffect_C");
static_assert(sizeof(UWB_MinimapOnOffEffect_C) == 0x000270, "Wrong size on UWB_MinimapOnOffEffect_C");
static_assert(offsetof(UWB_MinimapOnOffEffect_C, UberGraphFrame) == 0x000260, "Member 'UWB_MinimapOnOffEffect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MinimapOnOffEffect_C, SsPlayerWidget_OnOff) == 0x000268, "Member 'UWB_MinimapOnOffEffect_C::SsPlayerWidget_OnOff' has a wrong offset!");

}
