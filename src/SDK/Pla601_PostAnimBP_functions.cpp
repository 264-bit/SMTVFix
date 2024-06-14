#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pla601_PostAnimBP

#include "Basic.hpp"

#include "Pla601_PostAnimBP_classes.hpp"
#include "Pla601_PostAnimBP_parameters.hpp"


namespace SDK
{

// Function Pla601_PostAnimBP.Pla601_PostAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UPla601_PostAnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pla601_PostAnimBP_C", "AnimGraph");

	Params::Pla601_PostAnimBP_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function Pla601_PostAnimBP.Pla601_PostAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPla601_PostAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pla601_PostAnimBP_C", "BlueprintUpdateAnimation");

	Params::Pla601_PostAnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Pla601_PostAnimBP.Pla601_PostAnimBP_C.ExecuteUbergraph_Pla601_PostAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPla601_PostAnimBP_C::ExecuteUbergraph_Pla601_PostAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pla601_PostAnimBP_C", "ExecuteUbergraph_Pla601_PostAnimBP");

	Params::Pla601_PostAnimBP_C_ExecuteUbergraph_Pla601_PostAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
