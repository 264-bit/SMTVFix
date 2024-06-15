#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev316_Simple

#include "Basic.hpp"

#include "Dev316_Simple_classes.hpp"
#include "Dev316_Simple_parameters.hpp"


namespace SDK
{

// Function Dev316_Simple.Dev316_Simple_C.ExecuteUbergraph_Dev316_Simple
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADev316_Simple_C::ExecuteUbergraph_Dev316_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev316_Simple_C", "ExecuteUbergraph_Dev316_Simple");

	Params::Dev316_Simple_C_ExecuteUbergraph_Dev316_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev316_Simple.Dev316_Simple_C.BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature
// (BlueprintEvent)

void ADev316_Simple_C::BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev316_Simple_C", "BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Dev316_Simple.Dev316_Simple_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADev316_Simple_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev316_Simple_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

