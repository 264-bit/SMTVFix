#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DevilEncount

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_DevilEncount.BPI_DevilEncount_C.BPI_GetSymbolComponent
// 0x0008 (0x0008 - 0x0000)
struct BPI_DevilEncount_C_BPI_GetSymbolComponent final
{
public:
	class UActorComponent*                        Component;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_DevilEncount_C_BPI_GetSymbolComponent) == 0x000008, "Wrong alignment on BPI_DevilEncount_C_BPI_GetSymbolComponent");
static_assert(sizeof(BPI_DevilEncount_C_BPI_GetSymbolComponent) == 0x000008, "Wrong size on BPI_DevilEncount_C_BPI_GetSymbolComponent");
static_assert(offsetof(BPI_DevilEncount_C_BPI_GetSymbolComponent, Component) == 0x000000, "Member 'BPI_DevilEncount_C_BPI_GetSymbolComponent::Component' has a wrong offset!");

// Function BPI_DevilEncount.BPI_DevilEncount_C.BPI_SymbolOnWater
// 0x0001 (0x0001 - 0x0000)
struct BPI_DevilEncount_C_BPI_SymbolOnWater final
{
public:
	bool                                          OnWater;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_DevilEncount_C_BPI_SymbolOnWater) == 0x000001, "Wrong alignment on BPI_DevilEncount_C_BPI_SymbolOnWater");
static_assert(sizeof(BPI_DevilEncount_C_BPI_SymbolOnWater) == 0x000001, "Wrong size on BPI_DevilEncount_C_BPI_SymbolOnWater");
static_assert(offsetof(BPI_DevilEncount_C_BPI_SymbolOnWater, OnWater) == 0x000000, "Member 'BPI_DevilEncount_C_BPI_SymbolOnWater::OnWater' has a wrong offset!");

}
