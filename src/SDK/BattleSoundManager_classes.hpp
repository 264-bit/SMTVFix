#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleSoundManager

#include "Basic.hpp"

#include "BTL_SOUND_PARAM_structs.hpp"
#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"
#include "BattleBGMType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleSoundManager.BattleSoundManager_C
// 0x0030 (0x00E0 - 0x00B0)
class UBattleSoundManager_C final : public UBattleActorComponentBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsChangeBGM;                                       // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EBattleBGMType                                CurrentBGMType;                                    // 0x00B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7594[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBTL_SOUND_PARAM>               M_AtomCue;                                         // 0x00C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class USoundAtomCue*                          M_RememberedBGM;                                   // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentBGM_ID;                                     // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_ShowStat;                                        // 0x00DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BattleSoundManager(int32 EntryPoint);
	void BI_AddAtomComp(class UAtomComponent* AtomComp, bool SyncPlaybackSpeed);
	void BI_EndShowStat();
	void BI_BeginShowStat();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void GetResidentAssetByName(class FName Param_Name, class USoundAtomCue** RetValue);
	void PlayResidentSE(class FName Param_Name, const struct FVector& Location);
	void PlayAssetSE(class USoundAtomCue* Sound, const struct FVector& Location, bool IgnorePlayRate);
	void Change_BGM(int32 Param_Index, EBattleBGMType BGM_Type, EFadeType FadeType, bool IsContinuousBGMBattle, bool* Valid);
	void StopAllSE();
	void PlayAssetSE_2D(class USoundAtomCue* Sound, bool IgnorePlayRate);
	void GetMainWork(TScriptInterface<class IBPI_BattleMain_C>* BattleMain, bool* Valid);
	void GetPlayRate(float* PlayRate);
	void SetPlayRate();
	void Refresh();
	void RememberCurrentBGM(class USoundAtomCue* PrevBattleBGM);
	void ShowBattleStat();
	void GetCurrentBGMType(EBattleBGMType* Type);
	void BI_PlayResidentSE(class FName SEName, const struct FVector& Location, bool* RetValue);
	void BI_PlayAssetSE(class USoundAtomCue* Data, const struct FVector& Location, bool IgnorePlayRate, bool* RetValue);
	void BI_GetResidentSEByName(const class FString& Param_Name, class USoundAtomCue** RetValue);
	void BI_ChangeBGM(int32 ID, EBattleBGMType BGM_Type, EFadeType FadeType, bool IsContinuousBGMBattle, bool* Valid);
	void BI_StopAllSE(bool* NoUse);
	void BI_PlayAssetSE_2D(class USoundAtomCue* Data, bool IgnorePlayRate, bool* NoUse);
	void BI_RememberCurrentBGM(class USoundAtomCue* PrevBattleBGM, bool* NoUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleSoundManager_C">();
	}
	static class UBattleSoundManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleSoundManager_C>();
	}
};
static_assert(alignof(UBattleSoundManager_C) == 0x000008, "Wrong alignment on UBattleSoundManager_C");
static_assert(sizeof(UBattleSoundManager_C) == 0x0000E0, "Wrong size on UBattleSoundManager_C");
static_assert(offsetof(UBattleSoundManager_C, UberGraphFrame) == 0x0000B0, "Member 'UBattleSoundManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleSoundManager_C, IsChangeBGM) == 0x0000B8, "Member 'UBattleSoundManager_C::IsChangeBGM' has a wrong offset!");
static_assert(offsetof(UBattleSoundManager_C, CurrentBGMType) == 0x0000B9, "Member 'UBattleSoundManager_C::CurrentBGMType' has a wrong offset!");
static_assert(offsetof(UBattleSoundManager_C, M_AtomCue) == 0x0000C0, "Member 'UBattleSoundManager_C::M_AtomCue' has a wrong offset!");
static_assert(offsetof(UBattleSoundManager_C, M_RememberedBGM) == 0x0000D0, "Member 'UBattleSoundManager_C::M_RememberedBGM' has a wrong offset!");
static_assert(offsetof(UBattleSoundManager_C, CurrentBGM_ID) == 0x0000D8, "Member 'UBattleSoundManager_C::CurrentBGM_ID' has a wrong offset!");
static_assert(offsetof(UBattleSoundManager_C, M_ShowStat) == 0x0000DC, "Member 'UBattleSoundManager_C::M_ShowStat' has a wrong offset!");

}

