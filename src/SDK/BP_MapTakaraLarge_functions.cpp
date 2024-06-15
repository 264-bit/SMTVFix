#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapTakaraLarge

#include "Basic.hpp"

#include "BP_MapTakaraLarge_classes.hpp"
#include "BP_MapTakaraLarge_parameters.hpp"


namespace SDK
{

// Function BP_MapTakaraLarge.BP_MapTakaraLarge_C.ResetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MapTakaraLarge_C::ResetMesh(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapTakaraLarge_C", "ResetMesh");

	Params::BP_MapTakaraLarge_C_ResetMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_MapTakaraLarge.BP_MapTakaraLarge_C.PlayBreakSE
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MapTakaraLarge_C::PlayBreakSE(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapTakaraLarge_C", "PlayBreakSE");

	Params::BP_MapTakaraLarge_C_PlayBreakSE Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_MapTakaraLarge.BP_MapTakaraLarge_C.BPI_GetTakaraId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_TakaraID                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapTakaraLarge_C::BPI_GetTakaraId(int32* Param_TakaraID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapTakaraLarge_C", "BPI_GetTakaraId");

	Params::BP_MapTakaraLarge_C_BPI_GetTakaraId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_TakaraID != nullptr)
		*Param_TakaraID = Parms.Param_TakaraID;
}


// Function BP_MapTakaraLarge.BP_MapTakaraLarge_C.FlagCh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OK                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MapTakaraLarge_C::FlagCh(bool* OK)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapTakaraLarge_C", "FlagCh");

	Params::BP_MapTakaraLarge_C_FlagCh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OK != nullptr)
		*OK = Parms.OK;
}

}
