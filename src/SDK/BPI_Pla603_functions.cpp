#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Pla603

#include "Basic.hpp"

#include "BPI_Pla603_classes.hpp"
#include "BPI_Pla603_parameters.hpp"


namespace SDK
{

// Function BPI_Pla603.BPI_Pla603_C.ForceCancelAttack
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Pla603_C::ForceCancelAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Pla603_C", "ForceCancelAttack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_Pla603.BPI_Pla603_C.BeginEstoma
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPlaySE                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Pla603_C::BeginEstoma(bool bPlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Pla603_C", "BeginEstoma");

	Params::BPI_Pla603_C_BeginEstoma Parms{};

	Parms.bPlaySE = bPlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_Pla603.BPI_Pla603_C.EndEstoma
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPlaySE                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Pla603_C::EndEstoma(bool bPlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Pla603_C", "EndEstoma");

	Params::BPI_Pla603_C_EndEstoma Parms{};

	Parms.bPlaySE = bPlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_Pla603.BPI_Pla603_C.Play_OOMAGATOKI_Voice
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Pla603_C::Play_OOMAGATOKI_Voice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Pla603_C", "Play_OOMAGATOKI_Voice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_Pla603.BPI_Pla603_C.BeginRiberama
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlaySE                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Pla603_C::BeginRiberama(bool PlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Pla603_C", "BeginRiberama");

	Params::BPI_Pla603_C_BeginRiberama Parms{};

	Parms.PlaySE = PlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_Pla603.BPI_Pla603_C.EndRiberama
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlaySE                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Pla603_C::EndRiberama(bool PlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Pla603_C", "EndRiberama");

	Params::BPI_Pla603_C_EndRiberama Parms{};

	Parms.PlaySE = PlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_Pla603.BPI_Pla603_C.FormChange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TSUKUYOMI                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Pla603_C::FormChange(bool TSUKUYOMI, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Pla603_C", "FormChange");

	Params::BPI_Pla603_C_FormChange Parms{};

	Parms.TSUKUYOMI = TSUKUYOMI;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BPI_Pla603.BPI_Pla603_C.IsTsukuyomiForm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TsukuyomiForm                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Pla603_C::IsTsukuyomiForm(bool* TsukuyomiForm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Pla603_C", "IsTsukuyomiForm");

	Params::BPI_Pla603_C_IsTsukuyomiForm Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TsukuyomiForm != nullptr)
		*TsukuyomiForm = Parms.TsukuyomiForm;
}


// Function BPI_Pla603.BPI_Pla603_C.SetRideCoasterSlopeAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Angle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Pla603_C::SetRideCoasterSlopeAngle(float Angle, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Pla603_C", "SetRideCoasterSlopeAngle");

	Params::BPI_Pla603_C_SetRideCoasterSlopeAngle Parms{};

	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BPI_Pla603.BPI_Pla603_C.ResetAir
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Pla603_C::ResetAir()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Pla603_C", "ResetAir");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_Pla603.BPI_Pla603_C.EndMapAction_CoasterSkip
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Pla603_C::EndMapAction_CoasterSkip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Pla603_C", "EndMapAction_CoasterSkip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_Pla603.BPI_Pla603_C.CheckIdleAnimBP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Idle                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Pla603_C::CheckIdleAnimBP(bool* Idle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Pla603_C", "CheckIdleAnimBP");

	Params::BPI_Pla603_C_CheckIdleAnimBP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Idle != nullptr)
		*Idle = Parms.Idle;
}

}
