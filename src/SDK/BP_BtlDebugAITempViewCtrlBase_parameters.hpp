#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlDebugAITempViewCtrlBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_BtlDebugAITempViewCtrlBase.BP_BtlDebugAITempViewCtrlBase_C.ExecuteUbergraph_BP_BtlDebugAITempViewCtrlBase
// 0x0008 (0x0008 - 0x0000)
struct BP_BtlDebugAITempViewCtrlBase_C_ExecuteUbergraph_BP_BtlDebugAITempViewCtrlBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Init_retValue;                            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlDebugAITempViewCtrlBase_C_ExecuteUbergraph_BP_BtlDebugAITempViewCtrlBase) == 0x000004, "Wrong alignment on BP_BtlDebugAITempViewCtrlBase_C_ExecuteUbergraph_BP_BtlDebugAITempViewCtrlBase");
static_assert(sizeof(BP_BtlDebugAITempViewCtrlBase_C_ExecuteUbergraph_BP_BtlDebugAITempViewCtrlBase) == 0x000008, "Wrong size on BP_BtlDebugAITempViewCtrlBase_C_ExecuteUbergraph_BP_BtlDebugAITempViewCtrlBase");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_ExecuteUbergraph_BP_BtlDebugAITempViewCtrlBase, EntryPoint) == 0x000000, "Member 'BP_BtlDebugAITempViewCtrlBase_C_ExecuteUbergraph_BP_BtlDebugAITempViewCtrlBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_ExecuteUbergraph_BP_BtlDebugAITempViewCtrlBase, CallFunc_Init_retValue) == 0x000004, "Member 'BP_BtlDebugAITempViewCtrlBase_C_ExecuteUbergraph_BP_BtlDebugAITempViewCtrlBase::CallFunc_Init_retValue' has a wrong offset!");

// Function BP_BtlDebugAITempViewCtrlBase.BP_BtlDebugAITempViewCtrlBase_C.Init
// 0x0001 (0x0001 - 0x0000)
struct BP_BtlDebugAITempViewCtrlBase_C_Init final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlDebugAITempViewCtrlBase_C_Init) == 0x000001, "Wrong alignment on BP_BtlDebugAITempViewCtrlBase_C_Init");
static_assert(sizeof(BP_BtlDebugAITempViewCtrlBase_C_Init) == 0x000001, "Wrong size on BP_BtlDebugAITempViewCtrlBase_C_Init");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_Init, RetValue) == 0x000000, "Member 'BP_BtlDebugAITempViewCtrlBase_C_Init::RetValue' has a wrong offset!");

// Function BP_BtlDebugAITempViewCtrlBase.BP_BtlDebugAITempViewCtrlBase_C.BPI_ChangeViewUI
// 0x0002 (0x0002 - 0x0000)
struct BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewUI final
{
public:
	bool                                          IsOn;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetValue;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewUI) == 0x000001, "Wrong alignment on BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewUI");
static_assert(sizeof(BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewUI) == 0x000002, "Wrong size on BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewUI");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewUI, IsOn) == 0x000000, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewUI::IsOn' has a wrong offset!");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewUI, RetValue) == 0x000001, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewUI::RetValue' has a wrong offset!");

// Function BP_BtlDebugAITempViewCtrlBase.BP_BtlDebugAITempViewCtrlBase_C.BPI_RegisterDebugFlagData
// 0x0030 (0x0030 - 0x0000)
struct BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugFlagData final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_558D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DispName;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Comment;                                           // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          RetValue;                                          // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugFlagData) == 0x000008, "Wrong alignment on BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugFlagData");
static_assert(sizeof(BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugFlagData) == 0x000030, "Wrong size on BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugFlagData");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugFlagData, Param_Index) == 0x000000, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugFlagData::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugFlagData, DispName) == 0x000008, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugFlagData::DispName' has a wrong offset!");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugFlagData, Comment) == 0x000018, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugFlagData::Comment' has a wrong offset!");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugFlagData, RetValue) == 0x000028, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugFlagData::RetValue' has a wrong offset!");

// Function BP_BtlDebugAITempViewCtrlBase.BP_BtlDebugAITempViewCtrlBase_C.BPI_RegisterDebugValueData
// 0x0030 (0x0030 - 0x0000)
struct BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugValueData final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_558E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DispName;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Comment;                                           // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          RetValue;                                          // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugValueData) == 0x000008, "Wrong alignment on BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugValueData");
static_assert(sizeof(BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugValueData) == 0x000030, "Wrong size on BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugValueData");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugValueData, Param_Index) == 0x000000, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugValueData::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugValueData, DispName) == 0x000008, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugValueData::DispName' has a wrong offset!");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugValueData, Comment) == 0x000018, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugValueData::Comment' has a wrong offset!");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugValueData, RetValue) == 0x000028, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_RegisterDebugValueData::RetValue' has a wrong offset!");

// Function BP_BtlDebugAITempViewCtrlBase.BP_BtlDebugAITempViewCtrlBase_C.BPI_ChangeCommentView
// 0x0002 (0x0002 - 0x0000)
struct BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeCommentView final
{
public:
	bool                                          IsOn;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetValue;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeCommentView) == 0x000001, "Wrong alignment on BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeCommentView");
static_assert(sizeof(BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeCommentView) == 0x000002, "Wrong size on BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeCommentView");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeCommentView, IsOn) == 0x000000, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeCommentView::IsOn' has a wrong offset!");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeCommentView, RetValue) == 0x000001, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeCommentView::RetValue' has a wrong offset!");

// Function BP_BtlDebugAITempViewCtrlBase.BP_BtlDebugAITempViewCtrlBase_C.BPI_ChangeViewType_RegisterOnly
// 0x0002 (0x0002 - 0x0000)
struct BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewType_RegisterOnly final
{
public:
	bool                                          IsOn;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetValue;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewType_RegisterOnly) == 0x000001, "Wrong alignment on BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewType_RegisterOnly");
static_assert(sizeof(BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewType_RegisterOnly) == 0x000002, "Wrong size on BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewType_RegisterOnly");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewType_RegisterOnly, IsOn) == 0x000000, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewType_RegisterOnly::IsOn' has a wrong offset!");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewType_RegisterOnly, RetValue) == 0x000001, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_ChangeViewType_RegisterOnly::RetValue' has a wrong offset!");

// Function BP_BtlDebugAITempViewCtrlBase.BP_BtlDebugAITempViewCtrlBase_C.BPI_SetUIPosition
// 0x000C (0x000C - 0x0000)
struct BP_BtlDebugAITempViewCtrlBase_C_BPI_SetUIPosition final
{
public:
	int32                                         PosX;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PosY;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RetValue;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlDebugAITempViewCtrlBase_C_BPI_SetUIPosition) == 0x000004, "Wrong alignment on BP_BtlDebugAITempViewCtrlBase_C_BPI_SetUIPosition");
static_assert(sizeof(BP_BtlDebugAITempViewCtrlBase_C_BPI_SetUIPosition) == 0x00000C, "Wrong size on BP_BtlDebugAITempViewCtrlBase_C_BPI_SetUIPosition");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_SetUIPosition, PosX) == 0x000000, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_SetUIPosition::PosX' has a wrong offset!");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_SetUIPosition, PosY) == 0x000004, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_SetUIPosition::PosY' has a wrong offset!");
static_assert(offsetof(BP_BtlDebugAITempViewCtrlBase_C_BPI_SetUIPosition, RetValue) == 0x000008, "Member 'BP_BtlDebugAITempViewCtrlBase_C_BPI_SetUIPosition::RetValue' has a wrong offset!");

}

