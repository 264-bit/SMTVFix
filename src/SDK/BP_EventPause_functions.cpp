#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventPause

#include "Basic.hpp"

#include "BP_EventPause_classes.hpp"
#include "BP_EventPause_parameters.hpp"


namespace SDK
{

// Function BP_EventPause.BP_EventPause_C.TickHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventPause_C::TickHelp(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPause_C", "TickHelp");

	Params::BP_EventPause_C_TickHelp Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventPause.BP_EventPause_C.CloseHelp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventPause_C::CloseHelp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPause_C", "CloseHelp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventPause.BP_EventPause_C.OpenHelp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventPause_C::OpenHelp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPause_C", "OpenHelp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventPause.BP_EventPause_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventPause_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPause_C", "ReceiveTick");

	Params::BP_EventPause_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventPause.BP_EventPause_C.PauseEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_EventPause_C::PauseEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPause_C", "PauseEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventPause.BP_EventPause_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventPause_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPause_C", "ReceiveEndPlay");

	Params::BP_EventPause_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventPause.BP_EventPause_C.ExecuteUbergraph_BP_EventPause
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventPause_C::ExecuteUbergraph_BP_EventPause(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPause_C", "ExecuteUbergraph_BP_EventPause");

	Params::BP_EventPause_C_ExecuteUbergraph_BP_EventPause Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventPause.BP_EventPause_C.ResumeDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EventPause_C::ResumeDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPause_C", "ResumeDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventPause.BP_EventPause_C.PauseDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EventPause_C::PauseDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventPause_C", "PauseDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}
