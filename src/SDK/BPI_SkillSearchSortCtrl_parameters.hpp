#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_SkillSearchSortCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_CheckInputAndUpdate
// 0x0002 (0x0002 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_CheckInputAndUpdate final
{
public:
	bool                                          IsDecideSkill;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsPressedClose;                                    // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_CheckInputAndUpdate) == 0x000001, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_CheckInputAndUpdate");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_CheckInputAndUpdate) == 0x000002, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_CheckInputAndUpdate");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_CheckInputAndUpdate, IsDecideSkill) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_CheckInputAndUpdate::IsDecideSkill' has a wrong offset!");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_CheckInputAndUpdate, IsPressedClose) == 0x000001, "Member 'BPI_SkillSearchSortCtrl_C_BPI_CheckInputAndUpdate::IsPressedClose' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_OpenWindow
// 0x0001 (0x0001 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_OpenWindow final
{
public:
	bool                                          IsSkipAnimation;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_OpenWindow) == 0x000001, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_OpenWindow");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_OpenWindow) == 0x000001, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_OpenWindow");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_OpenWindow, IsSkipAnimation) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_OpenWindow::IsSkipAnimation' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_CloseWindow
// 0x0001 (0x0001 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_CloseWindow final
{
public:
	bool                                          IsSkipAnimation;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_CloseWindow) == 0x000001, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_CloseWindow");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_CloseWindow) == 0x000001, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_CloseWindow");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_CloseWindow, IsSkipAnimation) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_CloseWindow::IsSkipAnimation' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_TabChange
// 0x0001 (0x0001 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_TabChange final
{
public:
	E_CATEGORY_CURSOR_MOVE_DIRECTION              InChangeDirection;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_TabChange) == 0x000001, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_TabChange");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_TabChange) == 0x000001, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_TabChange");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_TabChange, InChangeDirection) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_TabChange::InChangeDirection' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_TabSet
// 0x0004 (0x0004 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_TabSet final
{
public:
	int32                                         InElementIdx;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_TabSet) == 0x000004, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_TabSet");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_TabSet) == 0x000004, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_TabSet");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_TabSet, InElementIdx) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_TabSet::InElementIdx' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_DecideCurrentSlot
// 0x0008 (0x0008 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_DecideCurrentSlot final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_258A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DecidedSkillID;                                    // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_DecideCurrentSlot) == 0x000004, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_DecideCurrentSlot");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_DecideCurrentSlot) == 0x000008, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_DecideCurrentSlot");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_DecideCurrentSlot, IsPlaySE) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_DecideCurrentSlot::IsPlaySE' has a wrong offset!");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_DecideCurrentSlot, DecidedSkillID) == 0x000004, "Member 'BPI_SkillSearchSortCtrl_C_BPI_DecideCurrentSlot::DecidedSkillID' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_IsActiveSkillSearchWindow
// 0x0001 (0x0001 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_IsActiveSkillSearchWindow final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_IsActiveSkillSearchWindow) == 0x000001, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_IsActiveSkillSearchWindow");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_IsActiveSkillSearchWindow) == 0x000001, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_IsActiveSkillSearchWindow");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_IsActiveSkillSearchWindow, IsActive) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_IsActiveSkillSearchWindow::IsActive' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_SetCursorAndOffset
// 0x000C (0x000C - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_SetCursorAndOffset final
{
public:
	int32                                         InCursorIndex;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InScrollOffset;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsISkipListIn;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsPlaySE;                                          // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_SetCursorAndOffset) == 0x000004, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_SetCursorAndOffset");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_SetCursorAndOffset) == 0x00000C, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_SetCursorAndOffset");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_SetCursorAndOffset, InCursorIndex) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_SetCursorAndOffset::InCursorIndex' has a wrong offset!");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_SetCursorAndOffset, InScrollOffset) == 0x000004, "Member 'BPI_SkillSearchSortCtrl_C_BPI_SetCursorAndOffset::InScrollOffset' has a wrong offset!");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_SetCursorAndOffset, IsISkipListIn) == 0x000008, "Member 'BPI_SkillSearchSortCtrl_C_BPI_SetCursorAndOffset::IsISkipListIn' has a wrong offset!");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_SetCursorAndOffset, IsPlaySE) == 0x000009, "Member 'BPI_SkillSearchSortCtrl_C_BPI_SetCursorAndOffset::IsPlaySE' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_CursorMove_Up
// 0x0001 (0x0001 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Up final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Up) == 0x000001, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Up");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Up) == 0x000001, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Up");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Up, IsPlaySE) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Up::IsPlaySE' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_CursorMove_Down
// 0x0001 (0x0001 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Down final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Down) == 0x000001, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Down");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Down) == 0x000001, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Down");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Down, IsPlaySE) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_CursorMove_Down::IsPlaySE' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_Page_UP
// 0x0001 (0x0001 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_Page_UP final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_Page_UP) == 0x000001, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_Page_UP");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_Page_UP) == 0x000001, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_Page_UP");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_Page_UP, IsPlaySE) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_Page_UP::IsPlaySE' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_Page_Down
// 0x0001 (0x0001 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_Page_Down final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_Page_Down) == 0x000001, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_Page_Down");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_Page_Down) == 0x000001, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_Page_Down");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_Page_Down, IsPlaySE) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_Page_Down::IsPlaySE' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_GetCursorIdx
// 0x0004 (0x0004 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_GetCursorIdx final
{
public:
	int32                                         CursorIdx;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_GetCursorIdx) == 0x000004, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_GetCursorIdx");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_GetCursorIdx) == 0x000004, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_GetCursorIdx");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_GetCursorIdx, CursorIdx) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_GetCursorIdx::CursorIdx' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_GetScrollOffset
// 0x0004 (0x0004 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_GetScrollOffset final
{
public:
	int32                                         ScrollOffset;                                      // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_GetScrollOffset) == 0x000004, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_GetScrollOffset");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_GetScrollOffset) == 0x000004, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_GetScrollOffset");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_GetScrollOffset, ScrollOffset) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_GetScrollOffset::ScrollOffset' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_GetCurrentSkillListNum
// 0x0004 (0x0004 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_GetCurrentSkillListNum final
{
public:
	int32                                         SkillListNum;                                      // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_GetCurrentSkillListNum) == 0x000004, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_GetCurrentSkillListNum");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_GetCurrentSkillListNum) == 0x000004, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_GetCurrentSkillListNum");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_GetCurrentSkillListNum, SkillListNum) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_GetCurrentSkillListNum::SkillListNum' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_CheckMouseWheel
// 0x0001 (0x0001 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_CheckMouseWheel final
{
public:
	bool                                          IsPlaySE;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_CheckMouseWheel) == 0x000001, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_CheckMouseWheel");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_CheckMouseWheel) == 0x000001, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_CheckMouseWheel");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_CheckMouseWheel, IsPlaySE) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_CheckMouseWheel::IsPlaySE' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_IsEnableMouseWheel
// 0x0001 (0x0001 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_IsEnableMouseWheel final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_IsEnableMouseWheel) == 0x000001, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_IsEnableMouseWheel");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_IsEnableMouseWheel) == 0x000001, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_IsEnableMouseWheel");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_IsEnableMouseWheel, IsEnable) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_IsEnableMouseWheel::IsEnable' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_ScrollList
// 0x0008 (0x0008 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_ScrollList final
{
public:
	int32                                         InScrollNum;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlaySE;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_ScrollList) == 0x000004, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_ScrollList");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_ScrollList) == 0x000008, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_ScrollList");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_ScrollList, InScrollNum) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_ScrollList::InScrollNum' has a wrong offset!");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_ScrollList, IsPlaySE) == 0x000004, "Member 'BPI_SkillSearchSortCtrl_C_BPI_ScrollList::IsPlaySE' has a wrong offset!");

// Function BPI_SkillSearchSortCtrl.BPI_SkillSearchSortCtrl_C.BPI_GetCurrentTabIdx
// 0x0004 (0x0004 - 0x0000)
struct BPI_SkillSearchSortCtrl_C_BPI_GetCurrentTabIdx final
{
public:
	int32                                         TabIdx;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SkillSearchSortCtrl_C_BPI_GetCurrentTabIdx) == 0x000004, "Wrong alignment on BPI_SkillSearchSortCtrl_C_BPI_GetCurrentTabIdx");
static_assert(sizeof(BPI_SkillSearchSortCtrl_C_BPI_GetCurrentTabIdx) == 0x000004, "Wrong size on BPI_SkillSearchSortCtrl_C_BPI_GetCurrentTabIdx");
static_assert(offsetof(BPI_SkillSearchSortCtrl_C_BPI_GetCurrentTabIdx, TabIdx) == 0x000000, "Member 'BPI_SkillSearchSortCtrl_C_BPI_GetCurrentTabIdx::TabIdx' has a wrong offset!");

}

