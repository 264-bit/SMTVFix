#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_Dev078DevilSkillVoice

#include "Basic.hpp"

#include "AnimNotify_DevilSkillVoice_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_Dev078DevilSkillVoice.AnimNotify_Dev078DevilSkillVoice_C
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_Dev078DevilSkillVoice_C final : public UAnimNotify_DevilSkillVoice_C
{
public:
	void GetAttrVoice(E_ATTRIBUTE_TYPE SkillAttr, class USoundAtomCue** AttrVoice) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_Dev078DevilSkillVoice_C">();
	}
	static class UAnimNotify_Dev078DevilSkillVoice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_Dev078DevilSkillVoice_C>();
	}
};
static_assert(alignof(UAnimNotify_Dev078DevilSkillVoice_C) == 0x000008, "Wrong alignment on UAnimNotify_Dev078DevilSkillVoice_C");
static_assert(sizeof(UAnimNotify_Dev078DevilSkillVoice_C) == 0x000040, "Wrong size on UAnimNotify_Dev078DevilSkillVoice_C");

}

