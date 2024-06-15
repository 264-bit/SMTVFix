#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LV_m061_EventHit_P

#include "Basic.hpp"

#include "LV_m061_EventHit_P_classes.hpp"
#include "LV_m061_EventHit_P_parameters.hpp"


namespace SDK
{

// Function LV_m061_EventHit_P.LV_m061_EventHit_P_C.ExecuteUbergraph_LV_m061_EventHit_P
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALV_m061_EventHit_P_C::ExecuteUbergraph_LV_m061_EventHit_P(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_EventHit_P_C", "ExecuteUbergraph_LV_m061_EventHit_P");

	Params::LV_m061_EventHit_P_C_ExecuteUbergraph_LV_m061_EventHit_P Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LV_m061_EventHit_P.LV_m061_EventHit_P_C.EN0070Start
// (BlueprintCallable, BlueprintEvent)

void ALV_m061_EventHit_P_C::EN0070Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_EventHit_P_C", "EN0070Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LV_m061_EventHit_P.LV_m061_EventHit_P_C.EntryMapEvent
// (BlueprintCallable, BlueprintEvent)

void ALV_m061_EventHit_P_C::EntryMapEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_EventHit_P_C", "EntryMapEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LV_m061_EventHit_P.LV_m061_EventHit_P_C.BGMCheck
// (BlueprintCallable, BlueprintEvent)

void ALV_m061_EventHit_P_C::BGMCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_EventHit_P_C", "BGMCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LV_m061_EventHit_P.LV_m061_EventHit_P_C.EndBattle_����_0
// (BlueprintCallable, BlueprintEvent)

void ALV_m061_EventHit_P_C::EndBattle______0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_EventHit_P_C", "EndBattle_����_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LV_m061_EventHit_P.LV_m061_EventHit_P_C.Event Check Battle
// (BlueprintCallable, BlueprintEvent)

void ALV_m061_EventHit_P_C::Event_Check_Battle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_EventHit_P_C", "Event Check Battle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LV_m061_EventHit_P.LV_m061_EventHit_P_C.EndEvent_����_0
// (BlueprintCallable, BlueprintEvent)

void ALV_m061_EventHit_P_C::EndEvent______0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_EventHit_P_C", "EndEvent_����_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LV_m061_EventHit_P.LV_m061_EventHit_P_C.Event Check
// (BlueprintCallable, BlueprintEvent)

void ALV_m061_EventHit_P_C::Event_Check()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_EventHit_P_C", "Event Check");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LV_m061_EventHit_P.LV_m061_EventHit_P_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALV_m061_EventHit_P_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_EventHit_P_C", "ReceiveTick");

	Params::LV_m061_EventHit_P_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LV_m061_EventHit_P.LV_m061_EventHit_P_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALV_m061_EventHit_P_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_EventHit_P_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
