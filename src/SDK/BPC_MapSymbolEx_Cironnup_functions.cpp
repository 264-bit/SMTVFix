#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_MapSymbolEx_Cironnup

#include "Basic.hpp"

#include "BPC_MapSymbolEx_Cironnup_classes.hpp"
#include "BPC_MapSymbolEx_Cironnup_parameters.hpp"


namespace SDK
{

// Function BPC_MapSymbolEx_Cironnup.BPC_MapSymbolEx_Cironnup_C.ExecuteUbergraph_BPC_MapSymbolEx_Cironnup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_MapSymbolEx_Cironnup_C::ExecuteUbergraph_BPC_MapSymbolEx_Cironnup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_MapSymbolEx_Cironnup_C", "ExecuteUbergraph_BPC_MapSymbolEx_Cironnup");

	Params::BPC_MapSymbolEx_Cironnup_C_ExecuteUbergraph_BPC_MapSymbolEx_Cironnup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_MapSymbolEx_Cironnup.BPC_MapSymbolEx_Cironnup_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_MapSymbolEx_Cironnup_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_MapSymbolEx_Cironnup_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_MapSymbolEx_Cironnup.BPC_MapSymbolEx_Cironnup_C.OnEvtDis_AttackMotion
// (BlueprintCallable, BlueprintEvent)

void UBPC_MapSymbolEx_Cironnup_C::OnEvtDis_AttackMotion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_MapSymbolEx_Cironnup_C", "OnEvtDis_AttackMotion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_MapSymbolEx_Cironnup.BPC_MapSymbolEx_Cironnup_C.OnLoaded_FAC402D84F5875850B3379A2BCB3A2A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBPC_MapSymbolEx_Cironnup_C::OnLoaded_FAC402D84F5875850B3379A2BCB3A2A3(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_MapSymbolEx_Cironnup_C", "OnLoaded_FAC402D84F5875850B3379A2BCB3A2A3");

	Params::BPC_MapSymbolEx_Cironnup_C_OnLoaded_FAC402D84F5875850B3379A2BCB3A2A3 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}
