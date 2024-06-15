#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventMissionBase_HitAction

#include "Basic.hpp"

#include "BP_EventMissionBase_HitAction_classes.hpp"
#include "BP_EventMissionBase_HitAction_parameters.hpp"


namespace SDK
{

// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.ExecuteUbergraph_BP_EventMissionBase_HitAction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventMissionBase_HitAction_C::ExecuteUbergraph_BP_EventMissionBase_HitAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "ExecuteUbergraph_BP_EventMissionBase_HitAction");

	Params::BP_EventMissionBase_HitAction_C_ExecuteUbergraph_BP_EventMissionBase_HitAction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.SetInvalidWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Invalid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventMissionBase_HitAction_C::SetInvalidWindow(bool Invalid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "SetInvalidWindow");

	Params::BP_EventMissionBase_HitAction_C_SetInvalidWindow Parms{};

	Parms.Invalid = Invalid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.ActionOut
// (BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::ActionOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "ActionOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.ActionIn
// (BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::ActionIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "ActionIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventMissionBase_HitAction_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "ReceiveTick");

	Params::BP_EventMissionBase_HitAction_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.StartQuestHit
// (BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::StartQuestHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "StartQuestHit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.EndQuest
// (BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::EndQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "EndQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "Deactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.CallDeactivate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::CallDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "CallDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.AreaOut
// (BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::AreaOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "AreaOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.AreaIN
// (BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::AreaIN()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "AreaIN");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.ReadyQuest
// (BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::ReadyQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "ReadyQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.StartQuestAction
// (BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::StartQuestAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "StartQuestAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.BI_RecalcOverlap
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::BI_RecalcOverlap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "BI_RecalcOverlap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.BI_ChangeMaterialAlice
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::BI_ChangeMaterialAlice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "BI_ChangeMaterialAlice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.PlayDeadMotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventMissionBase_HitAction_C::PlayDeadMotion(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "PlayDeadMotion");

	Params::BP_EventMissionBase_HitAction_C_PlayDeadMotion Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.DestroyKeyFree
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::DestroyKeyFree()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "DestroyKeyFree");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.CheckActive
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::CheckActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "CheckActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.QuestFunctionHit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventMissionBase_HitAction_C::QuestFunctionHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "QuestFunctionHit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.SetPlayerLookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventMissionBase_HitAction_C::SetPlayerLookAt(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "SetPlayerLookAt");

	Params::BP_EventMissionBase_HitAction_C_SetPlayerLookAt Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.SpawnReflesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventMissionBase_HitAction_C::SpawnReflesh(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "SpawnReflesh");

	Params::BP_EventMissionBase_HitAction_C_SpawnReflesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.BI_FadeInBlack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventMissionBase_HitAction_C::BI_FadeInBlack(float Time, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "BI_FadeInBlack");

	Params::BP_EventMissionBase_HitAction_C_BI_FadeInBlack Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.BI_FadeOutBlack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventMissionBase_HitAction_C::BI_FadeOutBlack(float Time, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "BI_FadeOutBlack");

	Params::BP_EventMissionBase_HitAction_C_BI_FadeOutBlack Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.BI_FadeInWhite
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventMissionBase_HitAction_C::BI_FadeInWhite(float Time, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "BI_FadeInWhite");

	Params::BP_EventMissionBase_HitAction_C_BI_FadeInWhite Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.BI_FadeOutWhite
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventMissionBase_HitAction_C::BI_FadeOutWhite(float Time, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "BI_FadeOutWhite");

	Params::BP_EventMissionBase_HitAction_C_BI_FadeOutWhite Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.BI_DeleteScript
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventMissionBase_HitAction_C::BI_DeleteScript(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "BI_DeleteScript");

	Params::BP_EventMissionBase_HitAction_C_BI_DeleteScript Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.BI_SpawnScript
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventMissionBase_HitAction_C::BI_SpawnScript(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "BI_SpawnScript");

	Params::BP_EventMissionBase_HitAction_C_BI_SpawnScript Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.BI_CheckActiveArea
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsActive                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventMissionBase_HitAction_C::BI_CheckActiveArea(bool* Param_IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "BI_CheckActiveArea");

	Params::BP_EventMissionBase_HitAction_C_BI_CheckActiveArea Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsActive != nullptr)
		*Param_IsActive = Parms.Param_IsActive;
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.ForceSpawnScript
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventMissionBase_HitAction_C::ForceSpawnScript(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "ForceSpawnScript");

	Params::BP_EventMissionBase_HitAction_C_ForceSpawnScript Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BP_EventMissionBase_HitAction.BP_EventMissionBase_HitAction_C.BI_SetInvalidWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Invalid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EventMissionBase_HitAction_C::BI_SetInvalidWindow(bool Invalid, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventMissionBase_HitAction_C", "BI_SetInvalidWindow");

	Params::BP_EventMissionBase_HitAction_C_BI_SetInvalidWindow Parms{};

	Parms.Invalid = Invalid;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}

}

