#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EsNPC_m061_22

#include "Basic.hpp"

#include "EsNPC_m061_22_classes.hpp"
#include "EsNPC_m061_22_parameters.hpp"


namespace SDK
{

// Function esNPC_m061_22.esNPC_m061_22_C.ExecuteUbergraph_esNPC_m061_22
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEsNPC_m061_22_C::ExecuteUbergraph_esNPC_m061_22(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("esNPC_m061_22_C", "ExecuteUbergraph_esNPC_m061_22");

	Params::EsNPC_m061_22_C_ExecuteUbergraph_esNPC_m061_22 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function esNPC_m061_22.esNPC_m061_22_C.CheckActive
// (Public, BlueprintCallable, BlueprintEvent)

void AEsNPC_m061_22_C::CheckActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("esNPC_m061_22_C", "CheckActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function esNPC_m061_22.esNPC_m061_22_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEsNPC_m061_22_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("esNPC_m061_22_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
