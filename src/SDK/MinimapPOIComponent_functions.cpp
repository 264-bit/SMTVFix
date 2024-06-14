#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinimapPOIComponent

#include "Basic.hpp"

#include "MinimapPOIComponent_classes.hpp"
#include "MinimapPOIComponent_parameters.hpp"


namespace SDK
{

// Function MinimapPOIComponent.MinimapPOIComponent_C.ExecuteUbergraph_MinimapPOIComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapPOIComponent_C::ExecuteUbergraph_MinimapPOIComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimapPOIComponent_C", "ExecuteUbergraph_MinimapPOIComponent");

	Params::MinimapPOIComponent_C_ExecuteUbergraph_MinimapPOIComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinimapPOIComponent.MinimapPOIComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapPOIComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimapPOIComponent_C", "ReceiveEndPlay");

	Params::MinimapPOIComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinimapPOIComponent.MinimapPOIComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UMinimapPOIComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimapPOIComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
