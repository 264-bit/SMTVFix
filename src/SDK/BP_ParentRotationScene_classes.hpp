#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ParentRotationScene

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ParentRotationScene.BP_ParentRotationScene_C
// 0x0020 (0x0220 - 0x0200)
class UBP_ParentRotationScene_C final : public USceneComponent
{
public:
	uint8                                         Pad_2338[0x8];                                     // 0x01F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0200(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         ParentIndex;                                       // 0x0208(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RelativeRotate;                                    // 0x020C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_ParentRotationScene(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ParentRotationScene_C">();
	}
	static class UBP_ParentRotationScene_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ParentRotationScene_C>();
	}
};
static_assert(alignof(UBP_ParentRotationScene_C) == 0x000010, "Wrong alignment on UBP_ParentRotationScene_C");
static_assert(sizeof(UBP_ParentRotationScene_C) == 0x000220, "Wrong size on UBP_ParentRotationScene_C");
static_assert(offsetof(UBP_ParentRotationScene_C, UberGraphFrame) == 0x000200, "Member 'UBP_ParentRotationScene_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ParentRotationScene_C, ParentIndex) == 0x000208, "Member 'UBP_ParentRotationScene_C::ParentIndex' has a wrong offset!");
static_assert(offsetof(UBP_ParentRotationScene_C, RelativeRotate) == 0x00020C, "Member 'UBP_ParentRotationScene_C::RelativeRotate' has a wrong offset!");

}
