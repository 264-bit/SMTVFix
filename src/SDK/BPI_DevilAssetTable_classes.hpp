#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DevilAssetTable

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_DevilAssetTable.BPI_DevilAssetTable_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_DevilAssetTable_C final : public IInterface
{
public:
	void BI_SetDevilAssetTable(class UObject* CharaTable);
	void BI_GetDevilAssetTable(class UObject** Instance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_DevilAssetTable_C">();
	}
	static class IBPI_DevilAssetTable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_DevilAssetTable_C>();
	}
};
static_assert(alignof(IBPI_DevilAssetTable_C) == 0x000008, "Wrong alignment on IBPI_DevilAssetTable_C");
static_assert(sizeof(IBPI_DevilAssetTable_C) == 0x000028, "Wrong size on IBPI_DevilAssetTable_C");

}
