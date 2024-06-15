#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DAF_Base

#include "Basic.hpp"

#include "DAF_Base_classes.hpp"
#include "DAF_Base_parameters.hpp"


namespace SDK
{

// Function DAF_Base.DAF_Base_C.ExecuteUbergraph_DAF_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADAF_Base_C::ExecuteUbergraph_DAF_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DAF_Base_C", "ExecuteUbergraph_DAF_Base");

	Params::DAF_Base_C_ExecuteUbergraph_DAF_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DAF_Base.DAF_Base_C.Visible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Visible                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADAF_Base_C::Visible(bool Param_Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DAF_Base_C", "Visible");

	Params::DAF_Base_C_Visible Parms{};

	Parms.Param_Visible = Param_Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}

