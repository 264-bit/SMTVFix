#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StatusEnvironment

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StatusEnvironment.BP_StatusEnvironment_C
// 0x0028 (0x0248 - 0x0220)
class ABP_StatusEnvironment_C final : public AActor
{
public:
	class UDirectionalLightComponent*             DirectionalLight_Sub;                              // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                     SkyLight;                                          // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   PostProcessVolume;                                 // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             DirectionalLight_Main;                             // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StatusEnvironment_C">();
	}
	static class ABP_StatusEnvironment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StatusEnvironment_C>();
	}
};
static_assert(alignof(ABP_StatusEnvironment_C) == 0x000008, "Wrong alignment on ABP_StatusEnvironment_C");
static_assert(sizeof(ABP_StatusEnvironment_C) == 0x000248, "Wrong size on ABP_StatusEnvironment_C");
static_assert(offsetof(ABP_StatusEnvironment_C, DirectionalLight_Sub) == 0x000220, "Member 'ABP_StatusEnvironment_C::DirectionalLight_Sub' has a wrong offset!");
static_assert(offsetof(ABP_StatusEnvironment_C, SkyLight) == 0x000228, "Member 'ABP_StatusEnvironment_C::SkyLight' has a wrong offset!");
static_assert(offsetof(ABP_StatusEnvironment_C, PostProcessVolume) == 0x000230, "Member 'ABP_StatusEnvironment_C::PostProcessVolume' has a wrong offset!");
static_assert(offsetof(ABP_StatusEnvironment_C, DirectionalLight_Main) == 0x000238, "Member 'ABP_StatusEnvironment_C::DirectionalLight_Main' has a wrong offset!");
static_assert(offsetof(ABP_StatusEnvironment_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_StatusEnvironment_C::DefaultSceneRoot' has a wrong offset!");

}

