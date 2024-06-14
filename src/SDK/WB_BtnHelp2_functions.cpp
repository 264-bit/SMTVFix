#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtnHelp2

#include "Basic.hpp"

#include "WB_BtnHelp2_classes.hpp"
#include "WB_BtnHelp2_parameters.hpp"


namespace SDK
{

// Function WB_BtnHelp2.WB_BtnHelp2_C.ExecuteUbergraph_WB_BtnHelp2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp2_C::ExecuteUbergraph_WB_BtnHelp2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "ExecuteUbergraph_WB_BtnHelp2");

	Params::WB_BtnHelp2_C_ExecuteUbergraph_WB_BtnHelp2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "Tick");

	Params::WB_BtnHelp2_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtnHelp2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "PreConstruct");

	Params::WB_BtnHelp2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_BtnHelp2_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.ResetPartsParam
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_BtnHelp2_C::ResetPartsParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "ResetPartsParam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.PlayAnim_Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_BtnHelp2_C::PlayAnim_Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "PlayAnim_Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.PlayAnim_In
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_BtnHelp2_C::PlayAnim_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "PlayAnim_In");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.PlayAnim_Out
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_BtnHelp2_C::PlayAnim_Out()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "PlayAnim_Out");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.PlayAnim_Loop
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_BtnHelp2_C::PlayAnim_Loop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "PlayAnim_Loop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.SetHelpInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBtnHelpInfo>             InInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_BtnHelp2_C::SetHelpInfo(TArray<struct FBtnHelpInfo>& InInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "SetHelpInfo");

	Params::WB_BtnHelp2_C_SetHelpInfo Parms{};

	Parms.InInfo = std::move(InInfo);

	UObject::ProcessEvent(Func, &Parms);

	InInfo = std::move(Parms.InInfo);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.SetPosType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_POS_TYPE                     Param_PosType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp2_C::SetPosType(E_BTN_HELP_POS_TYPE Param_PosType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "SetPosType");

	Params::WB_BtnHelp2_C_SetPosType Parms{};

	Parms.Param_PosType = Param_PosType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.SetDirectionType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          Param_HelpDir                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp2_C::SetDirectionType(E_BTN_HELP_DIR Param_HelpDir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "SetDirectionType");

	Params::WB_BtnHelp2_C_SetDirectionType Parms{};

	Parms.Param_HelpDir = Param_HelpDir;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.SetDispMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamePad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtnHelp2_C::SetDispMode(bool IsGamePad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "SetDispMode");

	Params::WB_BtnHelp2_C_SetDispMode Parms{};

	Parms.IsGamePad = IsGamePad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.GetNowAssignAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             AnimationName                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtnHelp2_C::GetNowAssignAnim(class FName* AnimationName, bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "GetNowAssignAnim");

	Params::WB_BtnHelp2_C_GetNowAssignAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimationName != nullptr)
		*AnimationName = Parms.AnimationName;

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.UpdateBasePos
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_BtnHelp2_C::UpdateBasePos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "UpdateBasePos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.SetActiveColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BtnHelpIdx                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsActiveColor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtnHelp2_C::SetActiveColor(int32 BtnHelpIdx, bool IsActiveColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "SetActiveColor");

	Params::WB_BtnHelp2_C_SetActiveColor Parms{};

	Parms.BtnHelpIdx = BtnHelpIdx;
	Parms.IsActiveColor = IsActiveColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.SetHoldEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BtnHelpIdx                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDrawEffect                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtnHelp2_C::SetHoldEffect(int32 BtnHelpIdx, bool IsDrawEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "SetHoldEffect");

	Params::WB_BtnHelp2_C_SetHoldEffect Parms{};

	Parms.BtnHelpIdx = BtnHelpIdx;
	Parms.IsDrawEffect = IsDrawEffect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.SetActiveColor_All
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActiveColor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtnHelp2_C::SetActiveColor_All(bool IsActiveColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "SetActiveColor_All");

	Params::WB_BtnHelp2_C_SetActiveColor_All Parms{};

	Parms.IsActiveColor = IsActiveColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.SetHoldEffect_All
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDrawEffect                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtnHelp2_C::SetHoldEffect_All(bool IsDrawEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "SetHoldEffect_All");

	Params::WB_BtnHelp2_C_SetHoldEffect_All Parms{};

	Parms.IsDrawEffect = IsDrawEffect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.GetActiveColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   BtnHelpIdx                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtnHelp2_C::GetActiveColor(int32 BtnHelpIdx, bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "GetActiveColor");

	Params::WB_BtnHelp2_C_GetActiveColor Parms{};

	Parms.BtnHelpIdx = BtnHelpIdx;

	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.UpdateHelpPos
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_BtnHelp2_C::UpdateHelpPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "UpdateHelpPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.ReloadKeyboardText
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_BtnHelp2_C::ReloadKeyboardText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "ReloadKeyboardText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.SetHelpMaxNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InHelpMaxNum                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp2_C::SetHelpMaxNum(int32 InHelpMaxNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "SetHelpMaxNum");

	Params::WB_BtnHelp2_C_SetHelpMaxNum Parms{};

	Parms.InHelpMaxNum = InHelpMaxNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp2.WB_BtnHelp2_C.GetHelpMaxNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_BtnHelpMaxNum                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp2_C::GetHelpMaxNum(int32* Param_BtnHelpMaxNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp2_C", "GetHelpMaxNum");

	Params::WB_BtnHelp2_C_GetHelpMaxNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_BtnHelpMaxNum != nullptr)
		*Param_BtnHelpMaxNum = Parms.Param_BtnHelpMaxNum;
}

}
