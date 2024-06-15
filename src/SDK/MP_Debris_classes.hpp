#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_Debris

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MP_Debris.MP_Debris_C
// 0x0018 (0x0238 - 0x0220)
class AMP_Debris_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MP_Debris(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MP_Debris_C">();
	}
	static class AMP_Debris_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMP_Debris_C>();
	}
};
static_assert(alignof(AMP_Debris_C) == 0x000008, "Wrong alignment on AMP_Debris_C");
static_assert(sizeof(AMP_Debris_C) == 0x000238, "Wrong size on AMP_Debris_C");
static_assert(offsetof(AMP_Debris_C, UberGraphFrame) == 0x000220, "Member 'AMP_Debris_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMP_Debris_C, StaticMesh) == 0x000228, "Member 'AMP_Debris_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AMP_Debris_C, DefaultSceneRoot) == 0x000230, "Member 'AMP_Debris_C::DefaultSceneRoot' has a wrong offset!");

}
