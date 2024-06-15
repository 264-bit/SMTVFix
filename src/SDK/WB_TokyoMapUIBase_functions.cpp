#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TokyoMapUIBase

#include "Basic.hpp"

#include "WB_TokyoMapUIBase_classes.hpp"
#include "WB_TokyoMapUIBase_parameters.hpp"


namespace SDK
{

// Function WB_TokyoMapUIBase.WB_TokyoMapUIBase_C.PlaceNameHide
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TokyoMapUIBase_C::PlaceNameHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TokyoMapUIBase_C", "PlaceNameHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TokyoMapUIBase.WB_TokyoMapUIBase_C.PlaceNameShow
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TokyoMapUIBase_C::PlaceNameShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TokyoMapUIBase_C", "PlaceNameShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TokyoMapUIBase.WB_TokyoMapUIBase_C.HidePlaceNameByDataId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DataId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TokyoMapUIBase_C::HidePlaceNameByDataId(int32 DataId, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TokyoMapUIBase_C", "HidePlaceNameByDataId");

	Params::WB_TokyoMapUIBase_C_HidePlaceNameByDataId Parms{};

	Parms.DataId = DataId;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function WB_TokyoMapUIBase.WB_TokyoMapUIBase_C.ShowPlaceNameByDataId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DataId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TokyoMapUIBase_C::ShowPlaceNameByDataId(int32 DataId, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TokyoMapUIBase_C", "ShowPlaceNameByDataId");

	Params::WB_TokyoMapUIBase_C_ShowPlaceNameByDataId Parms{};

	Parms.DataId = DataId;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function WB_TokyoMapUIBase.WB_TokyoMapUIBase_C.Create
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TokyoMapUIBase_C::Create()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TokyoMapUIBase_C", "Create");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TokyoMapUIBase.WB_TokyoMapUIBase_C.ShowAllTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TokyoMapUIBase_C::ShowAllTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TokyoMapUIBase_C", "ShowAllTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TokyoMapUIBase.WB_TokyoMapUIBase_C.ShowAllPlace
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TokyoMapUIBase_C::ShowAllPlace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TokyoMapUIBase_C", "ShowAllPlace");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TokyoMapUIBase.WB_TokyoMapUIBase_C.EndView
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TokyoMapUIBase_C::EndView(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TokyoMapUIBase_C", "EndView");

	Params::WB_TokyoMapUIBase_C_EndView Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function WB_TokyoMapUIBase.WB_TokyoMapUIBase_C.StartView
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    First                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TokyoMapUIBase_C::StartView(bool First, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TokyoMapUIBase_C", "StartView");

	Params::WB_TokyoMapUIBase_C_StartView Parms{};

	Parms.First = First;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

}

