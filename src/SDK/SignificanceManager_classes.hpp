#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SignificanceManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class SignificanceManager.SignificanceManager
// 0x00F8 (0x0120 - 0x0028)
class USignificanceManager final : public UObject
{
public:
	uint8                                         Pad_1231[0xE0];                                    // 0x0028(0x00E0)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         SignificanceManagerClassName;                      // 0x0108(0x0018)(Edit, ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SignificanceManager">();
	}
	static class USignificanceManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USignificanceManager>();
	}
};
static_assert(alignof(USignificanceManager) == 0x000008, "Wrong alignment on USignificanceManager");
static_assert(sizeof(USignificanceManager) == 0x000120, "Wrong size on USignificanceManager");
static_assert(offsetof(USignificanceManager, SignificanceManagerClassName) == 0x000108, "Member 'USignificanceManager::SignificanceManagerClassName' has a wrong offset!");

}

