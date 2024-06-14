#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DevilAssetTableInstanceAccessor

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_DevilAssetTableInstanceAccessor.BPI_DevilAssetTableInstanceAccessor_C.BI_GetDevilAsset
// 0x00C0 (0x00C0 - 0x0000)
struct BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAsset final
{
public:
	int32                                         DevilAssetID;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AD6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDevilAssetTable_Raw                   AssetData;                                         // 0x0008(0x00B0)(Parm, OutParm)
	bool                                          IsValid;                                           // 0x00B8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAsset) == 0x000008, "Wrong alignment on BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAsset");
static_assert(sizeof(BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAsset) == 0x0000C0, "Wrong size on BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAsset");
static_assert(offsetof(BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAsset, DevilAssetID) == 0x000000, "Member 'BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAsset::DevilAssetID' has a wrong offset!");
static_assert(offsetof(BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAsset, AssetData) == 0x000008, "Member 'BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAsset::AssetData' has a wrong offset!");
static_assert(offsetof(BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAsset, IsValid) == 0x0000B8, "Member 'BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAsset::IsValid' has a wrong offset!");

// Function BPI_DevilAssetTableInstanceAccessor.BPI_DevilAssetTableInstanceAccessor_C.BI_GetDevilAssetMapValue
// 0x0010 (0x0010 - 0x0000)
struct BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAssetMapValue final
{
public:
	TArray<struct FDevilAssetTable_Raw>           Value;                                             // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAssetMapValue) == 0x000008, "Wrong alignment on BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAssetMapValue");
static_assert(sizeof(BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAssetMapValue) == 0x000010, "Wrong size on BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAssetMapValue");
static_assert(offsetof(BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAssetMapValue, Value) == 0x000000, "Member 'BPI_DevilAssetTableInstanceAccessor_C_BI_GetDevilAssetMapValue::Value' has a wrong offset!");

}
