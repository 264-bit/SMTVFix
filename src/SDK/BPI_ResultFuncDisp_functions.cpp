#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ResultFuncDisp

#include "Basic.hpp"

#include "BPI_ResultFuncDisp_classes.hpp"
#include "BPI_ResultFuncDisp_parameters.hpp"


namespace SDK
{

// Function BPI_ResultFuncDisp.BPI_ResultFuncDisp_C.AfterScreenIsCovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Dummy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_ResultFuncDisp_C::AfterScreenIsCovered(bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_ResultFuncDisp_C", "AfterScreenIsCovered");

	Params::BPI_ResultFuncDisp_C_AfterScreenIsCovered Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;
}

}
