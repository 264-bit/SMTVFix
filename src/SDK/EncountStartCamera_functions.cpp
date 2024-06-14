#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EncountStartCamera

#include "Basic.hpp"

#include "EncountStartCamera_classes.hpp"
#include "EncountStartCamera_parameters.hpp"


namespace SDK
{

// Function EncountStartCamera.EncountStartCamera_C.ExecuteUbergraph_EncountStartCamera
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountStartCamera_C::ExecuteUbergraph_EncountStartCamera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EncountStartCamera_C", "ExecuteUbergraph_EncountStartCamera");

	Params::EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EncountStartCamera.EncountStartCamera_C.DeactivatePP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountStartCamera_C::DeactivatePP(float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EncountStartCamera_C", "DeactivatePP");

	Params::EncountStartCamera_C_DeactivatePP Parms{};

	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EncountStartCamera.EncountStartCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountStartCamera_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EncountStartCamera_C", "ReceiveTick");

	Params::EncountStartCamera_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EncountStartCamera.EncountStartCamera_C.PP_Off__UpdateFunc
// (BlueprintEvent)

void AEncountStartCamera_C::PP_Off__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EncountStartCamera_C", "PP_Off__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EncountStartCamera.EncountStartCamera_C.PP_Off__FinishedFunc
// (BlueprintEvent)

void AEncountStartCamera_C::PP_Off__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EncountStartCamera_C", "PP_Off__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EncountStartCamera.EncountStartCamera_C.KeepOnCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEncountStartCamera_C::KeepOnCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EncountStartCamera_C", "KeepOnCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EncountStartCamera.EncountStartCamera_C.SetViewTargetToDie
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ViewTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EViewTargetBlendFunction                BlendFunc                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BlendExp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLockOutgoing                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEncountStartCamera_C::SetViewTargetToDie(class AActor* ViewTarget, float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EncountStartCamera_C", "SetViewTargetToDie");

	Params::EncountStartCamera_C_SetViewTargetToDie Parms{};

	Parms.ViewTarget = ViewTarget;
	Parms.BlendTime = BlendTime;
	Parms.BlendFunc = BlendFunc;
	Parms.BlendExp = BlendExp;
	Parms.bLockOutgoing = bLockOutgoing;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EncountStartCamera.EncountStartCamera_C.IsAutoDestroy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_M_AutoDestroy                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEncountStartCamera_C::IsAutoDestroy(bool* Param_M_AutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EncountStartCamera_C", "IsAutoDestroy");

	Params::EncountStartCamera_C_IsAutoDestroy Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_M_AutoDestroy != nullptr)
		*Param_M_AutoDestroy = Parms.Param_M_AutoDestroy;
}


// Function EncountStartCamera.EncountStartCamera_C.SetBlendables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         PPMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountStartCamera_C::SetBlendables(class UMaterialInstanceDynamic* PPMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EncountStartCamera_C", "SetBlendables");

	Params::EncountStartCamera_C_SetBlendables Parms{};

	Parms.PPMaterial = PPMaterial;

	UObject::ProcessEvent(Func, &Parms);
}

}
