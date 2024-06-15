#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventStatueLvUp

#include "Basic.hpp"

#include "BP_EventStatueLvUp_classes.hpp"
#include "BP_EventStatueLvUp_parameters.hpp"


namespace SDK
{

// Function BP_EventStatueLvUp.BP_EventStatueLvUp_C.ExecuteUbergraph_BP_EventStatueLvUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventStatueLvUp_C::ExecuteUbergraph_BP_EventStatueLvUp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventStatueLvUp_C", "ExecuteUbergraph_BP_EventStatueLvUp");

	Params::BP_EventStatueLvUp_C_ExecuteUbergraph_BP_EventStatueLvUp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventStatueLvUp.BP_EventStatueLvUp_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void ABP_EventStatueLvUp_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventStatueLvUp_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventStatueLvUp.BP_EventStatueLvUp_C.ResultFinish
// (BlueprintCallable, BlueprintEvent)

void ABP_EventStatueLvUp_C::ResultFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventStatueLvUp_C", "ResultFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventStatueLvUp.BP_EventStatueLvUp_C.Start
// (BlueprintCallable, BlueprintEvent)

void ABP_EventStatueLvUp_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventStatueLvUp_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventStatueLvUp.BP_EventStatueLvUp_C.GetFinish
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFinish                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventStatueLvUp_C::GetFinish(bool* IsFinish)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventStatueLvUp_C", "GetFinish");

	Params::BP_EventStatueLvUp_C_GetFinish Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsFinish != nullptr)
		*IsFinish = Parms.IsFinish;
}

}

