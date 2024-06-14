#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CommonWindow

#include "Basic.hpp"

#include "WB_CommonWindow_classes.hpp"
#include "WB_CommonWindow_parameters.hpp"


namespace SDK
{

// Function WB_CommonWindow.WB_CommonWindow_C.ExecuteUbergraph_WB_CommonWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CommonWindow_C::ExecuteUbergraph_WB_CommonWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "ExecuteUbergraph_WB_CommonWindow");

	Params::WB_CommonWindow_C_ExecuteUbergraph_WB_CommonWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CommonWindow.WB_CommonWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CommonWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "Tick");

	Params::WB_CommonWindow_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CommonWindow.WB_CommonWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_CommonWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CommonWindow.WB_CommonWindow_C.BndEvt__SsPlayerSearch_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CommonWindow_C::BndEvt__SsPlayerSearch_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "BndEvt__SsPlayerSearch_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_CommonWindow_C_BndEvt__SsPlayerSearch_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CommonWindow.WB_CommonWindow_C.ActionWindowOut
// (BlueprintCallable, BlueprintEvent)

void UWB_CommonWindow_C::ActionWindowOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "ActionWindowOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CommonWindow.WB_CommonWindow_C.ActionWindowIn
// (BlueprintCallable, BlueprintEvent)

void UWB_CommonWindow_C::ActionWindowIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "ActionWindowIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CommonWindow.WB_CommonWindow_C.SetActionWindowTextByLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CommonWindow_C::SetActionWindowTextByLabel(class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "SetActionWindowTextByLabel");

	Params::WB_CommonWindow_C_SetActionWindowTextByLabel Parms{};

	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InLabel = InLabel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CommonWindow.WB_CommonWindow_C.ActionWindowOn
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CommonWindow_C::ActionWindowOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "ActionWindowOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CommonWindow.WB_CommonWindow_C.ActionWindowOff
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CommonWindow_C::ActionWindowOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "ActionWindowOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CommonWindow.WB_CommonWindow_C.SetActionWindowTextByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CommonWindow_C::SetActionWindowTextByIndex(class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "SetActionWindowTextByIndex");

	Params::WB_CommonWindow_C_SetActionWindowTextByIndex Parms{};

	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CommonWindow.WB_CommonWindow_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTN_HELP_MAPPING_KEY_TYPE             InActionMap                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CommonWindow_C::SetIcon(int32 InIndex, E_BTN_HELP_MAPPING_KEY_TYPE InActionMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "SetIcon");

	Params::WB_CommonWindow_C_SetIcon Parms{};

	Parms.InIndex = InIndex;
	Parms.InActionMap = InActionMap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CommonWindow.WB_CommonWindow_C.SetIconColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InColorType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CommonWindow_C::SetIconColor(int32 InColorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "SetIconColor");

	Params::WB_CommonWindow_C_SetIconColor Parms{};

	Parms.InColorType = InColorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CommonWindow.WB_CommonWindow_C.IsActionWindowActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CommonWindow_C::IsActionWindowActive(bool* OutParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "IsActionWindowActive");

	Params::WB_CommonWindow_C_IsActionWindowActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutParam != nullptr)
		*OutParam = Parms.OutParam;
}


// Function WB_CommonWindow.WB_CommonWindow_C.SetIconDispMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CommonWindow_C::SetIconDispMode(bool InMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "SetIconDispMode");

	Params::WB_CommonWindow_C_SetIconDispMode Parms{};

	Parms.InMode = InMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CommonWindow.WB_CommonWindow_C.CalcTranslation
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        OutVec                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CommonWindow_C::CalcTranslation(struct FVector2D* OutVec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "CalcTranslation");

	Params::WB_CommonWindow_C_CalcTranslation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutVec != nullptr)
		*OutVec = std::move(Parms.OutVec);
}


// Function WB_CommonWindow.WB_CommonWindow_C.CalcIconPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        OutVec                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CommonWindow_C::CalcIconPosition(struct FVector2D* OutVec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CommonWindow_C", "CalcIconPosition");

	Params::WB_CommonWindow_C_CalcIconPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutVec != nullptr)
		*OutVec = std::move(Parms.OutVec);
}

}
