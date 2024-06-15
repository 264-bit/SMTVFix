#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EsNPC_m061_31

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function esNPC_m061_31.esNPC_m061_31_C.ExecuteUbergraph_esNPC_m061_31
// 0x0018 (0x0018 - 0x0000)
struct EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34CB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Character_SpawnActor;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActive_IsActive;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_OldNewRoute                                 CallFunc_GetOldNewRoute_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_OldNewRoute                                 CallFunc_GetOldNewRoute_ReturnValue_1;             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31) == 0x000008, "Wrong alignment on EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31");
static_assert(sizeof(EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31) == 0x000018, "Wrong size on EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31");
static_assert(offsetof(EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31, EntryPoint) == 0x000000, "Member 'EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31::EntryPoint' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31, CallFunc_Character_SpawnActor) == 0x000008, "Member 'EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31::CallFunc_Character_SpawnActor' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31, CallFunc_GetActive_IsActive) == 0x000010, "Member 'EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31::CallFunc_GetActive_IsActive' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31, CallFunc_GetOldNewRoute_ReturnValue) == 0x000011, "Member 'EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31::CallFunc_GetOldNewRoute_ReturnValue' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31, CallFunc_GetOldNewRoute_ReturnValue_1) == 0x000012, "Member 'EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31::CallFunc_GetOldNewRoute_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000013, "Member 'EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000014, "Member 'EsNPC_m061_31_C_ExecuteUbergraph_esNPC_m061_31::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

}

