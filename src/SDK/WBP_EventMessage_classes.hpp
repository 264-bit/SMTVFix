#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EventMessage

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_EventMessage.WBP_EventMessage_C
// 0x0008 (0x0268 - 0x0260)
class UWBP_EventMessage_C final : public UUserWidget
{
public:
	class UAtRichText*                            EventMessageText;                                  // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EventMessage_C">();
	}
	static class UWBP_EventMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EventMessage_C>();
	}
};
static_assert(alignof(UWBP_EventMessage_C) == 0x000008, "Wrong alignment on UWBP_EventMessage_C");
static_assert(sizeof(UWBP_EventMessage_C) == 0x000268, "Wrong size on UWBP_EventMessage_C");
static_assert(offsetof(UWBP_EventMessage_C, EventMessageText) == 0x000260, "Member 'UWBP_EventMessage_C::EventMessageText' has a wrong offset!");

}
