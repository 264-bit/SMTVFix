#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_ChangeMotion

#include "Basic.hpp"

#include "AnimNotify_ChangeMotion_classes.hpp"
#include "AnimNotify_ChangeMotion_parameters.hpp"


namespace SDK
{

// Function AnimNotify_ChangeMotion.AnimNotify_ChangeMotion_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAnimNotify_ChangeMotion_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_ChangeMotion_C", "Received_Notify");

	Params::AnimNotify_ChangeMotion_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AnimNotify_ChangeMotion.AnimNotify_ChangeMotion_C.Notice
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           Str                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAnimNotify_ChangeMotion_C::Notice(const class FString& Str) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_ChangeMotion_C", "Notice");

	Params::AnimNotify_ChangeMotion_C_Notice Parms{};

	Parms.Str = std::move(Str);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimNotify_ChangeMotion.AnimNotify_ChangeMotion_C.IsBattleExcuting
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnimNotify_ChangeMotion_C::IsBattleExcuting(bool* bSuccess) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_ChangeMotion_C", "IsBattleExcuting");

	Params::AnimNotify_ChangeMotion_C_IsBattleExcuting Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function AnimNotify_ChangeMotion.AnimNotify_ChangeMotion_C.IsEnableChangeMotion
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*           Mesh_Comp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnimNotify_ChangeMotion_C::IsEnableChangeMotion(class USkeletalMeshComponent* Mesh_Comp, bool* IsEnable) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_ChangeMotion_C", "IsEnableChangeMotion");

	Params::AnimNotify_ChangeMotion_C_IsEnableChangeMotion Parms{};

	Parms.Mesh_Comp = Mesh_Comp;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;
}

}

