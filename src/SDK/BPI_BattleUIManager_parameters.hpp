#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleUIManager

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_BattleUIManager.BPI_BattleUIManager_C.BI_PressIconSlideOut
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleUIManager_C_BI_PressIconSlideOut final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleUIManager_C_BI_PressIconSlideOut) == 0x000001, "Wrong alignment on BPI_BattleUIManager_C_BI_PressIconSlideOut");
static_assert(sizeof(BPI_BattleUIManager_C_BI_PressIconSlideOut) == 0x000001, "Wrong size on BPI_BattleUIManager_C_BI_PressIconSlideOut");
static_assert(offsetof(BPI_BattleUIManager_C_BI_PressIconSlideOut, Ret) == 0x000000, "Member 'BPI_BattleUIManager_C_BI_PressIconSlideOut::Ret' has a wrong offset!");

// Function BPI_BattleUIManager.BPI_BattleUIManager_C.BI_PressIconSlideIn
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleUIManager_C_BI_PressIconSlideIn final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleUIManager_C_BI_PressIconSlideIn) == 0x000001, "Wrong alignment on BPI_BattleUIManager_C_BI_PressIconSlideIn");
static_assert(sizeof(BPI_BattleUIManager_C_BI_PressIconSlideIn) == 0x000001, "Wrong size on BPI_BattleUIManager_C_BI_PressIconSlideIn");
static_assert(offsetof(BPI_BattleUIManager_C_BI_PressIconSlideIn, Ret) == 0x000000, "Member 'BPI_BattleUIManager_C_BI_PressIconSlideIn::Ret' has a wrong offset!");

// Function BPI_BattleUIManager.BPI_BattleUIManager_C.BI_UpliftingGaugeSlideOut
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleUIManager_C_BI_UpliftingGaugeSlideOut final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleUIManager_C_BI_UpliftingGaugeSlideOut) == 0x000001, "Wrong alignment on BPI_BattleUIManager_C_BI_UpliftingGaugeSlideOut");
static_assert(sizeof(BPI_BattleUIManager_C_BI_UpliftingGaugeSlideOut) == 0x000001, "Wrong size on BPI_BattleUIManager_C_BI_UpliftingGaugeSlideOut");
static_assert(offsetof(BPI_BattleUIManager_C_BI_UpliftingGaugeSlideOut, Ret) == 0x000000, "Member 'BPI_BattleUIManager_C_BI_UpliftingGaugeSlideOut::Ret' has a wrong offset!");

// Function BPI_BattleUIManager.BPI_BattleUIManager_C.BI_UpliftingGaugeSlideIn
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleUIManager_C_BI_UpliftingGaugeSlideIn final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleUIManager_C_BI_UpliftingGaugeSlideIn) == 0x000001, "Wrong alignment on BPI_BattleUIManager_C_BI_UpliftingGaugeSlideIn");
static_assert(sizeof(BPI_BattleUIManager_C_BI_UpliftingGaugeSlideIn) == 0x000001, "Wrong size on BPI_BattleUIManager_C_BI_UpliftingGaugeSlideIn");
static_assert(offsetof(BPI_BattleUIManager_C_BI_UpliftingGaugeSlideIn, Ret) == 0x000000, "Member 'BPI_BattleUIManager_C_BI_UpliftingGaugeSlideIn::Ret' has a wrong offset!");

// Function BPI_BattleUIManager.BPI_BattleUIManager_C.BI_ShowBlankNumber
// 0x0048 (0x0048 - 0x0000)
struct BPI_BattleUIManager_C_BI_ShowBlankNumber final
{
public:
	int32                                         HP_Value;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MP_Value;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_UTIL_ICON_TYPE                          HitType;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31E0[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Level;                                             // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_NUMEFF                                  NumEffectType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31E1[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SocketLocation;                                    // 0x0014(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              PosOffset;                                         // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Ratio_;                                            // 0x0028(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayRate;                                          // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SizeRate;                                          // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PartyIndex;                                        // 0x0034(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleNumberActor_C> Number;                                            // 0x0038(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleUIManager_C_BI_ShowBlankNumber) == 0x000008, "Wrong alignment on BPI_BattleUIManager_C_BI_ShowBlankNumber");
static_assert(sizeof(BPI_BattleUIManager_C_BI_ShowBlankNumber) == 0x000048, "Wrong size on BPI_BattleUIManager_C_BI_ShowBlankNumber");
static_assert(offsetof(BPI_BattleUIManager_C_BI_ShowBlankNumber, HP_Value) == 0x000000, "Member 'BPI_BattleUIManager_C_BI_ShowBlankNumber::HP_Value' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_ShowBlankNumber, MP_Value) == 0x000004, "Member 'BPI_BattleUIManager_C_BI_ShowBlankNumber::MP_Value' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_ShowBlankNumber, HitType) == 0x000008, "Member 'BPI_BattleUIManager_C_BI_ShowBlankNumber::HitType' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_ShowBlankNumber, Level) == 0x00000C, "Member 'BPI_BattleUIManager_C_BI_ShowBlankNumber::Level' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_ShowBlankNumber, NumEffectType) == 0x000010, "Member 'BPI_BattleUIManager_C_BI_ShowBlankNumber::NumEffectType' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_ShowBlankNumber, SocketLocation) == 0x000014, "Member 'BPI_BattleUIManager_C_BI_ShowBlankNumber::SocketLocation' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_ShowBlankNumber, PosOffset) == 0x000020, "Member 'BPI_BattleUIManager_C_BI_ShowBlankNumber::PosOffset' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_ShowBlankNumber, Ratio_) == 0x000028, "Member 'BPI_BattleUIManager_C_BI_ShowBlankNumber::Ratio_' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_ShowBlankNumber, PlayRate) == 0x00002C, "Member 'BPI_BattleUIManager_C_BI_ShowBlankNumber::PlayRate' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_ShowBlankNumber, SizeRate) == 0x000030, "Member 'BPI_BattleUIManager_C_BI_ShowBlankNumber::SizeRate' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_ShowBlankNumber, PartyIndex) == 0x000034, "Member 'BPI_BattleUIManager_C_BI_ShowBlankNumber::PartyIndex' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_ShowBlankNumber, Number) == 0x000038, "Member 'BPI_BattleUIManager_C_BI_ShowBlankNumber::Number' has a wrong offset!");

// Function BPI_BattleUIManager.BPI_BattleUIManager_C.BI_HideNumber
// 0x0018 (0x0018 - 0x0000)
struct BPI_BattleUIManager_C_BI_HideNumber final
{
public:
	TScriptInterface<class IBPI_BattleNumberActor_C> Number;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NoUse;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleUIManager_C_BI_HideNumber) == 0x000008, "Wrong alignment on BPI_BattleUIManager_C_BI_HideNumber");
static_assert(sizeof(BPI_BattleUIManager_C_BI_HideNumber) == 0x000018, "Wrong size on BPI_BattleUIManager_C_BI_HideNumber");
static_assert(offsetof(BPI_BattleUIManager_C_BI_HideNumber, Number) == 0x000000, "Member 'BPI_BattleUIManager_C_BI_HideNumber::Number' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_HideNumber, NoUse) == 0x000010, "Member 'BPI_BattleUIManager_C_BI_HideNumber::NoUse' has a wrong offset!");

// Function BPI_BattleUIManager.BPI_BattleUIManager_C.BI_UtilIconShowByPartyIndex
// 0x0028 (0x0028 - 0x0000)
struct BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex final
{
public:
	E_BTL_UTIL_ICON_TYPE                          Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31E2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PlayRate;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PartyIndex;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SocketName;                                        // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31E3[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleUtilIconActor_C> Icon;                                              // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex) == 0x000008, "Wrong alignment on BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex");
static_assert(sizeof(BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex) == 0x000028, "Wrong size on BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex");
static_assert(offsetof(BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex, Type) == 0x000000, "Member 'BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex::Type' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex, PlayRate) == 0x000004, "Member 'BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex::PlayRate' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex, PartyIndex) == 0x000008, "Member 'BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex::PartyIndex' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex, SocketName) == 0x00000C, "Member 'BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex::SocketName' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex, Icon) == 0x000018, "Member 'BPI_BattleUIManager_C_BI_UtilIconShowByPartyIndex::Icon' has a wrong offset!");

// Function BPI_BattleUIManager.BPI_BattleUIManager_C.BI_UtilIconHide
// 0x0018 (0x0018 - 0x0000)
struct BPI_BattleUIManager_C_BI_UtilIconHide final
{
public:
	TScriptInterface<class IBPI_BattleUtilIconActor_C> Icon;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NoUse;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleUIManager_C_BI_UtilIconHide) == 0x000008, "Wrong alignment on BPI_BattleUIManager_C_BI_UtilIconHide");
static_assert(sizeof(BPI_BattleUIManager_C_BI_UtilIconHide) == 0x000018, "Wrong size on BPI_BattleUIManager_C_BI_UtilIconHide");
static_assert(offsetof(BPI_BattleUIManager_C_BI_UtilIconHide, Icon) == 0x000000, "Member 'BPI_BattleUIManager_C_BI_UtilIconHide::Icon' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_UtilIconHide, NoUse) == 0x000010, "Member 'BPI_BattleUIManager_C_BI_UtilIconHide::NoUse' has a wrong offset!");

// Function BPI_BattleUIManager.BPI_BattleUIManager_C.BI_PressIconIsWorking
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleUIManager_C_BI_PressIconIsWorking final
{
public:
	bool                                          IsWorking;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleUIManager_C_BI_PressIconIsWorking) == 0x000001, "Wrong alignment on BPI_BattleUIManager_C_BI_PressIconIsWorking");
static_assert(sizeof(BPI_BattleUIManager_C_BI_PressIconIsWorking) == 0x000001, "Wrong size on BPI_BattleUIManager_C_BI_PressIconIsWorking");
static_assert(offsetof(BPI_BattleUIManager_C_BI_PressIconIsWorking, IsWorking) == 0x000000, "Member 'BPI_BattleUIManager_C_BI_PressIconIsWorking::IsWorking' has a wrong offset!");

// Function BPI_BattleUIManager.BPI_BattleUIManager_C.BI_IsDisappearedMainUI
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleUIManager_C_BI_IsDisappearedMainUI final
{
public:
	bool                                          IsDisappeared;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleUIManager_C_BI_IsDisappearedMainUI) == 0x000001, "Wrong alignment on BPI_BattleUIManager_C_BI_IsDisappearedMainUI");
static_assert(sizeof(BPI_BattleUIManager_C_BI_IsDisappearedMainUI) == 0x000001, "Wrong size on BPI_BattleUIManager_C_BI_IsDisappearedMainUI");
static_assert(offsetof(BPI_BattleUIManager_C_BI_IsDisappearedMainUI, IsDisappeared) == 0x000000, "Member 'BPI_BattleUIManager_C_BI_IsDisappearedMainUI::IsDisappeared' has a wrong offset!");

// Function BPI_BattleUIManager.BPI_BattleUIManager_C.BI_GetMainUIDisappeared
// 0x0002 (0x0002 - 0x0000)
struct BPI_BattleUIManager_C_BI_GetMainUIDisappeared final
{
public:
	bool                                          PressIcon;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Uplifting;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleUIManager_C_BI_GetMainUIDisappeared) == 0x000001, "Wrong alignment on BPI_BattleUIManager_C_BI_GetMainUIDisappeared");
static_assert(sizeof(BPI_BattleUIManager_C_BI_GetMainUIDisappeared) == 0x000002, "Wrong size on BPI_BattleUIManager_C_BI_GetMainUIDisappeared");
static_assert(offsetof(BPI_BattleUIManager_C_BI_GetMainUIDisappeared, PressIcon) == 0x000000, "Member 'BPI_BattleUIManager_C_BI_GetMainUIDisappeared::PressIcon' has a wrong offset!");
static_assert(offsetof(BPI_BattleUIManager_C_BI_GetMainUIDisappeared, Uplifting) == 0x000001, "Member 'BPI_BattleUIManager_C_BI_GetMainUIDisappeared::Uplifting' has a wrong offset!");

// Function BPI_BattleUIManager.BPI_BattleUIManager_C.BI_PressIconAreAllShown
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleUIManager_C_BI_PressIconAreAllShown final
{
public:
	bool                                          Shown;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleUIManager_C_BI_PressIconAreAllShown) == 0x000001, "Wrong alignment on BPI_BattleUIManager_C_BI_PressIconAreAllShown");
static_assert(sizeof(BPI_BattleUIManager_C_BI_PressIconAreAllShown) == 0x000001, "Wrong size on BPI_BattleUIManager_C_BI_PressIconAreAllShown");
static_assert(offsetof(BPI_BattleUIManager_C_BI_PressIconAreAllShown, Shown) == 0x000000, "Member 'BPI_BattleUIManager_C_BI_PressIconAreAllShown::Shown' has a wrong offset!");

}

