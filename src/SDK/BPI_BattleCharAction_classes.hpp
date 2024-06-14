#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleCharAction

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_BattleCharAction.BPI_BattleCharAction_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_BattleCharAction_C final : public IInterface
{
public:
	void BPI_GetActorIndex(int32* Ret);
	void BPI_SetSelectList(const TArray<uint8>& List, int32* Ret);
	void BPI_GetSelectList(TArray<uint8>* List);
	void BPI_ClearSelectList(bool* Ret);
	void BPI_ApplySummon(int32* Ret);
	void BPI_SupportTsukuyomiSummon(int32* Ret);
	void BPL_GetReflectCharaList(TArray<int32>* Ret);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_BattleCharAction_C">();
	}
	static class IBPI_BattleCharAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_BattleCharAction_C>();
	}
};
static_assert(alignof(IBPI_BattleCharAction_C) == 0x000008, "Wrong alignment on IBPI_BattleCharAction_C");
static_assert(sizeof(IBPI_BattleCharAction_C) == 0x000028, "Wrong size on IBPI_BattleCharAction_C");

}
