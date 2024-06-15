#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CoasterSpline

#include "Basic.hpp"

#include "BPI_CoasterSpline_classes.hpp"
#include "BPI_CoasterSpline_parameters.hpp"


namespace SDK
{

// Function BPI_CoasterSpline.BPI_CoasterSpline_C.BPI_UpdateCoasterFlag
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CoasterSpline_C::BPI_UpdateCoasterFlag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CoasterSpline_C", "BPI_UpdateCoasterFlag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CoasterSpline.BPI_CoasterSpline_C.BPI_GetGlobalSaveID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SaveId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CoasterSpline_C::BPI_GetGlobalSaveID(int32* SaveId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CoasterSpline_C", "BPI_GetGlobalSaveID");

	Params::BPI_CoasterSpline_C_BPI_GetGlobalSaveID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SaveId != nullptr)
		*SaveId = Parms.SaveId;
}


// Function BPI_CoasterSpline.BPI_CoasterSpline_C.BPI_GetIsOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    StartGimmickOpen                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    EndGimmickOpen                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CoasterSpline_C::BPI_GetIsOpen(bool* StartGimmickOpen, bool* EndGimmickOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CoasterSpline_C", "BPI_GetIsOpen");

	Params::BPI_CoasterSpline_C_BPI_GetIsOpen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StartGimmickOpen != nullptr)
		*StartGimmickOpen = Parms.StartGimmickOpen;

	if (EndGimmickOpen != nullptr)
		*EndGimmickOpen = Parms.EndGimmickOpen;
}

}
