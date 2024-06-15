#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev138_Simple

#include "Basic.hpp"

#include "Dev138_Simple_classes.hpp"
#include "Dev138_Simple_parameters.hpp"


namespace SDK
{

// Function Dev138_Simple.Dev138_Simple_C.ExecuteUbergraph_Dev138_Simple
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADev138_Simple_C::ExecuteUbergraph_Dev138_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev138_Simple_C", "ExecuteUbergraph_Dev138_Simple");

	Params::Dev138_Simple_C_ExecuteUbergraph_Dev138_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev138_Simple.Dev138_Simple_C.BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature
// (BlueprintEvent)

void ADev138_Simple_C::BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev138_Simple_C", "BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Dev138_Simple.Dev138_Simple_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADev138_Simple_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev138_Simple_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Dev138_Simple.Dev138_Simple_C.BI_SetNPCCollision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADev138_Simple_C::BI_SetNPCCollision(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev138_Simple_C", "BI_SetNPCCollision");

	Params::Dev138_Simple_C_BI_SetNPCCollision Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function Dev138_Simple.Dev138_Simple_C.SetNpcCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADev138_Simple_C::SetNpcCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev138_Simple_C", "SetNpcCollision");

	UObject::ProcessEvent(Func, nullptr);
}

}
