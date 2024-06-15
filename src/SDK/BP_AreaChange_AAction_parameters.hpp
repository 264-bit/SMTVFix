#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AreaChange_AAction

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_AreaChange_AAction.BP_AreaChange_AAction_C.ExecuteUbergraph_BP_AreaChange_AAction
// 0x0108 (0x0108 - 0x0000)
struct BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEventHitPaused_Paused;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_900F[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9010[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetMapCommon_rerutn;                      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MapCommon_C>      K2Node_DynamicCast_AsBPI_Map_Common;               // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9011[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMinimapManager*                        CallFunc_GetMinimapManager_ReturnValue;            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMapID_ReturnValue;                     // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAreaID_ReturnValue;                    // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProjectGameMode_C*                     K2Node_DynamicCast_AsProject_Game_Mode;            // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9012[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSaveUniqueIdFromDataId_ReturnValue;    // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerPawnEventTrigger_C*           CallFunc_GetEventTrigger_EventTrigger;             // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction) == 0x000008, "Wrong alignment on BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction");
static_assert(sizeof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction) == 0x000108, "Wrong size on BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, EntryPoint) == 0x000000, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, CallFunc_IsEventHitPaused_Paused) == 0x000004, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::CallFunc_IsEventHitPaused_Paused' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, CallFunc_GetMapCommon_rerutn) == 0x0000B0, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::CallFunc_GetMapCommon_rerutn' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, K2Node_DynamicCast_AsBPI_Map_Common) == 0x0000B8, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::K2Node_DynamicCast_AsBPI_Map_Common' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, CallFunc_GetMinimapManager_ReturnValue) == 0x0000D0, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::CallFunc_GetMinimapManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, CallFunc_GetMapID_ReturnValue) == 0x0000D8, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::CallFunc_GetMapID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, CallFunc_GetAreaID_ReturnValue) == 0x0000DC, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::CallFunc_GetAreaID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, CallFunc_GetGameMode_ReturnValue) == 0x0000E0, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, K2Node_DynamicCast_AsProject_Game_Mode) == 0x0000E8, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::K2Node_DynamicCast_AsProject_Game_Mode' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, K2Node_DynamicCast_bSuccess_1) == 0x0000F0, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, CallFunc_GetSaveUniqueIdFromDataId_ReturnValue) == 0x0000F4, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::CallFunc_GetSaveUniqueIdFromDataId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, CallFunc_GetEventTrigger_EventTrigger) == 0x0000F8, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::CallFunc_GetEventTrigger_EventTrigger' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000100, "Member 'BP_AreaChange_AAction_C_ExecuteUbergraph_BP_AreaChange_AAction::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_AreaChange_AAction.BP_AreaChange_AAction_C.BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9013[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_AreaChange_AAction_C_BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_AreaChange_AAction.BP_AreaChange_AAction_C.SetMinimapIconTableRow
// 0x00C8 (0x00C8 - 0x0000)
struct BP_AreaChange_AAction_C_SetMinimapIconTableRow final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9014[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMinimapIconTableRow                   OutRow;                                            // 0x0008(0x0058)(Parm, OutParm)
	bool                                          NeedToAddMore;                                     // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9015[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMinimapIconTableRow                   CallFunc_SetMinimapIconTableRowFromHelperLocation_OutRow; // 0x0070(0x0058)()
};
static_assert(alignof(BP_AreaChange_AAction_C_SetMinimapIconTableRow) == 0x000008, "Wrong alignment on BP_AreaChange_AAction_C_SetMinimapIconTableRow");
static_assert(sizeof(BP_AreaChange_AAction_C_SetMinimapIconTableRow) == 0x0000C8, "Wrong size on BP_AreaChange_AAction_C_SetMinimapIconTableRow");
static_assert(offsetof(BP_AreaChange_AAction_C_SetMinimapIconTableRow, Param_Index) == 0x000000, "Member 'BP_AreaChange_AAction_C_SetMinimapIconTableRow::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_SetMinimapIconTableRow, OutRow) == 0x000008, "Member 'BP_AreaChange_AAction_C_SetMinimapIconTableRow::OutRow' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_SetMinimapIconTableRow, NeedToAddMore) == 0x000060, "Member 'BP_AreaChange_AAction_C_SetMinimapIconTableRow::NeedToAddMore' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_SetMinimapIconTableRow, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000064, "Member 'BP_AreaChange_AAction_C_SetMinimapIconTableRow::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_SetMinimapIconTableRow, CallFunc_SetMinimapIconTableRowFromHelperLocation_OutRow) == 0x000070, "Member 'BP_AreaChange_AAction_C_SetMinimapIconTableRow::CallFunc_SetMinimapIconTableRowFromHelperLocation_OutRow' has a wrong offset!");

// Function BP_AreaChange_AAction.BP_AreaChange_AAction_C.BPI_SetDataId
// 0x0048 (0x0048 - 0x0000)
struct BP_AreaChange_AAction_C_BPI_SetDataId final
{
public:
	int32                                         DataId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dummy;                                             // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9016[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AreaChange_AAction_C_BPI_SetDataId) == 0x000008, "Wrong alignment on BP_AreaChange_AAction_C_BPI_SetDataId");
static_assert(sizeof(BP_AreaChange_AAction_C_BPI_SetDataId) == 0x000048, "Wrong size on BP_AreaChange_AAction_C_BPI_SetDataId");
static_assert(offsetof(BP_AreaChange_AAction_C_BPI_SetDataId, DataId) == 0x000000, "Member 'BP_AreaChange_AAction_C_BPI_SetDataId::DataId' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_BPI_SetDataId, Dummy) == 0x000004, "Member 'BP_AreaChange_AAction_C_BPI_SetDataId::Dummy' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_BPI_SetDataId, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'BP_AreaChange_AAction_C_BPI_SetDataId::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_BPI_SetDataId, CallFunc_GetDisplayName_ReturnValue) == 0x000018, "Member 'BP_AreaChange_AAction_C_BPI_SetDataId::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_BPI_SetDataId, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'BP_AreaChange_AAction_C_BPI_SetDataId::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AreaChange_AAction_C_BPI_SetDataId, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'BP_AreaChange_AAction_C_BPI_SetDataId::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

}

