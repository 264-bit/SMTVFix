#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_Bonfire

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MP_Bonfire.MP_Bonfire_C
// 0x0040 (0x0260 - 0x0220)
class AMP_Bonfire_C final : public AActor
{
public:
	class UBPC_ResidentSound_C*                   BPC_ResidentSound;                                 // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone;                                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Dath_OM_000;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Takibi;                                         // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               Texture_LinerGrayscale_;                           // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MP_Bonfire_C">();
	}
	static class AMP_Bonfire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMP_Bonfire_C>();
	}
};
static_assert(alignof(AMP_Bonfire_C) == 0x000008, "Wrong alignment on AMP_Bonfire_C");
static_assert(sizeof(AMP_Bonfire_C) == 0x000260, "Wrong size on AMP_Bonfire_C");
static_assert(offsetof(AMP_Bonfire_C, BPC_ResidentSound) == 0x000220, "Member 'AMP_Bonfire_C::BPC_ResidentSound' has a wrong offset!");
static_assert(offsetof(AMP_Bonfire_C, Cone) == 0x000228, "Member 'AMP_Bonfire_C::Cone' has a wrong offset!");
static_assert(offsetof(AMP_Bonfire_C, PointLight) == 0x000230, "Member 'AMP_Bonfire_C::PointLight' has a wrong offset!");
static_assert(offsetof(AMP_Bonfire_C, Dath_OM_000) == 0x000238, "Member 'AMP_Bonfire_C::Dath_OM_000' has a wrong offset!");
static_assert(offsetof(AMP_Bonfire_C, SM_Takibi) == 0x000240, "Member 'AMP_Bonfire_C::SM_Takibi' has a wrong offset!");
static_assert(offsetof(AMP_Bonfire_C, Decal) == 0x000248, "Member 'AMP_Bonfire_C::Decal' has a wrong offset!");
static_assert(offsetof(AMP_Bonfire_C, DefaultSceneRoot) == 0x000250, "Member 'AMP_Bonfire_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AMP_Bonfire_C, Texture_LinerGrayscale_) == 0x000258, "Member 'AMP_Bonfire_C::Texture_LinerGrayscale_' has a wrong offset!");

}

