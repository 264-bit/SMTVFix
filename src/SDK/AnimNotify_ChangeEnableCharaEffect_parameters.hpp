#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_ChangeEnableCharaEffect

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimNotify_ChangeEnableCharaEffect.AnimNotify_ChangeEnableCharaEffect_C.Received_Notify
// 0x00C8 (0x00C8 - 0x0000)
struct AnimNotify_ChangeEnableCharaEffect_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8103[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               Lo_PS;                                             // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CharaBaseAccessor_C> Lo_Chara;                                          // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UParticleSystemComponent*>       Lo_PSList;                                         // 0x0030(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8104[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CharaBaseAccessor_C> K2Node_DynamicCast_AsBPI_Chara_Base_Accessor;      // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8105[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleSystemComponent*>       CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0068(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8106[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_BI_GetActionState_Value;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BI_IsSilhouetteEnabled_IsEnabled;         // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8107[0x5];                                     // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMeshComponent*                         CallFunc_BI_GetMeshComponent_MeshComp;             // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8108[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BI_SetAlreadyChangeEnableEffect_NoUse;    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_GetAlreadyChangeEnableEffect_IsChanged; // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_ChangeEnableCharaEffect_C_Received_Notify");
static_assert(sizeof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify) == 0x0000C8, "Wrong size on AnimNotify_ChangeEnableCharaEffect_C_Received_Notify");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, Lo_PS) == 0x000018, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::Lo_PS' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, Lo_Chara) == 0x000020, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::Lo_Chara' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, Lo_PSList) == 0x000030, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::Lo_PSList' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, K2Node_DynamicCast_AsBPI_Chara_Base_Accessor) == 0x000050, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::K2Node_DynamicCast_AsBPI_Chara_Base_Accessor' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000068, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, Temp_int_Array_Index_Variable) == 0x000078, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, Temp_int_Loop_Counter_Variable) == 0x00007C, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_Array_Get_Item) == 0x000080, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_Less_IntInt_ReturnValue) == 0x000088, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_Add_IntInt_ReturnValue) == 0x00008C, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_BI_GetActionState_Value) == 0x000090, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_BI_GetActionState_Value' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_BI_IsSilhouetteEnabled_IsEnabled) == 0x000091, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_BI_IsSilhouetteEnabled_IsEnabled' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000092, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_BI_GetMeshComponent_MeshComp) == 0x000098, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_BI_GetMeshComponent_MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_IsVisible_ReturnValue) == 0x0000A0, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_BooleanAND_ReturnValue) == 0x0000A1, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_GetObjectName_ReturnValue) == 0x0000A8, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_Conv_StringToName_ReturnValue) == 0x0000B8, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_BI_SetAlreadyChangeEnableEffect_NoUse) == 0x0000C0, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_BI_SetAlreadyChangeEnableEffect_NoUse' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_BI_GetAlreadyChangeEnableEffect_IsChanged) == 0x0000C1, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_BI_GetAlreadyChangeEnableEffect_IsChanged' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_BooleanAND_ReturnValue_1) == 0x0000C2, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_Received_Notify, CallFunc_Array_Contains_ReturnValue) == 0x0000C3, "Member 'AnimNotify_ChangeEnableCharaEffect_C_Received_Notify::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function AnimNotify_ChangeEnableCharaEffect.AnimNotify_ChangeEnableCharaEffect_C.GetNotifyName
// 0x0060 (0x0060 - 0x0000)
struct AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8109[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_810A[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName) == 0x000008, "Wrong alignment on AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName");
static_assert(sizeof(AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName) == 0x000060, "Wrong size on AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName, Temp_bool_Variable) == 0x000010, "Member 'AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName, Temp_string_Variable) == 0x000018, "Member 'AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName, CallFunc_Len_ReturnValue) == 0x000038, "Member 'AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName, CallFunc_Greater_IntInt_ReturnValue) == 0x00003C, "Member 'AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName, K2Node_Select_Default) == 0x000040, "Member 'AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000050, "Member 'AnimNotify_ChangeEnableCharaEffect_C_GetNotifyName::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

}

