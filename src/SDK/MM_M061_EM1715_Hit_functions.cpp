#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM1715_Hit

#include "Basic.hpp"

#include "MM_M061_EM1715_Hit_classes.hpp"
#include "MM_M061_EM1715_Hit_parameters.hpp"


namespace SDK
{

// Function MM_M061_EM1715_Hit.MM_M061_EM1715_Hit_C.ExecuteUbergraph_MM_M061_EM1715_Hit
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM1715_Hit_C::ExecuteUbergraph_MM_M061_EM1715_Hit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1715_Hit_C", "ExecuteUbergraph_MM_M061_EM1715_Hit");

	Params::MM_M061_EM1715_Hit_C_ExecuteUbergraph_MM_M061_EM1715_Hit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM1715_Hit.MM_M061_EM1715_Hit_C.EvtDis_FinishComplete
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM1715_Hit_C::EvtDis_FinishComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1715_Hit_C", "EvtDis_FinishComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM1715_Hit.MM_M061_EM1715_Hit_C.EvtDis_Finish
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM1715_Hit_C::EvtDis_Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1715_Hit_C", "EvtDis_Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM1715_Hit.MM_M061_EM1715_Hit_C.CallDeactivate
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM1715_Hit_C::CallDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1715_Hit_C", "CallDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM1715_Hit.MM_M061_EM1715_Hit_C.QuestExecute
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM1715_Hit_C::QuestExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1715_Hit_C", "QuestExecute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM1715_Hit.MM_M061_EM1715_Hit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMM_M061_EM1715_Hit_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1715_Hit_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM1715_Hit.MM_M061_EM1715_Hit_C.CheckActive
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM1715_Hit_C::CheckActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM1715_Hit_C", "CheckActive");

	UObject::ProcessEvent(Func, nullptr);
}

}

