#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM2612

#include "Basic.hpp"

#include "MM_M061_EM2612_classes.hpp"
#include "MM_M061_EM2612_parameters.hpp"


namespace SDK
{

// Function MM_M061_EM2612.MM_M061_EM2612_C.ExecuteUbergraph_MM_M061_EM2612
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM2612_C::ExecuteUbergraph_MM_M061_EM2612(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2612_C", "ExecuteUbergraph_MM_M061_EM2612");

	Params::MM_M061_EM2612_C_ExecuteUbergraph_MM_M061_EM2612 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2612.MM_M061_EM2612_C.EvtDis_FinishComplete
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2612_C::EvtDis_FinishComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2612_C", "EvtDis_FinishComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2612.MM_M061_EM2612_C.EvtDis_Finish
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2612_C::EvtDis_Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2612_C", "EvtDis_Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2612.MM_M061_EM2612_C.CallDeactivate
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2612_C::CallDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2612_C", "CallDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2612.MM_M061_EM2612_C.QuestExecute
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2612_C::QuestExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2612_C", "QuestExecute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2612.MM_M061_EM2612_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMM_M061_EM2612_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2612_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2612.MM_M061_EM2612_C.CheckActive
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2612_C::CheckActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2612_C", "CheckActive");

	UObject::ProcessEvent(Func, nullptr);
}

}

