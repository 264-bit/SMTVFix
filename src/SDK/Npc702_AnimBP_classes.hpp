#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Npc702_AnimBP

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Npc702_AnimBP.Npc702_AnimBP_C
// 0x0F50 (0x1210 - 0x02C0)
class UNpc702_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_9FD8[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x02F8(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x03A8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x03F0(0x0080)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0470(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x05C8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x05F0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0618(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0698(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x06C8(0x00B0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0778(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0798(0x0020)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_1;                          // 0x07B8(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone;                            // 0x08A8(0x00F0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x0998(0x0108)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_1;                         // 0x0AA0(0x01E0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;                           // 0x0C80(0x01E0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0E60(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0F68(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1070(0x0108)()
	class UAnimSequenceBase*                      DefaultAnimation;                                  // 0x1178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CHARA_ANIMATION_MODE                        ModeCurrent;                                       // 0x1180(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FD9[0x3];                                     // 0x1181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ModeBlendTime;                                     // 0x1184(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x1188(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CHARA_ANIMATION_MODE                        ModePrevious;                                      // 0x118C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FDA[0x3];                                     // 0x118D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RootOffsetEnable;                                  // 0x1190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootOffset;                                        // 0x1194(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LegIKEnable;                                       // 0x11A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FDB[0x3];                                     // 0x11A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               RootDeltaRotation;                                 // 0x11A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         LegIKAlpha;                                        // 0x11B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeftLegIKEffectorLocation;                         // 0x11B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightLegIKEffectorLocation;                        // 0x11C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               LeftLegIKEffectorRotation;                         // 0x11CC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               RightLegIKEffectorRotation;                        // 0x11D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                LeftLegIKTargetLocation;                           // 0x11E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightLegIKTargetLocation;                          // 0x11F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LookAtEnable;                                      // 0x11FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HeadIKEnable;                                      // 0x11FD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FDC[0x2];                                     // 0x11FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               HeadIKRotation;                                    // 0x1200(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         HeadIKAlpha;                                       // 0x120C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Npc702_AnimBP(int32 EntryPoint);
	void SetLookAtEnable(bool Enable);
	void SetEyeIKEnable(bool Enable, bool Immediately);
	void SetHeadIKEnable(bool Enable, bool Immediately);
	void SetHeadIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetEyeIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetLegIKEnable(bool Enable, bool Immediately);
	void SetRootOffsetEnable(bool Enable);
	void SetLegIKTarget(int32 Param_Index, const struct FVector& Location);
	void SetLegIKEffector(int32 Param_Index, const struct FVector& Location, const struct FRotator& DeltaRotation);
	void SetRootOffset(const struct FVector& Offset, const struct FRotator& DeltaRotation);
	void SetDefaultAnimation(class UAnimSequenceBase* Animation);
	void SetAnimationMode(E_CHARA_ANIMATION_MODE Mode, float BlendTime);
	void BlueprintPostEvaluateAnimation();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetBodyIKEnable(bool Enable, bool Immediately);
	void SetFloatingIKPerch(float Alpha);
	void SetPrimaryWorldOffsetBoneTrans(const struct FTransform& Trans, float BlendAlpha);
	void SetEnableBoneTrans(bool IsEnable);
	void SetWorldOffsetBoneTranses(const TArray<struct FTransform>& Transes, const TArray<float>& TransAlphas);
	void SetInvalidLegIK(bool Invalid, int32 Param_Index);
	void SetHeadIKRotationTick(int32 Param_Index, const struct FRotator& Rotation, float DeltaTime);
	void InvalidLookAt(bool Invalid);
	void ChangeTwistAsset(int32 Param_Index);
	void SetHeadIKInterpSpeed(float NewSpeed);
	void SetPoseWeightTable(class UCustomPoseWeightTable* PoseWeightTable);
	void SetMumbleAnimation(class UAnimSequenceBase* Animation);
	void SetMumbleEnable(bool Enable);
	void SetBoneMotionEnable(bool Enable);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

	class UAnimSequenceBase* GetMumbleAnimation() const;
	class UAnimSequenceBase* GetDefaultAnimation() const;
	void GetAnimationMode(E_CHARA_ANIMATION_MODE* Param_ModeCurrent, E_CHARA_ANIMATION_MODE* Param_ModePrevious) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Npc702_AnimBP_C">();
	}
	static class UNpc702_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNpc702_AnimBP_C>();
	}
};
static_assert(alignof(UNpc702_AnimBP_C) == 0x000010, "Wrong alignment on UNpc702_AnimBP_C");
static_assert(sizeof(UNpc702_AnimBP_C) == 0x001210, "Wrong size on UNpc702_AnimBP_C");
static_assert(offsetof(UNpc702_AnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UNpc702_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UNpc702_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x0002F8, "Member 'UNpc702_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_Slot) == 0x0003A8, "Member 'UNpc702_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x0003F0, "Member 'UNpc702_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x000470, "Member 'UNpc702_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x0005C8, "Member 'UNpc702_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x0005F0, "Member 'UNpc702_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000618, "Member 'UNpc702_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_StateResult) == 0x000698, "Member 'UNpc702_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_StateMachine) == 0x0006C8, "Member 'UNpc702_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000778, "Member 'UNpc702_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000798, "Member 'UNpc702_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_CopyBone_1) == 0x0007B8, "Member 'UNpc702_AnimBP_C::AnimGraphNode_CopyBone_1' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_CopyBone) == 0x0008A8, "Member 'UNpc702_AnimBP_C::AnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_ModifyBone_3) == 0x000998, "Member 'UNpc702_AnimBP_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_TwoBoneIK_1) == 0x000AA0, "Member 'UNpc702_AnimBP_C::AnimGraphNode_TwoBoneIK_1' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_TwoBoneIK) == 0x000C80, "Member 'UNpc702_AnimBP_C::AnimGraphNode_TwoBoneIK' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x000E60, "Member 'UNpc702_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x000F68, "Member 'UNpc702_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, AnimGraphNode_ModifyBone) == 0x001070, "Member 'UNpc702_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, DefaultAnimation) == 0x001178, "Member 'UNpc702_AnimBP_C::DefaultAnimation' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, ModeCurrent) == 0x001180, "Member 'UNpc702_AnimBP_C::ModeCurrent' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, ModeBlendTime) == 0x001184, "Member 'UNpc702_AnimBP_C::ModeBlendTime' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, Time) == 0x001188, "Member 'UNpc702_AnimBP_C::Time' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, ModePrevious) == 0x00118C, "Member 'UNpc702_AnimBP_C::ModePrevious' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, RootOffsetEnable) == 0x001190, "Member 'UNpc702_AnimBP_C::RootOffsetEnable' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, RootOffset) == 0x001194, "Member 'UNpc702_AnimBP_C::RootOffset' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, LegIKEnable) == 0x0011A0, "Member 'UNpc702_AnimBP_C::LegIKEnable' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, RootDeltaRotation) == 0x0011A4, "Member 'UNpc702_AnimBP_C::RootDeltaRotation' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, LegIKAlpha) == 0x0011B0, "Member 'UNpc702_AnimBP_C::LegIKAlpha' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, LeftLegIKEffectorLocation) == 0x0011B4, "Member 'UNpc702_AnimBP_C::LeftLegIKEffectorLocation' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, RightLegIKEffectorLocation) == 0x0011C0, "Member 'UNpc702_AnimBP_C::RightLegIKEffectorLocation' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, LeftLegIKEffectorRotation) == 0x0011CC, "Member 'UNpc702_AnimBP_C::LeftLegIKEffectorRotation' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, RightLegIKEffectorRotation) == 0x0011D8, "Member 'UNpc702_AnimBP_C::RightLegIKEffectorRotation' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, LeftLegIKTargetLocation) == 0x0011E4, "Member 'UNpc702_AnimBP_C::LeftLegIKTargetLocation' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, RightLegIKTargetLocation) == 0x0011F0, "Member 'UNpc702_AnimBP_C::RightLegIKTargetLocation' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, LookAtEnable) == 0x0011FC, "Member 'UNpc702_AnimBP_C::LookAtEnable' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, HeadIKEnable) == 0x0011FD, "Member 'UNpc702_AnimBP_C::HeadIKEnable' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, HeadIKRotation) == 0x001200, "Member 'UNpc702_AnimBP_C::HeadIKRotation' has a wrong offset!");
static_assert(offsetof(UNpc702_AnimBP_C, HeadIKAlpha) == 0x00120C, "Member 'UNpc702_AnimBP_C::HeadIKAlpha' has a wrong offset!");

}
