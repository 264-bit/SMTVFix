#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleTargetDevilInfoActor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Project_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleTargetDevilInfoActor.BattleTargetDevilInfoActor_C
// 0x0100 (0x0320 - 0x0220)
class ABattleTargetDevilInfoActor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Value;                                             // 0x0230(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_PartyIndex;                                      // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         M_Level;                                           // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_DevilID;                                         // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_Combo;                                           // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_AutoHideSaveTime;                                // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_AutoHideTime;                                    // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsAutoHide;                                      // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48ED[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             M_InfoTransform;                                   // 0x0260(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             M_TargetTransform;                                 // 0x0290(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         M_Enenroll;                                        // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48EE[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_BtlTargetDevil_Info_C*              M_DevilName;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_BtlTargetDevil_HP_C*                M_DevilHP;                                         // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_BtlTargetDevil_Aishou_C*            M_DevilAishou;                                     // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_BtlTargetDevil_AishouNotice_C*      M_DevilAishouNotice;                               // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_EnableUpdatePosition;                            // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_BTL_SIDE                                    M_Side;                                            // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_ForDamage;                                       // 0x02EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_Use2Line;                                        // 0x02EB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48EF[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 M_BaseDefenceAishou;                               // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         M_PlayRate;                                        // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48F0[0x4];                                     // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            M_DamageAnimCurve;                                 // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsUseSkipTarget;                                 // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BattleTargetDevilInfoActor(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void GetBIMainWork(TScriptInterface<class IBPI_BattleMain_C>* RetValue);
	void GetBIPartySystem(TScriptInterface<class IBPI_BattleParty_C>* Ret);
	void PlayHpBar(int32 AddParam, float AnimTime, bool Overflow);
	void GetWidget_HPBar(class UWB_BtlTargetDevil_HP_C** Widget);
	void IsPlayHpBar(bool* IsPlay);
	void StopPlayHpBar();
	void DrawSwitch_HpBar(bool Sw, bool UsingDamage, bool Use2Line, bool Immediately, bool IsUseSkipTarget);
	void GetPartyData_Hp(int32 PartyIndex, int32* Hp, int32* HpMax, bool* IsAnalyzed);
	void UpDateHpBar(bool UpdateHPGauge);
	void DrawSwitch_HpBarIsDraw(bool Sw);
	void SetCharaData();
	void GetWidget_Name(class UWB_BtlTargetDevil_Info_C** Widget);
	void DrawSwitch_Name(bool Sw, bool Immediately);
	void DrawSwich_ComboHitLarge(bool Sw);
	void UpDateCombo();
	void GetComboWidget(class UWB_BtlTargetDevil_HitCombo_C** AsBattle_Target_Devil_Hit_Combo);
	void AddComboHit();
	void DrawSwich_ComboHitSmall(bool Sw);
	void AutoHide(float DeltaTime);
	void AttachToCameraManager(bool Sw);
	void UpdatePosition();
	void UpdateHPBarPosition();
	void GetWidget_Aishou(class UWB_BtlTargetDevil_Aishou_C** Widget);
	void DrawSwitch_Aishou(bool Sw, bool Immediately);
	void IsNextAct(int32 PartyIndex, bool* RetValue);
	void GetBIMainInterface(TScriptInterface<class IBPI_MainInterface>* RetValue);
	void GetBIMemInterface(TScriptInterface<class IBPI_PTMemDataInterface>* RetValue);
	void FindUnit(int32 PartyIndex, class ACharaBase_C** RetValue);
	void SetAllWidgetMasterVisibility(bool IsVisible);
	void GetWidget_AishouNotice(class UWB_BtlTargetDevil_AishouNotice_C** Widget);
	void DrawSwitch_AishouNotice(E_ATTRIBUTE_TYPE DefenceAishou, bool IsShowAll, bool Sw, bool IsSelected, bool Immediately, bool IsPenetration);
	void UpdateDevilInfo();
	void CalcScreenPos(const struct FTransform& InTransform, struct FVector2D* ScreenPosition);
	void SetEnableUpdatePosition(bool Enable);
	void ShowCureExpection(int32 ExpectedHP);
	void Reregister();
	void CheckBarriorAishou(TArray<int32>& BtlCnt, E_BTL_CNT BtlCntAttr, bool* Barriored);
	void CheckKarnAishou(E_ATTRIBUTE_TYPE Attr, TArray<int32>& BtlCnt, bool* Karn);
	void CheckBreakAishou(E_ATTRIBUTE_TYPE Attr, TArray<int32>& BtlCnt, bool* Break);
	void AnalyzeCheck(int32 DevID, int32 PartyIndex, E_ATTRIBUTE_TYPE Attribute, bool* IsOpened);
	void GetInfoHP(int32* Hp);
	bool IsUtsusemiInShop();
	void Calc_Utsusemi_status(E_UI_STATUS_ESSENCE_ICON* Status);
	void OnUnitSelected(int32 PartyIndex);
	void OnUnitDicided(int32 PartyIndex);
	void SetButtonVisibility(ESlateVisibility Vilibility);
	void OnHPBarDisappeared();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleTargetDevilInfoActor_C">();
	}
	static class ABattleTargetDevilInfoActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABattleTargetDevilInfoActor_C>();
	}
};
static_assert(alignof(ABattleTargetDevilInfoActor_C) == 0x000010, "Wrong alignment on ABattleTargetDevilInfoActor_C");
static_assert(sizeof(ABattleTargetDevilInfoActor_C) == 0x000320, "Wrong size on ABattleTargetDevilInfoActor_C");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, UberGraphFrame) == 0x000220, "Member 'ABattleTargetDevilInfoActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, DefaultSceneRoot) == 0x000228, "Member 'ABattleTargetDevilInfoActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, Value) == 0x000230, "Member 'ABattleTargetDevilInfoActor_C::Value' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_PartyIndex) == 0x000240, "Member 'ABattleTargetDevilInfoActor_C::M_PartyIndex' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_Level) == 0x000244, "Member 'ABattleTargetDevilInfoActor_C::M_Level' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_DevilID) == 0x000248, "Member 'ABattleTargetDevilInfoActor_C::M_DevilID' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_Combo) == 0x00024C, "Member 'ABattleTargetDevilInfoActor_C::M_Combo' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_AutoHideSaveTime) == 0x000250, "Member 'ABattleTargetDevilInfoActor_C::M_AutoHideSaveTime' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_AutoHideTime) == 0x000254, "Member 'ABattleTargetDevilInfoActor_C::M_AutoHideTime' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_IsAutoHide) == 0x000258, "Member 'ABattleTargetDevilInfoActor_C::M_IsAutoHide' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_InfoTransform) == 0x000260, "Member 'ABattleTargetDevilInfoActor_C::M_InfoTransform' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_TargetTransform) == 0x000290, "Member 'ABattleTargetDevilInfoActor_C::M_TargetTransform' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_Enenroll) == 0x0002C0, "Member 'ABattleTargetDevilInfoActor_C::M_Enenroll' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_DevilName) == 0x0002C8, "Member 'ABattleTargetDevilInfoActor_C::M_DevilName' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_DevilHP) == 0x0002D0, "Member 'ABattleTargetDevilInfoActor_C::M_DevilHP' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_DevilAishou) == 0x0002D8, "Member 'ABattleTargetDevilInfoActor_C::M_DevilAishou' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_DevilAishouNotice) == 0x0002E0, "Member 'ABattleTargetDevilInfoActor_C::M_DevilAishouNotice' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_EnableUpdatePosition) == 0x0002E8, "Member 'ABattleTargetDevilInfoActor_C::M_EnableUpdatePosition' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_Side) == 0x0002E9, "Member 'ABattleTargetDevilInfoActor_C::M_Side' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_ForDamage) == 0x0002EA, "Member 'ABattleTargetDevilInfoActor_C::M_ForDamage' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_Use2Line) == 0x0002EB, "Member 'ABattleTargetDevilInfoActor_C::M_Use2Line' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_BaseDefenceAishou) == 0x0002F0, "Member 'ABattleTargetDevilInfoActor_C::M_BaseDefenceAishou' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_PlayRate) == 0x000300, "Member 'ABattleTargetDevilInfoActor_C::M_PlayRate' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_DamageAnimCurve) == 0x000308, "Member 'ABattleTargetDevilInfoActor_C::M_DamageAnimCurve' has a wrong offset!");
static_assert(offsetof(ABattleTargetDevilInfoActor_C, M_IsUseSkipTarget) == 0x000310, "Member 'ABattleTargetDevilInfoActor_C::M_IsUseSkipTarget' has a wrong offset!");

}
