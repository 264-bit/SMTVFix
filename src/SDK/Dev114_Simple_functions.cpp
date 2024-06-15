#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev114_Simple

#include "Basic.hpp"

#include "Dev114_Simple_classes.hpp"
#include "Dev114_Simple_parameters.hpp"


namespace SDK
{

// Function Dev114_Simple.Dev114_Simple_C.ExecuteUbergraph_Dev114_Simple
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADev114_Simple_C::ExecuteUbergraph_Dev114_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev114_Simple_C", "ExecuteUbergraph_Dev114_Simple");

	Params::Dev114_Simple_C_ExecuteUbergraph_Dev114_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev114_Simple.Dev114_Simple_C.BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature
// (BlueprintEvent)

void ADev114_Simple_C::BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev114_Simple_C", "BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Dev114_Simple.Dev114_Simple_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADev114_Simple_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev114_Simple_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

