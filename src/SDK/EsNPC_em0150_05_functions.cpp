#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EsNPC_em0150_05

#include "Basic.hpp"

#include "EsNPC_em0150_05_classes.hpp"
#include "EsNPC_em0150_05_parameters.hpp"


namespace SDK
{

// Function esNPC_em0150_05.esNPC_em0150_05_C.ExecuteUbergraph_esNPC_em0150_05
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEsNPC_em0150_05_C::ExecuteUbergraph_esNPC_em0150_05(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("esNPC_em0150_05_C", "ExecuteUbergraph_esNPC_em0150_05");

	Params::EsNPC_em0150_05_C_ExecuteUbergraph_esNPC_em0150_05 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function esNPC_em0150_05.esNPC_em0150_05_C.CheckActive
// (Public, BlueprintCallable, BlueprintEvent)

void AEsNPC_em0150_05_C::CheckActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("esNPC_em0150_05_C", "CheckActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function esNPC_em0150_05.esNPC_em0150_05_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEsNPC_em0150_05_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("esNPC_em0150_05_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function esNPC_em0150_05.esNPC_em0150_05_C.OnLoaded_0E38A2EA4724D2AEB4E20FBD9E94831F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEsNPC_em0150_05_C::OnLoaded_0E38A2EA4724D2AEB4E20FBD9E94831F(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("esNPC_em0150_05_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBD9E94831F");

	Params::EsNPC_em0150_05_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD9E94831F Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

