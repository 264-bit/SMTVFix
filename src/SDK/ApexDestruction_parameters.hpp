#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ApexDestruction

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ApexDestruction.DestructibleComponent.ApplyDamage
// 0x0020 (0x0020 - 0x0000)
struct DestructibleComponent_ApplyDamage final
{
public:
	float                                         DamageAmount;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HitLocation;                                       // 0x0004(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ImpulseDir;                                        // 0x0010(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ImpulseStrength;                                   // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DestructibleComponent_ApplyDamage) == 0x000004, "Wrong alignment on DestructibleComponent_ApplyDamage");
static_assert(sizeof(DestructibleComponent_ApplyDamage) == 0x000020, "Wrong size on DestructibleComponent_ApplyDamage");
static_assert(offsetof(DestructibleComponent_ApplyDamage, DamageAmount) == 0x000000, "Member 'DestructibleComponent_ApplyDamage::DamageAmount' has a wrong offset!");
static_assert(offsetof(DestructibleComponent_ApplyDamage, HitLocation) == 0x000004, "Member 'DestructibleComponent_ApplyDamage::HitLocation' has a wrong offset!");
static_assert(offsetof(DestructibleComponent_ApplyDamage, ImpulseDir) == 0x000010, "Member 'DestructibleComponent_ApplyDamage::ImpulseDir' has a wrong offset!");
static_assert(offsetof(DestructibleComponent_ApplyDamage, ImpulseStrength) == 0x00001C, "Member 'DestructibleComponent_ApplyDamage::ImpulseStrength' has a wrong offset!");

// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
// 0x001C (0x001C - 0x0000)
struct DestructibleComponent_ApplyRadiusDamage final
{
public:
	float                                         BaseDamage;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HurtOrigin;                                        // 0x0004(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DamageRadius;                                      // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ImpulseStrength;                                   // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFullDamage;                                       // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DF3[0x3];                                      // 0x0019(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(DestructibleComponent_ApplyRadiusDamage) == 0x000004, "Wrong alignment on DestructibleComponent_ApplyRadiusDamage");
static_assert(sizeof(DestructibleComponent_ApplyRadiusDamage) == 0x00001C, "Wrong size on DestructibleComponent_ApplyRadiusDamage");
static_assert(offsetof(DestructibleComponent_ApplyRadiusDamage, BaseDamage) == 0x000000, "Member 'DestructibleComponent_ApplyRadiusDamage::BaseDamage' has a wrong offset!");
static_assert(offsetof(DestructibleComponent_ApplyRadiusDamage, HurtOrigin) == 0x000004, "Member 'DestructibleComponent_ApplyRadiusDamage::HurtOrigin' has a wrong offset!");
static_assert(offsetof(DestructibleComponent_ApplyRadiusDamage, DamageRadius) == 0x000010, "Member 'DestructibleComponent_ApplyRadiusDamage::DamageRadius' has a wrong offset!");
static_assert(offsetof(DestructibleComponent_ApplyRadiusDamage, ImpulseStrength) == 0x000014, "Member 'DestructibleComponent_ApplyRadiusDamage::ImpulseStrength' has a wrong offset!");
static_assert(offsetof(DestructibleComponent_ApplyRadiusDamage, bFullDamage) == 0x000018, "Member 'DestructibleComponent_ApplyRadiusDamage::bFullDamage' has a wrong offset!");

// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
// 0x0008 (0x0008 - 0x0000)
struct DestructibleComponent_GetDestructibleMesh final
{
public:
	class UDestructibleMesh*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DestructibleComponent_GetDestructibleMesh) == 0x000008, "Wrong alignment on DestructibleComponent_GetDestructibleMesh");
static_assert(sizeof(DestructibleComponent_GetDestructibleMesh) == 0x000008, "Wrong size on DestructibleComponent_GetDestructibleMesh");
static_assert(offsetof(DestructibleComponent_GetDestructibleMesh, ReturnValue) == 0x000000, "Member 'DestructibleComponent_GetDestructibleMesh::ReturnValue' has a wrong offset!");

// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
// 0x0008 (0x0008 - 0x0000)
struct DestructibleComponent_SetDestructibleMesh final
{
public:
	class UDestructibleMesh*                      NewMesh;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DestructibleComponent_SetDestructibleMesh) == 0x000008, "Wrong alignment on DestructibleComponent_SetDestructibleMesh");
static_assert(sizeof(DestructibleComponent_SetDestructibleMesh) == 0x000008, "Wrong size on DestructibleComponent_SetDestructibleMesh");
static_assert(offsetof(DestructibleComponent_SetDestructibleMesh, NewMesh) == 0x000000, "Member 'DestructibleComponent_SetDestructibleMesh::NewMesh' has a wrong offset!");

}

