#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ACLPlugin

#include "Basic.hpp"

#include "ACLPlugin_classes.hpp"
#include "ACLPlugin_parameters.hpp"


namespace SDK
{

// Function ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimationCompressionLibraryDatabase*DatabaseAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EACLVisualFidelity                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EACLVisualFidelity UAnimationCompressionLibraryDatabase::GetVisualFidelity(class UAnimationCompressionLibraryDatabase* DatabaseAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationCompressionLibraryDatabase", "GetVisualFidelity");

	Params::AnimationCompressionLibraryDatabase_GetVisualFidelity Parms{};

	Parms.DatabaseAsset = DatabaseAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo                LatentInfo                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UAnimationCompressionLibraryDatabase*DatabaseAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EACLVisualFidelityChangeResult          Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EACLVisualFidelity                      VisualFidelity                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnimationCompressionLibraryDatabase::SetVisualFidelity(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UAnimationCompressionLibraryDatabase* DatabaseAsset, EACLVisualFidelityChangeResult* Result, EACLVisualFidelity VisualFidelity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnimationCompressionLibraryDatabase", "SetVisualFidelity");

	Params::AnimationCompressionLibraryDatabase_SetVisualFidelity Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = std::move(LatentInfo);
	Parms.DatabaseAsset = DatabaseAsset;
	Parms.VisualFidelity = VisualFidelity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;
}

}
