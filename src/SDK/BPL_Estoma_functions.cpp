#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_Estoma

#include "Basic.hpp"

#include "BPL_Estoma_classes.hpp"
#include "BPL_Estoma_parameters.hpp"


namespace SDK
{

// Function BPL_Estoma.BPL_Estoma_C.BPL_UnlockEstomaLight
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Unlock                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_Estoma_C::BPL_UnlockEstomaLight(class UObject* __WorldContext, bool* Unlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Estoma_C", "BPL_UnlockEstomaLight");

	Params::BPL_Estoma_C_BPL_UnlockEstomaLight Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Unlock != nullptr)
		*Unlock = Parms.Unlock;
}


// Function BPL_Estoma.BPL_Estoma_C.BPL_EndEstomaEffect
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPlaySE                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_Estoma_C::BPL_EndEstomaEffect(bool bPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Estoma_C", "BPL_EndEstomaEffect");

	Params::BPL_Estoma_C_BPL_EndEstomaEffect Parms{};

	Parms.bPlaySE = bPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_Estoma.BPL_Estoma_C.BPL_BeginEstomaEffect
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPlaySE                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_Estoma_C::BPL_BeginEstomaEffect(bool bPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Estoma_C", "BPL_BeginEstomaEffect");

	Params::BPL_Estoma_C_BPL_BeginEstomaEffect Parms{};

	Parms.bPlaySE = bPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_Estoma.BPL_Estoma_C.BPL_EndEstoma
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_Estoma_C::BPL_EndEstoma(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Estoma_C", "BPL_EndEstoma");

	Params::BPL_Estoma_C_BPL_EndEstoma Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_Estoma.BPL_Estoma_C.BPL_BeginEstoma
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_Estoma_C::BPL_BeginEstoma(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Estoma_C", "BPL_BeginEstoma");

	Params::BPL_Estoma_C_BPL_BeginEstoma Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
