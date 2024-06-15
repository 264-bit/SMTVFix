#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lv_CampSub_LevelControl

#include "Basic.hpp"

#include "Lv_CampSub_LevelControl_classes.hpp"
#include "Lv_CampSub_LevelControl_parameters.hpp"


namespace SDK
{

// Function Lv_CampSub_LevelControl.Lv_CampSub_LevelControl_C.GetFildData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       PlayerTransform                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                       PartySpawnTrns                                         (Parm, OutParm, IsPlainOldData, NoDestructor)

void ALv_CampSub_LevelControl_C::GetFildData(struct FTransform* PlayerTransform, struct FTransform* PartySpawnTrns)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lv_CampSub_LevelControl_C", "GetFildData");

	Params::Lv_CampSub_LevelControl_C_GetFildData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerTransform != nullptr)
		*PlayerTransform = std::move(Parms.PlayerTransform);

	if (PartySpawnTrns != nullptr)
		*PartySpawnTrns = std::move(Parms.PartySpawnTrns);
}


// Function Lv_CampSub_LevelControl.Lv_CampSub_LevelControl_C.ActPadEvt_Map_CampOpen_K2Node_ActionPadEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ALv_CampSub_LevelControl_C::ActPadEvt_Map_CampOpen_K2Node_ActionPadEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lv_CampSub_LevelControl_C", "ActPadEvt_Map_CampOpen_K2Node_ActionPadEvent_0");

	Params::Lv_CampSub_LevelControl_C_ActPadEvt_Map_CampOpen_K2Node_ActionPadEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lv_CampSub_LevelControl.Lv_CampSub_LevelControl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALv_CampSub_LevelControl_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lv_CampSub_LevelControl_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lv_CampSub_LevelControl.Lv_CampSub_LevelControl_C.CampSet
// (BlueprintCallable, BlueprintEvent)

void ALv_CampSub_LevelControl_C::CampSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lv_CampSub_LevelControl_C", "CampSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lv_CampSub_LevelControl.Lv_CampSub_LevelControl_C.CampReset
// (BlueprintCallable, BlueprintEvent)

void ALv_CampSub_LevelControl_C::CampReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lv_CampSub_LevelControl_C", "CampReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lv_CampSub_LevelControl.Lv_CampSub_LevelControl_C.CampResetPillar
// (BlueprintCallable, BlueprintEvent)

void ALv_CampSub_LevelControl_C::CampResetPillar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lv_CampSub_LevelControl_C", "CampResetPillar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lv_CampSub_LevelControl.Lv_CampSub_LevelControl_C.TestComment
// (BlueprintCallable, BlueprintEvent)

void ALv_CampSub_LevelControl_C::TestComment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lv_CampSub_LevelControl_C", "TestComment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lv_CampSub_LevelControl.Lv_CampSub_LevelControl_C.EndCamp2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InForceCloseCamp                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InReturnTitle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALv_CampSub_LevelControl_C::EndCamp2(bool InForceCloseCamp, bool InReturnTitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lv_CampSub_LevelControl_C", "EndCamp2");

	Params::Lv_CampSub_LevelControl_C_EndCamp2 Parms{};

	Parms.InForceCloseCamp = InForceCloseCamp;
	Parms.InReturnTitle = InReturnTitle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lv_CampSub_LevelControl.Lv_CampSub_LevelControl_C.Evdis_EndMenu_����_0
// (BlueprintCallable, BlueprintEvent)

void ALv_CampSub_LevelControl_C::Evdis_EndMenu______0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lv_CampSub_LevelControl_C", "Evdis_EndMenu_����_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lv_CampSub_LevelControl.Lv_CampSub_LevelControl_C.ExecuteUbergraph_Lv_CampSub_LevelControl
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALv_CampSub_LevelControl_C::ExecuteUbergraph_Lv_CampSub_LevelControl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lv_CampSub_LevelControl_C", "ExecuteUbergraph_Lv_CampSub_LevelControl");

	Params::Lv_CampSub_LevelControl_C_ExecuteUbergraph_Lv_CampSub_LevelControl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

