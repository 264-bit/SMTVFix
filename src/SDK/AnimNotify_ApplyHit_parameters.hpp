#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_ApplyHit

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimNotify_ApplyHit.AnimNotify_ApplyHit_C.IsBattleExcuting
// 0x0038 (0x0038 - 0x0000)
struct AnimNotify_ApplyHit_C_IsBattleExcuting final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8200[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_ExternalBattle_C> K2Node_DynamicCast_AsBPI_External_Battle;          // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8201[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BI_GetBattleMain_retValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_ApplyHit_C_IsBattleExcuting) == 0x000008, "Wrong alignment on AnimNotify_ApplyHit_C_IsBattleExcuting");
static_assert(sizeof(AnimNotify_ApplyHit_C_IsBattleExcuting) == 0x000038, "Wrong size on AnimNotify_ApplyHit_C_IsBattleExcuting");
static_assert(offsetof(AnimNotify_ApplyHit_C_IsBattleExcuting, bSuccess) == 0x000000, "Member 'AnimNotify_ApplyHit_C_IsBattleExcuting::bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_IsBattleExcuting, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'AnimNotify_ApplyHit_C_IsBattleExcuting::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_IsBattleExcuting, K2Node_DynamicCast_AsBPI_External_Battle) == 0x000010, "Member 'AnimNotify_ApplyHit_C_IsBattleExcuting::K2Node_DynamicCast_AsBPI_External_Battle' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_IsBattleExcuting, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'AnimNotify_ApplyHit_C_IsBattleExcuting::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_IsBattleExcuting, CallFunc_BI_GetBattleMain_retValue) == 0x000028, "Member 'AnimNotify_ApplyHit_C_IsBattleExcuting::CallFunc_BI_GetBattleMain_retValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_IsBattleExcuting, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'AnimNotify_ApplyHit_C_IsBattleExcuting::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function AnimNotify_ApplyHit.AnimNotify_ApplyHit_C.Notice
// 0x0050 (0x0050 - 0x0000)
struct AnimNotify_ApplyHit_C_Notice final
{
public:
	class FString                                 Str;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BattleDesignDebugIsShowAnimNotify_IsEnable; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8202[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IS_SHIPPING_BUILD_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8203[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_ApplyHit_C_Notice) == 0x000008, "Wrong alignment on AnimNotify_ApplyHit_C_Notice");
static_assert(sizeof(AnimNotify_ApplyHit_C_Notice) == 0x000050, "Wrong size on AnimNotify_ApplyHit_C_Notice");
static_assert(offsetof(AnimNotify_ApplyHit_C_Notice, Str) == 0x000000, "Member 'AnimNotify_ApplyHit_C_Notice::Str' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Notice, CallFunc_BattleDesignDebugIsShowAnimNotify_IsEnable) == 0x000010, "Member 'AnimNotify_ApplyHit_C_Notice::CallFunc_BattleDesignDebugIsShowAnimNotify_IsEnable' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Notice, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'AnimNotify_ApplyHit_C_Notice::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Notice, CallFunc_IS_SHIPPING_BUILD_ReturnValue) == 0x000028, "Member 'AnimNotify_ApplyHit_C_Notice::CallFunc_IS_SHIPPING_BUILD_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Notice, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000030, "Member 'AnimNotify_ApplyHit_C_Notice::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Notice, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000040, "Member 'AnimNotify_ApplyHit_C_Notice::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function AnimNotify_ApplyHit.AnimNotify_ApplyHit_C.Received_Notify
// 0x0058 (0x0058 - 0x0000)
struct AnimNotify_ApplyHit_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBattleExcuting_bSuccess;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8204[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CharaBaseAccessor_C> K2Node_DynamicCast_AsBPI_Chara_Base_Accessor;      // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8205[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BI_SetNotifyApplyHit_NoUse;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8206[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_ApplyHit_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_ApplyHit_C_Received_Notify");
static_assert(sizeof(AnimNotify_ApplyHit_C_Received_Notify) == 0x000058, "Wrong size on AnimNotify_ApplyHit_C_Received_Notify");
static_assert(offsetof(AnimNotify_ApplyHit_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_ApplyHit_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_ApplyHit_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AnimNotify_ApplyHit_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Received_Notify, CallFunc_IsBattleExcuting_bSuccess) == 0x000011, "Member 'AnimNotify_ApplyHit_C_Received_Notify::CallFunc_IsBattleExcuting_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AnimNotify_ApplyHit_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Received_Notify, K2Node_DynamicCast_AsBPI_Chara_Base_Accessor) == 0x000020, "Member 'AnimNotify_ApplyHit_C_Received_Notify::K2Node_DynamicCast_AsBPI_Chara_Base_Accessor' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AnimNotify_ApplyHit_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Received_Notify, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000038, "Member 'AnimNotify_ApplyHit_C_Received_Notify::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Received_Notify, CallFunc_BI_SetNotifyApplyHit_NoUse) == 0x000040, "Member 'AnimNotify_ApplyHit_C_Received_Notify::CallFunc_BI_SetNotifyApplyHit_NoUse' has a wrong offset!");
static_assert(offsetof(AnimNotify_ApplyHit_C_Received_Notify, CallFunc_GetDisplayName_ReturnValue) == 0x000048, "Member 'AnimNotify_ApplyHit_C_Received_Notify::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");

}

