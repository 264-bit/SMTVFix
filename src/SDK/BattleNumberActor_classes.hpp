#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleNumberActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleNumberActor.BattleNumberActor_C
// 0x0040 (0x0260 - 0x0220)
class ABattleNumberActor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Flag;                                              // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6116[0x3];                                     // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                M_Location;                                        // 0x0234(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_BtlNumber_C*                        M_BtlNumber;                                       // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              M_Offset;                                          // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_PartyIndex;                                      // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              M_ShowPos;                                         // 0x0254(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BattleNumberActor(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Show(int32 HP_Value, int32 MP_Value, E_BTL_UTIL_ICON_TYPE HitType, int32 Level, E_BTL_NUMEFF NumEffectType, const struct FVector& SocketLocation, const struct FVector2D& PosOffset, int32 Ratio, float PlayRate, float SizeRatio, int32 PartyIndex);
	void IsFinished(bool* RetValue);
	void LocationAdjust();
	void SetWidgetVisibility(bool InVisibility);
	struct FVector2D CalcViewportPos();
	void GetMainWork(TScriptInterface<class IBPI_BattleMain_C>* BPI_BattleMain);
	void GetPartySystem(TScriptInterface<class IBPI_BattleParty_C>* PartySystem);
	void Update(float Delta);
	void BI_IsFinished(bool* IsFinished);
	void BI_Update(float Delta, bool* NoUse);
	void BI_Hide(bool* NoUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleNumberActor_C">();
	}
	static class ABattleNumberActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABattleNumberActor_C>();
	}
};
static_assert(alignof(ABattleNumberActor_C) == 0x000008, "Wrong alignment on ABattleNumberActor_C");
static_assert(sizeof(ABattleNumberActor_C) == 0x000260, "Wrong size on ABattleNumberActor_C");
static_assert(offsetof(ABattleNumberActor_C, UberGraphFrame) == 0x000220, "Member 'ABattleNumberActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABattleNumberActor_C, DefaultSceneRoot) == 0x000228, "Member 'ABattleNumberActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABattleNumberActor_C, Flag) == 0x000230, "Member 'ABattleNumberActor_C::Flag' has a wrong offset!");
static_assert(offsetof(ABattleNumberActor_C, M_Location) == 0x000234, "Member 'ABattleNumberActor_C::M_Location' has a wrong offset!");
static_assert(offsetof(ABattleNumberActor_C, M_BtlNumber) == 0x000240, "Member 'ABattleNumberActor_C::M_BtlNumber' has a wrong offset!");
static_assert(offsetof(ABattleNumberActor_C, M_Offset) == 0x000248, "Member 'ABattleNumberActor_C::M_Offset' has a wrong offset!");
static_assert(offsetof(ABattleNumberActor_C, M_PartyIndex) == 0x000250, "Member 'ABattleNumberActor_C::M_PartyIndex' has a wrong offset!");
static_assert(offsetof(ABattleNumberActor_C, M_ShowPos) == 0x000254, "Member 'ABattleNumberActor_C::M_ShowPos' has a wrong offset!");

}

