#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapActorCore

#include "Basic.hpp"

#include "MapActorCore_classes.hpp"
#include "MapActorCore_parameters.hpp"


namespace SDK
{

// Function MapActorCore.MapActorCore_C.CallPause__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AMapActorCore_C::CallPause__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapActorCore_C", "CallPause__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapActorCore.MapActorCore_C.CallUnPause__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AMapActorCore_C::CallUnPause__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapActorCore_C", "CallUnPause__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapActorCore.MapActorCore_C.ExecuteUbergraph_MapActorCore
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMapActorCore_C::ExecuteUbergraph_MapActorCore(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapActorCore_C", "ExecuteUbergraph_MapActorCore");

	Params::MapActorCore_C_ExecuteUbergraph_MapActorCore Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapActorCore.MapActorCore_C.CoreUnPause
// (BlueprintCallable, BlueprintEvent)

void AMapActorCore_C::CoreUnPause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapActorCore_C", "CoreUnPause");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapActorCore.MapActorCore_C.CorePause
// (BlueprintCallable, BlueprintEvent)

void AMapActorCore_C::CorePause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapActorCore_C", "CorePause");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapActorCore.MapActorCore_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMapActorCore_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapActorCore_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapActorCore.MapActorCore_C.GetPaused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Pause                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMapActorCore_C::GetPaused(bool* Pause)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapActorCore_C", "GetPaused");

	Params::MapActorCore_C_GetPaused Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pause != nullptr)
		*Pause = Parms.Pause;
}

}

