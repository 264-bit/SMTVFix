#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MapMakkaWinCtrl

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_MapMakkaWinCtrl.BPI_MapMakkaWinCtrl_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_MapMakkaWinCtrl_C final : public IInterface
{
public:
	void BPI_OpenMapMakkaWin(int32 PrevMakka, int32 AddMakka);
	void BPI_SetPrevMakka_MakkaWindow(int32 PrevMakka);
	void BPI_SetLock_MapMakkaWin(bool Lock, bool ReturnAreaName);
	void BPI_OpenMapMiitsuWin(int32 PrevMiitsu, int32 AddMiitsu);
	void BPI_SetPrevMiitsu_MiitsuWindow(int32 PrevMiitsu);
	void BPI_CheckActive(bool* Active);
	void BPI_OpenMapMiitsuWin_ManualNext(int32 PrevMiitsu, int32 AddMiitsu);
	void BPI_NextMapMiitsuWin(bool* Success);
	void BPI_CheckNext_MapMiitsuWin(bool* Next);
	void BPI_CheckActive_Miitsu(bool* Active);
	void BPI_CheckNext_MimanMiitsu(bool* Next);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_MapMakkaWinCtrl_C">();
	}
	static class IBPI_MapMakkaWinCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_MapMakkaWinCtrl_C>();
	}
};
static_assert(alignof(IBPI_MapMakkaWinCtrl_C) == 0x000008, "Wrong alignment on IBPI_MapMakkaWinCtrl_C");
static_assert(sizeof(IBPI_MapMakkaWinCtrl_C) == 0x000028, "Wrong size on IBPI_MapMakkaWinCtrl_C");

}
