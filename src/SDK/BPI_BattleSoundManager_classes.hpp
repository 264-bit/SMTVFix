#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleSoundManager

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "BattleBGMType_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_BattleSoundManager.BPI_BattleSoundManager_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_BattleSoundManager_C final : public IInterface
{
public:
	void BI_PlayResidentSE(class FName SEName, const struct FVector& Location, bool* RetValue);
	void BI_PlayAssetSE(class USoundAtomCue* Data, const struct FVector& Location, bool IgnorePlayRate, bool* RetValue);
	void BI_GetResidentSEByName(const class FString& Param_Name, class USoundAtomCue** RetValue);
	void BI_ChangeBGM(int32 ID, EBattleBGMType BGM_Type, EFadeType FadeType, bool IsContinuousBGMBattle, bool* Valid);
	void BI_StopAllSE(bool* NoUse);
	void BI_PlayAssetSE_2D(class USoundAtomCue* Data, bool IgnorePlayRate, bool* NoUse);
	void BI_BeginShowStat();
	void BI_EndShowStat();
	void BI_AddAtomComp(class UAtomComponent* AtomComp, bool SyncPlaybackSpeed);
	void BI_RememberCurrentBGM(class USoundAtomCue* PrevBattleBGM, bool* NoUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_BattleSoundManager_C">();
	}
	static class IBPI_BattleSoundManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_BattleSoundManager_C>();
	}
};
static_assert(alignof(IBPI_BattleSoundManager_C) == 0x000008, "Wrong alignment on IBPI_BattleSoundManager_C");
static_assert(sizeof(IBPI_BattleSoundManager_C) == 0x000028, "Wrong size on IBPI_BattleSoundManager_C");

}
