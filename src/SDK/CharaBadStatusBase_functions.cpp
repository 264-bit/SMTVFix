#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaBadStatusBase

#include "Basic.hpp"

#include "CharaBadStatusBase_classes.hpp"
#include "CharaBadStatusBase_parameters.hpp"


namespace SDK
{

// Function CharaBadStatusBase.CharaBadStatusBase_C.ExecuteUbergraph_CharaBadStatusBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaBadStatusBase_C::ExecuteUbergraph_CharaBadStatusBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "ExecuteUbergraph_CharaBadStatusBase");

	Params::CharaBadStatusBase_C_ExecuteUbergraph_CharaBadStatusBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UCharaBadStatusBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpStatus
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<E_BAD_STATUS>                    Ret                                                    (Parm, OutParm)

void UCharaBadStatusBase_C::PickUpStatus(int32 State, TArray<E_BAD_STATUS>* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "PickUpStatus");

	Params::CharaBadStatusBase_C_PickUpStatus Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = std::move(Parms.Ret);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpOnBit
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Src                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   On                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaBadStatusBase_C::PickUpOnBit(int32 Src, int32 Current, int32* On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "PickUpOnBit");

	Params::CharaBadStatusBase_C_PickUpOnBit Parms{};

	Parms.Src = Src;
	Parms.Current = Current;

	UObject::ProcessEvent(Func, &Parms);

	if (On != nullptr)
		*On = Parms.On;
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpOffBit
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Src                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Off                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaBadStatusBase_C::PickUpOffBit(int32 Src, int32 Current, int32* Off)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "PickUpOffBit");

	Params::CharaBadStatusBase_C_PickUpOffBit Parms{};

	Parms.Src = Src;
	Parms.Current = Current;

	UObject::ProcessEvent(Func, &Parms);

	if (Off != nullptr)
		*Off = Parms.Off;
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpDifferenceBit
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Origin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Input                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaBadStatusBase_C::PickUpDifferenceBit(int32 Origin, int32 Input, int32* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "PickUpDifferenceBit");

	Params::CharaBadStatusBase_C_PickUpDifferenceBit Parms{};

	Parms.Origin = Origin;
	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpSurfaceStatus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BAD_STATUS                            BeforeStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BAD_STATUS                            Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsNeedResetMaterial                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaBadStatusBase_C::PickUpSurfaceStatus(int32 State, E_BAD_STATUS BeforeStatus, E_BAD_STATUS* Ret, bool* IsNeedResetMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "PickUpSurfaceStatus");

	Params::CharaBadStatusBase_C_PickUpSurfaceStatus Parms{};

	Parms.State = State;
	Parms.BeforeStatus = BeforeStatus;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;

	if (IsNeedResetMaterial != nullptr)
		*IsNeedResetMaterial = Parms.IsNeedResetMaterial;
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.UpdateBadStatusParticle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharaBadStatusBase_C::UpdateBadStatusParticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "UpdateBadStatusParticle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.FindBadStatusSocketName
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FBadStatusParticles_T>    BadParticleSettings                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// E_CHARA_BAD_STATUS_APPEAR               Appear                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SocketName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaBadStatusBase_C::FindBadStatusSocketName(TArray<struct FBadStatusParticles_T>& BadParticleSettings, E_CHARA_BAD_STATUS_APPEAR Appear, class FName* SocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "FindBadStatusSocketName");

	Params::CharaBadStatusBase_C_FindBadStatusSocketName Parms{};

	Parms.BadParticleSettings = std::move(BadParticleSettings);
	Parms.Appear = Appear;

	UObject::ProcessEvent(Func, &Parms);

	BadParticleSettings = std::move(Parms.BadParticleSettings);

	if (SocketName != nullptr)
		*SocketName = Parms.SocketName;
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.RegisterTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Param_Mesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaBadStatusBase_C::RegisterTarget(class USkeletalMeshComponent* Param_Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "RegisterTarget");

	Params::CharaBadStatusBase_C_RegisterTarget Parms{};

	Parms.Param_Mesh = Param_Mesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.GetCurrentSurfaceMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<E_BAD_STATUS>                    SurfaceMaterial                                        (Parm, OutParm)

void UCharaBadStatusBase_C::GetCurrentSurfaceMaterial(TArray<E_BAD_STATUS>* SurfaceMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "GetCurrentSurfaceMaterial");

	Params::CharaBadStatusBase_C_GetCurrentSurfaceMaterial Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SurfaceMaterial != nullptr)
		*SurfaceMaterial = std::move(Parms.SurfaceMaterial);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.ResetEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UCharaBadStatusBase_C::ResetEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "ResetEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.ResetBadStatusMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharaBadStatusBase_C::ResetBadStatusMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "ResetBadStatusMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.IsRegistered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsRegistered                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaBadStatusBase_C::IsRegistered(bool* Param_IsRegistered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "IsRegistered");

	Params::CharaBadStatusBase_C_IsRegistered Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsRegistered != nullptr)
		*Param_IsRegistered = Parms.Param_IsRegistered;
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.SetParticleTemplate
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*         PSComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*                  Template                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaBadStatusBase_C::SetParticleTemplate(class UParticleSystemComponent*& PSComp, class UParticleSystem* Template, float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "SetParticleTemplate");

	Params::CharaBadStatusBase_C_SetParticleTemplate Parms{};

	Parms.PSComp = PSComp;
	Parms.Template = Template;
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

	PSComp = Parms.PSComp;
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpParticleSettings
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_BAD_STATUS                            Kind                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBadStatusParticles_T>    ParticleSettings                                       (Parm, OutParm, ContainsInstancedReference)

void UCharaBadStatusBase_C::PickUpParticleSettings(E_BAD_STATUS Kind, TArray<struct FBadStatusParticles_T>* ParticleSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "PickUpParticleSettings");

	Params::CharaBadStatusBase_C_PickUpParticleSettings Parms{};

	Parms.Kind = Kind;

	UObject::ProcessEvent(Func, &Parms);

	if (ParticleSettings != nullptr)
		*ParticleSettings = std::move(Parms.ParticleSettings);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.GetTargetMesh
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*           ParticleSettings                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaBadStatusBase_C::GetTargetMesh(class USkeletalMeshComponent** ParticleSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "GetTargetMesh");

	Params::CharaBadStatusBase_C_GetTargetMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ParticleSettings != nullptr)
		*ParticleSettings = Parms.ParticleSettings;
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.SetCurrentSurfaceMaterial
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<E_BAD_STATUS>                    Surface                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCharaBadStatusBase_C::SetCurrentSurfaceMaterial(TArray<E_BAD_STATUS>& Surface)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "SetCurrentSurfaceMaterial");

	Params::CharaBadStatusBase_C_SetCurrentSurfaceMaterial Parms{};

	Parms.Surface = std::move(Surface);

	UObject::ProcessEvent(Func, &Parms);

	Surface = std::move(Parms.Surface);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpBothExistBit
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Origin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Input                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaBadStatusBase_C::PickUpBothExistBit(int32 Origin, int32 Input, int32* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "PickUpBothExistBit");

	Params::CharaBadStatusBase_C_PickUpBothExistBit Parms{};

	Parms.Origin = Origin;
	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UCharaBadStatusBase_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.HasBadStatus
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_HasBadStatus                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaBadStatusBase_C::HasBadStatus(bool* Param_HasBadStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "HasBadStatus");

	Params::CharaBadStatusBase_C_HasBadStatus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_HasBadStatus != nullptr)
		*Param_HasBadStatus = Parms.Param_HasBadStatus;
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.SetHasBadStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Has                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaBadStatusBase_C::SetHasBadStatus(bool Has)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "SetHasBadStatus");

	Params::CharaBadStatusBase_C_SetHasBadStatus Parms{};

	Parms.Has = Has;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.SetCharaBaseAccessor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_CharaBaseAccessor_C>Accessor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaBadStatusBase_C::SetCharaBaseAccessor(TScriptInterface<class IBPI_CharaBaseAccessor_C> Accessor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "SetCharaBaseAccessor");

	Params::CharaBadStatusBase_C_SetCharaBaseAccessor Parms{};

	Parms.Accessor = Accessor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.PickUpDecalSettings
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_BAD_STATUS                            Kind                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBadStatusDecal_T>        DecalSettings                                          (Parm, OutParm, ContainsInstancedReference)

void UCharaBadStatusBase_C::PickUpDecalSettings(E_BAD_STATUS Kind, TArray<struct FBadStatusDecal_T>* DecalSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "PickUpDecalSettings");

	Params::CharaBadStatusBase_C_PickUpDecalSettings Parms{};

	Parms.Kind = Kind;

	UObject::ProcessEvent(Func, &Parms);

	if (DecalSettings != nullptr)
		*DecalSettings = std::move(Parms.DecalSettings);
}


// Function CharaBadStatusBase.CharaBadStatusBase_C.ResetBadStatusScale
// (Public, BlueprintCallable, BlueprintEvent)

void UCharaBadStatusBase_C::ResetBadStatusScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaBadStatusBase_C", "ResetBadStatusScale");

	UObject::ProcessEvent(Func, nullptr);
}

}
