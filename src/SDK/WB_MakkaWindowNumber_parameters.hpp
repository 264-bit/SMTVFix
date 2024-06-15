#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MakkaWindowNumber

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_MakkaWindowNumber.WB_MakkaWindowNumber_C.ExecuteUbergraph_WB_MakkaWindowNumber
// 0x0008 (0x0008 - 0x0000)
struct WB_MakkaWindowNumber_C_ExecuteUbergraph_WB_MakkaWindowNumber final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MakkaWindowNumber_C_ExecuteUbergraph_WB_MakkaWindowNumber) == 0x000004, "Wrong alignment on WB_MakkaWindowNumber_C_ExecuteUbergraph_WB_MakkaWindowNumber");
static_assert(sizeof(WB_MakkaWindowNumber_C_ExecuteUbergraph_WB_MakkaWindowNumber) == 0x000008, "Wrong size on WB_MakkaWindowNumber_C_ExecuteUbergraph_WB_MakkaWindowNumber");
static_assert(offsetof(WB_MakkaWindowNumber_C_ExecuteUbergraph_WB_MakkaWindowNumber, EntryPoint) == 0x000000, "Member 'WB_MakkaWindowNumber_C_ExecuteUbergraph_WB_MakkaWindowNumber::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_ExecuteUbergraph_WB_MakkaWindowNumber, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WB_MakkaWindowNumber_C_ExecuteUbergraph_WB_MakkaWindowNumber::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WB_MakkaWindowNumber.WB_MakkaWindowNumber_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_MakkaWindowNumber_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MakkaWindowNumber_C_PreConstruct) == 0x000001, "Wrong alignment on WB_MakkaWindowNumber_C_PreConstruct");
static_assert(sizeof(WB_MakkaWindowNumber_C_PreConstruct) == 0x000001, "Wrong size on WB_MakkaWindowNumber_C_PreConstruct");
static_assert(offsetof(WB_MakkaWindowNumber_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_MakkaWindowNumber_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_MakkaWindowNumber.WB_MakkaWindowNumber_C.Init
// 0x0078 (0x0078 - 0x0000)
struct WB_MakkaWindowNumber_C_Init final
{
public:
	int32                                         _SignNum;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F9F[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA0[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FA1[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_SpawnObject_ReturnValue;                  // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MakkaWindowNumber_C_Init) == 0x000008, "Wrong alignment on WB_MakkaWindowNumber_C_Init");
static_assert(sizeof(WB_MakkaWindowNumber_C_Init) == 0x000078, "Wrong size on WB_MakkaWindowNumber_C_Init");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, _SignNum) == 0x000000, "Member 'WB_MakkaWindowNumber_C_Init::_SignNum' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, Temp_int_Variable) == 0x000004, "Member 'WB_MakkaWindowNumber_C_Init::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WB_MakkaWindowNumber_C_Init::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000010, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_MakeVector2D_ReturnValue) == 0x000014, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'WB_MakkaWindowNumber_C_Init::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_Array_Get_Item) == 0x000020, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000030, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_AddChild_ReturnValue) == 0x000040, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_Subtract_IntInt_ReturnValue) == 0x00004C, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_Divide_IntInt_ReturnValue) == 0x000050, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_SpawnObject_ReturnValue) == 0x000058, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_Add_IntInt_ReturnValue_2) == 0x000060, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_Array_Add_ReturnValue) == 0x000064, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_Add_IntInt_ReturnValue_3) == 0x000068, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00006C, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_Init, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000070, "Member 'WB_MakkaWindowNumber_C_Init::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WB_MakkaWindowNumber.WB_MakkaWindowNumber_C.SetNumber
// 0x0138 (0x0138 - 0x0000)
struct WB_MakkaWindowNumber_C_SetNumber final
{
public:
	int32                                         InNumber;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           L_NumberColor;                                     // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_LoopIdx;                                         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_CommaNum;                                        // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_NewNumAbs;                                       // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 L_NowDigitImg;                                     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_DigitLength;                                     // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_2;                   // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetDigitLength_ReturnValue;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA2[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA3[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA4[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FA5[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item_1;                         // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA6[0x2];                                     // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_Array_Get_Item_2;                         // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA7[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FA8[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item_3;                         // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FA9[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_3;         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_3;                   // 0x011C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MakkaWindowNumber_C_SetNumber) == 0x000008, "Wrong alignment on WB_MakkaWindowNumber_C_SetNumber");
static_assert(sizeof(WB_MakkaWindowNumber_C_SetNumber) == 0x000138, "Wrong size on WB_MakkaWindowNumber_C_SetNumber");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, InNumber) == 0x000000, "Member 'WB_MakkaWindowNumber_C_SetNumber::InNumber' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, L_NumberColor) == 0x000004, "Member 'WB_MakkaWindowNumber_C_SetNumber::L_NumberColor' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, L_LoopIdx) == 0x000014, "Member 'WB_MakkaWindowNumber_C_SetNumber::L_LoopIdx' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, L_CommaNum) == 0x000018, "Member 'WB_MakkaWindowNumber_C_SetNumber::L_CommaNum' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, L_NewNumAbs) == 0x00001C, "Member 'WB_MakkaWindowNumber_C_SetNumber::L_NewNumAbs' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, L_NowDigitImg) == 0x000020, "Member 'WB_MakkaWindowNumber_C_SetNumber::L_NowDigitImg' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, L_DigitLength) == 0x000028, "Member 'WB_MakkaWindowNumber_C_SetNumber::L_DigitLength' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, Temp_int_Variable) == 0x00002C, "Member 'WB_MakkaWindowNumber_C_SetNumber::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, K2Node_MakeStruct_LinearColor) == 0x000030, "Member 'WB_MakkaWindowNumber_C_SetNumber::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, K2Node_MakeStruct_LinearColor_1) == 0x000044, "Member 'WB_MakkaWindowNumber_C_SetNumber::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, K2Node_MakeStruct_LinearColor_2) == 0x000054, "Member 'WB_MakkaWindowNumber_C_SetNumber::K2Node_MakeStruct_LinearColor_2' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_GetDigitLength_ReturnValue) == 0x000064, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_GetDigitLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Subtract_IntInt_ReturnValue) == 0x000068, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, Temp_int_Variable_1) == 0x000070, "Member 'WB_MakkaWindowNumber_C_SetNumber::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Greater_IntInt_ReturnValue) == 0x000074, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Add_IntInt_ReturnValue_1) == 0x000078, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Array_Get_Item) == 0x000080, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Array_Length_ReturnValue_1) == 0x000088, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Less_IntInt_ReturnValue_1) == 0x00008C, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000090, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000098, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000A0, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Array_LastIndex_ReturnValue) == 0x0000A4, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000A8, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Array_Get_Item_1) == 0x0000B0, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000B8, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000B9, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Array_LastIndex_ReturnValue_1) == 0x0000BC, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, Temp_int_Variable_2) == 0x0000C0, "Member 'WB_MakkaWindowNumber_C_SetNumber::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Clamp_ReturnValue) == 0x0000C4, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000C8, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Abs_Int_ReturnValue) == 0x0000CC, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Array_Get_Item_2) == 0x0000D0, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Less_IntInt_ReturnValue_3) == 0x0000D8, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x0000E0, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Add_IntInt_ReturnValue_4) == 0x0000E8, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Percent_IntInt_ReturnValue) == 0x0000EC, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0000F0, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000F4, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Array_Get_Item_3) == 0x0000F8, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Divide_IntInt_ReturnValue) == 0x000100, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000104, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Percent_IntInt_ReturnValue_1) == 0x000108, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_GetDynamicMaterial_ReturnValue_3) == 0x000110, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_GetDynamicMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000118, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, K2Node_MakeStruct_LinearColor_3) == 0x00011C, "Member 'WB_MakkaWindowNumber_C_SetNumber::K2Node_MakeStruct_LinearColor_3' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Add_IntInt_ReturnValue_5) == 0x00012C, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x000130, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumber, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000134, "Member 'WB_MakkaWindowNumber_C_SetNumber::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WB_MakkaWindowNumber.WB_MakkaWindowNumber_C.SetNumberColor
// 0x0030 (0x0030 - 0x0000)
struct WB_MakkaWindowNumber_C_SetNumberColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FAA[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MakkaWindowNumber_C_SetNumberColor) == 0x000008, "Wrong alignment on WB_MakkaWindowNumber_C_SetNumberColor");
static_assert(sizeof(WB_MakkaWindowNumber_C_SetNumberColor) == 0x000030, "Wrong size on WB_MakkaWindowNumber_C_SetNumberColor");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumberColor, InColor) == 0x000000, "Member 'WB_MakkaWindowNumber_C_SetNumberColor::InColor' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumberColor, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WB_MakkaWindowNumber_C_SetNumberColor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumberColor, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WB_MakkaWindowNumber_C_SetNumberColor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumberColor, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WB_MakkaWindowNumber_C_SetNumberColor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumberColor, CallFunc_Array_Get_Item) == 0x000020, "Member 'WB_MakkaWindowNumber_C_SetNumberColor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumberColor, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WB_MakkaWindowNumber_C_SetNumberColor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MakkaWindowNumber_C_SetNumberColor, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'WB_MakkaWindowNumber_C_SetNumberColor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

