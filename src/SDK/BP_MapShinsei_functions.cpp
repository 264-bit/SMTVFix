#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapShinsei

#include "Basic.hpp"

#include "BP_MapShinsei_classes.hpp"
#include "BP_MapShinsei_parameters.hpp"


namespace SDK
{

// Function BP_MapShinsei.BP_MapShinsei_C.ExecuteUbergraph_BP_MapShinsei
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapShinsei_C::ExecuteUbergraph_BP_MapShinsei(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "ExecuteUbergraph_BP_MapShinsei");

	Params::BP_MapShinsei_C_ExecuteUbergraph_BP_MapShinsei Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapShinsei.BP_MapShinsei_C.EvtDis_Show_WalkedIn_
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_WalkedIn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MapShinsei_C::EvtDis_Show_WalkedIn_(bool Param_WalkedIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "EvtDis_Show_WalkedIn_");

	Params::BP_MapShinsei_C_EvtDis_Show_WalkedIn_ Parms{};

	Parms.Param_WalkedIn = Param_WalkedIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapShinsei.BP_MapShinsei_C.MoveEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_MapShinsei_C::MoveEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "MoveEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapShinsei.BP_MapShinsei_C.ProcMiitsuGetEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MapShinsei_C::ProcMiitsuGetEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "ProcMiitsuGetEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapShinsei.BP_MapShinsei_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapShinsei_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapShinsei.BP_MapShinsei_C.EventHitAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapShinsei_C::EventHitAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "EventHitAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapShinsei.BP_MapShinsei_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapShinsei_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "ReceiveEndPlay");

	Params::BP_MapShinsei_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapShinsei.BP_MapShinsei_C.AnimOut
// (BlueprintCallable, BlueprintEvent)

void ABP_MapShinsei_C::AnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "AnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapShinsei.BP_MapShinsei_C.CallTaskEnd_
// (BlueprintCallable, BlueprintEvent)

void ABP_MapShinsei_C::CallTaskEnd_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "CallTaskEnd_");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapShinsei.BP_MapShinsei_C.BPI_HideGimmick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MapGimmickHideReason                  Param_HideReason                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapShinsei_C::BPI_HideGimmick(E_MapGimmickHideReason Param_HideReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "BPI_HideGimmick");

	Params::BP_MapShinsei_C_BPI_HideGimmick Parms{};

	Parms.Param_HideReason = Param_HideReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapShinsei.BP_MapShinsei_C.BPI_ShowGimmick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MapGimmickHideReason                  Param_HideReason                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapShinsei_C::BPI_ShowGimmick(E_MapGimmickHideReason Param_HideReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "BPI_ShowGimmick");

	Params::BP_MapShinsei_C_BPI_ShowGimmick Parms{};

	Parms.Param_HideReason = Param_HideReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapShinsei.BP_MapShinsei_C.OnDestroyed_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapShinsei_C::OnDestroyed______0(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "OnDestroyed_����_0");

	Params::BP_MapShinsei_C_OnDestroyed______0 Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapShinsei.BP_MapShinsei_C.EvtDis_Hide_
// (BlueprintCallable, BlueprintEvent)

void ABP_MapShinsei_C::EvtDis_Hide_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "EvtDis_Hide_");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapShinsei.BP_MapShinsei_C.OnSystemFinished_
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*         PSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapShinsei_C::OnSystemFinished_(class UParticleSystemComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "OnSystemFinished_");

	Params::BP_MapShinsei_C_OnSystemFinished_ Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapShinsei.BP_MapShinsei_C.Timeline_Material__UpdateFunc
// (BlueprintEvent)

void ABP_MapShinsei_C::Timeline_Material__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "Timeline_Material__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapShinsei.BP_MapShinsei_C.Timeline_Material__FinishedFunc
// (BlueprintEvent)

void ABP_MapShinsei_C::Timeline_Material__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "Timeline_Material__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapShinsei.BP_MapShinsei_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MapShinsei_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapShinsei.BP_MapShinsei_C.CalcSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapShinsei_C::CalcSave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "CalcSave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapShinsei.BP_MapShinsei_C.CheckExist
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Exist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MapShinsei_C::CheckExist(bool* Exist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "CheckExist");

	Params::BP_MapShinsei_C_CheckExist Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Exist != nullptr)
		*Exist = Parms.Exist;
}


// Function BP_MapShinsei.BP_MapShinsei_C.ShowParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_WalkedIn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MapShinsei_C::ShowParticle(bool Show, bool Param_WalkedIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "ShowParticle");

	Params::BP_MapShinsei_C_ShowParticle Parms{};

	Parms.Show = Show;
	Parms.Param_WalkedIn = Param_WalkedIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapShinsei.BP_MapShinsei_C.SetMinimapIconTableRow
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMinimapIconTableRow             OutRow                                                 (Parm, OutParm)
// bool                                    NeedToAddMore                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MapShinsei_C::SetMinimapIconTableRow(int32 Param_Index, struct FMinimapIconTableRow* OutRow, bool* NeedToAddMore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "SetMinimapIconTableRow");

	Params::BP_MapShinsei_C_SetMinimapIconTableRow Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRow != nullptr)
		*OutRow = std::move(Parms.OutRow);

	if (NeedToAddMore != nullptr)
		*NeedToAddMore = Parms.NeedToAddMore;
}


// Function BP_MapShinsei.BP_MapShinsei_C.GetGazeTargetType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EGazeTargetType                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EGazeTargetType ABP_MapShinsei_C::GetGazeTargetType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "GetGazeTargetType");

	Params::BP_MapShinsei_C_GetGazeTargetType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MapShinsei.BP_MapShinsei_C.GetGazeTargetLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_MapShinsei_C::GetGazeTargetLocation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapShinsei_C", "GetGazeTargetLocation");

	Params::BP_MapShinsei_C_GetGazeTargetLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
