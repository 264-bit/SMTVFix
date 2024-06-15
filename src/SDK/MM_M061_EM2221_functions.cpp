#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM2221

#include "Basic.hpp"

#include "MM_M061_EM2221_classes.hpp"
#include "MM_M061_EM2221_parameters.hpp"


namespace SDK
{

// Function MM_M061_EM2221.MM_M061_EM2221_C.ExecuteUbergraph_MM_M061_EM2221
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM2221_C::ExecuteUbergraph_MM_M061_EM2221(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2221_C", "ExecuteUbergraph_MM_M061_EM2221");

	Params::MM_M061_EM2221_C_ExecuteUbergraph_MM_M061_EM2221 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2221.MM_M061_EM2221_C.EvtDis_EndAction_����_0
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2221_C::EvtDis_EndAction______0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2221_C", "EvtDis_EndAction_����_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2221.MM_M061_EM2221_C.QuestExecute
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2221_C::QuestExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2221_C", "QuestExecute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2221.MM_M061_EM2221_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMM_M061_EM2221_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2221_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2221.MM_M061_EM2221_C.CallDeactivate
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2221_C::CallDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2221_C", "CallDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2221.MM_M061_EM2221_C.CheckActive
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2221_C::CheckActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2221_C", "CheckActive");

	UObject::ProcessEvent(Func, nullptr);
}

}
