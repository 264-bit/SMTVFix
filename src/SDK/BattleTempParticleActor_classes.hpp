#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleTempParticleActor

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleTempParticleActor.BattleTempParticleActor_C
// 0x0010 (0x0230 - 0x0220)
class ABattleTempParticleActor_C final : public AActor
{
public:
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void SetParticle(class UParticleSystem* Particle, const struct FTransform& Transform);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleTempParticleActor_C">();
	}
	static class ABattleTempParticleActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABattleTempParticleActor_C>();
	}
};
static_assert(alignof(ABattleTempParticleActor_C) == 0x000008, "Wrong alignment on ABattleTempParticleActor_C");
static_assert(sizeof(ABattleTempParticleActor_C) == 0x000230, "Wrong size on ABattleTempParticleActor_C");
static_assert(offsetof(ABattleTempParticleActor_C, ParticleSystem) == 0x000220, "Member 'ABattleTempParticleActor_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABattleTempParticleActor_C, DefaultSceneRoot) == 0x000228, "Member 'ABattleTempParticleActor_C::DefaultSceneRoot' has a wrong offset!");

}
