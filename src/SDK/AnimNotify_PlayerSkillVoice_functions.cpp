#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_PlayerSkillVoice

#include "Basic.hpp"

#include "AnimNotify_PlayerSkillVoice_classes.hpp"
#include "AnimNotify_PlayerSkillVoice_parameters.hpp"


namespace SDK
{

// Function AnimNotify_PlayerSkillVoice.AnimNotify_PlayerSkillVoice_C.GetAttrVoice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// E_ATTRIBUTE_TYPE                        SkillAttr                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAtomCue*                    AttrVoice                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimNotify_PlayerSkillVoice_C::GetAttrVoice(E_ATTRIBUTE_TYPE SkillAttr, class USoundAtomCue** AttrVoice) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_PlayerSkillVoice_C", "GetAttrVoice");

	Params::AnimNotify_PlayerSkillVoice_C_GetAttrVoice Parms{};

	Parms.SkillAttr = SkillAttr;

	UObject::ProcessEvent(Func, &Parms);

	if (AttrVoice != nullptr)
		*AttrVoice = Parms.AttrVoice;
}


// Function AnimNotify_PlayerSkillVoice.AnimNotify_PlayerSkillVoice_C.OverrideVoiceTypeBySkillType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAtomCue*                    AttrVoice                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimNotify_PlayerSkillVoice_C::OverrideVoiceTypeBySkillType(class UObject* Object, class USoundAtomCue** AttrVoice) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_PlayerSkillVoice_C", "OverrideVoiceTypeBySkillType");

	Params::AnimNotify_PlayerSkillVoice_C_OverrideVoiceTypeBySkillType Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

	if (AttrVoice != nullptr)
		*AttrVoice = Parms.AttrVoice;
}


// Function AnimNotify_PlayerSkillVoice.AnimNotify_PlayerSkillVoice_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UAnimNotify_PlayerSkillVoice_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_PlayerSkillVoice_C", "GetNotifyName");

	Params::AnimNotify_PlayerSkillVoice_C_GetNotifyName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AnimNotify_PlayerSkillVoice.AnimNotify_PlayerSkillVoice_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAnimNotify_PlayerSkillVoice_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_PlayerSkillVoice_C", "Received_Notify");

	Params::AnimNotify_PlayerSkillVoice_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
