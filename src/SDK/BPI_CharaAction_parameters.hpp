#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CharaAction

#include "Basic.hpp"

#include "E_MapAction_Pla603_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_CharaAction.BPI_CharaAction_C.DeathAction
// 0x0008 (0x0008 - 0x0000)
struct BPI_CharaAction_C_DeathAction final
{
public:
	uint8                                         InOption;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DeadTimingOverride;                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_232E[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DeadTiming;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CharaAction_C_DeathAction) == 0x000004, "Wrong alignment on BPI_CharaAction_C_DeathAction");
static_assert(sizeof(BPI_CharaAction_C_DeathAction) == 0x000008, "Wrong size on BPI_CharaAction_C_DeathAction");
static_assert(offsetof(BPI_CharaAction_C_DeathAction, InOption) == 0x000000, "Member 'BPI_CharaAction_C_DeathAction::InOption' has a wrong offset!");
static_assert(offsetof(BPI_CharaAction_C_DeathAction, DeadTimingOverride) == 0x000001, "Member 'BPI_CharaAction_C_DeathAction::DeadTimingOverride' has a wrong offset!");
static_assert(offsetof(BPI_CharaAction_C_DeathAction, DeadTiming) == 0x000004, "Member 'BPI_CharaAction_C_DeathAction::DeadTiming' has a wrong offset!");

// Function BPI_CharaAction.BPI_CharaAction_C.SetState
// 0x0004 (0x0004 - 0x0000)
struct BPI_CharaAction_C_SetState final
{
public:
	int32                                         State;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CharaAction_C_SetState) == 0x000004, "Wrong alignment on BPI_CharaAction_C_SetState");
static_assert(sizeof(BPI_CharaAction_C_SetState) == 0x000004, "Wrong size on BPI_CharaAction_C_SetState");
static_assert(offsetof(BPI_CharaAction_C_SetState, State) == 0x000000, "Member 'BPI_CharaAction_C_SetState::State' has a wrong offset!");

// Function BPI_CharaAction.BPI_CharaAction_C.ResetState
// 0x0004 (0x0004 - 0x0000)
struct BPI_CharaAction_C_ResetState final
{
public:
	int32                                         State;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CharaAction_C_ResetState) == 0x000004, "Wrong alignment on BPI_CharaAction_C_ResetState");
static_assert(sizeof(BPI_CharaAction_C_ResetState) == 0x000004, "Wrong size on BPI_CharaAction_C_ResetState");
static_assert(offsetof(BPI_CharaAction_C_ResetState, State) == 0x000000, "Member 'BPI_CharaAction_C_ResetState::State' has a wrong offset!");

// Function BPI_CharaAction.BPI_CharaAction_C.KnockBack
// 0x0004 (0x0004 - 0x0000)
struct BPI_CharaAction_C_KnockBack final
{
public:
	float                                         Distance;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CharaAction_C_KnockBack) == 0x000004, "Wrong alignment on BPI_CharaAction_C_KnockBack");
static_assert(sizeof(BPI_CharaAction_C_KnockBack) == 0x000004, "Wrong size on BPI_CharaAction_C_KnockBack");
static_assert(offsetof(BPI_CharaAction_C_KnockBack, Distance) == 0x000000, "Member 'BPI_CharaAction_C_KnockBack::Distance' has a wrong offset!");

// Function BPI_CharaAction.BPI_CharaAction_C.SummonAction
// 0x0008 (0x0008 - 0x0000)
struct BPI_CharaAction_C_SummonAction final
{
public:
	int32                                         CurrentStatus;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Immediately;                                       // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsInstantEvent;                                    // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsInBattle;                                        // 0x0006(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CharaAction_C_SummonAction) == 0x000004, "Wrong alignment on BPI_CharaAction_C_SummonAction");
static_assert(sizeof(BPI_CharaAction_C_SummonAction) == 0x000008, "Wrong size on BPI_CharaAction_C_SummonAction");
static_assert(offsetof(BPI_CharaAction_C_SummonAction, CurrentStatus) == 0x000000, "Member 'BPI_CharaAction_C_SummonAction::CurrentStatus' has a wrong offset!");
static_assert(offsetof(BPI_CharaAction_C_SummonAction, Immediately) == 0x000004, "Member 'BPI_CharaAction_C_SummonAction::Immediately' has a wrong offset!");
static_assert(offsetof(BPI_CharaAction_C_SummonAction, IsInstantEvent) == 0x000005, "Member 'BPI_CharaAction_C_SummonAction::IsInstantEvent' has a wrong offset!");
static_assert(offsetof(BPI_CharaAction_C_SummonAction, IsInBattle) == 0x000006, "Member 'BPI_CharaAction_C_SummonAction::IsInBattle' has a wrong offset!");

// Function BPI_CharaAction.BPI_CharaAction_C.ReturnAction
// 0x0008 (0x0008 - 0x0000)
struct BPI_CharaAction_C_ReturnAction final
{
public:
	float                                         PlayRate;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInstantEvent;                                    // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CharaAction_C_ReturnAction) == 0x000004, "Wrong alignment on BPI_CharaAction_C_ReturnAction");
static_assert(sizeof(BPI_CharaAction_C_ReturnAction) == 0x000008, "Wrong size on BPI_CharaAction_C_ReturnAction");
static_assert(offsetof(BPI_CharaAction_C_ReturnAction, PlayRate) == 0x000000, "Member 'BPI_CharaAction_C_ReturnAction::PlayRate' has a wrong offset!");
static_assert(offsetof(BPI_CharaAction_C_ReturnAction, IsInstantEvent) == 0x000004, "Member 'BPI_CharaAction_C_ReturnAction::IsInstantEvent' has a wrong offset!");

// Function BPI_CharaAction.BPI_CharaAction_C.SetCharaPlayRate
// 0x0004 (0x0004 - 0x0000)
struct BPI_CharaAction_C_SetCharaPlayRate final
{
public:
	float                                         CharaPlayRate;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CharaAction_C_SetCharaPlayRate) == 0x000004, "Wrong alignment on BPI_CharaAction_C_SetCharaPlayRate");
static_assert(sizeof(BPI_CharaAction_C_SetCharaPlayRate) == 0x000004, "Wrong size on BPI_CharaAction_C_SetCharaPlayRate");
static_assert(offsetof(BPI_CharaAction_C_SetCharaPlayRate, CharaPlayRate) == 0x000000, "Member 'BPI_CharaAction_C_SetCharaPlayRate::CharaPlayRate' has a wrong offset!");

// Function BPI_CharaAction.BPI_CharaAction_C.SpawnAction
// 0x0002 (0x0002 - 0x0000)
struct BPI_CharaAction_C_SpawnAction final
{
public:
	bool                                          PlayMotion;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsInstantEvent;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CharaAction_C_SpawnAction) == 0x000001, "Wrong alignment on BPI_CharaAction_C_SpawnAction");
static_assert(sizeof(BPI_CharaAction_C_SpawnAction) == 0x000002, "Wrong size on BPI_CharaAction_C_SpawnAction");
static_assert(offsetof(BPI_CharaAction_C_SpawnAction, PlayMotion) == 0x000000, "Member 'BPI_CharaAction_C_SpawnAction::PlayMotion' has a wrong offset!");
static_assert(offsetof(BPI_CharaAction_C_SpawnAction, IsInstantEvent) == 0x000001, "Member 'BPI_CharaAction_C_SpawnAction::IsInstantEvent' has a wrong offset!");

// Function BPI_CharaAction.BPI_CharaAction_C.SetAttackAimLocation
// 0x0010 (0x0010 - 0x0000)
struct BPI_CharaAction_C_SetAttackAimLocation final
{
public:
	struct FVector                                GrobalLocation;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CharaAction_C_SetAttackAimLocation) == 0x000004, "Wrong alignment on BPI_CharaAction_C_SetAttackAimLocation");
static_assert(sizeof(BPI_CharaAction_C_SetAttackAimLocation) == 0x000010, "Wrong size on BPI_CharaAction_C_SetAttackAimLocation");
static_assert(offsetof(BPI_CharaAction_C_SetAttackAimLocation, GrobalLocation) == 0x000000, "Member 'BPI_CharaAction_C_SetAttackAimLocation::GrobalLocation' has a wrong offset!");
static_assert(offsetof(BPI_CharaAction_C_SetAttackAimLocation, NoUse) == 0x00000C, "Member 'BPI_CharaAction_C_SetAttackAimLocation::NoUse' has a wrong offset!");

// Function BPI_CharaAction.BPI_CharaAction_C.RapidSummonAction
// 0x0008 (0x0008 - 0x0000)
struct BPI_CharaAction_C_RapidSummonAction final
{
public:
	int32                                         CurrentStatus;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Immediately;                                       // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CharaAction_C_RapidSummonAction) == 0x000004, "Wrong alignment on BPI_CharaAction_C_RapidSummonAction");
static_assert(sizeof(BPI_CharaAction_C_RapidSummonAction) == 0x000008, "Wrong size on BPI_CharaAction_C_RapidSummonAction");
static_assert(offsetof(BPI_CharaAction_C_RapidSummonAction, CurrentStatus) == 0x000000, "Member 'BPI_CharaAction_C_RapidSummonAction::CurrentStatus' has a wrong offset!");
static_assert(offsetof(BPI_CharaAction_C_RapidSummonAction, Immediately) == 0x000004, "Member 'BPI_CharaAction_C_RapidSummonAction::Immediately' has a wrong offset!");

// Function BPI_CharaAction.BPI_CharaAction_C.SetAuraMaterial
// 0x0004 (0x0004 - 0x0000)
struct BPI_CharaAction_C_SetAuraMaterial final
{
public:
	int32                                         AuraBit;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CharaAction_C_SetAuraMaterial) == 0x000004, "Wrong alignment on BPI_CharaAction_C_SetAuraMaterial");
static_assert(sizeof(BPI_CharaAction_C_SetAuraMaterial) == 0x000004, "Wrong size on BPI_CharaAction_C_SetAuraMaterial");
static_assert(offsetof(BPI_CharaAction_C_SetAuraMaterial, AuraBit) == 0x000000, "Member 'BPI_CharaAction_C_SetAuraMaterial::AuraBit' has a wrong offset!");

// Function BPI_CharaAction.BPI_CharaAction_C.BI_PlayMapAction
// 0x0002 (0x0002 - 0x0000)
struct BPI_CharaAction_C_BI_PlayMapAction final
{
public:
	E_MapAction_Pla603                            Action;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanUse;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CharaAction_C_BI_PlayMapAction) == 0x000001, "Wrong alignment on BPI_CharaAction_C_BI_PlayMapAction");
static_assert(sizeof(BPI_CharaAction_C_BI_PlayMapAction) == 0x000002, "Wrong size on BPI_CharaAction_C_BI_PlayMapAction");
static_assert(offsetof(BPI_CharaAction_C_BI_PlayMapAction, Action) == 0x000000, "Member 'BPI_CharaAction_C_BI_PlayMapAction::Action' has a wrong offset!");
static_assert(offsetof(BPI_CharaAction_C_BI_PlayMapAction, CanUse) == 0x000001, "Member 'BPI_CharaAction_C_BI_PlayMapAction::CanUse' has a wrong offset!");

// Function BPI_CharaAction.BPI_CharaAction_C.BI_EndMapAction
// 0x0001 (0x0001 - 0x0000)
struct BPI_CharaAction_C_BI_EndMapAction final
{
public:
	bool                                          CanUse;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CharaAction_C_BI_EndMapAction) == 0x000001, "Wrong alignment on BPI_CharaAction_C_BI_EndMapAction");
static_assert(sizeof(BPI_CharaAction_C_BI_EndMapAction) == 0x000001, "Wrong size on BPI_CharaAction_C_BI_EndMapAction");
static_assert(offsetof(BPI_CharaAction_C_BI_EndMapAction, CanUse) == 0x000000, "Member 'BPI_CharaAction_C_BI_EndMapAction::CanUse' has a wrong offset!");

// Function BPI_CharaAction.BPI_CharaAction_C.BI_IsMapActionPlaying
// 0x0001 (0x0001 - 0x0000)
struct BPI_CharaAction_C_BI_IsMapActionPlaying final
{
public:
	bool                                          IsPlaying;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CharaAction_C_BI_IsMapActionPlaying) == 0x000001, "Wrong alignment on BPI_CharaAction_C_BI_IsMapActionPlaying");
static_assert(sizeof(BPI_CharaAction_C_BI_IsMapActionPlaying) == 0x000001, "Wrong size on BPI_CharaAction_C_BI_IsMapActionPlaying");
static_assert(offsetof(BPI_CharaAction_C_BI_IsMapActionPlaying, IsPlaying) == 0x000000, "Member 'BPI_CharaAction_C_BI_IsMapActionPlaying::IsPlaying' has a wrong offset!");

}
