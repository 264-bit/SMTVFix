#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CommonWindowCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_CommonWindowCtrl.BPI_CommonWindowCtrl_C.IActionWindowOpenByLabel
// 0x0020 (0x0020 - 0x0000)
struct BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel final
{
public:
	E_WIDGET_PRIO                                 InPriority;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C79[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    InScriptMessageAsset;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InLabel;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InIconType;                                        // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InIconColor;                                       // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel) == 0x000008, "Wrong alignment on BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel");
static_assert(sizeof(BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel) == 0x000020, "Wrong size on BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel, InPriority) == 0x000000, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel::InPriority' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel, InScriptMessageAsset) == 0x000008, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel::InScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel, InLabel) == 0x000010, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel::InLabel' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel, InIconType) == 0x000018, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel::InIconType' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel, InIconColor) == 0x00001C, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenByLabel::InIconColor' has a wrong offset!");

// Function BPI_CommonWindowCtrl.BPI_CommonWindowCtrl_C.IActionWindowIsActive
// 0x0001 (0x0001 - 0x0000)
struct BPI_CommonWindowCtrl_C_IActionWindowIsActive final
{
public:
	bool                                          OutActive;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CommonWindowCtrl_C_IActionWindowIsActive) == 0x000001, "Wrong alignment on BPI_CommonWindowCtrl_C_IActionWindowIsActive");
static_assert(sizeof(BPI_CommonWindowCtrl_C_IActionWindowIsActive) == 0x000001, "Wrong size on BPI_CommonWindowCtrl_C_IActionWindowIsActive");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowIsActive, OutActive) == 0x000000, "Member 'BPI_CommonWindowCtrl_C_IActionWindowIsActive::OutActive' has a wrong offset!");

// Function BPI_CommonWindowCtrl.BPI_CommonWindowCtrl_C.IActionWindowOpenByIndex
// 0x0020 (0x0020 - 0x0000)
struct BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex final
{
public:
	E_WIDGET_PRIO                                 InPriority;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C7A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    InScriptMessageAsset;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InIndex;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InIconType;                                        // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InIconColor;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex) == 0x000008, "Wrong alignment on BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex");
static_assert(sizeof(BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex) == 0x000020, "Wrong size on BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex, InPriority) == 0x000000, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex::InPriority' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex, InScriptMessageAsset) == 0x000008, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex::InScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex, InIndex) == 0x000010, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex::InIndex' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex, InIconType) == 0x000014, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex::InIconType' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex, InIconColor) == 0x000018, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenByIndex::InIconColor' has a wrong offset!");

// Function BPI_CommonWindowCtrl.BPI_CommonWindowCtrl_C.IActionWindowOpenWithActionSpecifiedByLabel
// 0x0020 (0x0020 - 0x0000)
struct BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel final
{
public:
	E_WIDGET_PRIO                                 InPriority;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C7B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    InScriptMessageAsset;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InLabel;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTN_HELP_MAPPING_KEY_TYPE                   InAction;                                          // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C7C[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InIconColor;                                       // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel) == 0x000008, "Wrong alignment on BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel");
static_assert(sizeof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel) == 0x000020, "Wrong size on BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel, InPriority) == 0x000000, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel::InPriority' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel, InScriptMessageAsset) == 0x000008, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel::InScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel, InLabel) == 0x000010, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel::InLabel' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel, InAction) == 0x000018, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel::InAction' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel, InIconColor) == 0x00001C, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByLabel::InIconColor' has a wrong offset!");

// Function BPI_CommonWindowCtrl.BPI_CommonWindowCtrl_C.IActionWindowOpenWithActionSpecifiedByIndex
// 0x0020 (0x0020 - 0x0000)
struct BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex final
{
public:
	E_WIDGET_PRIO                                 InPriority;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C7D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    InScriptMessageAsset;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InIndex;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTN_HELP_MAPPING_KEY_TYPE                   InAction;                                          // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C7E[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InIconColor;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex) == 0x000008, "Wrong alignment on BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex");
static_assert(sizeof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex) == 0x000020, "Wrong size on BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex, InPriority) == 0x000000, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex::InPriority' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex, InScriptMessageAsset) == 0x000008, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex::InScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex, InIndex) == 0x000010, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex::InIndex' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex, InAction) == 0x000014, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex::InAction' has a wrong offset!");
static_assert(offsetof(BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex, InIconColor) == 0x000018, "Member 'BPI_CommonWindowCtrl_C_IActionWindowOpenWithActionSpecifiedByIndex::InIconColor' has a wrong offset!");

}

