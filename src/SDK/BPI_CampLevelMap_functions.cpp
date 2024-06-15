#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CampLevelMap

#include "Basic.hpp"

#include "BPI_CampLevelMap_classes.hpp"
#include "BPI_CampLevelMap_parameters.hpp"


namespace SDK
{

// Function BPI_CampLevelMap.BPI_CampLevelMap_C.ChangeCampRoomEvnHidden
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CampLevelMap_C::ChangeCampRoomEvnHidden(bool IsOn, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampLevelMap_C", "ChangeCampRoomEvnHidden");

	Params::BPI_CampLevelMap_C_ChangeCampRoomEvnHidden Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BPI_CampLevelMap.BPI_CampLevelMap_C.GetAogamiRoomCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACameraActor*                     Camera                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CampLevelMap_C::GetAogamiRoomCamera(class ACameraActor** Camera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampLevelMap_C", "GetAogamiRoomCamera");

	Params::BPI_CampLevelMap_C_GetAogamiRoomCamera Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Camera != nullptr)
		*Camera = Parms.Camera;
}


// Function BPI_CampLevelMap.BPI_CampLevelMap_C.GetPartyPlayerSpawnTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)

void IBPI_CampLevelMap_C::GetPartyPlayerSpawnTransform(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampLevelMap_C", "GetPartyPlayerSpawnTransform");

	Params::BPI_CampLevelMap_C_GetPartyPlayerSpawnTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}


// Function BPI_CampLevelMap.BPI_CampLevelMap_C.GetPartyCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACameraActor*                     Camera                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CampLevelMap_C::GetPartyCamera(class ACameraActor** Camera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampLevelMap_C", "GetPartyCamera");

	Params::BPI_CampLevelMap_C_GetPartyCamera Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Camera != nullptr)
		*Camera = Parms.Camera;
}


// Function BPI_CampLevelMap.BPI_CampLevelMap_C.GetCampTopCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACameraActor*                     Camera                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CampLevelMap_C::GetCampTopCamera(class ACameraActor** Camera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampLevelMap_C", "GetCampTopCamera");

	Params::BPI_CampLevelMap_C_GetCampTopCamera Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Camera != nullptr)
		*Camera = Parms.Camera;
}


// Function BPI_CampLevelMap.BPI_CampLevelMap_C.GetPlayerSpawnTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)

void IBPI_CampLevelMap_C::GetPlayerSpawnTransform(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampLevelMap_C", "GetPlayerSpawnTransform");

	Params::BPI_CampLevelMap_C_GetPlayerSpawnTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}


// Function BPI_CampLevelMap.BPI_CampLevelMap_C.GetPartySpawnTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)

void IBPI_CampLevelMap_C::GetPartySpawnTransform(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampLevelMap_C", "GetPartySpawnTransform");

	Params::BPI_CampLevelMap_C_GetPartySpawnTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}

}
