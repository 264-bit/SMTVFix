#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DG_ToStop

#include "Basic.hpp"

#include "BP_DG_ToStop_classes.hpp"
#include "BP_DG_ToStop_parameters.hpp"


namespace SDK
{

// Function BP_DG_ToStop.BP_DG_ToStop_C.ExecuteUbergraph_BP_DG_ToStop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DG_ToStop_C::ExecuteUbergraph_BP_DG_ToStop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DG_ToStop_C", "ExecuteUbergraph_BP_DG_ToStop");

	Params::BP_DG_ToStop_C_ExecuteUbergraph_BP_DG_ToStop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DG_ToStop.BP_DG_ToStop_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DG_ToStop_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DG_ToStop_C", "ReceiveEndPlay");

	Params::BP_DG_ToStop_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DG_ToStop.BP_DG_ToStop_C.EventHitAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DG_ToStop_C::EventHitAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DG_ToStop_C", "EventHitAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DG_ToStop.BP_DG_ToStop_C.StopRateTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_DG_ToStop_C::StopRateTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DG_ToStop_C", "StopRateTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DG_ToStop.BP_DG_ToStop_C.StopRateTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_DG_ToStop_C::StopRateTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DG_ToStop_C", "StopRateTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DG_ToStop.BP_DG_ToStop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DG_ToStop_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DG_ToStop_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DG_ToStop.BP_DG_ToStop_C.LinkModel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DG_ToStop_C::LinkModel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DG_ToStop_C", "LinkModel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DG_ToStop.BP_DG_ToStop_C.StopParticles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DG_ToStop_C::StopParticles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DG_ToStop_C", "StopParticles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DG_ToStop.BP_DG_ToStop_C.ChangeEffectParam
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DG_ToStop_C::ChangeEffectParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DG_ToStop_C", "ChangeEffectParam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DG_ToStop.BP_DG_ToStop_C.SetMinimapIconTableRow
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMinimapIconTableRow             OutRow                                                 (Parm, OutParm)
// bool                                    NeedToAddMore                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DG_ToStop_C::SetMinimapIconTableRow(int32 Param_Index, struct FMinimapIconTableRow* OutRow, bool* NeedToAddMore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DG_ToStop_C", "SetMinimapIconTableRow");

	Params::BP_DG_ToStop_C_SetMinimapIconTableRow Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRow != nullptr)
		*OutRow = std::move(Parms.OutRow);

	if (NeedToAddMore != nullptr)
		*NeedToAddMore = Parms.NeedToAddMore;
}


// Function BP_DG_ToStop.BP_DG_ToStop_C.BPI_SetDataId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DataId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Dummy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DG_ToStop_C::BPI_SetDataId(int32 DataId, bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DG_ToStop_C", "BPI_SetDataId");

	Params::BP_DG_ToStop_C_BPI_SetDataId Parms{};

	Parms.DataId = DataId;

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;
}


// Function BP_DG_ToStop.BP_DG_ToStop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DG_ToStop_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DG_ToStop_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

