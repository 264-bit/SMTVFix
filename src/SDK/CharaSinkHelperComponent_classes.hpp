#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaSinkHelperComponent

#include "Basic.hpp"

#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CharaSinkHelperComponent.CharaSinkHelperComponent_C
// 0x0018 (0x00C8 - 0x00B0)
class UCharaSinkHelperComponent_C final : public UCustomComponent
{
public:
	bool                                          Debug;                                             // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Immediately;                                       // 0x00B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DC2[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SinkSpeed;                                         // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SinkLimit;                                         // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SinkCurrent;                                       // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalVelocity;                                     // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Update(float DeltaTime, TArray<class UCharaSinkTesterInterface_C*>& Array, class USkinnedMeshComponent* Mesh, float Gravity);
	void SetValue(float Offset);

	float GetValue(float Offset) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaSinkHelperComponent_C">();
	}
	static class UCharaSinkHelperComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaSinkHelperComponent_C>();
	}
};
static_assert(alignof(UCharaSinkHelperComponent_C) == 0x000008, "Wrong alignment on UCharaSinkHelperComponent_C");
static_assert(sizeof(UCharaSinkHelperComponent_C) == 0x0000C8, "Wrong size on UCharaSinkHelperComponent_C");
static_assert(offsetof(UCharaSinkHelperComponent_C, Debug) == 0x0000B0, "Member 'UCharaSinkHelperComponent_C::Debug' has a wrong offset!");
static_assert(offsetof(UCharaSinkHelperComponent_C, Immediately) == 0x0000B1, "Member 'UCharaSinkHelperComponent_C::Immediately' has a wrong offset!");
static_assert(offsetof(UCharaSinkHelperComponent_C, SinkSpeed) == 0x0000B4, "Member 'UCharaSinkHelperComponent_C::SinkSpeed' has a wrong offset!");
static_assert(offsetof(UCharaSinkHelperComponent_C, SinkLimit) == 0x0000B8, "Member 'UCharaSinkHelperComponent_C::SinkLimit' has a wrong offset!");
static_assert(offsetof(UCharaSinkHelperComponent_C, SinkCurrent) == 0x0000BC, "Member 'UCharaSinkHelperComponent_C::SinkCurrent' has a wrong offset!");
static_assert(offsetof(UCharaSinkHelperComponent_C, LocalVelocity) == 0x0000C0, "Member 'UCharaSinkHelperComponent_C::LocalVelocity' has a wrong offset!");

}

