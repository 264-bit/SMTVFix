#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EsNPC_em0150_03

#include "Basic.hpp"


namespace SDK::Params
{

// Function esNPC_em0150_03.esNPC_em0150_03_C.ExecuteUbergraph_esNPC_em0150_03
// 0x0080 (0x0080 - 0x0000)
struct EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DE6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      K2Node_DynamicCast_AsAnim_Sequence_Base;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckEventFlag_ReturnValue;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE7[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Character_SpawnActor;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActive_IsActive;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CharaBaseAccessor_C> K2Node_DynamicCast_AsBPI_Chara_Base_Accessor;      // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_EventPlayMotion_NoUse;                 // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE9[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CharaBaseAccessor_C> K2Node_DynamicCast_AsBPI_Chara_Base_Accessor_1;    // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_StopMotion_NoUse;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckEventFlag_ReturnValue_1;             // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DEA[0x5];                                     // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_CheckEventFlag_ReturnValue_2;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03) == 0x000008, "Wrong alignment on EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03");
static_assert(sizeof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03) == 0x000080, "Wrong size on EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, EntryPoint) == 0x000000, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::EntryPoint' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, Temp_object_Variable) == 0x000008, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, K2Node_DynamicCast_AsAnim_Sequence_Base) == 0x000010, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::K2Node_DynamicCast_AsAnim_Sequence_Base' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, CallFunc_CheckEventFlag_ReturnValue) == 0x000019, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::CallFunc_CheckEventFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, CallFunc_Character_SpawnActor) == 0x000020, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::CallFunc_Character_SpawnActor' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, CallFunc_GetActive_IsActive) == 0x000028, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::CallFunc_GetActive_IsActive' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, K2Node_DynamicCast_AsBPI_Chara_Base_Accessor) == 0x000030, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::K2Node_DynamicCast_AsBPI_Chara_Base_Accessor' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, CallFunc_BI_EventPlayMotion_NoUse) == 0x000041, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::CallFunc_BI_EventPlayMotion_NoUse' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, K2Node_DynamicCast_AsBPI_Chara_Base_Accessor_1) == 0x000048, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::K2Node_DynamicCast_AsBPI_Chara_Base_Accessor_1' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, K2Node_DynamicCast_bSuccess_2) == 0x000058, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, CallFunc_BI_StopMotion_NoUse) == 0x000059, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::CallFunc_BI_StopMotion_NoUse' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, CallFunc_CheckEventFlag_ReturnValue_1) == 0x00005A, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::CallFunc_CheckEventFlag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, K2Node_CustomEvent_Loaded) == 0x000060, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03, CallFunc_CheckEventFlag_ReturnValue_2) == 0x000078, "Member 'EsNPC_em0150_03_C_ExecuteUbergraph_esNPC_em0150_03::CallFunc_CheckEventFlag_ReturnValue_2' has a wrong offset!");

// Function esNPC_em0150_03.esNPC_em0150_03_C.OnLoaded_0E38A2EA4724D2AEB4E20FBDA15C1E84
// 0x0008 (0x0008 - 0x0000)
struct EsNPC_em0150_03_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDA15C1E84 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EsNPC_em0150_03_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDA15C1E84) == 0x000008, "Wrong alignment on EsNPC_em0150_03_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDA15C1E84");
static_assert(sizeof(EsNPC_em0150_03_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDA15C1E84) == 0x000008, "Wrong size on EsNPC_em0150_03_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDA15C1E84");
static_assert(offsetof(EsNPC_em0150_03_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDA15C1E84, Loaded) == 0x000000, "Member 'EsNPC_em0150_03_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDA15C1E84::Loaded' has a wrong offset!");

}

