#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CommonWindowCtrl

#include "Basic.hpp"

#include "BP_CommonWindowCtrl_classes.hpp"
#include "BP_CommonWindowCtrl_parameters.hpp"


namespace SDK
{

// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.ExecuteUbergraph_BP_CommonWindowCtrl
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonWindowCtrl_C::ExecuteUbergraph_BP_CommonWindowCtrl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "ExecuteUbergraph_BP_CommonWindowCtrl");

	Params::BP_CommonWindowCtrl_C_ExecuteUbergraph_BP_CommonWindowCtrl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonWindowCtrl_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "ReceiveEndPlay");

	Params::BP_CommonWindowCtrl_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonWindowCtrl_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "ReceiveTick");

	Params::BP_CommonWindowCtrl_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CommonWindowCtrl_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.IActionWindowOpenWithActionSpecifiedByLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           InPriority                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTN_HELP_MAPPING_KEY_TYPE             InAction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIconColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonWindowCtrl_C::IActionWindowOpenWithActionSpecifiedByLabel(E_WIDGET_PRIO InPriority, class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, E_BTN_HELP_MAPPING_KEY_TYPE InAction, int32 InIconColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "IActionWindowOpenWithActionSpecifiedByLabel");

	Params::BP_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel Parms{};

	Parms.InPriority = InPriority;
	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InLabel = InLabel;
	Parms.InAction = InAction;
	Parms.InIconColor = InIconColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.IActionWindowOpenWithActionSpecifiedByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           InPriority                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTN_HELP_MAPPING_KEY_TYPE             InAction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIconColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonWindowCtrl_C::IActionWindowOpenWithActionSpecifiedByIndex(E_WIDGET_PRIO InPriority, class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, E_BTN_HELP_MAPPING_KEY_TYPE InAction, int32 InIconColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "IActionWindowOpenWithActionSpecifiedByIndex");

	Params::BP_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex Parms{};

	Parms.InPriority = InPriority;
	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InIndex = InIndex;
	Parms.InAction = InAction;
	Parms.InIconColor = InIconColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.IActionWindowOpenByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           InPriority                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIconType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIconColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonWindowCtrl_C::IActionWindowOpenByIndex(E_WIDGET_PRIO InPriority, class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, int32 InIconType, int32 InIconColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "IActionWindowOpenByIndex");

	Params::BP_CommonWindowCtrl_C_IActionWindowOpenByIndex Parms{};

	Parms.InPriority = InPriority;
	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InIndex = InIndex;
	Parms.InIconType = InIconType;
	Parms.InIconColor = InIconColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.IActionWindowOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CommonWindowCtrl_C::IActionWindowOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "IActionWindowOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.IActionWindowOn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CommonWindowCtrl_C::IActionWindowOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "IActionWindowOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.IActionWindowClose
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CommonWindowCtrl_C::IActionWindowClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "IActionWindowClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.IActionWindowOpenByLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           InPriority                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIconType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIconColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonWindowCtrl_C::IActionWindowOpenByLabel(E_WIDGET_PRIO InPriority, class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, int32 InIconType, int32 InIconColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "IActionWindowOpenByLabel");

	Params::BP_CommonWindowCtrl_C_IActionWindowOpenByLabel Parms{};

	Parms.InPriority = InPriority;
	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InLabel = InLabel;
	Parms.InIconType = InIconType;
	Parms.InIconColor = InIconColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.ClearAllScriptMessageAsset
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CommonWindowCtrl_C::ClearAllScriptMessageAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "ClearAllScriptMessageAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.RemoveActionWindow
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CommonWindowCtrl_C::RemoveActionWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "RemoveActionWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.SetInitializeParameter
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CommonWindowCtrl_C::SetInitializeParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "SetInitializeParameter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.CalcIconDispMode
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CommonWindowCtrl_C::CalcIconDispMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "CalcIconDispMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.Calc Key Board Language Type
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CommonWindowCtrl_C::Calc_Key_Board_Language_Type()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "Calc Key Board Language Type");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CommonWindowCtrl.BP_CommonWindowCtrl_C.IActionWindowIsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutActive                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CommonWindowCtrl_C::IActionWindowIsActive(bool* OutActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CommonWindowCtrl_C", "IActionWindowIsActive");

	Params::BP_CommonWindowCtrl_C_IActionWindowIsActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutActive != nullptr)
		*OutActive = Parms.OutActive;
}

}
