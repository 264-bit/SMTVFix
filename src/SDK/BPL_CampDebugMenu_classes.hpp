#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_CampDebugMenu

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_CampDebugMenu.BPL_CampDebugMenu_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_CampDebugMenu_C final : public UBlueprintFunctionLibrary
{
public:
	static void AddDebugMenuCamp(class UObject* __WorldContext);
	static void AddDebugmenuCamp_Test(class UObject* __WorldContext);
	static void LockDebugMenuCamp(class UObject* __WorldContext);
	static void AddDebugMenuCampSp(bool IsDateCreate, class UObject* __WorldContext);
	static void AddDebugMenuCamp_DataBase(const class FString& Path, class UObject* __WorldContext);
	static void AddDebugMenuCamp_Makka(const class FString& PagePath, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_CampDebugMenu_C">();
	}
	static class UBPL_CampDebugMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_CampDebugMenu_C>();
	}
};
static_assert(alignof(UBPL_CampDebugMenu_C) == 0x000008, "Wrong alignment on UBPL_CampDebugMenu_C");
static_assert(sizeof(UBPL_CampDebugMenu_C) == 0x000028, "Wrong size on UBPL_CampDebugMenu_C");

}
