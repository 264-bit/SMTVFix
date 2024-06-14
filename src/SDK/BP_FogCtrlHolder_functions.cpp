#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FogCtrlHolder

#include "Basic.hpp"

#include "BP_FogCtrlHolder_classes.hpp"
#include "BP_FogCtrlHolder_parameters.hpp"


namespace SDK
{

// Function BP_FogCtrlHolder.BP_FogCtrlHolder_C.ExecuteUbergraph_BP_FogCtrlHolder
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogCtrlHolder_C::ExecuteUbergraph_BP_FogCtrlHolder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogCtrlHolder_C", "ExecuteUbergraph_BP_FogCtrlHolder");

	Params::BP_FogCtrlHolder_C_ExecuteUbergraph_BP_FogCtrlHolder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FogCtrlHolder.BP_FogCtrlHolder_C.ResetToDefault
// (BlueprintCallable, BlueprintEvent)

void ABP_FogCtrlHolder_C::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogCtrlHolder_C", "ResetToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FogCtrlHolder.BP_FogCtrlHolder_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void ABP_FogCtrlHolder_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogCtrlHolder_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}

}
