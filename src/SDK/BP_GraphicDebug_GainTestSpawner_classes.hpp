#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GraphicDebug_GainTestSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GraphicDebug_GainTestSpawner.BP_GraphicDebug_GainTestSpawner_C
// 0x0038 (0x0258 - 0x0220)
class ABP_GraphicDebug_GainTestSpawner_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   Soft;                                              // 0x0230(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnLoaded_9AAE2E5F43814E487A20D3A0D984FA1F(TSubclassOf<class UObject> Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GraphicDebug_GainTestSpawner_C">();
	}
	static class ABP_GraphicDebug_GainTestSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GraphicDebug_GainTestSpawner_C>();
	}
};
static_assert(alignof(ABP_GraphicDebug_GainTestSpawner_C) == 0x000008, "Wrong alignment on ABP_GraphicDebug_GainTestSpawner_C");
static_assert(sizeof(ABP_GraphicDebug_GainTestSpawner_C) == 0x000258, "Wrong size on ABP_GraphicDebug_GainTestSpawner_C");
static_assert(offsetof(ABP_GraphicDebug_GainTestSpawner_C, UberGraphFrame) == 0x000220, "Member 'ABP_GraphicDebug_GainTestSpawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_GraphicDebug_GainTestSpawner_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_GraphicDebug_GainTestSpawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_GraphicDebug_GainTestSpawner_C, Soft) == 0x000230, "Member 'ABP_GraphicDebug_GainTestSpawner_C::Soft' has a wrong offset!");

}
