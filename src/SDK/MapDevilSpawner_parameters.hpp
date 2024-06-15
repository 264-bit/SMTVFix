#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapDevilSpawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"


namespace SDK::Params
{

// Function MapDevilSpawner.MapDevilSpawner_C.Evt_SpawnFinished__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MapDevilSpawner_C_Evt_SpawnFinished__DelegateSignature final
{
public:
	class ACharaBase_C*                           RetValue;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapDevilSpawner_C_Evt_SpawnFinished__DelegateSignature) == 0x000008, "Wrong alignment on MapDevilSpawner_C_Evt_SpawnFinished__DelegateSignature");
static_assert(sizeof(MapDevilSpawner_C_Evt_SpawnFinished__DelegateSignature) == 0x000008, "Wrong size on MapDevilSpawner_C_Evt_SpawnFinished__DelegateSignature");
static_assert(offsetof(MapDevilSpawner_C_Evt_SpawnFinished__DelegateSignature, RetValue) == 0x000000, "Member 'MapDevilSpawner_C_Evt_SpawnFinished__DelegateSignature::RetValue' has a wrong offset!");

// Function MapDevilSpawner.MapDevilSpawner_C.ExecuteUbergraph_MapDevilSpawner
// 0x0270 (0x0270 - 0x0000)
struct MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeSeconds_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CallFunc_GetDevilAssetClassData_ClassAssetID;      // 0x0008(0x0028)(HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CallFunc_GetDevilAssetClassData_PlayerBaseAssetID; // 0x0030(0x0028)(HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANkmPlaceInFieldActor_C*                K2Node_DynamicCast_AsNkm_Place_in_Field_Actor;     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B51[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMapDevilSpawnerCtrl_C*                 K2Node_DynamicCast_AsMap_Devil_Spawner_Ctrl;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B52[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimeSeconds_ReturnValue_1;             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B53[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;              // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         Pad_5B54[0x8];                                     // 0x00C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00D0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B55[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDevilBaseData                         CallFunc_GetDevilBaseData_ReturnValue;             // 0x0108(0x0108)(ConstParm)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B56[0x5];                                     // 0x0213(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsDevil_Base;              // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B57[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;          // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ADevilBase_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner) == 0x000010, "Wrong alignment on MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner");
static_assert(sizeof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner) == 0x000270, "Wrong size on MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, EntryPoint) == 0x000000, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_GetTimeSeconds_ReturnValue) == 0x000004, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_GetDevilAssetClassData_ClassAssetID) == 0x000008, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_GetDevilAssetClassData_ClassAssetID' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_GetDevilAssetClassData_PlayerBaseAssetID) == 0x000030, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_GetDevilAssetClassData_PlayerBaseAssetID' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_GetOwner_ReturnValue) == 0x000058, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, K2Node_DynamicCast_AsNkm_Place_in_Field_Actor) == 0x000060, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::K2Node_DynamicCast_AsNkm_Place_in_Field_Actor' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, K2Node_DynamicCast_AsMap_Devil_Spawner_Ctrl) == 0x000070, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::K2Node_DynamicCast_AsMap_Devil_Spawner_Ctrl' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_GetTimeSeconds_ReturnValue_1) == 0x00007C, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_GetTimeSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000080, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_Conv_FloatToString_ReturnValue) == 0x000088, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_Concat_StrStr_ReturnValue) == 0x000098, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, K2Node_CreateDelegate_OutputDelegate) == 0x0000A8, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000B8, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_GetTransform_ReturnValue) == 0x0000D0, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000100, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_GetDevilBaseData_ReturnValue) == 0x000108, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_GetDevilBaseData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_GetValidValue_ReturnValue) == 0x000210, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000211, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_BooleanAND_ReturnValue) == 0x000212, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, Temp_class_Variable) == 0x000218, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, K2Node_CustomEvent_Loaded) == 0x000220, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, K2Node_ClassDynamicCast_AsDevil_Base) == 0x000228, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::K2Node_ClassDynamicCast_AsDevil_Base' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, K2Node_ClassDynamicCast_bSuccess) == 0x000230, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000238, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_GetClassDisplayName_ReturnValue) == 0x000240, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000250, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_FinishSpawningActor_ReturnValue) == 0x000260, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner, CallFunc_Array_Add_ReturnValue) == 0x000268, "Member 'MapDevilSpawner_C_ExecuteUbergraph_MapDevilSpawner::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MapDevilSpawner.MapDevilSpawner_C.OnLoaded_574D61D64CECD5C0CC708EA205B71358
// 0x0008 (0x0008 - 0x0000)
struct MapDevilSpawner_C_OnLoaded_574D61D64CECD5C0CC708EA205B71358 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(MapDevilSpawner_C_OnLoaded_574D61D64CECD5C0CC708EA205B71358) == 0x000008, "Wrong alignment on MapDevilSpawner_C_OnLoaded_574D61D64CECD5C0CC708EA205B71358");
static_assert(sizeof(MapDevilSpawner_C_OnLoaded_574D61D64CECD5C0CC708EA205B71358) == 0x000008, "Wrong size on MapDevilSpawner_C_OnLoaded_574D61D64CECD5C0CC708EA205B71358");
static_assert(offsetof(MapDevilSpawner_C_OnLoaded_574D61D64CECD5C0CC708EA205B71358, Loaded) == 0x000000, "Member 'MapDevilSpawner_C_OnLoaded_574D61D64CECD5C0CC708EA205B71358::Loaded' has a wrong offset!");

}

