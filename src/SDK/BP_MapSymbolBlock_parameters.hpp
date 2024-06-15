#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapSymbolBlock

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BP_MapSymbolBlock.BP_MapSymbolBlock_C.ExecuteUbergraph_BP_MapSymbolBlock
// 0x0068 (0x0068 - 0x0000)
struct BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_BTL_END BtlEndType, int32 ChainEncountNum)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6402[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetMapCommon_rerutn;                      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MapCommon_C>      K2Node_DynamicCast_AsBPI_Map_Common;               // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6403[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BPI_GetMapGimmickTrigger_Actor;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MapGimmickTrigger_C*                K2Node_DynamicCast_AsBP_Map_Gimmick_Trigger;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_BTL_END                                     K2Node_CustomEvent_BtlEndType;                     // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6404[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ChainEncountNum;                // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCollisionProfileName_ReturnValue;      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock) == 0x000008, "Wrong alignment on BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock");
static_assert(sizeof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock) == 0x000068, "Wrong size on BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock");
static_assert(offsetof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock, EntryPoint) == 0x000000, "Member 'BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock, CallFunc_NotEqual_NameName_ReturnValue) == 0x000024, "Member 'BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock, CallFunc_GetMapCommon_rerutn) == 0x000028, "Member 'BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock::CallFunc_GetMapCommon_rerutn' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock, K2Node_DynamicCast_AsBPI_Map_Common) == 0x000030, "Member 'BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock::K2Node_DynamicCast_AsBPI_Map_Common' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock, CallFunc_BPI_GetMapGimmickTrigger_Actor) == 0x000048, "Member 'BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock::CallFunc_BPI_GetMapGimmickTrigger_Actor' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock, K2Node_DynamicCast_AsBP_Map_Gimmick_Trigger) == 0x000050, "Member 'BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock::K2Node_DynamicCast_AsBP_Map_Gimmick_Trigger' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock, K2Node_CustomEvent_BtlEndType) == 0x000059, "Member 'BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock::K2Node_CustomEvent_BtlEndType' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock, K2Node_CustomEvent_ChainEncountNum) == 0x00005C, "Member 'BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock::K2Node_CustomEvent_ChainEncountNum' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock, CallFunc_GetCollisionProfileName_ReturnValue) == 0x000060, "Member 'BP_MapSymbolBlock_C_ExecuteUbergraph_BP_MapSymbolBlock::CallFunc_GetCollisionProfileName_ReturnValue' has a wrong offset!");

// Function BP_MapSymbolBlock.BP_MapSymbolBlock_C.OnEndBattle
// 0x0008 (0x0008 - 0x0000)
struct BP_MapSymbolBlock_C_OnEndBattle final
{
public:
	E_BTL_END                                     BtlEndType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6405[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ChainEncountNum;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapSymbolBlock_C_OnEndBattle) == 0x000004, "Wrong alignment on BP_MapSymbolBlock_C_OnEndBattle");
static_assert(sizeof(BP_MapSymbolBlock_C_OnEndBattle) == 0x000008, "Wrong size on BP_MapSymbolBlock_C_OnEndBattle");
static_assert(offsetof(BP_MapSymbolBlock_C_OnEndBattle, BtlEndType) == 0x000000, "Member 'BP_MapSymbolBlock_C_OnEndBattle::BtlEndType' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_OnEndBattle, ChainEncountNum) == 0x000004, "Member 'BP_MapSymbolBlock_C_OnEndBattle::ChainEncountNum' has a wrong offset!");

// Function BP_MapSymbolBlock.BP_MapSymbolBlock_C.UserConstructionScript
// 0x0028 (0x0028 - 0x0000)
struct BP_MapSymbolBlock_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6406[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6407[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapSymbolBlock_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_MapSymbolBlock_C_UserConstructionScript");
static_assert(sizeof(BP_MapSymbolBlock_C_UserConstructionScript) == 0x000028, "Wrong size on BP_MapSymbolBlock_C_UserConstructionScript");
static_assert(offsetof(BP_MapSymbolBlock_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_MapSymbolBlock_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_UserConstructionScript, CallFunc_GetMaterial_ReturnValue) == 0x000008, "Member 'BP_MapSymbolBlock_C_UserConstructionScript::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_UserConstructionScript, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000010, "Member 'BP_MapSymbolBlock_C_UserConstructionScript::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapSymbolBlock_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000020, "Member 'BP_MapSymbolBlock_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

