#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleCommand

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_BattleCommand.BPI_BattleCommand_C.BI_ResetCursorMemory
// 0x0008 (0x0008 - 0x0000)
struct BPI_BattleCommand_C_BI_ResetCursorMemory final
{
public:
	int32                                         PartyIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleCommand_C_BI_ResetCursorMemory) == 0x000004, "Wrong alignment on BPI_BattleCommand_C_BI_ResetCursorMemory");
static_assert(sizeof(BPI_BattleCommand_C_BI_ResetCursorMemory) == 0x000008, "Wrong size on BPI_BattleCommand_C_BI_ResetCursorMemory");
static_assert(offsetof(BPI_BattleCommand_C_BI_ResetCursorMemory, PartyIndex) == 0x000000, "Member 'BPI_BattleCommand_C_BI_ResetCursorMemory::PartyIndex' has a wrong offset!");
static_assert(offsetof(BPI_BattleCommand_C_BI_ResetCursorMemory, NoUse) == 0x000004, "Member 'BPI_BattleCommand_C_BI_ResetCursorMemory::NoUse' has a wrong offset!");

// Function BPI_BattleCommand.BPI_BattleCommand_C.BI_HidePlayerParty
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleCommand_C_BI_HidePlayerParty final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleCommand_C_BI_HidePlayerParty) == 0x000001, "Wrong alignment on BPI_BattleCommand_C_BI_HidePlayerParty");
static_assert(sizeof(BPI_BattleCommand_C_BI_HidePlayerParty) == 0x000001, "Wrong size on BPI_BattleCommand_C_BI_HidePlayerParty");
static_assert(offsetof(BPI_BattleCommand_C_BI_HidePlayerParty, NoUse) == 0x000000, "Member 'BPI_BattleCommand_C_BI_HidePlayerParty::NoUse' has a wrong offset!");

// Function BPI_BattleCommand.BPI_BattleCommand_C.BI_SetShowPlayerPartyFlag
// 0x0002 (0x0002 - 0x0000)
struct BPI_BattleCommand_C_BI_SetShowPlayerPartyFlag final
{
public:
	bool                                          IsShow;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NoUse;                                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleCommand_C_BI_SetShowPlayerPartyFlag) == 0x000001, "Wrong alignment on BPI_BattleCommand_C_BI_SetShowPlayerPartyFlag");
static_assert(sizeof(BPI_BattleCommand_C_BI_SetShowPlayerPartyFlag) == 0x000002, "Wrong size on BPI_BattleCommand_C_BI_SetShowPlayerPartyFlag");
static_assert(offsetof(BPI_BattleCommand_C_BI_SetShowPlayerPartyFlag, IsShow) == 0x000000, "Member 'BPI_BattleCommand_C_BI_SetShowPlayerPartyFlag::IsShow' has a wrong offset!");
static_assert(offsetof(BPI_BattleCommand_C_BI_SetShowPlayerPartyFlag, NoUse) == 0x000001, "Member 'BPI_BattleCommand_C_BI_SetShowPlayerPartyFlag::NoUse' has a wrong offset!");

// Function BPI_BattleCommand.BPI_BattleCommand_C.BI_GetResult
// 0x0010 (0x0010 - 0x0000)
struct BPI_BattleCommand_C_BI_GetResult final
{
public:
	struct FBtlCommand                            Result;                                            // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_BattleCommand_C_BI_GetResult) == 0x000004, "Wrong alignment on BPI_BattleCommand_C_BI_GetResult");
static_assert(sizeof(BPI_BattleCommand_C_BI_GetResult) == 0x000010, "Wrong size on BPI_BattleCommand_C_BI_GetResult");
static_assert(offsetof(BPI_BattleCommand_C_BI_GetResult, Result) == 0x000000, "Member 'BPI_BattleCommand_C_BI_GetResult::Result' has a wrong offset!");

}
