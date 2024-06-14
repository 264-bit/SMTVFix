#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_StatusSkillCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_StatusSkillCtrl.BPI_StatusSkillCtrl_C.IStatusSkillCreatePartySkillList
// 0x000C (0x000C - 0x0000)
struct BPI_StatusSkillCtrl_C_IStatusSkillCreatePartySkillList final
{
public:
	E_WIDGET_PRIO                                 InPrio;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54D6[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InNkmIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InCreate;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_StatusSkillCtrl_C_IStatusSkillCreatePartySkillList) == 0x000004, "Wrong alignment on BPI_StatusSkillCtrl_C_IStatusSkillCreatePartySkillList");
static_assert(sizeof(BPI_StatusSkillCtrl_C_IStatusSkillCreatePartySkillList) == 0x00000C, "Wrong size on BPI_StatusSkillCtrl_C_IStatusSkillCreatePartySkillList");
static_assert(offsetof(BPI_StatusSkillCtrl_C_IStatusSkillCreatePartySkillList, InPrio) == 0x000000, "Member 'BPI_StatusSkillCtrl_C_IStatusSkillCreatePartySkillList::InPrio' has a wrong offset!");
static_assert(offsetof(BPI_StatusSkillCtrl_C_IStatusSkillCreatePartySkillList, InNkmIndex) == 0x000004, "Member 'BPI_StatusSkillCtrl_C_IStatusSkillCreatePartySkillList::InNkmIndex' has a wrong offset!");
static_assert(offsetof(BPI_StatusSkillCtrl_C_IStatusSkillCreatePartySkillList, InCreate) == 0x000008, "Member 'BPI_StatusSkillCtrl_C_IStatusSkillCreatePartySkillList::InCreate' has a wrong offset!");

// Function BPI_StatusSkillCtrl.BPI_StatusSkillCtrl_C.IStatusSkillUpdatePartySkillList
// 0x0008 (0x0008 - 0x0000)
struct BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartySkillList final
{
public:
	E_WIDGET_PRIO                                 InPrio;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54D7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InNkmIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartySkillList) == 0x000004, "Wrong alignment on BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartySkillList");
static_assert(sizeof(BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartySkillList) == 0x000008, "Wrong size on BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartySkillList");
static_assert(offsetof(BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartySkillList, InPrio) == 0x000000, "Member 'BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartySkillList::InPrio' has a wrong offset!");
static_assert(offsetof(BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartySkillList, InNkmIndex) == 0x000004, "Member 'BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartySkillList::InNkmIndex' has a wrong offset!");

// Function BPI_StatusSkillCtrl.BPI_StatusSkillCtrl_C.IStatusSkillIsWaitpartyEnd
// 0x0001 (0x0001 - 0x0000)
struct BPI_StatusSkillCtrl_C_IStatusSkillIsWaitpartyEnd final
{
public:
	bool                                          OutFinished;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_StatusSkillCtrl_C_IStatusSkillIsWaitpartyEnd) == 0x000001, "Wrong alignment on BPI_StatusSkillCtrl_C_IStatusSkillIsWaitpartyEnd");
static_assert(sizeof(BPI_StatusSkillCtrl_C_IStatusSkillIsWaitpartyEnd) == 0x000001, "Wrong size on BPI_StatusSkillCtrl_C_IStatusSkillIsWaitpartyEnd");
static_assert(offsetof(BPI_StatusSkillCtrl_C_IStatusSkillIsWaitpartyEnd, OutFinished) == 0x000000, "Member 'BPI_StatusSkillCtrl_C_IStatusSkillIsWaitpartyEnd::OutFinished' has a wrong offset!");

// Function BPI_StatusSkillCtrl.BPI_StatusSkillCtrl_C.IStatusSkillIsListAnimation
// 0x0001 (0x0001 - 0x0000)
struct BPI_StatusSkillCtrl_C_IStatusSkillIsListAnimation final
{
public:
	bool                                          OutFinished;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_StatusSkillCtrl_C_IStatusSkillIsListAnimation) == 0x000001, "Wrong alignment on BPI_StatusSkillCtrl_C_IStatusSkillIsListAnimation");
static_assert(sizeof(BPI_StatusSkillCtrl_C_IStatusSkillIsListAnimation) == 0x000001, "Wrong size on BPI_StatusSkillCtrl_C_IStatusSkillIsListAnimation");
static_assert(offsetof(BPI_StatusSkillCtrl_C_IStatusSkillIsListAnimation, OutFinished) == 0x000000, "Member 'BPI_StatusSkillCtrl_C_IStatusSkillIsListAnimation::OutFinished' has a wrong offset!");

// Function BPI_StatusSkillCtrl.BPI_StatusSkillCtrl_C.IStatusSkillCreatePartyMagatsuhiSkillList
// 0x000C (0x000C - 0x0000)
struct BPI_StatusSkillCtrl_C_IStatusSkillCreatePartyMagatsuhiSkillList final
{
public:
	E_WIDGET_PRIO                                 InPrio;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54D8[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InNkmIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InCreate;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_StatusSkillCtrl_C_IStatusSkillCreatePartyMagatsuhiSkillList) == 0x000004, "Wrong alignment on BPI_StatusSkillCtrl_C_IStatusSkillCreatePartyMagatsuhiSkillList");
static_assert(sizeof(BPI_StatusSkillCtrl_C_IStatusSkillCreatePartyMagatsuhiSkillList) == 0x00000C, "Wrong size on BPI_StatusSkillCtrl_C_IStatusSkillCreatePartyMagatsuhiSkillList");
static_assert(offsetof(BPI_StatusSkillCtrl_C_IStatusSkillCreatePartyMagatsuhiSkillList, InPrio) == 0x000000, "Member 'BPI_StatusSkillCtrl_C_IStatusSkillCreatePartyMagatsuhiSkillList::InPrio' has a wrong offset!");
static_assert(offsetof(BPI_StatusSkillCtrl_C_IStatusSkillCreatePartyMagatsuhiSkillList, InNkmIndex) == 0x000004, "Member 'BPI_StatusSkillCtrl_C_IStatusSkillCreatePartyMagatsuhiSkillList::InNkmIndex' has a wrong offset!");
static_assert(offsetof(BPI_StatusSkillCtrl_C_IStatusSkillCreatePartyMagatsuhiSkillList, InCreate) == 0x000008, "Member 'BPI_StatusSkillCtrl_C_IStatusSkillCreatePartyMagatsuhiSkillList::InCreate' has a wrong offset!");

// Function BPI_StatusSkillCtrl.BPI_StatusSkillCtrl_C.IStatusSkillUpdatePartyMagatsuhiSkillList
// 0x0008 (0x0008 - 0x0000)
struct BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartyMagatsuhiSkillList final
{
public:
	E_WIDGET_PRIO                                 InPrio;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54D9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InNkmIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartyMagatsuhiSkillList) == 0x000004, "Wrong alignment on BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartyMagatsuhiSkillList");
static_assert(sizeof(BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartyMagatsuhiSkillList) == 0x000008, "Wrong size on BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartyMagatsuhiSkillList");
static_assert(offsetof(BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartyMagatsuhiSkillList, InPrio) == 0x000000, "Member 'BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartyMagatsuhiSkillList::InPrio' has a wrong offset!");
static_assert(offsetof(BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartyMagatsuhiSkillList, InNkmIndex) == 0x000004, "Member 'BPI_StatusSkillCtrl_C_IStatusSkillUpdatePartyMagatsuhiSkillList::InNkmIndex' has a wrong offset!");

}
