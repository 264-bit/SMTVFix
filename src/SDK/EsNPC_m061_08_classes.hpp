#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EsNPC_m061_08

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventScriptBase_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass esNPC_m061_08.esNPC_m061_08_C
// 0x0008 (0x02F8 - 0x02F0)
class AEsNPC_m061_08_C final : public ABP_EventScriptBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_EsNPC_m061_08_C;                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_esNPC_m061_08(int32 EntryPoint);
	void CheckActive();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"esNPC_m061_08_C">();
	}
	static class AEsNPC_m061_08_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEsNPC_m061_08_C>();
	}
};
static_assert(alignof(AEsNPC_m061_08_C) == 0x000008, "Wrong alignment on AEsNPC_m061_08_C");
static_assert(sizeof(AEsNPC_m061_08_C) == 0x0002F8, "Wrong size on AEsNPC_m061_08_C");
static_assert(offsetof(AEsNPC_m061_08_C, UberGraphFrame_EsNPC_m061_08_C) == 0x0002F0, "Member 'AEsNPC_m061_08_C::UberGraphFrame_EsNPC_m061_08_C' has a wrong offset!");

}

