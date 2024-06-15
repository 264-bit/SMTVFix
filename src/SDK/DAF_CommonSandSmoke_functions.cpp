#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DAF_CommonSandSmoke

#include "Basic.hpp"

#include "DAF_CommonSandSmoke_classes.hpp"
#include "DAF_CommonSandSmoke_parameters.hpp"


namespace SDK
{

// Function DAF_CommonSandSmoke.DAF_CommonSandSmoke_C.ExecuteUbergraph_DAF_CommonSandSmoke
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADAF_CommonSandSmoke_C::ExecuteUbergraph_DAF_CommonSandSmoke(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DAF_CommonSandSmoke_C", "ExecuteUbergraph_DAF_CommonSandSmoke");

	Params::DAF_CommonSandSmoke_C_ExecuteUbergraph_DAF_CommonSandSmoke Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DAF_CommonSandSmoke.DAF_CommonSandSmoke_C.OnSystemFinished_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*         PSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADAF_CommonSandSmoke_C::OnSystemFinished______0(class UParticleSystemComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DAF_CommonSandSmoke_C", "OnSystemFinished_����_0");

	Params::DAF_CommonSandSmoke_C_OnSystemFinished______0 Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DAF_CommonSandSmoke.DAF_CommonSandSmoke_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADAF_CommonSandSmoke_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DAF_CommonSandSmoke_C", "ReceiveTick");

	Params::DAF_CommonSandSmoke_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DAF_CommonSandSmoke.DAF_CommonSandSmoke_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADAF_CommonSandSmoke_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DAF_CommonSandSmoke_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
