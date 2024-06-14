#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_DevilAssetTable

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "ST_DevilPostData_structs.hpp"


namespace SDK::Params
{

// Function BPL_DevilAssetTable.BPL_DevilAssetTable_C.GetDevilAssetClassData
// 0x02E0 (0x02E0 - 0x0000)
struct BPL_DevilAssetTable_C_GetDevilAssetClassData final
{
public:
	int32                                         EnemyID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B11[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   ClassAssetID;                                      // 0x0010(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   PlayerBaseAssetID;                                 // 0x0038(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   Lo_DevilBase;                                      // 0x0060(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   Lo_PlayerBase;                                     // 0x0088(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FDevilAssetTable_Raw                   FoundData;                                         // 0x00B0(0x00B0)(Edit, BlueprintVisible)
	struct FDevilAssetTable_Raw                   CallFunc_FindAssetData_AssetData;                  // 0x0160(0x00B0)()
	TScriptInterface<class IBPI_DevilAssetTableInstanceAccessor_C> CallFunc_GetDevilAssetTableInstance_Instance;      // 0x0210(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDevilAssetTableInstance_isValid;       // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B12[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDevilAssetTable_Raw                   CallFunc_BI_GetDevilAsset_AssetData;               // 0x0228(0x00B0)()
	bool                                          CallFunc_BI_GetDevilAsset_IsValid;                 // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CopySoftClassRef_ReturnValue;             // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CopySoftClassRef_ReturnValue_1;           // 0x02DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftClassRef_ReturnValue;          // 0x02DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_DevilAssetTable_C_GetDevilAssetClassData) == 0x000008, "Wrong alignment on BPL_DevilAssetTable_C_GetDevilAssetClassData");
static_assert(sizeof(BPL_DevilAssetTable_C_GetDevilAssetClassData) == 0x0002E0, "Wrong size on BPL_DevilAssetTable_C_GetDevilAssetClassData");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, EnemyID) == 0x000000, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::EnemyID' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, __WorldContext) == 0x000008, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, ClassAssetID) == 0x000010, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::ClassAssetID' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, PlayerBaseAssetID) == 0x000038, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::PlayerBaseAssetID' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, Lo_DevilBase) == 0x000060, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::Lo_DevilBase' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, Lo_PlayerBase) == 0x000088, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::Lo_PlayerBase' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, FoundData) == 0x0000B0, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::FoundData' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, CallFunc_FindAssetData_AssetData) == 0x000160, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::CallFunc_FindAssetData_AssetData' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, CallFunc_GetDevilAssetTableInstance_Instance) == 0x000210, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::CallFunc_GetDevilAssetTableInstance_Instance' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, CallFunc_GetDevilAssetTableInstance_isValid) == 0x000220, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::CallFunc_GetDevilAssetTableInstance_isValid' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, CallFunc_BI_GetDevilAsset_AssetData) == 0x000228, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::CallFunc_BI_GetDevilAsset_AssetData' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, CallFunc_BI_GetDevilAsset_IsValid) == 0x0002D8, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::CallFunc_BI_GetDevilAsset_IsValid' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, CallFunc_CopySoftClassRef_ReturnValue) == 0x0002D9, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::CallFunc_CopySoftClassRef_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, CallFunc_CopySoftClassRef_ReturnValue_1) == 0x0002DA, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::CallFunc_CopySoftClassRef_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetClassData, CallFunc_IsValidSoftClassRef_ReturnValue) == 0x0002DB, "Member 'BPL_DevilAssetTable_C_GetDevilAssetClassData::CallFunc_IsValidSoftClassRef_ReturnValue' has a wrong offset!");

// Function BPL_DevilAssetTable.BPL_DevilAssetTable_C.GetDevilPostData
// 0x02A0 (0x02A0 - 0x0000)
struct BPL_DevilAssetTable_C_GetDevilPostData final
{
public:
	int32                                         EnemyID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B13[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_DevilPostData                      PostData;                                          // 0x0010(0x0020)(Parm, OutParm, HasGetValueTypeHash)
	struct FST_DevilPostData                      DefaultPostData;                                   // 0x0030(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FDevilAssetTable_Raw                   FoundData;                                         // 0x0050(0x00B0)(Edit, BlueprintVisible)
	struct FDevilAssetTable_Raw                   CallFunc_FindAssetData_AssetData;                  // 0x0100(0x00B0)()
	TScriptInterface<class IBPI_DevilAssetTableInstanceAccessor_C> CallFunc_GetDevilAssetTableInstance_Instance;      // 0x01B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDevilAssetTableInstance_isValid;       // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B14[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDevilAssetTable_Raw                   CallFunc_BI_GetDevilAsset_AssetData;               // 0x01C8(0x00B0)()
	bool                                          CallFunc_BI_GetDevilAsset_IsValid;                 // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B15[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_DevilPostData                      K2Node_MakeStruct_ST_DevilPostData;                // 0x0280(0x0020)(HasGetValueTypeHash)
};
static_assert(alignof(BPL_DevilAssetTable_C_GetDevilPostData) == 0x000008, "Wrong alignment on BPL_DevilAssetTable_C_GetDevilPostData");
static_assert(sizeof(BPL_DevilAssetTable_C_GetDevilPostData) == 0x0002A0, "Wrong size on BPL_DevilAssetTable_C_GetDevilPostData");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilPostData, EnemyID) == 0x000000, "Member 'BPL_DevilAssetTable_C_GetDevilPostData::EnemyID' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilPostData, __WorldContext) == 0x000008, "Member 'BPL_DevilAssetTable_C_GetDevilPostData::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilPostData, PostData) == 0x000010, "Member 'BPL_DevilAssetTable_C_GetDevilPostData::PostData' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilPostData, DefaultPostData) == 0x000030, "Member 'BPL_DevilAssetTable_C_GetDevilPostData::DefaultPostData' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilPostData, FoundData) == 0x000050, "Member 'BPL_DevilAssetTable_C_GetDevilPostData::FoundData' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilPostData, CallFunc_FindAssetData_AssetData) == 0x000100, "Member 'BPL_DevilAssetTable_C_GetDevilPostData::CallFunc_FindAssetData_AssetData' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilPostData, CallFunc_GetDevilAssetTableInstance_Instance) == 0x0001B0, "Member 'BPL_DevilAssetTable_C_GetDevilPostData::CallFunc_GetDevilAssetTableInstance_Instance' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilPostData, CallFunc_GetDevilAssetTableInstance_isValid) == 0x0001C0, "Member 'BPL_DevilAssetTable_C_GetDevilPostData::CallFunc_GetDevilAssetTableInstance_isValid' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilPostData, CallFunc_BI_GetDevilAsset_AssetData) == 0x0001C8, "Member 'BPL_DevilAssetTable_C_GetDevilPostData::CallFunc_BI_GetDevilAsset_AssetData' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilPostData, CallFunc_BI_GetDevilAsset_IsValid) == 0x000278, "Member 'BPL_DevilAssetTable_C_GetDevilPostData::CallFunc_BI_GetDevilAsset_IsValid' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilPostData, K2Node_MakeStruct_ST_DevilPostData) == 0x000280, "Member 'BPL_DevilAssetTable_C_GetDevilPostData::K2Node_MakeStruct_ST_DevilPostData' has a wrong offset!");

// Function BPL_DevilAssetTable.BPL_DevilAssetTable_C.GetDevilAssetTableInstance
// 0x00A0 (0x00A0 - 0x0000)
struct BPL_DevilAssetTable_C_GetDevilAssetTableInstance final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_DevilAssetTableInstanceAccessor_C> Instance;                                          // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsValid;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B16[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_DevilAssetTable_C> K2Node_DynamicCast_AsBPI_Devil_Asset_Table;        // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B17[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_DevilAssetTable_C> K2Node_DynamicCast_AsBPI_Devil_Asset_Table_1;      // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B18[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_SpawnUIActor_ReturnValue;                 // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BI_GetDevilAssetTable_instance;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_DevilAssetTableInstanceAccessor_C> K2Node_DynamicCast_AsBPI_Devil_Asset_Table_Instance_Accessor; // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B19[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_DevilAssetTableInstanceAccessor_C> K2Node_DynamicCast_AsBPI_Devil_Asset_Table_Instance_Accessor_1; // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance) == 0x000008, "Wrong alignment on BPL_DevilAssetTable_C_GetDevilAssetTableInstance");
static_assert(sizeof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance) == 0x0000A0, "Wrong size on BPL_DevilAssetTable_C_GetDevilAssetTableInstance");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, __WorldContext) == 0x000000, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, Instance) == 0x000008, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::Instance' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, IsValid) == 0x000018, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::IsValid' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, CallFunc_GetGameInstance_ReturnValue) == 0x000020, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, CallFunc_GetGameInstance_ReturnValue_1) == 0x000028, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, K2Node_DynamicCast_AsBPI_Devil_Asset_Table) == 0x000030, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::K2Node_DynamicCast_AsBPI_Devil_Asset_Table' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, K2Node_DynamicCast_AsBPI_Devil_Asset_Table_1) == 0x000048, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::K2Node_DynamicCast_AsBPI_Devil_Asset_Table_1' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, CallFunc_SpawnUIActor_ReturnValue) == 0x000060, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::CallFunc_SpawnUIActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, CallFunc_BI_GetDevilAssetTable_instance) == 0x000068, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::CallFunc_BI_GetDevilAssetTable_instance' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, K2Node_DynamicCast_AsBPI_Devil_Asset_Table_Instance_Accessor) == 0x000070, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::K2Node_DynamicCast_AsBPI_Devil_Asset_Table_Instance_Accessor' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, K2Node_DynamicCast_bSuccess_2) == 0x000080, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, CallFunc_IsValid_ReturnValue) == 0x000081, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, K2Node_DynamicCast_AsBPI_Devil_Asset_Table_Instance_Accessor_1) == 0x000088, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::K2Node_DynamicCast_AsBPI_Devil_Asset_Table_Instance_Accessor_1' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_GetDevilAssetTableInstance, K2Node_DynamicCast_bSuccess_3) == 0x000098, "Member 'BPL_DevilAssetTable_C_GetDevilAssetTableInstance::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function BPL_DevilAssetTable.BPL_DevilAssetTable_C.FindAssetData
// 0x0280 (0x0280 - 0x0000)
struct BPL_DevilAssetTable_C_FindAssetData final
{
public:
	int32                                         EnemyID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDevilAssetTable_Raw                   AssetData;                                         // 0x0010(0x00B0)(Parm, OutParm)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1B[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDevilPosData_Raw                      K2Node_MakeStruct_DevilPosData_Raw;                // 0x00D8(0x0028)()
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0100(0x0010)(ReferenceParm)
	struct FDevilAssetTable_Raw                   K2Node_MakeStruct_DevilAssetTable_Raw;             // 0x0110(0x00B0)()
	class FName                                   CallFunc_Array_Get_Item;                           // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDevilAssetTable_Raw                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x01C8(0x00B0)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_DevilAssetTable_C_FindAssetData) == 0x000008, "Wrong alignment on BPL_DevilAssetTable_C_FindAssetData");
static_assert(sizeof(BPL_DevilAssetTable_C_FindAssetData) == 0x000280, "Wrong size on BPL_DevilAssetTable_C_FindAssetData");
static_assert(offsetof(BPL_DevilAssetTable_C_FindAssetData, EnemyID) == 0x000000, "Member 'BPL_DevilAssetTable_C_FindAssetData::EnemyID' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_FindAssetData, __WorldContext) == 0x000008, "Member 'BPL_DevilAssetTable_C_FindAssetData::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_FindAssetData, AssetData) == 0x000010, "Member 'BPL_DevilAssetTable_C_FindAssetData::AssetData' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_FindAssetData, K2Node_MakeArray_Array) == 0x0000C0, "Member 'BPL_DevilAssetTable_C_FindAssetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_FindAssetData, CallFunc_Add_IntInt_ReturnValue) == 0x0000D0, "Member 'BPL_DevilAssetTable_C_FindAssetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_FindAssetData, K2Node_MakeStruct_DevilPosData_Raw) == 0x0000D8, "Member 'BPL_DevilAssetTable_C_FindAssetData::K2Node_MakeStruct_DevilPosData_Raw' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_FindAssetData, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000100, "Member 'BPL_DevilAssetTable_C_FindAssetData::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_FindAssetData, K2Node_MakeStruct_DevilAssetTable_Raw) == 0x000110, "Member 'BPL_DevilAssetTable_C_FindAssetData::K2Node_MakeStruct_DevilAssetTable_Raw' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_FindAssetData, CallFunc_Array_Get_Item) == 0x0001C0, "Member 'BPL_DevilAssetTable_C_FindAssetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_FindAssetData, CallFunc_GetDataTableRowFromName_OutRow) == 0x0001C8, "Member 'BPL_DevilAssetTable_C_FindAssetData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPL_DevilAssetTable_C_FindAssetData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000278, "Member 'BPL_DevilAssetTable_C_FindAssetData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

}
