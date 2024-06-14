#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleEffectManager

#include "Basic.hpp"

#include "BPI_BattleEffectManager_classes.hpp"
#include "BPI_BattleEffectManager_parameters.hpp"


namespace SDK
{

// Function BPI_BattleEffectManager.BPI_BattleEffectManager_C.BI_SetEnableUpdate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BattleEffectManager_C::BI_SetEnableUpdate(bool Enable, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleEffectManager_C", "BI_SetEnableUpdate");

	Params::BPI_BattleEffectManager_C_BI_SetEnableUpdate Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}

}
