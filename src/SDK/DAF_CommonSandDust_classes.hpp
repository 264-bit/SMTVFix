#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DAF_CommonSandDust

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DAF_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DAF_CommonSandDust.DAF_CommonSandDust_C
// 0x0008 (0x0238 - 0x0230)
class ADAF_CommonSandDust_C final : public ADAF_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_DAF_CommonSandDust_C;               // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_DAF_CommonSandDust(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DAF_CommonSandDust_C">();
	}
	static class ADAF_CommonSandDust_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADAF_CommonSandDust_C>();
	}
};
static_assert(alignof(ADAF_CommonSandDust_C) == 0x000008, "Wrong alignment on ADAF_CommonSandDust_C");
static_assert(sizeof(ADAF_CommonSandDust_C) == 0x000238, "Wrong size on ADAF_CommonSandDust_C");
static_assert(offsetof(ADAF_CommonSandDust_C, UberGraphFrame_DAF_CommonSandDust_C) == 0x000230, "Member 'ADAF_CommonSandDust_C::UberGraphFrame_DAF_CommonSandDust_C' has a wrong offset!");

}
