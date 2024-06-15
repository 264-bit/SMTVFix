#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_CheckAfterLoad

#include "Basic.hpp"

#include "BPL_CheckAfterLoad_classes.hpp"
#include "BPL_CheckAfterLoad_parameters.hpp"


namespace SDK
{

// Function BPL_CheckAfterLoad.BPL_CheckAfterLoad_C.CheckPlayerOverlapComponent_AfterLoad
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*>      CheckComponents                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                                   IgnoreDistance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OverlapComponent                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_CheckAfterLoad_C::CheckPlayerOverlapComponent_AfterLoad(TArray<class UPrimitiveComponent*>& CheckComponents, float IgnoreDistance, class UObject* __WorldContext, bool* OverlapComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CheckAfterLoad_C", "CheckPlayerOverlapComponent_AfterLoad");

	Params::BPL_CheckAfterLoad_C_CheckPlayerOverlapComponent_AfterLoad Parms{};

	Parms.CheckComponents = std::move(CheckComponents);
	Parms.IgnoreDistance = IgnoreDistance;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	CheckComponents = std::move(Parms.CheckComponents);

	if (OverlapComponent != nullptr)
		*OverlapComponent = Parms.OverlapComponent;
}

}

