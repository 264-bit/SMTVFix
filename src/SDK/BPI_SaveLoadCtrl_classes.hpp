#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_SaveLoadCtrl

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "E_SaveLoadEndType_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_SaveLoadCtrl.BPI_SaveLoadCtrl_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_SaveLoadCtrl_C final : public IInterface
{
public:
	void GetMediator(class UObject** Mediator);
	void IsStartedFieldReturnFade(bool* IsStarted);
	void IsSetUpComplete(bool* OutValue);
	void StartSaveInherit();
	void SetupInherit();
	void OffLoadScreen();
	void OnLoadScreen();
	void SetupSaveMenu(E_SAVE_LOCATION InLocation);
	void SetHiddenCommonWidget();
	void IsCancel(bool* OutValue);
	void StartLoadMenu();
	void IsEndSaveLoad(E_SaveLoadEndType* OutEndType);
	void SetupLoadMenu(E_Load_LOCATION InLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_SaveLoadCtrl_C">();
	}
	static class IBPI_SaveLoadCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_SaveLoadCtrl_C>();
	}
};
static_assert(alignof(IBPI_SaveLoadCtrl_C) == 0x000008, "Wrong alignment on IBPI_SaveLoadCtrl_C");
static_assert(sizeof(IBPI_SaveLoadCtrl_C) == 0x000028, "Wrong size on IBPI_SaveLoadCtrl_C");

}

