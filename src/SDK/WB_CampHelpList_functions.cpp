#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CampHelpList

#include "Basic.hpp"

#include "WB_CampHelpList_classes.hpp"
#include "WB_CampHelpList_parameters.hpp"


namespace SDK
{

// Function WB_CampHelpList.WB_CampHelpList_C.SynchronizedNewIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InFrame                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CampHelpList_C::SynchronizedNewIcon(float InFrame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "SynchronizedNewIcon");

	Params::WB_CampHelpList_C_SynchronizedNewIcon Parms{};

	Parms.InFrame = InFrame;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CampHelpList.WB_CampHelpList_C.NewIconOff
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CampHelpList_C::NewIconOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "NewIconOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CampHelpList.WB_CampHelpList_C.NewIconOn
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CampHelpList_C::NewIconOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "NewIconOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CampHelpList.WB_CampHelpList_C.DisableMouseFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CampHelpList_C::DisableMouseFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "DisableMouseFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CampHelpList.WB_CampHelpList_C.EnableMouseFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CampHelpList_C::EnableMouseFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "EnableMouseFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CampHelpList.WB_CampHelpList_C.IsItHovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutHovered                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CampHelpList_C::IsItHovered(bool* OutHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "IsItHovered");

	Params::WB_CampHelpList_C_IsItHovered Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutHovered != nullptr)
		*OutHovered = Parms.OutHovered;
}


// Function WB_CampHelpList.WB_CampHelpList_C.IsItClicked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutClicked                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CampHelpList_C::IsItClicked(bool* OutClicked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "IsItClicked");

	Params::WB_CampHelpList_C_IsItClicked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutClicked != nullptr)
		*OutClicked = Parms.OutClicked;
}


// Function WB_CampHelpList.WB_CampHelpList_C.SetHelpPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCategoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InHelpId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InUseHelpNo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InDispOnFlag                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CampHelpList_C::SetHelpPanel(int32 InCategoryId, int32 InHelpId, int32 InUseHelpNo, bool InDispOnFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "SetHelpPanel");

	Params::WB_CampHelpList_C_SetHelpPanel Parms{};

	Parms.InCategoryId = InCategoryId;
	Parms.InHelpId = InHelpId;
	Parms.InUseHelpNo = InUseHelpNo;
	Parms.InDispOnFlag = InDispOnFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CampHelpList.WB_CampHelpList_C.SetHelpName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCategoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InHelpTextId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CampHelpList_C::SetHelpName(int32 InCategoryId, int32 InHelpTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "SetHelpName");

	Params::WB_CampHelpList_C_SetHelpName Parms{};

	Parms.InCategoryId = InCategoryId;
	Parms.InHelpTextId = InHelpTextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CampHelpList.WB_CampHelpList_C.SetHelpNameFontColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InUseHelp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CampHelpList_C::SetHelpNameFontColor(int32 InUseHelp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "SetHelpNameFontColor");

	Params::WB_CampHelpList_C_SetHelpNameFontColor Parms{};

	Parms.InUseHelp = InUseHelp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CampHelpList.WB_CampHelpList_C.ResetIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CampHelpList_C::ResetIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "ResetIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CampHelpList.WB_CampHelpList_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CampHelpList_C::SetIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "SetIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CampHelpList.WB_CampHelpList_C.SetHelpSelectCursorAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CampHelpList_C::SetHelpSelectCursorAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "SetHelpSelectCursorAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CampHelpList.WB_CampHelpList_C.SetHelpCursorAnimationUseAnimeType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CampHelpList_C::SetHelpCursorAnimationUseAnimeType(int32 InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "SetHelpCursorAnimationUseAnimeType");

	Params::WB_CampHelpList_C_SetHelpCursorAnimationUseAnimeType Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CampHelpList.WB_CampHelpList_C.ResetMouseFlag
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CampHelpList_C::ResetMouseFlag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "ResetMouseFlag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CampHelpList.WB_CampHelpList_C.SetHelpCursorAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAnimeType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InCursorOn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InCursorLoop                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InNewIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CampHelpList_C::SetHelpCursorAnimation(int32 InType, int32 InAnimeType, bool InCursorOn, bool InCursorLoop, bool InNewIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "SetHelpCursorAnimation");

	Params::WB_CampHelpList_C_SetHelpCursorAnimation Parms{};

	Parms.InType = InType;
	Parms.InAnimeType = InAnimeType;
	Parms.InCursorOn = InCursorOn;
	Parms.InCursorLoop = InCursorLoop;
	Parms.InNewIcon = InNewIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CampHelpList.WB_CampHelpList_C.IsAnimationEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CampHelpList_C::IsAnimationEnd(bool* OutParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "IsAnimationEnd");

	Params::WB_CampHelpList_C_IsAnimationEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutParam != nullptr)
		*OutParam = Parms.OutParam;
}


// Function WB_CampHelpList.WB_CampHelpList_C.DispOff
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CampHelpList_C::DispOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "DispOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CampHelpList.WB_CampHelpList_C.DispOn
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CampHelpList_C::DispOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "DispOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CampHelpList.WB_CampHelpList_C.BndEvt__WB_CampHelpList_ButtonS5Mouse_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector2D                        Pos                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        UV                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CampHelpList_C::BndEvt__WB_CampHelpList_ButtonS5Mouse_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "BndEvt__WB_CampHelpList_ButtonS5Mouse_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature");

	Params::WB_CampHelpList_C_BndEvt__WB_CampHelpList_ButtonS5Mouse_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature Parms{};

	Parms.Pos = std::move(Pos);
	Parms.UV = std::move(UV);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CampHelpList.WB_CampHelpList_C.BndEvt__WB_CampHelpList_ButtonS5Mouse_K2Node_ComponentBoundEvent_0_ButtonSimpleEventS5__DelegateSignature
// (BlueprintEvent)

void UWB_CampHelpList_C::BndEvt__WB_CampHelpList_ButtonS5Mouse_K2Node_ComponentBoundEvent_0_ButtonSimpleEventS5__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "BndEvt__WB_CampHelpList_ButtonS5Mouse_K2Node_ComponentBoundEvent_0_ButtonSimpleEventS5__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CampHelpList.WB_CampHelpList_C.BndEvt__WB_CampHelpList_SsPlayerHelpList_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CampHelpList_C::BndEvt__WB_CampHelpList_SsPlayerHelpList_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "BndEvt__WB_CampHelpList_SsPlayerHelpList_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_CampHelpList_C_BndEvt__WB_CampHelpList_SsPlayerHelpList_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CampHelpList.WB_CampHelpList_C.BndEvt__WB_CampHelpList_SsPlayerCursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CampHelpList_C::BndEvt__WB_CampHelpList_SsPlayerCursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "BndEvt__WB_CampHelpList_SsPlayerCursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_CampHelpList_C_BndEvt__WB_CampHelpList_SsPlayerCursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CampHelpList.WB_CampHelpList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_CampHelpList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CampHelpList.WB_CampHelpList_C.ExecuteUbergraph_WB_CampHelpList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CampHelpList_C::ExecuteUbergraph_WB_CampHelpList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CampHelpList_C", "ExecuteUbergraph_WB_CampHelpList");

	Params::WB_CampHelpList_C_ExecuteUbergraph_WB_CampHelpList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
