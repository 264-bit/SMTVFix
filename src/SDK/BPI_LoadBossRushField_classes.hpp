#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_LoadBossRushField

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_LoadBossRushField.BPI_LoadBossRushField_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_LoadBossRushField_C final : public IInterface
{
public:
	void BPI_ReadyBossRushField(int32 BattleFIeldID);
	void BPI_FinishBossRushFieldAll(bool UnloadBossRushLevel, bool ShowBattleHideLevel);
	void BPI_Completed_ReadyBossRushField(bool* Completed);
	void BPI_GetBattleFieldID(int32* BattleFIeldID);
	void BPI_Completed_FinishBossRushField(bool* Completed);
	void BPI_GetBossRushFieldPos(struct FTransform* EncountPos, struct FTransform* LevelPos);
	void BPI_LoadSecondBossRushField(int32 BattleFIeldID);
	void BPI_ChangeBossRushField_FirstOrSecond(bool SecondLevel);
	void BPI_CheckLoadedBossRushField(bool SecondLevel, bool* Loaded);
	void BPI_CheckVisibleBossRushField(bool SecondLevel, bool* Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_LoadBossRushField_C">();
	}
	static class IBPI_LoadBossRushField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_LoadBossRushField_C>();
	}
};
static_assert(alignof(IBPI_LoadBossRushField_C) == 0x000008, "Wrong alignment on IBPI_LoadBossRushField_C");
static_assert(sizeof(IBPI_LoadBossRushField_C) == 0x000028, "Wrong size on IBPI_LoadBossRushField_C");

}
