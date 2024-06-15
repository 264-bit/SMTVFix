#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapEventHit_Type_SHitSphere

#include "Basic.hpp"

#include "MapEventHit_Type_SHitSphere_classes.hpp"
#include "MapEventHit_Type_SHitSphere_parameters.hpp"


namespace SDK
{

// Function MapEventHit_Type_SHitSphere.MapEventHit_Type_SHitSphere_C.ExecuteUbergraph_MapEventHit_Type_SHitSphere
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMapEventHit_Type_SHitSphere_C::ExecuteUbergraph_MapEventHit_Type_SHitSphere(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEventHit_Type_SHitSphere_C", "ExecuteUbergraph_MapEventHit_Type_SHitSphere");

	Params::MapEventHit_Type_SHitSphere_C_ExecuteUbergraph_MapEventHit_Type_SHitSphere Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEventHit_Type_SHitSphere.MapEventHit_Type_SHitSphere_C.BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AMapEventHit_Type_SHitSphere_C::BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEventHit_Type_SHitSphere_C", "BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::MapEventHit_Type_SHitSphere_C_BndEvt__SphereHit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEventHit_Type_SHitSphere.MapEventHit_Type_SHitSphere_C.FlagCh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OK                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMapEventHit_Type_SHitSphere_C::FlagCh(bool* OK)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEventHit_Type_SHitSphere_C", "FlagCh");

	Params::MapEventHit_Type_SHitSphere_C_FlagCh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OK != nullptr)
		*OK = Parms.OK;
}

}
