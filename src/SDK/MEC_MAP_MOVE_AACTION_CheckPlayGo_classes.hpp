#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MEC_MAP_MOVE_AACTION_CheckPlayGo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MEC_AACTION_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MEC_MAP_MOVE_AACTION_CheckPlayGo.MEC_MAP_MOVE_AACTION_CheckPlayGo_C
// 0x0050 (0x0428 - 0x03D8)
class AMEC_MAP_MOVE_AACTION_CheckPlayGo_C final : public AMEC_AACTION_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MEC_MAP_MOVE_AACTION_CheckPlayGo_C; // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMEC_PLAYER_START_C*                    MEC_PLAYER_START;                                  // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMEC_FADEOUT_C*                         MEC_FADEOUT;                                       // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMEC_PLAYER_STOP_C*                     MEC_PLAYER_STOP;                                   // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMEC_FADEIN_C*                          MEC_FADEIN;                                        // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMEC_MAP_MOVE_C*                        MEC_MAP_MOVE;                                      // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Map_id;                                            // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Area_id;                                           // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Warp_Point;                                        // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMinimapIconTableHelper                IconHelper;                                        // 0x0414(0x000C)(Edit, BlueprintVisible, NoDestructor)
	EBgmScene                                     PrevBGMScene;                                      // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MEC_MAP_MOVE_AACTION_CheckPlayGo(int32 EntryPoint);
	void EventHitAction();
	void BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void EndMoved_1();
	void UserConstructionScript();
	void SetMinimapIconTableRow(int32 Param_Index, struct FMinimapIconTableRow* OutRow, bool* NeedToAddMore);
	void BPI_SetDataId(int32 DataId, bool* Dummy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MEC_MAP_MOVE_AACTION_CheckPlayGo_C">();
	}
	static class AMEC_MAP_MOVE_AACTION_CheckPlayGo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMEC_MAP_MOVE_AACTION_CheckPlayGo_C>();
	}
};
static_assert(alignof(AMEC_MAP_MOVE_AACTION_CheckPlayGo_C) == 0x000008, "Wrong alignment on AMEC_MAP_MOVE_AACTION_CheckPlayGo_C");
static_assert(sizeof(AMEC_MAP_MOVE_AACTION_CheckPlayGo_C) == 0x000428, "Wrong size on AMEC_MAP_MOVE_AACTION_CheckPlayGo_C");
static_assert(offsetof(AMEC_MAP_MOVE_AACTION_CheckPlayGo_C, UberGraphFrame_MEC_MAP_MOVE_AACTION_CheckPlayGo_C) == 0x0003D8, "Member 'AMEC_MAP_MOVE_AACTION_CheckPlayGo_C::UberGraphFrame_MEC_MAP_MOVE_AACTION_CheckPlayGo_C' has a wrong offset!");
static_assert(offsetof(AMEC_MAP_MOVE_AACTION_CheckPlayGo_C, MEC_PLAYER_START) == 0x0003E0, "Member 'AMEC_MAP_MOVE_AACTION_CheckPlayGo_C::MEC_PLAYER_START' has a wrong offset!");
static_assert(offsetof(AMEC_MAP_MOVE_AACTION_CheckPlayGo_C, MEC_FADEOUT) == 0x0003E8, "Member 'AMEC_MAP_MOVE_AACTION_CheckPlayGo_C::MEC_FADEOUT' has a wrong offset!");
static_assert(offsetof(AMEC_MAP_MOVE_AACTION_CheckPlayGo_C, MEC_PLAYER_STOP) == 0x0003F0, "Member 'AMEC_MAP_MOVE_AACTION_CheckPlayGo_C::MEC_PLAYER_STOP' has a wrong offset!");
static_assert(offsetof(AMEC_MAP_MOVE_AACTION_CheckPlayGo_C, MEC_FADEIN) == 0x0003F8, "Member 'AMEC_MAP_MOVE_AACTION_CheckPlayGo_C::MEC_FADEIN' has a wrong offset!");
static_assert(offsetof(AMEC_MAP_MOVE_AACTION_CheckPlayGo_C, MEC_MAP_MOVE) == 0x000400, "Member 'AMEC_MAP_MOVE_AACTION_CheckPlayGo_C::MEC_MAP_MOVE' has a wrong offset!");
static_assert(offsetof(AMEC_MAP_MOVE_AACTION_CheckPlayGo_C, Map_id) == 0x000408, "Member 'AMEC_MAP_MOVE_AACTION_CheckPlayGo_C::Map_id' has a wrong offset!");
static_assert(offsetof(AMEC_MAP_MOVE_AACTION_CheckPlayGo_C, Area_id) == 0x00040C, "Member 'AMEC_MAP_MOVE_AACTION_CheckPlayGo_C::Area_id' has a wrong offset!");
static_assert(offsetof(AMEC_MAP_MOVE_AACTION_CheckPlayGo_C, Warp_Point) == 0x000410, "Member 'AMEC_MAP_MOVE_AACTION_CheckPlayGo_C::Warp_Point' has a wrong offset!");
static_assert(offsetof(AMEC_MAP_MOVE_AACTION_CheckPlayGo_C, IconHelper) == 0x000414, "Member 'AMEC_MAP_MOVE_AACTION_CheckPlayGo_C::IconHelper' has a wrong offset!");
static_assert(offsetof(AMEC_MAP_MOVE_AACTION_CheckPlayGo_C, PrevBGMScene) == 0x000420, "Member 'AMEC_MAP_MOVE_AACTION_CheckPlayGo_C::PrevBGMScene' has a wrong offset!");

}

