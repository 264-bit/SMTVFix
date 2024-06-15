#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev259_AnimBP

#include "Basic.hpp"

#include "Dev259_AnimBP_classes.hpp"
#include "Dev259_AnimBP_parameters.hpp"


namespace SDK
{

// Function Dev259_AnimBP.Dev259_AnimBP_C.ExecuteUbergraph_Dev259_AnimBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::ExecuteUbergraph_Dev259_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "ExecuteUbergraph_Dev259_AnimBP");

	Params::Dev259_AnimBP_C_ExecuteUbergraph_Dev259_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetPoseWeightTable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomPoseWeightTable*           PoseWeightTable                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::SetPoseWeightTable(class UCustomPoseWeightTable* PoseWeightTable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetPoseWeightTable");

	Params::Dev259_AnimBP_C_SetPoseWeightTable Parms{};

	Parms.PoseWeightTable = PoseWeightTable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetHeadIKRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::SetHeadIKRotation(int32 Param_Index, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetHeadIKRotation");

	Params::Dev259_AnimBP_C_SetHeadIKRotation Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetHeadIKEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Immediately                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::SetHeadIKEnable(bool Enable, bool Immediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetHeadIKEnable");

	Params::Dev259_AnimBP_C_SetHeadIKEnable Parms{};

	Parms.Enable = Enable;
	Parms.Immediately = Immediately;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetLookAtEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::SetLookAtEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetLookAtEnable");

	Params::Dev259_AnimBP_C_SetLookAtEnable Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetBoneMotionEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::SetBoneMotionEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetBoneMotionEnable");

	Params::Dev259_AnimBP_C_SetBoneMotionEnable Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetRootOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         DeltaRotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::SetRootOffset(const struct FVector& Offset, const struct FRotator& DeltaRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetRootOffset");

	Params::Dev259_AnimBP_C_SetRootOffset Parms{};

	Parms.Offset = std::move(Offset);
	Parms.DeltaRotation = std::move(DeltaRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetRootOffsetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::SetRootOffsetEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetRootOffsetEnable");

	Params::Dev259_AnimBP_C_SetRootOffsetEnable Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetLegIKEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Immediately                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::SetLegIKEnable(bool Enable, bool Immediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetLegIKEnable");

	Params::Dev259_AnimBP_C_SetLegIKEnable Parms{};

	Parms.Enable = Enable;
	Parms.Immediately = Immediately;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetLegIKEffector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         DeltaRotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::SetLegIKEffector(int32 Param_Index, const struct FVector& Location, const struct FRotator& DeltaRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetLegIKEffector");

	Params::Dev259_AnimBP_C_SetLegIKEffector Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Location = std::move(Location);
	Parms.DeltaRotation = std::move(DeltaRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetMumbleAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::SetMumbleAnimation(class UAnimSequenceBase* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetMumbleAnimation");

	Params::Dev259_AnimBP_C_SetMumbleAnimation Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetMumbleEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::SetMumbleEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetMumbleEnable");

	Params::Dev259_AnimBP_C_SetMumbleEnable Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetDefaultAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::SetDefaultAnimation(class UAnimSequenceBase* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetDefaultAnimation");

	Params::Dev259_AnimBP_C_SetDefaultAnimation Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetAnimationMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CHARA_ANIMATION_MODE                  Mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::SetAnimationMode(E_CHARA_ANIMATION_MODE Mode, float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetAnimationMode");

	Params::Dev259_AnimBP_C_SetAnimationMode Parms{};

	Parms.Mode = Mode;
	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.BlueprintPostEvaluateAnimation
// (Event, Public, BlueprintEvent)

void UDev259_AnimBP_C::BlueprintPostEvaluateAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "BlueprintPostEvaluateAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UDev259_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "BlueprintUpdateAnimation");

	Params::Dev259_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetLegIKTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::SetLegIKTarget(int32 Param_Index, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetLegIKTarget");

	Params::Dev259_AnimBP_C_SetLegIKTarget Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetEyeIKEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Immediately                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::SetEyeIKEnable(bool Enable, bool Immediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetEyeIKEnable");

	Params::Dev259_AnimBP_C_SetEyeIKEnable Parms{};

	Parms.Enable = Enable;
	Parms.Immediately = Immediately;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetEyeIKRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::SetEyeIKRotation(int32 Param_Index, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetEyeIKRotation");

	Params::Dev259_AnimBP_C_SetEyeIKRotation Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetBodyIKEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Immediately                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::SetBodyIKEnable(bool Enable, bool Immediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetBodyIKEnable");

	Params::Dev259_AnimBP_C_SetBodyIKEnable Parms{};

	Parms.Enable = Enable;
	Parms.Immediately = Immediately;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetFloatingIKPerch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::SetFloatingIKPerch(float Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetFloatingIKPerch");

	Params::Dev259_AnimBP_C_SetFloatingIKPerch Parms{};

	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetPrimaryWorldOffsetBoneTrans
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Trans                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   BlendAlpha                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::SetPrimaryWorldOffsetBoneTrans(const struct FTransform& Trans, float BlendAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetPrimaryWorldOffsetBoneTrans");

	Params::Dev259_AnimBP_C_SetPrimaryWorldOffsetBoneTrans Parms{};

	Parms.Trans = std::move(Trans);
	Parms.BlendAlpha = BlendAlpha;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetEnableBoneTrans
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::SetEnableBoneTrans(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetEnableBoneTrans");

	Params::Dev259_AnimBP_C_SetEnableBoneTrans Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetWorldOffsetBoneTranses
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>               Transes                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<float>                           TransAlphas                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDev259_AnimBP_C::SetWorldOffsetBoneTranses(const TArray<struct FTransform>& Transes, const TArray<float>& TransAlphas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetWorldOffsetBoneTranses");

	Params::Dev259_AnimBP_C_SetWorldOffsetBoneTranses Parms{};

	Parms.Transes = std::move(Transes);
	Parms.TransAlphas = std::move(TransAlphas);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetInvalidLegIK
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Invalid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::SetInvalidLegIK(bool Invalid, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetInvalidLegIK");

	Params::Dev259_AnimBP_C_SetInvalidLegIK Parms{};

	Parms.Invalid = Invalid;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetHeadIKRotationTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::SetHeadIKRotationTick(int32 Param_Index, const struct FRotator& Rotation, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetHeadIKRotationTick");

	Params::Dev259_AnimBP_C_SetHeadIKRotationTick Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Rotation = std::move(Rotation);
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.InvalidLookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Invalid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDev259_AnimBP_C::InvalidLookAt(bool Invalid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "InvalidLookAt");

	Params::Dev259_AnimBP_C_InvalidLookAt Parms{};

	Parms.Invalid = Invalid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.SetHeadIKInterpSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewSpeed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::SetHeadIKInterpSpeed(float NewSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "SetHeadIKInterpSpeed");

	Params::Dev259_AnimBP_C_SetHeadIKInterpSpeed Parms{};

	Parms.NewSpeed = NewSpeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.ChangeTwistAsset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::ChangeTwistAsset(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "ChangeTwistAsset");

	Params::Dev259_AnimBP_C_ChangeTwistAsset Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UDev259_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "AnimGraph");

	Params::Dev259_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.GetDefaultAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimSequenceBase*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UAnimSequenceBase* UDev259_AnimBP_C::GetDefaultAnimation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "GetDefaultAnimation");

	Params::Dev259_AnimBP_C_GetDefaultAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.GetAnimationMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// E_CHARA_ANIMATION_MODE                  Param_ModeCurrent                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_CHARA_ANIMATION_MODE                  Param_ModePrevious                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDev259_AnimBP_C::GetAnimationMode(E_CHARA_ANIMATION_MODE* Param_ModeCurrent, E_CHARA_ANIMATION_MODE* Param_ModePrevious) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "GetAnimationMode");

	Params::Dev259_AnimBP_C_GetAnimationMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ModeCurrent != nullptr)
		*Param_ModeCurrent = Parms.Param_ModeCurrent;

	if (Param_ModePrevious != nullptr)
		*Param_ModePrevious = Parms.Param_ModePrevious;
}


// Function Dev259_AnimBP.Dev259_AnimBP_C.GetMumbleAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimSequenceBase*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UAnimSequenceBase* UDev259_AnimBP_C::GetMumbleAnimation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev259_AnimBP_C", "GetMumbleAnimation");

	Params::Dev259_AnimBP_C_GetMumbleAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

