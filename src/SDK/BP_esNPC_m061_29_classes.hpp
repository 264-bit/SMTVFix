#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_esNPC_m061_29

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventScriptBase_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_esNPC_m061_29.BP_esNPC_m061_29_C
// 0x0008 (0x02F8 - 0x02F0)
class ABP_esNPC_m061_29_C final : public ABP_EventScriptBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_esNPC_m061_29_C;                 // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_esNPC_m061_29(int32 EntryPoint);
	void CheckActive();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_esNPC_m061_29_C">();
	}
	static class ABP_esNPC_m061_29_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_esNPC_m061_29_C>();
	}
};
static_assert(alignof(ABP_esNPC_m061_29_C) == 0x000008, "Wrong alignment on ABP_esNPC_m061_29_C");
static_assert(sizeof(ABP_esNPC_m061_29_C) == 0x0002F8, "Wrong size on ABP_esNPC_m061_29_C");
static_assert(offsetof(ABP_esNPC_m061_29_C, UberGraphFrame_BP_esNPC_m061_29_C) == 0x0002F0, "Member 'ABP_esNPC_m061_29_C::UberGraphFrame_BP_esNPC_m061_29_C' has a wrong offset!");

}

