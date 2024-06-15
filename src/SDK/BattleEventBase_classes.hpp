#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleEventBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "BattleSkillActionBase_classes.hpp"
#include "E_MoonAgeAnimationState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleEventBase.BattleEventBase_C
// 0x0070 (0x09B0 - 0x0940)
class ABattleEventBase_C final : public ABattleSkillActionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BattleEventBase_C;                  // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         BlankTask;                                         // 0x0940(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_467D[0x4];                                     // 0x0944(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EventScript_C*                      M_BattleEvent;                                     // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   Cameras;                                           // 0x0950(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class FName>                           CameraTags;                                        // 0x0960(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          M_IsBattleEventEnd;                                // 0x0970(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_467E[0x7];                                     // 0x0971(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABattleAnimationCamera_C*               AnimCamera;                                        // 0x0978(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentBGM_Vol;                                    // 0x0980(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EventActorIndex;                                   // 0x0984(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           DummyCamera;                                       // 0x0988(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsChangedVolume;                                   // 0x0990(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_BTL_EVT_POINT                               EventPoint;                                        // 0x0991(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DisappearPress_Icon;                               // 0x0992(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DisappearUplifting;                                // 0x0993(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DisappearMoonAge;                                  // 0x0994(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_BTL_EVT_RESULT                              EventResult;                                       // 0x0995(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_467F[0x2];                                     // 0x0996(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         EventActorList;                                    // 0x0998(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BattleEventBase(int32 EntryPoint);
	void Evt_BattleUIOut();
	void ChangeMapDark(int32 MapDarkID);
	void BattleEventEnd();
	void SkillPerformance(int32 Step);
	void OnLoaded_95DAFE7A4A94AE576557D68F5830014E(class UObject* Loaded);
	void OnLoaded_72AB40BC4E27ED6497B1CE842D1E4D51(class UObject* Loaded);
	void BattleEventFunc();
	void StartEvent(class UDataTable* ScriptDataTable, class UScriptMessageAsset* MessageAsset);
	void AddCamera(const struct FTransform& WorldTransform, class FName Tag);
	void CalcEnemyWorldTrans(class FName LookAtSocket, const struct FVector& OffsetLocation, struct FTransform* Trans);
	void AddBlankTask();
	void CalcHeroBustShotTrans(struct FTransform* BustShot);
	void CheckBattleEventEnd(bool* Ret);
	void GetBrankTaskID(int32* ID);
	class FString GetUniqueName();
	void ApplyAnimCamera(int32 PartyIndex, class UCameraAnimationAsset* CameraAsset, bool IdentifyScale);
	void CleanUpAnimCamera();
	void IsFinishedAnimCamera(bool* Param_IsFinished);
	void GetAnimCamera(class ABattleAnimationCamera_C** Camera);
	void UpdateDummyCamera();
	void IsEnemyLeaderDying(bool* Dying);
	void GetMapDark(int32 MapDarkID, struct FBattleMapDark_T* MapDark);
	void ApplyCamera(class FName CamTag);
	void IsBossRush(bool* BossRush);
	void AddDestroyPool(TArray<class AActor*>& Actors);
	void SetEnemyVisibility(bool Visible);
	void SetAllyVisibility(bool Visible);
	void AddEventActorList(class AActor* Actor);
	void RecoverFading();
	void OnWindowActivationChanged(bool bActive);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void IntroductionFunc();
	void HitFunc();
	void CounterFunc();
	void DeadFunc();
	void FinishFunc();
	void PrepareReflexCam();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleEventBase_C">();
	}
	static class ABattleEventBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABattleEventBase_C>();
	}
};
static_assert(alignof(ABattleEventBase_C) == 0x000010, "Wrong alignment on ABattleEventBase_C");
static_assert(sizeof(ABattleEventBase_C) == 0x0009B0, "Wrong size on ABattleEventBase_C");
static_assert(offsetof(ABattleEventBase_C, UberGraphFrame_BattleEventBase_C) == 0x000938, "Member 'ABattleEventBase_C::UberGraphFrame_BattleEventBase_C' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, BlankTask) == 0x000940, "Member 'ABattleEventBase_C::BlankTask' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, M_BattleEvent) == 0x000948, "Member 'ABattleEventBase_C::M_BattleEvent' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, Cameras) == 0x000950, "Member 'ABattleEventBase_C::Cameras' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, CameraTags) == 0x000960, "Member 'ABattleEventBase_C::CameraTags' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, M_IsBattleEventEnd) == 0x000970, "Member 'ABattleEventBase_C::M_IsBattleEventEnd' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, AnimCamera) == 0x000978, "Member 'ABattleEventBase_C::AnimCamera' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, CurrentBGM_Vol) == 0x000980, "Member 'ABattleEventBase_C::CurrentBGM_Vol' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, EventActorIndex) == 0x000984, "Member 'ABattleEventBase_C::EventActorIndex' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, DummyCamera) == 0x000988, "Member 'ABattleEventBase_C::DummyCamera' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, IsChangedVolume) == 0x000990, "Member 'ABattleEventBase_C::IsChangedVolume' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, EventPoint) == 0x000991, "Member 'ABattleEventBase_C::EventPoint' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, DisappearPress_Icon) == 0x000992, "Member 'ABattleEventBase_C::DisappearPress_Icon' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, DisappearUplifting) == 0x000993, "Member 'ABattleEventBase_C::DisappearUplifting' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, DisappearMoonAge) == 0x000994, "Member 'ABattleEventBase_C::DisappearMoonAge' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, EventResult) == 0x000995, "Member 'ABattleEventBase_C::EventResult' has a wrong offset!");
static_assert(offsetof(ABattleEventBase_C, EventActorList) == 0x000998, "Member 'ABattleEventBase_C::EventActorList' has a wrong offset!");

}

