#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SymbolDebugText

#include "Basic.hpp"

#include "WB_SymbolDebugText_classes.hpp"
#include "WB_SymbolDebugText_parameters.hpp"


namespace SDK
{

// Function WB_SymbolDebugText.WB_SymbolDebugText_C.ExecuteUbergraph_WB_SymbolDebugText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SymbolDebugText_C::ExecuteUbergraph_WB_SymbolDebugText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SymbolDebugText_C", "ExecuteUbergraph_WB_SymbolDebugText");

	Params::WB_SymbolDebugText_C_ExecuteUbergraph_WB_SymbolDebugText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SymbolDebugText.WB_SymbolDebugText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_SymbolDebugText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SymbolDebugText_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SymbolDebugText.WB_SymbolDebugText_C.Update
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<E_Symbol_ActPattern>             Param_ActPatternList                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Param_ActIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Counter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_CounterEnd                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_MapSymbolState                        Param_State                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Speed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Discovery_LevelDiff                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SymbolDebugText_C::Update(TArray<E_Symbol_ActPattern>& Param_ActPatternList, int32 Param_ActIndex, float Param_Counter, float Param_CounterEnd, E_MapSymbolState Param_State, float Param_Speed, bool Discovery_LevelDiff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SymbolDebugText_C", "Update");

	Params::WB_SymbolDebugText_C_Update Parms{};

	Parms.Param_ActPatternList = std::move(Param_ActPatternList);
	Parms.Param_ActIndex = Param_ActIndex;
	Parms.Param_Counter = Param_Counter;
	Parms.Param_CounterEnd = Param_CounterEnd;
	Parms.Param_State = Param_State;
	Parms.Param_Speed = Param_Speed;
	Parms.Discovery_LevelDiff = Discovery_LevelDiff;

	UObject::ProcessEvent(Func, &Parms);

	Param_ActPatternList = std::move(Parms.Param_ActPatternList);
}

}

