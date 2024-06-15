#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MagatsukaFoundEffect

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MagatsukaFoundEffect.BP_MagatsukaFoundEffect_C
// 0x0070 (0x0290 - 0x0220)
class ABP_MagatsukaFoundEffect_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        SEPoint;                                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Decal_Alpha_2968B1924F16D0E94D1B9899C520BE51; // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_Decal__Direction_2968B1924F16D0E94D1B9899C520BE51; // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FEA[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_Decal;                                    // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_PP_In_Alpha_D5A360284FA54301CE2126AD9CE10886; // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_PP_In__Direction_D5A360284FA54301CE2126AD9CE10886; // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FEB[0x3];                                     // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_PP_In;                                    // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EffectIn;                                          // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ParticleEnd;                                       // 0x0269(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DecalEnd;                                          // 0x026A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PostEnd;                                           // 0x026B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FEC[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DecalDMI;                                          // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DecalColor;                                        // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAtomComponent*                         LoopSE;                                            // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MagatsukaFoundEffect(int32 EntryPoint);
	void ReceiveBeginPlay();
	void End();
	void BPI_RestartFoundEffect();
	void BPI_PauseFoundEffect();
	void Start();
	void OnSystemFinished_(class UParticleSystemComponent* PSystem);
	void Timeline_Decal__UpdateFunc();
	void Timeline_Decal__FinishedFunc();
	void Timeline_PP_In__UpdateFunc();
	void Timeline_PP_In__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MagatsukaFoundEffect_C">();
	}
	static class ABP_MagatsukaFoundEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MagatsukaFoundEffect_C>();
	}
};
static_assert(alignof(ABP_MagatsukaFoundEffect_C) == 0x000008, "Wrong alignment on ABP_MagatsukaFoundEffect_C");
static_assert(sizeof(ABP_MagatsukaFoundEffect_C) == 0x000290, "Wrong size on ABP_MagatsukaFoundEffect_C");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, UberGraphFrame) == 0x000220, "Member 'ABP_MagatsukaFoundEffect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, SEPoint) == 0x000228, "Member 'ABP_MagatsukaFoundEffect_C::SEPoint' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, Decal) == 0x000230, "Member 'ABP_MagatsukaFoundEffect_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, ParticleSystem) == 0x000238, "Member 'ABP_MagatsukaFoundEffect_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_MagatsukaFoundEffect_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, Timeline_Decal_Alpha_2968B1924F16D0E94D1B9899C520BE51) == 0x000248, "Member 'ABP_MagatsukaFoundEffect_C::Timeline_Decal_Alpha_2968B1924F16D0E94D1B9899C520BE51' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, Timeline_Decal__Direction_2968B1924F16D0E94D1B9899C520BE51) == 0x00024C, "Member 'ABP_MagatsukaFoundEffect_C::Timeline_Decal__Direction_2968B1924F16D0E94D1B9899C520BE51' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, Timeline_Decal) == 0x000250, "Member 'ABP_MagatsukaFoundEffect_C::Timeline_Decal' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, Timeline_PP_In_Alpha_D5A360284FA54301CE2126AD9CE10886) == 0x000258, "Member 'ABP_MagatsukaFoundEffect_C::Timeline_PP_In_Alpha_D5A360284FA54301CE2126AD9CE10886' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, Timeline_PP_In__Direction_D5A360284FA54301CE2126AD9CE10886) == 0x00025C, "Member 'ABP_MagatsukaFoundEffect_C::Timeline_PP_In__Direction_D5A360284FA54301CE2126AD9CE10886' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, Timeline_PP_In) == 0x000260, "Member 'ABP_MagatsukaFoundEffect_C::Timeline_PP_In' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, EffectIn) == 0x000268, "Member 'ABP_MagatsukaFoundEffect_C::EffectIn' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, ParticleEnd) == 0x000269, "Member 'ABP_MagatsukaFoundEffect_C::ParticleEnd' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, DecalEnd) == 0x00026A, "Member 'ABP_MagatsukaFoundEffect_C::DecalEnd' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, PostEnd) == 0x00026B, "Member 'ABP_MagatsukaFoundEffect_C::PostEnd' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, DecalDMI) == 0x000270, "Member 'ABP_MagatsukaFoundEffect_C::DecalDMI' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, DecalColor) == 0x000278, "Member 'ABP_MagatsukaFoundEffect_C::DecalColor' has a wrong offset!");
static_assert(offsetof(ABP_MagatsukaFoundEffect_C, LoopSE) == 0x000288, "Member 'ABP_MagatsukaFoundEffect_C::LoopSE' has a wrong offset!");

}

