#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_AnimateDev455Head

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_AnimateDev455Head.BPI_AnimateDev455Head_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_AnimateDev455Head_C final : public IInterface
{
public:
	void Animate_Tiamat(E_CHARA_MOTION_ID Motion);
	void Animate_Dragon(E_CHARA_MOTION_ID Motion);
	void Animate_Camel(E_CHARA_MOTION_ID Motion);
	void Animate_Goat(E_CHARA_MOTION_ID Motion);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_AnimateDev455Head_C">();
	}
	static class IBPI_AnimateDev455Head_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_AnimateDev455Head_C>();
	}
};
static_assert(alignof(IBPI_AnimateDev455Head_C) == 0x000008, "Wrong alignment on IBPI_AnimateDev455Head_C");
static_assert(sizeof(IBPI_AnimateDev455Head_C) == 0x000028, "Wrong size on IBPI_AnimateDev455Head_C");

}
