#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_StatusUICtrl

#include "Basic.hpp"

#include "BPI_StatusUICtrl_classes.hpp"
#include "BPI_StatusUICtrl_parameters.hpp"


namespace SDK
{

// Function BPI_StatusUICtrl.BPI_StatusUICtrl_C.BPI_StartCtrl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIStatusCtrlDataObjBase*         DataObj                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_UI_STATUS_CTRL_TYPE                   CtrlType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StatusCharaChanger_C>StatusCharaChanger                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// E_WIDGET_PRIO                           WidgetPriority                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StatusUICtrl_C::BPI_StartCtrl(class UUIStatusCtrlDataObjBase* DataObj, E_UI_STATUS_CTRL_TYPE CtrlType, TScriptInterface<class IBPI_StatusCharaChanger_C> StatusCharaChanger, E_WIDGET_PRIO WidgetPriority, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusUICtrl_C", "BPI_StartCtrl");

	Params::BPI_StatusUICtrl_C_BPI_StartCtrl Parms{};

	Parms.DataObj = DataObj;
	Parms.CtrlType = CtrlType;
	Parms.StatusCharaChanger = StatusCharaChanger;
	Parms.WidgetPriority = WidgetPriority;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BPI_StatusUICtrl.BPI_StatusUICtrl_C.BPI_IsComplete
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsComplete                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StatusUICtrl_C::BPI_IsComplete(bool* IsComplete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusUICtrl_C", "BPI_IsComplete");

	Params::BPI_StatusUICtrl_C_BPI_IsComplete Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsComplete != nullptr)
		*IsComplete = Parms.IsComplete;
}


// Function BPI_StatusUICtrl.BPI_StatusUICtrl_C.BPI_TickEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    StatusEnd                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StatusUICtrl_C::BPI_TickEvent(float DeltaSeconds, bool* StatusEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusUICtrl_C", "BPI_TickEvent");

	Params::BPI_StatusUICtrl_C_BPI_TickEvent Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

	if (StatusEnd != nullptr)
		*StatusEnd = Parms.StatusEnd;
}


// Function BPI_StatusUICtrl.BPI_StatusUICtrl_C.BPI_SetTaskBeforeViewEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Runner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StatusUICtrl_C::BPI_SetTaskBeforeViewEnd(class UObject* Runner, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusUICtrl_C", "BPI_SetTaskBeforeViewEnd");

	Params::BPI_StatusUICtrl_C_BPI_SetTaskBeforeViewEnd Parms{};

	Parms.Runner = Runner;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

}
