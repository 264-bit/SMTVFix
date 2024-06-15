#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LV_m061_Facility

#include "Basic.hpp"

#include "LV_m061_Facility_classes.hpp"
#include "LV_m061_Facility_parameters.hpp"


namespace SDK
{

// Function LV_m061_Facility.LV_m061_Facility_C.ExecuteUbergraph_LV_m061_Facility
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALV_m061_Facility_C::ExecuteUbergraph_LV_m061_Facility(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_Facility_C", "ExecuteUbergraph_LV_m061_Facility");

	Params::LV_m061_Facility_C_ExecuteUbergraph_LV_m061_Facility Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LV_m061_Facility.LV_m061_Facility_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALV_m061_Facility_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_Facility_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

