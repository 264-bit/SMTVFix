#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM1641

#include "Basic.hpp"

#include "MM_M061_EM1641_classes.hpp"
#include "MM_M061_EM1641_parameters.hpp"


namespace SDK
{

// Function MM_M061_EM1641.MM_M061_EM1641_C.ExecuteUbergraph_MM_M061_EM1641
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM1641_C::ExecuteUbergraph_MM_M061_EM1641(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1641_C", "ExecuteUbergraph_MM_M061_EM1641");

	Params::MM_M061_EM1641_C_ExecuteUbergraph_MM_M061_EM1641 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM1641.MM_M061_EM1641_C.TalkEnd
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM1641_C::TalkEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1641_C", "TalkEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM1641.MM_M061_EM1641_C.CloseMsgWindow
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM1641_C::CloseMsgWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1641_C", "CloseMsgWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM1641.MM_M061_EM1641_C.TalkStart
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM1641_C::TalkStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1641_C", "TalkStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM1641.MM_M061_EM1641_C.CameraFocus
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM1641_C::CameraFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1641_C", "CameraFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM1641.MM_M061_EM1641_C.QuestExecute
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM1641_C::QuestExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1641_C", "QuestExecute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM1641.MM_M061_EM1641_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMM_M061_EM1641_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1641_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM1641.MM_M061_EM1641_C.CallDeactivate
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM1641_C::CallDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1641_C", "CallDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM1641.MM_M061_EM1641_C.CheckActive
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM1641_C::CheckActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1641_C", "CheckActive");

	UObject::ProcessEvent(Func, nullptr);
}

}
