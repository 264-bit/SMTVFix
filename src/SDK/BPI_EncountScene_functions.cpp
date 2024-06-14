#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EncountScene

#include "Basic.hpp"

#include "BPI_EncountScene_classes.hpp"
#include "BPI_EncountScene_parameters.hpp"


namespace SDK
{

// Function BPI_EncountScene.BPI_EncountScene_C.BPI_EncountSceneFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EncountScene_C::BPI_EncountSceneFadeIn(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EncountScene_C", "BPI_EncountSceneFadeIn");

	Params::BPI_EncountScene_C_BPI_EncountSceneFadeIn Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_EncountScene.BPI_EncountScene_C.BPI_ReadyEncountSceneFade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ready                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_EncountScene_C::BPI_ReadyEncountSceneFade(bool* Ready)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EncountScene_C", "BPI_ReadyEncountSceneFade");

	Params::BPI_EncountScene_C_BPI_ReadyEncountSceneFade Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ready != nullptr)
		*Ready = Parms.Ready;
}

}
