#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_NaviDevilGimmick

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_NaviDevilGimmick.BPI_NaviDevilGimmick_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_NaviDevilGimmick_C final : public IInterface
{
public:
	void BPI_GetNaviGimmickCategory(int32* Category);
	void BPI_GetNaviGimmickExistNum(int32* Num);
	void BPI_GetNaviGimmickSaveID(int32* SaveId);
	void BPI_SetNaviGimmickActive(bool Active);
	void BPI_SetNaviGimmickDebugView(bool View);
	void BPI_CanExistNaviGimmick(bool* CanExist);
	void BPI_IsCheckObstacle_WhenGotoGimmick(bool* CheckObstacle_WhenGotoGimmick);
	void BPI_IsCheckGotoGimmickMoving(bool* CheckGotoGimmickMoving);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_NaviDevilGimmick_C">();
	}
	static class IBPI_NaviDevilGimmick_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_NaviDevilGimmick_C>();
	}
};
static_assert(alignof(IBPI_NaviDevilGimmick_C) == 0x000008, "Wrong alignment on IBPI_NaviDevilGimmick_C");
static_assert(sizeof(IBPI_NaviDevilGimmick_C) == 0x000028, "Wrong size on IBPI_NaviDevilGimmick_C");

}

