#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MinimapOnOffEffect

#include "Basic.hpp"

#include "WB_MinimapOnOffEffect_classes.hpp"
#include "WB_MinimapOnOffEffect_parameters.hpp"


namespace SDK
{

// Function WB_MinimapOnOffEffect.WB_MinimapOnOffEffect_C.ExecuteUbergraph_WB_MinimapOnOffEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MinimapOnOffEffect_C::ExecuteUbergraph_WB_MinimapOnOffEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MinimapOnOffEffect_C", "ExecuteUbergraph_WB_MinimapOnOffEffect");

	Params::WB_MinimapOnOffEffect_C_ExecuteUbergraph_WB_MinimapOnOffEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MinimapOnOffEffect.WB_MinimapOnOffEffect_C.BndEvt__WB_MinimapOnOffEffect_SsPlayerWidget_OnOff_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MinimapOnOffEffect_C::BndEvt__WB_MinimapOnOffEffect_SsPlayerWidget_OnOff_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MinimapOnOffEffect_C", "BndEvt__WB_MinimapOnOffEffect_SsPlayerWidget_OnOff_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_MinimapOnOffEffect_C_BndEvt__WB_MinimapOnOffEffect_SsPlayerWidget_OnOff_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MinimapOnOffEffect.WB_MinimapOnOffEffect_C.StartAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_MinimapOnOffEffect_C::StartAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MinimapOnOffEffect_C", "StartAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}
