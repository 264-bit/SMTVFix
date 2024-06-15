#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_NaviDevil

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_NaviDevil.BPL_NaviDevil_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_NaviDevil_C final : public UBlueprintFunctionLibrary
{
public:
	static void SetVisibility_NaviEffect(bool Visible, class UObject* __WorldContext);
	static void DestroyNaviDevil_BeforeEvent(class UObject* __WorldContext);
	static void RespawnNaviDevil_AfterEvent(class UObject* __WorldContext);
	static void UpdateNaviMinimapIcon(E_NAVI_DEVIL Navi, bool FlagSwitch, bool NaviNotChange, class UObject* __WorldContext);
	static void LotNaviGimmickExist(class UObject* __WorldContext);
	static void WarpNaviDevilBasePosition(bool CalcOnGround, class UObject* __WorldContext);
	static void ChangeNaviDevilScale(class AActor* Pawn, E_NAVI_DEVIL NaviType, class UObject* __WorldContext);
	static void DestroyNaviDevil(class UObject* __WorldContext);
	static void ChangeNaviDevil_FromPawn(class APawn* Pawn, E_NAVI_DEVIL NaviDevil, class UObject* __WorldContext);
	static void SpawnNaviDevil(E_NAVI_DEVIL NaviDevil, class UObject* __WorldContext);
	static void SetVisibilityNaviDevil(bool Visible, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_NaviDevil_C">();
	}
	static class UBPL_NaviDevil_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_NaviDevil_C>();
	}
};
static_assert(alignof(UBPL_NaviDevil_C) == 0x000008, "Wrong alignment on UBPL_NaviDevil_C");
static_assert(sizeof(UBPL_NaviDevil_C) == 0x000028, "Wrong size on UBPL_NaviDevil_C");

}

