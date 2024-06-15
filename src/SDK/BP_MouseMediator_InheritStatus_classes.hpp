#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MouseMediator_InheritStatus

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MouseMediator_InheritStatus.BP_MouseMediator_InheritStatus_C
// 0x0060 (0x0088 - 0x0028)
class UBP_MouseMediator_InheritStatus_C final : public UObject
{
public:
	FMulticastInlineDelegateProperty_             Disp_OnHoveredRightSlot;                           // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Disp_OnHoveredParentSlot;                          // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Disp_OnClickedRightSlot;                           // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Disp_OnClickedParentSlot;                          // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Disp_OnMovedRightScrollBarByMouse;                 // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Disp_OnMovedParentScrollBarByMouse;                // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Disp_OnMovedParentScrollBarByMouse__DelegateSignature(int32 NewOffset);
	void Disp_OnMovedRightScrollBarByMouse__DelegateSignature(int32 NewOffset);
	void Disp_OnClickedParentSlot__DelegateSignature(int32 Param_Index);
	void Disp_OnClickedRightSlot__DelegateSignature(int32 Param_Index);
	void Disp_OnHoveredParentSlot__DelegateSignature(int32 Param_Index);
	void Disp_OnHoveredRightSlot__DelegateSignature(int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MouseMediator_InheritStatus_C">();
	}
	static class UBP_MouseMediator_InheritStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MouseMediator_InheritStatus_C>();
	}
};
static_assert(alignof(UBP_MouseMediator_InheritStatus_C) == 0x000008, "Wrong alignment on UBP_MouseMediator_InheritStatus_C");
static_assert(sizeof(UBP_MouseMediator_InheritStatus_C) == 0x000088, "Wrong size on UBP_MouseMediator_InheritStatus_C");
static_assert(offsetof(UBP_MouseMediator_InheritStatus_C, Disp_OnHoveredRightSlot) == 0x000028, "Member 'UBP_MouseMediator_InheritStatus_C::Disp_OnHoveredRightSlot' has a wrong offset!");
static_assert(offsetof(UBP_MouseMediator_InheritStatus_C, Disp_OnHoveredParentSlot) == 0x000038, "Member 'UBP_MouseMediator_InheritStatus_C::Disp_OnHoveredParentSlot' has a wrong offset!");
static_assert(offsetof(UBP_MouseMediator_InheritStatus_C, Disp_OnClickedRightSlot) == 0x000048, "Member 'UBP_MouseMediator_InheritStatus_C::Disp_OnClickedRightSlot' has a wrong offset!");
static_assert(offsetof(UBP_MouseMediator_InheritStatus_C, Disp_OnClickedParentSlot) == 0x000058, "Member 'UBP_MouseMediator_InheritStatus_C::Disp_OnClickedParentSlot' has a wrong offset!");
static_assert(offsetof(UBP_MouseMediator_InheritStatus_C, Disp_OnMovedRightScrollBarByMouse) == 0x000068, "Member 'UBP_MouseMediator_InheritStatus_C::Disp_OnMovedRightScrollBarByMouse' has a wrong offset!");
static_assert(offsetof(UBP_MouseMediator_InheritStatus_C, Disp_OnMovedParentScrollBarByMouse) == 0x000078, "Member 'UBP_MouseMediator_InheritStatus_C::Disp_OnMovedParentScrollBarByMouse' has a wrong offset!");

}

