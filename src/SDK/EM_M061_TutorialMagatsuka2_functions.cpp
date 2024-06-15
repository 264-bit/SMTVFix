#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EM_M061_TutorialMagatsuka2

#include "Basic.hpp"

#include "EM_M061_TutorialMagatsuka2_classes.hpp"
#include "EM_M061_TutorialMagatsuka2_parameters.hpp"


namespace SDK
{

// Function EM_M061_TutorialMagatsuka2.EM_M061_TutorialMagatsuka2_C.ExecuteUbergraph_EM_M061_TutorialMagatsuka2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEM_M061_TutorialMagatsuka2_C::ExecuteUbergraph_EM_M061_TutorialMagatsuka2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EM_M061_TutorialMagatsuka2_C", "ExecuteUbergraph_EM_M061_TutorialMagatsuka2");

	Params::EM_M061_TutorialMagatsuka2_C_ExecuteUbergraph_EM_M061_TutorialMagatsuka2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EM_M061_TutorialMagatsuka2.EM_M061_TutorialMagatsuka2_C.QuestExecute
// (Public, BlueprintCallable, BlueprintEvent)

void AEM_M061_TutorialMagatsuka2_C::QuestExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EM_M061_TutorialMagatsuka2_C", "QuestExecute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EM_M061_TutorialMagatsuka2.EM_M061_TutorialMagatsuka2_C.CallDeactivate
// (Public, BlueprintCallable, BlueprintEvent)

void AEM_M061_TutorialMagatsuka2_C::CallDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EM_M061_TutorialMagatsuka2_C", "CallDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}

}
