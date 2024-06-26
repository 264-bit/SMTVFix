#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyState_SkillDuration

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotifyState_SkillDuration.AnimNotifyState_SkillDuration_C
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_SkillDuration_C final : public UAnimNotifyState
{
public:
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotifyState_SkillDuration_C">();
	}
	static class UAnimNotifyState_SkillDuration_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_SkillDuration_C>();
	}
};
static_assert(alignof(UAnimNotifyState_SkillDuration_C) == 0x000008, "Wrong alignment on UAnimNotifyState_SkillDuration_C");
static_assert(sizeof(UAnimNotifyState_SkillDuration_C) == 0x000030, "Wrong size on UAnimNotifyState_SkillDuration_C");

}

