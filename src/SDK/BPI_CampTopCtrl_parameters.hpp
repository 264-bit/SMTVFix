#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CampTopCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_CampTopCtrl.BPI_CampTopCtrl_C.ICampTopIsReturnTitle
// 0x0001 (0x0001 - 0x0000)
struct BPI_CampTopCtrl_C_ICampTopIsReturnTitle final
{
public:
	bool                                          OutReturnTitle;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CampTopCtrl_C_ICampTopIsReturnTitle) == 0x000001, "Wrong alignment on BPI_CampTopCtrl_C_ICampTopIsReturnTitle");
static_assert(sizeof(BPI_CampTopCtrl_C_ICampTopIsReturnTitle) == 0x000001, "Wrong size on BPI_CampTopCtrl_C_ICampTopIsReturnTitle");
static_assert(offsetof(BPI_CampTopCtrl_C_ICampTopIsReturnTitle, OutReturnTitle) == 0x000000, "Member 'BPI_CampTopCtrl_C_ICampTopIsReturnTitle::OutReturnTitle' has a wrong offset!");

// Function BPI_CampTopCtrl.BPI_CampTopCtrl_C.ICampTopSetUIMovieCtrl
// 0x0008 (0x0008 - 0x0000)
struct BPI_CampTopCtrl_C_ICampTopSetUIMovieCtrl final
{
public:
	const class UObject*                          UIMovieCtrl;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CampTopCtrl_C_ICampTopSetUIMovieCtrl) == 0x000008, "Wrong alignment on BPI_CampTopCtrl_C_ICampTopSetUIMovieCtrl");
static_assert(sizeof(BPI_CampTopCtrl_C_ICampTopSetUIMovieCtrl) == 0x000008, "Wrong size on BPI_CampTopCtrl_C_ICampTopSetUIMovieCtrl");
static_assert(offsetof(BPI_CampTopCtrl_C_ICampTopSetUIMovieCtrl, UIMovieCtrl) == 0x000000, "Member 'BPI_CampTopCtrl_C_ICampTopSetUIMovieCtrl::UIMovieCtrl' has a wrong offset!");

// Function BPI_CampTopCtrl.BPI_CampTopCtrl_C.ICampTopGetUsedPillar
// 0x0001 (0x0001 - 0x0000)
struct BPI_CampTopCtrl_C_ICampTopGetUsedPillar final
{
public:
	bool                                          OutParam;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CampTopCtrl_C_ICampTopGetUsedPillar) == 0x000001, "Wrong alignment on BPI_CampTopCtrl_C_ICampTopGetUsedPillar");
static_assert(sizeof(BPI_CampTopCtrl_C_ICampTopGetUsedPillar) == 0x000001, "Wrong size on BPI_CampTopCtrl_C_ICampTopGetUsedPillar");
static_assert(offsetof(BPI_CampTopCtrl_C_ICampTopGetUsedPillar, OutParam) == 0x000000, "Member 'BPI_CampTopCtrl_C_ICampTopGetUsedPillar::OutParam' has a wrong offset!");

// Function BPI_CampTopCtrl.BPI_CampTopCtrl_C.ICampTopIsFinished
// 0x0001 (0x0001 - 0x0000)
struct BPI_CampTopCtrl_C_ICampTopIsFinished final
{
public:
	bool                                          OutFinished;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CampTopCtrl_C_ICampTopIsFinished) == 0x000001, "Wrong alignment on BPI_CampTopCtrl_C_ICampTopIsFinished");
static_assert(sizeof(BPI_CampTopCtrl_C_ICampTopIsFinished) == 0x000001, "Wrong size on BPI_CampTopCtrl_C_ICampTopIsFinished");
static_assert(offsetof(BPI_CampTopCtrl_C_ICampTopIsFinished, OutFinished) == 0x000000, "Member 'BPI_CampTopCtrl_C_ICampTopIsFinished::OutFinished' has a wrong offset!");

// Function BPI_CampTopCtrl.BPI_CampTopCtrl_C.ICampTopCreate
// 0x0001 (0x0001 - 0x0000)
struct BPI_CampTopCtrl_C_ICampTopCreate final
{
public:
	E_WIDGET_PRIO                                 InPrio;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CampTopCtrl_C_ICampTopCreate) == 0x000001, "Wrong alignment on BPI_CampTopCtrl_C_ICampTopCreate");
static_assert(sizeof(BPI_CampTopCtrl_C_ICampTopCreate) == 0x000001, "Wrong size on BPI_CampTopCtrl_C_ICampTopCreate");
static_assert(offsetof(BPI_CampTopCtrl_C_ICampTopCreate, InPrio) == 0x000000, "Member 'BPI_CampTopCtrl_C_ICampTopCreate::InPrio' has a wrong offset!");

}
