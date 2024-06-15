#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DAF_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DAF_Base.DAF_Base_C
// 0x0010 (0x0230 - 0x0220)
class ADAF_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DAF_Base(int32 EntryPoint);
	void Visible(bool Param_Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DAF_Base_C">();
	}
	static class ADAF_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADAF_Base_C>();
	}
};
static_assert(alignof(ADAF_Base_C) == 0x000008, "Wrong alignment on ADAF_Base_C");
static_assert(sizeof(ADAF_Base_C) == 0x000230, "Wrong size on ADAF_Base_C");
static_assert(offsetof(ADAF_Base_C, UberGraphFrame) == 0x000220, "Member 'ADAF_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADAF_Base_C, ParticleSystem) == 0x000228, "Member 'ADAF_Base_C::ParticleSystem' has a wrong offset!");

}
