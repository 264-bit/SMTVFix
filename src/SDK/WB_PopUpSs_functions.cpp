#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PopUpSs

#include "Basic.hpp"

#include "WB_PopUpSs_classes.hpp"
#include "WB_PopUpSs_parameters.hpp"


namespace SDK
{

// Function WB_PopUpSs.WB_PopUpSs_C.ExecuteUbergraph_WB_PopUpSs
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PopUpSs_C::ExecuteUbergraph_WB_PopUpSs(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PopUpSs_C", "ExecuteUbergraph_WB_PopUpSs");

	Params::WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PopUpSs.WB_PopUpSs_C.BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PopUpSs_C::BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PopUpSs_C", "BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PopUpSs.WB_PopUpSs_C.Start
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_POP_UP_ICON_TYPE                      Param_IconType                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_ListIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PopUpSs_C::Start(const E_POP_UP_ICON_TYPE& Param_IconType, int32 Param_ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PopUpSs_C", "Start");

	Params::WB_PopUpSs_C_Start Parms{};

	Parms.Param_IconType = Param_IconType;
	Parms.Param_ListIndex = Param_ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PopUpSs.WB_PopUpSs_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PopUpSs_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PopUpSs_C", "PreConstruct");

	Params::WB_PopUpSs_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PopUpSs.WB_PopUpSs_C.Stop
// (BlueprintCallable, BlueprintEvent)

void UWB_PopUpSs_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PopUpSs_C", "Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PopUpSs.WB_PopUpSs_C.SetRenderSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   SizeX                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SizeY                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PopUpSs_C::SetRenderSize(float SizeX, float SizeY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PopUpSs_C", "SetRenderSize");

	Params::WB_PopUpSs_C_SetRenderSize Parms{};

	Parms.SizeX = SizeX;
	Parms.SizeY = SizeY;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PopUpSs.WB_PopUpSs_C.SetMaterialReplacement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MINIMAP_MODE                          MinimapMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PopUpSs_C::SetMaterialReplacement(E_MINIMAP_MODE MinimapMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PopUpSs_C", "SetMaterialReplacement");

	Params::WB_PopUpSs_C_SetMaterialReplacement Parms{};

	Parms.MinimapMode = MinimapMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PopUpSs.WB_PopUpSs_C.SetEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPopUpIconEntry                  Entry                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWB_PopUpSs_C::SetEntry(struct FPopUpIconEntry& Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PopUpSs_C", "SetEntry");

	Params::WB_PopUpSs_C_SetEntry Parms{};

	Parms.Entry = std::move(Entry);

	UObject::ProcessEvent(Func, &Parms);

	Entry = std::move(Parms.Entry);
}


// Function WB_PopUpSs.WB_PopUpSs_C.kill
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PopUpSs_C::Kill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PopUpSs_C", "kill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PopUpSs.WB_PopUpSs_C.GetAnimPackName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_POP_UP_ICON_TYPE                      Param_IconType                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             OutName                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PopUpSs_C::GetAnimPackName(E_POP_UP_ICON_TYPE& Param_IconType, class FName* OutName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PopUpSs_C", "GetAnimPackName");

	Params::WB_PopUpSs_C_GetAnimPackName Parms{};

	Parms.Param_IconType = Param_IconType;

	UObject::ProcessEvent(Func, &Parms);

	Param_IconType = Parms.Param_IconType;

	if (OutName != nullptr)
		*OutName = Parms.OutName;
}


// Function WB_PopUpSs.WB_PopUpSs_C.CheckIsStarted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsStarted                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PopUpSs_C::CheckIsStarted(bool* Param_IsStarted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PopUpSs_C", "CheckIsStarted");

	Params::WB_PopUpSs_C_CheckIsStarted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsStarted != nullptr)
		*Param_IsStarted = Parms.Param_IsStarted;
}

}
