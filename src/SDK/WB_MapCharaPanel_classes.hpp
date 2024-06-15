#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MapCharaPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MapCharaPanel.WB_MapCharaPanel_C
// 0x0030 (0x0290 - 0x0260)
class UWB_MapCharaPanel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel00;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel01;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel02;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel03;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_MapCharaPanel(int32 EntryPoint);
	void Construct();
	void GetWBCharaPanel(int32 InIndex, class UWB_CharaPanel_C** OutWidget);
	void CharaPanelOn();
	void CharaPanelOff();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MapCharaPanel_C">();
	}
	static class UWB_MapCharaPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MapCharaPanel_C>();
	}
};
static_assert(alignof(UWB_MapCharaPanel_C) == 0x000008, "Wrong alignment on UWB_MapCharaPanel_C");
static_assert(sizeof(UWB_MapCharaPanel_C) == 0x000290, "Wrong size on UWB_MapCharaPanel_C");
static_assert(offsetof(UWB_MapCharaPanel_C, UberGraphFrame) == 0x000260, "Member 'UWB_MapCharaPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MapCharaPanel_C, CanvasPanel) == 0x000268, "Member 'UWB_MapCharaPanel_C::CanvasPanel' has a wrong offset!");
static_assert(offsetof(UWB_MapCharaPanel_C, WB_CharaPanel00) == 0x000270, "Member 'UWB_MapCharaPanel_C::WB_CharaPanel00' has a wrong offset!");
static_assert(offsetof(UWB_MapCharaPanel_C, WB_CharaPanel01) == 0x000278, "Member 'UWB_MapCharaPanel_C::WB_CharaPanel01' has a wrong offset!");
static_assert(offsetof(UWB_MapCharaPanel_C, WB_CharaPanel02) == 0x000280, "Member 'UWB_MapCharaPanel_C::WB_CharaPanel02' has a wrong offset!");
static_assert(offsetof(UWB_MapCharaPanel_C, WB_CharaPanel03) == 0x000288, "Member 'UWB_MapCharaPanel_C::WB_CharaPanel03' has a wrong offset!");

}
