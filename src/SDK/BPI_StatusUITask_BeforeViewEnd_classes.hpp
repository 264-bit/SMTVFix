#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_StatusUITask_BeforeViewEnd

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_StatusUITask_BeforeViewEnd.BPI_StatusUITask_BeforeViewEnd_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_StatusUITask_BeforeViewEnd_C final : public IInterface
{
public:
	void Do(bool* Complete);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_StatusUITask_BeforeViewEnd_C">();
	}
	static class IBPI_StatusUITask_BeforeViewEnd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_StatusUITask_BeforeViewEnd_C>();
	}
};
static_assert(alignof(IBPI_StatusUITask_BeforeViewEnd_C) == 0x000008, "Wrong alignment on IBPI_StatusUITask_BeforeViewEnd_C");
static_assert(sizeof(IBPI_StatusUITask_BeforeViewEnd_C) == 0x000028, "Wrong size on IBPI_StatusUITask_BeforeViewEnd_C");

}
