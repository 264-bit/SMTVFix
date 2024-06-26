#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtnHelp_ActionMappingIcon

#include "Basic.hpp"

#include "WB_BtnHelp_ActionMappingIcon_classes.hpp"
#include "WB_BtnHelp_ActionMappingIcon_parameters.hpp"


namespace SDK
{

// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.OnClicked_KeyboardIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_MAPPING_KEY_TYPE             OnClickedHelpType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OnClickedHelpIdx                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::OnClicked_KeyboardIcon__DelegateSignature(E_BTN_HELP_MAPPING_KEY_TYPE OnClickedHelpType, int32 OnClickedHelpIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "OnClicked_KeyboardIcon__DelegateSignature");

	Params::WB_BtnHelp_ActionMappingIcon_C_OnClicked_KeyboardIcon__DelegateSignature Parms{};

	Parms.OnClickedHelpType = OnClickedHelpType;
	Parms.OnClickedHelpIdx = OnClickedHelpIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.OnReleased_KeyboardIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_MAPPING_KEY_TYPE             OnClickedHelpType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OnClickedHelpIdx                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::OnReleased_KeyboardIcon__DelegateSignature(E_BTN_HELP_MAPPING_KEY_TYPE OnClickedHelpType, int32 OnClickedHelpIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "OnReleased_KeyboardIcon__DelegateSignature");

	Params::WB_BtnHelp_ActionMappingIcon_C_OnReleased_KeyboardIcon__DelegateSignature Parms{};

	Parms.OnClickedHelpType = OnClickedHelpType;
	Parms.OnClickedHelpIdx = OnClickedHelpIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.ExecuteUbergraph_WB_BtnHelp_ActionMappingIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::ExecuteUbergraph_WB_BtnHelp_ActionMappingIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "ExecuteUbergraph_WB_BtnHelp_ActionMappingIcon");

	Params::WB_BtnHelp_ActionMappingIcon_C_ExecuteUbergraph_WB_BtnHelp_ActionMappingIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_BtnHelp_ActionMappingIcon_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.SetIconTranslation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InTranslation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::SetIconTranslation(const struct FVector2D& InTranslation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "SetIconTranslation");

	Params::WB_BtnHelp_ActionMappingIcon_C_SetIconTranslation Parms{};

	Parms.InTranslation = std::move(InTranslation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.SetIconInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_MAPPING_KEY_TYPE             InIconMappingType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::SetIconInfo(E_BTN_HELP_MAPPING_KEY_TYPE InIconMappingType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "SetIconInfo");

	Params::WB_BtnHelp_ActionMappingIcon_C_SetIconInfo Parms{};

	Parms.InIconMappingType = InIconMappingType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.SetIconDispMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamePad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtnHelp_ActionMappingIcon_C::SetIconDispMode(bool IsGamePad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "SetIconDispMode");

	Params::WB_BtnHelp_ActionMappingIcon_C_SetIconDispMode Parms{};

	Parms.IsGamePad = IsGamePad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.SetIconSize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_ICON_SIZE                         InIconSize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::SetIconSize(E_BTN_ICON_SIZE InIconSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "SetIconSize");

	Params::WB_BtnHelp_ActionMappingIcon_C_SetIconSize Parms{};

	Parms.InIconSize = InIconSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.SetIconColor_ByActiveState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtnHelp_ActionMappingIcon_C::SetIconColor_ByActiveState(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "SetIconColor_ByActiveState");

	Params::WB_BtnHelp_ActionMappingIcon_C_SetIconColor_ByActiveState Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.SetIconColor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::SetIconColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "SetIconColor");

	Params::WB_BtnHelp_ActionMappingIcon_C_SetIconColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Param_IsDesignTime                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtnHelp_ActionMappingIcon_C::PreConstruct(bool Param_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "PreConstruct");

	Params::WB_BtnHelp_ActionMappingIcon_C_PreConstruct Parms{};

	Parms.Param_IsDesignTime = Param_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.Init
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_BtnHelp_ActionMappingIcon_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.SetSize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_ICON_SIZE                         InSIze2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::SetSize(E_BTN_ICON_SIZE InSIze2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "SetSize");

	Params::WB_BtnHelp_ActionMappingIcon_C_SetSize Parms{};

	Parms.InSIze2 = InSIze2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.SetTranslation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InTranslation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::SetTranslation(const struct FVector2D& InTranslation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "SetTranslation");

	Params::WB_BtnHelp_ActionMappingIcon_C_SetTranslation Parms{};

	Parms.InTranslation = std::move(InTranslation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.SetInfo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_MAPPING_KEY_TYPE             InHelpMappingType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::SetInfo(E_BTN_HELP_MAPPING_KEY_TYPE InHelpMappingType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "SetInfo");

	Params::WB_BtnHelp_ActionMappingIcon_C_SetInfo Parms{};

	Parms.InHelpMappingType = InHelpMappingType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.SetColor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::SetColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "SetColor");

	Params::WB_BtnHelp_ActionMappingIcon_C_SetColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.SetColor_ByActiveState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtnHelp_ActionMappingIcon_C::SetColor_ByActiveState(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "SetColor_ByActiveState");

	Params::WB_BtnHelp_ActionMappingIcon_C_SetColor_ByActiveState Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.SetDispMode
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamePad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtnHelp_ActionMappingIcon_C::SetDispMode(bool IsGamePad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "SetDispMode");

	Params::WB_BtnHelp_ActionMappingIcon_C_SetDispMode Parms{};

	Parms.IsGamePad = IsGamePad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.GetIconDispMode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_BtnHelp_ActionMappingIcon_C::GetIconDispMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "GetIconDispMode");

	Params::WB_BtnHelp_ActionMappingIcon_C_GetIconDispMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.GetKeyboardIconSsPlayerFrame
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                           ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<int32> UWB_BtnHelp_ActionMappingIcon_C::GetKeyboardIconSsPlayerFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "GetKeyboardIconSsPlayerFrame");

	Params::WB_BtnHelp_ActionMappingIcon_C_GetKeyboardIconSsPlayerFrame Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.GetKeyboardIconText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FString>                   ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class FString> UWB_BtnHelp_ActionMappingIcon_C::GetKeyboardIconText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "GetKeyboardIconText");

	Params::WB_BtnHelp_ActionMappingIcon_C_GetKeyboardIconText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.GetKeyboardIconFont
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateFontInfo                   ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

struct FSlateFontInfo UWB_BtnHelp_ActionMappingIcon_C::GetKeyboardIconFont()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "GetKeyboardIconFont");

	Params::WB_BtnHelp_ActionMappingIcon_C_GetKeyboardIconFont Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.GetKeyboardIconDispNum
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWB_BtnHelp_ActionMappingIcon_C::GetKeyboardIconDispNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "GetKeyboardIconDispNum");

	Params::WB_BtnHelp_ActionMappingIcon_C_GetKeyboardIconDispNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.ReloadPadIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_BtnHelp_ActionMappingIcon_C::ReloadPadIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "ReloadPadIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.ReloadKeyboardText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_BtnHelp_ActionMappingIcon_C::ReloadKeyboardText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "ReloadKeyboardText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.OnClickedKeyboardIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_MAPPING_KEY_TYPE             OnClickedHelpType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OnClickedHelpIdx                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::OnClickedKeyboardIcon(E_BTN_HELP_MAPPING_KEY_TYPE OnClickedHelpType, int32 OnClickedHelpIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "OnClickedKeyboardIcon");

	Params::WB_BtnHelp_ActionMappingIcon_C_OnClickedKeyboardIcon Parms{};

	Parms.OnClickedHelpType = OnClickedHelpType;
	Parms.OnClickedHelpIdx = OnClickedHelpIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.OnReleasedKeyboardIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_MAPPING_KEY_TYPE             OnClickedHelpType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OnClickedHelpIdx                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::OnReleasedKeyboardIcon(E_BTN_HELP_MAPPING_KEY_TYPE OnClickedHelpType, int32 OnClickedHelpIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "OnReleasedKeyboardIcon");

	Params::WB_BtnHelp_ActionMappingIcon_C_OnReleasedKeyboardIcon Parms{};

	Parms.OnClickedHelpType = OnClickedHelpType;
	Parms.OnClickedHelpIdx = OnClickedHelpIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.GetClickedKeyboardIconInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_BTN_HELP_MAPPING_KEY_TYPE             Param_HelpMappingType                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DiscIconLastIdx                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::GetClickedKeyboardIconInfo(E_BTN_HELP_MAPPING_KEY_TYPE* Param_HelpMappingType, int32* DiscIconLastIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "GetClickedKeyboardIconInfo");

	Params::WB_BtnHelp_ActionMappingIcon_C_GetClickedKeyboardIconInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_HelpMappingType != nullptr)
		*Param_HelpMappingType = Parms.Param_HelpMappingType;

	if (DiscIconLastIdx != nullptr)
		*DiscIconLastIdx = Parms.DiscIconLastIdx;
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.UpdateKeyboardIconPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_BtnHelp_ActionMappingIcon_C::UpdateKeyboardIconPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "UpdateKeyboardIconPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C.GetCurrentMappingType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_BTN_HELP_MAPPING_KEY_TYPE             MappingType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtnHelp_ActionMappingIcon_C::GetCurrentMappingType(E_BTN_HELP_MAPPING_KEY_TYPE* MappingType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtnHelp_ActionMappingIcon_C", "GetCurrentMappingType");

	Params::WB_BtnHelp_ActionMappingIcon_C_GetCurrentMappingType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MappingType != nullptr)
		*MappingType = Parms.MappingType;
}

}

