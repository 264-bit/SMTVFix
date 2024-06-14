#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtlUtilIcon

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_BtlUtilIcon.WB_BtlUtilIcon_C.ExecuteUbergraph_WB_BtlUtilIcon
// 0x0078 (0x0078 - 0x0000)
struct WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Delta;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B26[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_ComponentBoundEvent_AnimPackName;           // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_AnimationName;          // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_AnimPackIndex;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_AnimationIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B27[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0028(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Rate_1;                               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Immediately_1;                        // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B28[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Rate;                                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Immediately;                          // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon) == 0x000004, "Wrong alignment on WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon");
static_assert(sizeof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon) == 0x000078, "Wrong size on WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, EntryPoint) == 0x000000, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, K2Node_Event_Delta) == 0x000004, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::K2Node_Event_Delta' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, K2Node_ComponentBoundEvent_AnimPackName) == 0x00000C, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::K2Node_ComponentBoundEvent_AnimPackName' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, K2Node_ComponentBoundEvent_AnimationName) == 0x000014, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::K2Node_ComponentBoundEvent_AnimationName' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, K2Node_ComponentBoundEvent_AnimPackIndex) == 0x00001C, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::K2Node_ComponentBoundEvent_AnimPackIndex' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, K2Node_ComponentBoundEvent_AnimationIndex) == 0x000020, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::K2Node_ComponentBoundEvent_AnimationIndex' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, K2Node_SwitchInteger_CmpSuccess) == 0x000024, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, K2Node_Event_MyGeometry) == 0x000028, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, K2Node_Event_InDeltaTime) == 0x000060, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, CallFunc_Add_FloatFloat_ReturnValue) == 0x000064, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, K2Node_Event_Rate_1) == 0x000068, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::K2Node_Event_Rate_1' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, K2Node_Event_Immediately_1) == 0x00006C, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::K2Node_Event_Immediately_1' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, K2Node_Event_Rate) == 0x000070, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::K2Node_Event_Rate' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon, K2Node_Event_Immediately) == 0x000074, "Member 'WB_BtlUtilIcon_C_ExecuteUbergraph_WB_BtlUtilIcon::K2Node_Event_Immediately' has a wrong offset!");

// Function WB_BtlUtilIcon.WB_BtlUtilIcon_C.CallTick
// 0x0004 (0x0004 - 0x0000)
struct WB_BtlUtilIcon_C_CallTick final
{
public:
	float                                         Delta;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlUtilIcon_C_CallTick) == 0x000004, "Wrong alignment on WB_BtlUtilIcon_C_CallTick");
static_assert(sizeof(WB_BtlUtilIcon_C_CallTick) == 0x000004, "Wrong size on WB_BtlUtilIcon_C_CallTick");
static_assert(offsetof(WB_BtlUtilIcon_C_CallTick, Delta) == 0x000000, "Member 'WB_BtlUtilIcon_C_CallTick::Delta' has a wrong offset!");

// Function WB_BtlUtilIcon.WB_BtlUtilIcon_C.Disappear
// 0x0008 (0x0008 - 0x0000)
struct WB_BtlUtilIcon_C_Disappear final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Immediately;                                       // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlUtilIcon_C_Disappear) == 0x000004, "Wrong alignment on WB_BtlUtilIcon_C_Disappear");
static_assert(sizeof(WB_BtlUtilIcon_C_Disappear) == 0x000008, "Wrong size on WB_BtlUtilIcon_C_Disappear");
static_assert(offsetof(WB_BtlUtilIcon_C_Disappear, Rate) == 0x000000, "Member 'WB_BtlUtilIcon_C_Disappear::Rate' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_Disappear, Immediately) == 0x000004, "Member 'WB_BtlUtilIcon_C_Disappear::Immediately' has a wrong offset!");

// Function WB_BtlUtilIcon.WB_BtlUtilIcon_C.Appear
// 0x0008 (0x0008 - 0x0000)
struct WB_BtlUtilIcon_C_Appear final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Immediately;                                       // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlUtilIcon_C_Appear) == 0x000004, "Wrong alignment on WB_BtlUtilIcon_C_Appear");
static_assert(sizeof(WB_BtlUtilIcon_C_Appear) == 0x000008, "Wrong size on WB_BtlUtilIcon_C_Appear");
static_assert(offsetof(WB_BtlUtilIcon_C_Appear, Rate) == 0x000000, "Member 'WB_BtlUtilIcon_C_Appear::Rate' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_Appear, Immediately) == 0x000004, "Member 'WB_BtlUtilIcon_C_Appear::Immediately' has a wrong offset!");

// Function WB_BtlUtilIcon.WB_BtlUtilIcon_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_BtlUtilIcon_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlUtilIcon_C_Tick) == 0x000004, "Wrong alignment on WB_BtlUtilIcon_C_Tick");
static_assert(sizeof(WB_BtlUtilIcon_C_Tick) == 0x00003C, "Wrong size on WB_BtlUtilIcon_C_Tick");
static_assert(offsetof(WB_BtlUtilIcon_C_Tick, MyGeometry) == 0x000000, "Member 'WB_BtlUtilIcon_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_BtlUtilIcon_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_BtlUtilIcon.WB_BtlUtilIcon_C.BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WB_BtlUtilIcon_C_BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature final
{
public:
	class FName                                   AnimPackName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AnimationName;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimPackIndex;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimationIndex;                                    // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlUtilIcon_C_BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature) == 0x000004, "Wrong alignment on WB_BtlUtilIcon_C_BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");
static_assert(sizeof(WB_BtlUtilIcon_C_BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature) == 0x000018, "Wrong size on WB_BtlUtilIcon_C_BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");
static_assert(offsetof(WB_BtlUtilIcon_C_BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimPackName) == 0x000000, "Member 'WB_BtlUtilIcon_C_BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimPackName' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimationName) == 0x000008, "Member 'WB_BtlUtilIcon_C_BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimationName' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimPackIndex) == 0x000010, "Member 'WB_BtlUtilIcon_C_BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimPackIndex' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimationIndex) == 0x000014, "Member 'WB_BtlUtilIcon_C_BndEvt__SsPlayer_Indicator_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimationIndex' has a wrong offset!");

// Function WB_BtlUtilIcon.WB_BtlUtilIcon_C.Show
// 0x0014 (0x0014 - 0x0000)
struct WB_BtlUtilIcon_C_Show final
{
public:
	E_BTL_UTIL_ICON_TYPE                          Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B29[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Life;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayRate;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlUtilIcon_C_Show) == 0x000004, "Wrong alignment on WB_BtlUtilIcon_C_Show");
static_assert(sizeof(WB_BtlUtilIcon_C_Show) == 0x000014, "Wrong size on WB_BtlUtilIcon_C_Show");
static_assert(offsetof(WB_BtlUtilIcon_C_Show, Type) == 0x000000, "Member 'WB_BtlUtilIcon_C_Show::Type' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_Show, Life) == 0x000004, "Member 'WB_BtlUtilIcon_C_Show::Life' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_Show, PlayRate) == 0x000008, "Member 'WB_BtlUtilIcon_C_Show::PlayRate' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_Show, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00000C, "Member 'WB_BtlUtilIcon_C_Show::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_Show, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000010, "Member 'WB_BtlUtilIcon_C_Show::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

// Function WB_BtlUtilIcon.WB_BtlUtilIcon_C.IsFinished
// 0x0002 (0x0002 - 0x0000)
struct WB_BtlUtilIcon_C_IsFinished final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlUtilIcon_C_IsFinished) == 0x000001, "Wrong alignment on WB_BtlUtilIcon_C_IsFinished");
static_assert(sizeof(WB_BtlUtilIcon_C_IsFinished) == 0x000002, "Wrong size on WB_BtlUtilIcon_C_IsFinished");
static_assert(offsetof(WB_BtlUtilIcon_C_IsFinished, RetValue) == 0x000000, "Member 'WB_BtlUtilIcon_C_IsFinished::RetValue' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_IsFinished, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'WB_BtlUtilIcon_C_IsFinished::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WB_BtlUtilIcon.WB_BtlUtilIcon_C.PlayIndicatorAnim
// 0x01C8 (0x01C8 - 0x0000)
struct WB_BtlUtilIcon_C_PlayIndicatorAnim final
{
public:
	E_BTL_UTIL_ICON_TYPE                          IconType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B2A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AnimIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLoop;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B2B[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Rate;                                              // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, class FName>                      AnimNames;                                         // 0x0010(0x0050)(Edit, BlueprintVisible)
	TMap<E_BTL_UTIL_ICON_TYPE, class FName>       PackNames;                                         // 0x0060(0x0050)(Edit, BlueprintVisible)
	TMap<int32, class FName>                      K2Node_MakeVariable_MakeVariableOutput;            // 0x00B0(0x0050)()
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B2C[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<E_BTL_UTIL_ICON_TYPE, class FName>       K2Node_MakeVariable_MakeVariableOutput_1;          // 0x0108(0x0050)()
	class FName                                   CallFunc_Map_Find_Value;                           // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B2D[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Map_Find_Value_1;                         // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue;                         // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B2E[0x5];                                     // 0x0183(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlUtilIcon_C_PlayIndicatorAnim) == 0x000008, "Wrong alignment on WB_BtlUtilIcon_C_PlayIndicatorAnim");
static_assert(sizeof(WB_BtlUtilIcon_C_PlayIndicatorAnim) == 0x0001C8, "Wrong size on WB_BtlUtilIcon_C_PlayIndicatorAnim");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, IconType) == 0x000000, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::IconType' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, AnimIndex) == 0x000004, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::AnimIndex' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, IsLoop) == 0x000008, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::IsLoop' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, Rate) == 0x00000C, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::Rate' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, AnimNames) == 0x000010, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::AnimNames' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, PackNames) == 0x000060, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::PackNames' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, K2Node_MakeVariable_MakeVariableOutput) == 0x0000B0, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, CallFunc_SelectInt_ReturnValue) == 0x000100, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, K2Node_MakeVariable_MakeVariableOutput_1) == 0x000108, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::K2Node_MakeVariable_MakeVariableOutput_1' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, CallFunc_Map_Find_Value) == 0x000158, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, CallFunc_Map_Find_ReturnValue) == 0x000160, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, CallFunc_Conv_NameToString_ReturnValue) == 0x000168, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, CallFunc_Map_Find_Value_1) == 0x000178, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, CallFunc_Map_Find_ReturnValue_1) == 0x000180, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, CallFunc_BooleanAND_ReturnValue) == 0x000181, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, CallFunc_Play_ReturnValue) == 0x000182, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::CallFunc_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000188, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, CallFunc_Concat_StrStr_ReturnValue) == 0x000198, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0001A8, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_BtlUtilIcon_C_PlayIndicatorAnim, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0001B8, "Member 'WB_BtlUtilIcon_C_PlayIndicatorAnim::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function WB_BtlUtilIcon.WB_BtlUtilIcon_C.SetIconType
// 0x0001 (0x0001 - 0x0000)
struct WB_BtlUtilIcon_C_SetIconType final
{
public:
	E_BTL_UTIL_ICON_TYPE                          IconType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlUtilIcon_C_SetIconType) == 0x000001, "Wrong alignment on WB_BtlUtilIcon_C_SetIconType");
static_assert(sizeof(WB_BtlUtilIcon_C_SetIconType) == 0x000001, "Wrong size on WB_BtlUtilIcon_C_SetIconType");
static_assert(offsetof(WB_BtlUtilIcon_C_SetIconType, IconType) == 0x000000, "Member 'WB_BtlUtilIcon_C_SetIconType::IconType' has a wrong offset!");

// Function WB_BtlUtilIcon.WB_BtlUtilIcon_C.IsDisappeared
// 0x0001 (0x0001 - 0x0000)
struct WB_BtlUtilIcon_C_IsDisappeared final
{
public:
	bool                                          Param_IsDisappeared;                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlUtilIcon_C_IsDisappeared) == 0x000001, "Wrong alignment on WB_BtlUtilIcon_C_IsDisappeared");
static_assert(sizeof(WB_BtlUtilIcon_C_IsDisappeared) == 0x000001, "Wrong size on WB_BtlUtilIcon_C_IsDisappeared");
static_assert(offsetof(WB_BtlUtilIcon_C_IsDisappeared, Param_IsDisappeared) == 0x000000, "Member 'WB_BtlUtilIcon_C_IsDisappeared::Param_IsDisappeared' has a wrong offset!");

}
