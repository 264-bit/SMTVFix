#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_PlayRestrictedParticle

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_PlayRestrictedParticle.AnimNotify_PlayRestrictedParticle_C
// 0x0040 (0x0078 - 0x0038)
class UAnimNotify_PlayRestrictedParticle_C final : public UAnimNotify
{
public:
	float                                         RestrictionSec;                                    // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                ValidScale;                                        // 0x003C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystem*                        PSTemplate;                                        // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   SocketName;                                        // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                LocationOffset;                                    // 0x0058(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               RotationOffset;                                    // 0x0064(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          AutoAttached;                                      // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsCastShadow;                                      // 0x0071(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_PlayRestrictedParticle_C">();
	}
	static class UAnimNotify_PlayRestrictedParticle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlayRestrictedParticle_C>();
	}
};
static_assert(alignof(UAnimNotify_PlayRestrictedParticle_C) == 0x000008, "Wrong alignment on UAnimNotify_PlayRestrictedParticle_C");
static_assert(sizeof(UAnimNotify_PlayRestrictedParticle_C) == 0x000078, "Wrong size on UAnimNotify_PlayRestrictedParticle_C");
static_assert(offsetof(UAnimNotify_PlayRestrictedParticle_C, RestrictionSec) == 0x000038, "Member 'UAnimNotify_PlayRestrictedParticle_C::RestrictionSec' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayRestrictedParticle_C, ValidScale) == 0x00003C, "Member 'UAnimNotify_PlayRestrictedParticle_C::ValidScale' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayRestrictedParticle_C, PSTemplate) == 0x000048, "Member 'UAnimNotify_PlayRestrictedParticle_C::PSTemplate' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayRestrictedParticle_C, SocketName) == 0x000050, "Member 'UAnimNotify_PlayRestrictedParticle_C::SocketName' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayRestrictedParticle_C, LocationOffset) == 0x000058, "Member 'UAnimNotify_PlayRestrictedParticle_C::LocationOffset' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayRestrictedParticle_C, RotationOffset) == 0x000064, "Member 'UAnimNotify_PlayRestrictedParticle_C::RotationOffset' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayRestrictedParticle_C, AutoAttached) == 0x000070, "Member 'UAnimNotify_PlayRestrictedParticle_C::AutoAttached' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayRestrictedParticle_C, IsCastShadow) == 0x000071, "Member 'UAnimNotify_PlayRestrictedParticle_C::IsCastShadow' has a wrong offset!");

}
