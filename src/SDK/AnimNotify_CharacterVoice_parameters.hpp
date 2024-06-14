#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_CharacterVoice

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimNotify_CharacterVoice.AnimNotify_CharacterVoice_C.GetNotifyName
// 0x0020 (0x0020 - 0x0000)
struct AnimNotify_CharacterVoice_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_CharacterVoice_C_GetNotifyName) == 0x000008, "Wrong alignment on AnimNotify_CharacterVoice_C_GetNotifyName");
static_assert(sizeof(AnimNotify_CharacterVoice_C_GetNotifyName) == 0x000020, "Wrong size on AnimNotify_CharacterVoice_C_GetNotifyName");
static_assert(offsetof(AnimNotify_CharacterVoice_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'AnimNotify_CharacterVoice_C_GetNotifyName::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_CharacterVoice_C_GetNotifyName, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'AnimNotify_CharacterVoice_C_GetNotifyName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function AnimNotify_CharacterVoice.AnimNotify_CharacterVoice_C.Received_Notify
// 0x0060 (0x0060 - 0x0000)
struct AnimNotify_CharacterVoice_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65EE[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAtomComponent*                         Lo_AtomComp;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACustomPawn*                            K2Node_DynamicCast_AsCustom_Pawn;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65EF[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CharaBaseAccessor_C> K2Node_DynamicCast_AsBPI_Chara_Base_Accessor;      // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IS_PREVIEW_WORLD_ReturnValue;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_AddIgnoreAtomComp_NoUse;               // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F0[0x5];                                     // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAtomComponent*                         CallFunc_PlayCharacterVoice_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_CharacterVoice_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_CharacterVoice_C_Received_Notify");
static_assert(sizeof(AnimNotify_CharacterVoice_C_Received_Notify) == 0x000060, "Wrong size on AnimNotify_CharacterVoice_C_Received_Notify");
static_assert(offsetof(AnimNotify_CharacterVoice_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_CharacterVoice_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_CharacterVoice_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_CharacterVoice_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_CharacterVoice_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AnimNotify_CharacterVoice_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_CharacterVoice_C_Received_Notify, Lo_AtomComp) == 0x000018, "Member 'AnimNotify_CharacterVoice_C_Received_Notify::Lo_AtomComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_CharacterVoice_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'AnimNotify_CharacterVoice_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_CharacterVoice_C_Received_Notify, K2Node_DynamicCast_AsCustom_Pawn) == 0x000028, "Member 'AnimNotify_CharacterVoice_C_Received_Notify::K2Node_DynamicCast_AsCustom_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotify_CharacterVoice_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AnimNotify_CharacterVoice_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_CharacterVoice_C_Received_Notify, K2Node_DynamicCast_AsBPI_Chara_Base_Accessor) == 0x000038, "Member 'AnimNotify_CharacterVoice_C_Received_Notify::K2Node_DynamicCast_AsBPI_Chara_Base_Accessor' has a wrong offset!");
static_assert(offsetof(AnimNotify_CharacterVoice_C_Received_Notify, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'AnimNotify_CharacterVoice_C_Received_Notify::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_CharacterVoice_C_Received_Notify, CallFunc_IS_PREVIEW_WORLD_ReturnValue) == 0x000049, "Member 'AnimNotify_CharacterVoice_C_Received_Notify::CallFunc_IS_PREVIEW_WORLD_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_CharacterVoice_C_Received_Notify, CallFunc_BI_AddIgnoreAtomComp_NoUse) == 0x00004A, "Member 'AnimNotify_CharacterVoice_C_Received_Notify::CallFunc_BI_AddIgnoreAtomComp_NoUse' has a wrong offset!");
static_assert(offsetof(AnimNotify_CharacterVoice_C_Received_Notify, CallFunc_PlayCharacterVoice_ReturnValue) == 0x000050, "Member 'AnimNotify_CharacterVoice_C_Received_Notify::CallFunc_PlayCharacterVoice_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_CharacterVoice_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'AnimNotify_CharacterVoice_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
