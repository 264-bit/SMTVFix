#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_GameDataEdit

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPL_GameDataEdit.BPL_GameDataEdit_C.AddDebugMenu_GameDataEdit
// 0x0078 (0x0078 - 0x0000)
struct BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue;  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_551F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_DebugMenu_DispName_L10N_Text;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_DebugMenu_DispName_L10N_Text_1;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeParam_ReturnValue;    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeParam_ReturnValue_1;  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_DebugMenu_DispName_L10N_Text_2;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_DebugMenu_DispName_L10N_Text_3;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeParam_ReturnValue_2;  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1; // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_DebugMenu_DispName_L10N_Text_4;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue; // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_1; // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit) == 0x000008, "Wrong alignment on BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit");
static_assert(sizeof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit) == 0x000078, "Wrong size on BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit");
static_assert(offsetof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit, __WorldContext) == 0x000000, "Member 'BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue) == 0x000008, "Member 'BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit, CallFunc_DebugMenu_DispName_L10N_Text) == 0x000010, "Member 'BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit::CallFunc_DebugMenu_DispName_L10N_Text' has a wrong offset!");
static_assert(offsetof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit, CallFunc_DebugMenu_DispName_L10N_Text_1) == 0x000020, "Member 'BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit::CallFunc_DebugMenu_DispName_L10N_Text_1' has a wrong offset!");
static_assert(offsetof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit, CallFunc_AddDebugMenuItemTypeParam_ReturnValue) == 0x000030, "Member 'BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit::CallFunc_AddDebugMenuItemTypeParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit, CallFunc_AddDebugMenuItemTypeParam_ReturnValue_1) == 0x000034, "Member 'BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit::CallFunc_AddDebugMenuItemTypeParam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit, CallFunc_DebugMenu_DispName_L10N_Text_2) == 0x000038, "Member 'BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit::CallFunc_DebugMenu_DispName_L10N_Text_2' has a wrong offset!");
static_assert(offsetof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit, CallFunc_DebugMenu_DispName_L10N_Text_3) == 0x000048, "Member 'BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit::CallFunc_DebugMenu_DispName_L10N_Text_3' has a wrong offset!");
static_assert(offsetof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit, CallFunc_AddDebugMenuItemTypeParam_ReturnValue_2) == 0x000058, "Member 'BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit::CallFunc_AddDebugMenuItemTypeParam_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1) == 0x00005C, "Member 'BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit, CallFunc_DebugMenu_DispName_L10N_Text_4) == 0x000060, "Member 'BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit::CallFunc_DebugMenu_DispName_L10N_Text_4' has a wrong offset!");
static_assert(offsetof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit, CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue) == 0x000070, "Member 'BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit::CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit, CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_1) == 0x000074, "Member 'BPL_GameDataEdit_C_AddDebugMenu_GameDataEdit::CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_1' has a wrong offset!");

}

