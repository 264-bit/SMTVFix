#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_Magatsuka

#include "Basic.hpp"

#include "BPL_Magatsuka_classes.hpp"
#include "BPL_Magatsuka_parameters.hpp"


namespace SDK
{

// Function BPL_Magatsuka.BPL_Magatsuka_C.ShowMagatsukaAll
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Actors                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_Magatsuka_C::ShowMagatsukaAll(TArray<class AActor*>& Actors, bool Show, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Magatsuka_C", "ShowMagatsukaAll");

	Params::BPL_Magatsuka_C_ShowMagatsukaAll Parms{};

	Parms.Actors = std::move(Actors);
	Parms.Show = Show;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Actors = std::move(Parms.Actors);
}


// Function BPL_Magatsuka.BPL_Magatsuka_C.RecalcMagatsukaGaze
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Actors                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_Magatsuka_C::RecalcMagatsukaGaze(TArray<class AActor*>& Actors, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Magatsuka_C", "RecalcMagatsukaGaze");

	Params::BPL_Magatsuka_C_RecalcMagatsukaGaze Parms{};

	Parms.Actors = std::move(Actors);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Actors = std::move(Parms.Actors);
}


// Function BPL_Magatsuka.BPL_Magatsuka_C.ReleaseMagatsukaGaze
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Actors                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_Magatsuka_C::ReleaseMagatsukaGaze(TArray<class AActor*>& Actors, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Magatsuka_C", "ReleaseMagatsukaGaze");

	Params::BPL_Magatsuka_C_ReleaseMagatsukaGaze Parms{};

	Parms.Actors = std::move(Actors);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Actors = std::move(Parms.Actors);
}


// Function BPL_Magatsuka.BPL_Magatsuka_C.OtherScene_To_MagatsukaFound
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_Magatsuka_C::OtherScene_To_MagatsukaFound(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Magatsuka_C", "OtherScene_To_MagatsukaFound");

	Params::BPL_Magatsuka_C_OtherScene_To_MagatsukaFound Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_Magatsuka.BPL_Magatsuka_C.MagatsukaFound_To_OtherScene
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_Magatsuka_C::MagatsukaFound_To_OtherScene(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Magatsuka_C", "MagatsukaFound_To_OtherScene");

	Params::BPL_Magatsuka_C_MagatsukaFound_To_OtherScene Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_Magatsuka.BPL_Magatsuka_C.ChangeBGM_MagatsukaOrMap
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFadeType                               FadeType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_Magatsuka_C::ChangeBGM_MagatsukaOrMap(EFadeType FadeType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Magatsuka_C", "ChangeBGM_MagatsukaOrMap");

	Params::BPL_Magatsuka_C_ChangeBGM_MagatsukaOrMap Parms{};

	Parms.FadeType = FadeType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
