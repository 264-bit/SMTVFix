#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineSymbolComeRange

#include "Basic.hpp"

#include "BP_SplineSymbolComeRange_classes.hpp"
#include "BP_SplineSymbolComeRange_parameters.hpp"


namespace SDK
{

// Function BP_SplineSymbolComeRange.BP_SplineSymbolComeRange_C.ExecuteUbergraph_BP_SplineSymbolComeRange
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineSymbolComeRange_C::ExecuteUbergraph_BP_SplineSymbolComeRange(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SplineSymbolComeRange_C", "ExecuteUbergraph_BP_SplineSymbolComeRange");

	Params::BP_SplineSymbolComeRange_C_ExecuteUbergraph_BP_SplineSymbolComeRange Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SplineSymbolComeRange.BP_SplineSymbolComeRange_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SplineSymbolComeRange_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SplineSymbolComeRange_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SplineSymbolComeRange.BP_SplineSymbolComeRange_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineSymbolComeRange_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SplineSymbolComeRange_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SplineSymbolComeRange.BP_SplineSymbolComeRange_C.CheckAreaIN
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Pos                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AddHitSize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AreaIN                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SplineSymbolComeRange_C::CheckAreaIN(const struct FVector& Pos, float AddHitSize, bool* AreaIN)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SplineSymbolComeRange_C", "CheckAreaIN");

	Params::BP_SplineSymbolComeRange_C_CheckAreaIN Parms{};

	Parms.Pos = std::move(Pos);
	Parms.AddHitSize = AddHitSize;

	UObject::ProcessEvent(Func, &Parms);

	if (AreaIN != nullptr)
		*AreaIN = Parms.AreaIN;
}


// Function BP_SplineSymbolComeRange.BP_SplineSymbolComeRange_C.GetMinMaxLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   MinX                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxX                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MinY                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxY                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineSymbolComeRange_C::GetMinMaxLocation(float* MinX, float* MaxX, float* MinY, float* MaxY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SplineSymbolComeRange_C", "GetMinMaxLocation");

	Params::BP_SplineSymbolComeRange_C_GetMinMaxLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MinX != nullptr)
		*MinX = Parms.MinX;

	if (MaxX != nullptr)
		*MaxX = Parms.MaxX;

	if (MinY != nullptr)
		*MinY = Parms.MinY;

	if (MaxY != nullptr)
		*MaxY = Parms.MaxY;
}


// Function BP_SplineSymbolComeRange.BP_SplineSymbolComeRange_C.CopySplineData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*                 SrcSpline                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 DstSpline                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PosZ_Fix                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   PosZ                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineSymbolComeRange_C::CopySplineData(class USplineComponent* SrcSpline, class USplineComponent* DstSpline, bool PosZ_Fix, float PosZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SplineSymbolComeRange_C", "CopySplineData");

	Params::BP_SplineSymbolComeRange_C_CopySplineData Parms{};

	Parms.SrcSpline = SrcSpline;
	Parms.DstSpline = DstSpline;
	Parms.PosZ_Fix = PosZ_Fix;
	Parms.PosZ = PosZ;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SplineSymbolComeRange.BP_SplineSymbolComeRange_C.CreatePlaneSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineSymbolComeRange_C::CreatePlaneSpline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SplineSymbolComeRange_C", "CreatePlaneSpline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SplineSymbolComeRange.BP_SplineSymbolComeRange_C.DestroyPlaneSpline
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SplineSymbolComeRange_C::DestroyPlaneSpline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SplineSymbolComeRange_C", "DestroyPlaneSpline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SplineSymbolComeRange.BP_SplineSymbolComeRange_C.LineView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Trace                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SplineSymbolComeRange_C::LineView(bool Trace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SplineSymbolComeRange_C", "LineView");

	Params::BP_SplineSymbolComeRange_C_LineView Parms{};

	Parms.Trace = Trace;

	UObject::ProcessEvent(Func, &Parms);
}

}
