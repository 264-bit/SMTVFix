#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MEH_NextEventStart_Walk

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MapEventHit_Type_Walk_classes.hpp"
#include "E_MAP_PLAYER_TYPE_structs.hpp"
#include "Project_structs.hpp"
#include "E_MAP_DEBUG_MES_TYPE_structs.hpp"
#include "E_MAP_SYSTEMRESIDENT_ID_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MEH_NextEventStart_Walk.MEH_NextEventStart_Walk_C
// 0x0060 (0x0408 - 0x03A8)
class AMEH_NextEventStart_Walk_C final : public AMapEventHit_Type_Walk_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MEH_NextEventStart_Walk_C;          // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                   TextRender;                                        // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene_0;                                           // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow2;                                            // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        PlayerRe;                                          // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow_0;                                           // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        BtlPoint;                                          // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ReStartPoint;                                      // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 BattlePoint;                                       // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    DebugEventName;                                    // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MapEventID_;                                       // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BPI_CheckNaviDevil(bool* NaviDevil);
	void BPI_CheckMiman(bool* Miman);
	void BPI_CheckMissionEvent(bool* MissionEvent);
	void BPI_GetDebugMemo(class FText* Memo);
	void BPI_GetMapEventId(int32* MapEventID);
	void BPI_GetHitBoxSize(struct FVector* Size);
	void BPI_SetAgratField(bool Inside, bool* NewParam);
	void BPI_CheckAgratField(bool* Inside);
	void BPI_CheckHide_WhenBattleOrEvent(bool* Hide);
	void BPI_CheckAfterLoaded(bool* AfterLoaded);
	void BPI_UpdateOptionFieldBrightness(bool* NewParam);
	void BPI_MapTopCameraOnFinishTop(bool* Dummy);
	void BPI_MapTopCameraOnStartTop(bool* Dummy);
	void BPI_IgnoreEstomaEffectPause(bool Ignore, bool* NewParam);
	void BPI_GetOptionFieldBrightnessCtrl(class UActorComponent** Component);
	void BPI_RemoveEncountAreaList(class AActor* EncountArea, bool* NewParam);
	void BPI_AddEncountAreaList(class AActor* EncountArea, bool* NewParam);
	void BPI_GetBossRushFieldCtrl(class AActor** Actor);
	void BPI_SetBossRushFieldCtrl(class AActor* Actor, bool* NewParam);
	void BPI_SetLevelVisibilityEnabled(bool Enable, bool* Dummy);
	void BPI_IsStatusMode(bool* IsStatusMode);
	void BPI_SetStatusMode(bool IsStatusMode, bool* NoUse);
	void BPI_UpdateLevelVisibility(const struct FVector& NewLocation, bool* Updated);
	void BPI_GetEncountAreaAll(TArray<class AActor*>* Actors);
	void BPI_UpdateUniqueSymbolBGM(bool* NewParam);
	void BPI_UnregisterMagatsuka(class AActor* Actor, bool* NewParam);
	void BPI_RegisterMagatsuka(class AActor* Actor, bool* NewParam1);
	void BPI_ShowMapButtonHelp(bool* Dummy);
	void BPI_GetMapButtonHelpType(E_BTN_HELP_SET* Out);
	void BPI_IsTokyoLargeMap(bool* IsTokyoLargeMap);
	void BPI_CheckMapEnableCamera(bool* IsPause);
	void BPI_CheckAActionLock(bool* Lock, class AActor** AActionActor);
	void BPI_SetAActionLock(bool Lock, class AActor* AActionActor, bool* NewParam1);
	void BPI_GetNaviDevilCtrl(class AActor** Actor);
	void BPI_GetNaviDevilPawn(class APawn** Pawn);
	void BPI_SetNaviDevilPawn(class APawn* Pawn, bool* NewParam1);
	void BPI_CheckMagatsukaDiscoveryCnt(bool* Discovery);
	void BPI_AddMagatsukaDiscoveryCnt(int32 Add, bool* NewParam1);
	void BPI_GetMapTimer(float* MapTimer);
	void BPI_SetDebugOverrideBattleMapDarkID(int32 MapDarkID, bool* NoUse);
	void BPI_CheckSymbolPause(bool* Pause);
	void GetGShopCamera(class ACameraActor** Cam);
	void BI_IsEventView(bool* IsEventView);
	void BI_GetDaathIntensityEff(struct FLinearColor* Intensity);
	void JsonCounterGet(int32* EncountNum, int32* MagatukaNum);
	void BPI_GetMapGimmickTrigger(class AActor** Actor);
	void GetJsonFileName(class FString* Filename);
	void GetJsonData(class UJsonDataCtrl** Json);
	void GetDebugGameTrace(bool* IsEnable);
	void BPI_MakeUpLessEvent(bool* RetValue);
	void GetEventBattleActor(TArray<class AActor*>* List);
	void IsLoadLevelGame(bool* Enable);
	void GetMapStartLoadFlag(bool* Enable);
	void GetNextMapStartList(struct FLoadOnlyResident_ST* Return);
	void IsNextMapLoadEnd(bool* Return);
	void IsNextMapLoadStart(bool* Return);
	void GetNextMapAssetList(TArray<struct FLoadOnlyResident_ST>* LevelList);
	void BPI_IsEventPlay(bool* IsPlay);
	void IsEventHitOff(bool* Enable);
	void GetSavingWidget(bool* Widget);
	void BPI_CheckMapPause(bool* IsPause);
	void BPI_GetBuddyPawn(class APawn** Pawn);
	void BI_CheckEncountOn(bool* EncountOn);
	void BPI_GetEventReserv(int32* MapEventID);
	void GetcurrentLevelCustom(bool* Enable);
	void GetIsBattle(bool* IsBattle);
	void BPI_IsSpawnSymbol(bool* NewParam);
	void BPI_GetMapCommon(class AActor** Rerutn);
	void UserConstructionScript();
	void BPI_DebugChangeChar(E_MAP_PLAYER_TYPE Type);
	void BPI_DebugMesWindow(E_MAP_DEBUG_MES_TYPE MesType);
	void BPI_MapPause(bool PlayerMoveEnable, bool PlayerCameraEnable, bool PlayerVisible, bool MoonTimeEnable, bool SymbolEnable, bool AllMapStop, bool AllObjectHidden, bool TopCamera);
	void BPI_MapStart(bool MissionCheckDisable, bool StartSymbolAIDisable, bool ReturnPlayerPosition, bool UI_Immediate);
	void BPI_CallEventEncount(int32 EventEncountId, const struct FTransform& SpawnTransform, int32 NextEventID, int32 NowEventID, bool Manual);
	void BPI_PlayerOFF();
	void BPI_PlayerON();
	void BPI_CallKokubouEvent(int32 EventId, class AActor* RestarPoint, class AActor* Param_BattlePoint);
	void BPI_OpenSkyTerminal();
	void BPI_MapAttackEnd(bool Enable);
	void BPI_ForceSafeEncount(bool Enable);
	void BPI_SetEventReserv(int32 MapEventID);
	void BPI_HeroChange(bool IsFade, E_MAP_PLAYER_TYPE Hero);
	void SetNextMapAssetList(const TArray<struct FPrimaryAssetId>& LevelList, const TArray<class FName>& NameList, int32 MapId, int32 AreaId);
	void SetNextMapLoadStart(bool Enable);
	void SetNextMapLoadEnd(bool Enable);
	void DeleteNextMapAssetList();
	void SetNextMapStartList(const TArray<struct FPrimaryAssetId>& LevelList, const TArray<class FName>& LevelNameList, int32 MapId, int32 AreaId);
	void SetMapStartLoadFlag(bool Enable);
	void MapInit();
	void SetLoadLevelGame(bool Enable);
	void SetEventBattleActor(const TArray<struct FEventBattleListStruct>& BTLActor, const struct FTransform& PlayerPos);
	void EventHitAction();
	void ReceiveBeginPlay();
	void BPI_SetEncountActor(class AActor* Actor);
	void StartDebugGameTrace(bool IsEnable);
	void SetJsonData(class UJsonDataCtrl* Json);
	void SetJsonFile(const class FString& Json);
	void BPI_CallMapEvent(int32 Param_MapEventID_, class AActor* Param_ReStartPoint, class AActor* Param_BattlePoint, bool InitFade, bool WaitEvent);
	void BPI_CallEncountForMagatsuka(int32 EncountID, const TArray<int32>& EnemyList, int32 SafeZoneID, bool ManualSafeZone, E_BTL_SYMBOL_ENCOUNT EncountType, bool HitMapAttack);
	void BPI_ReturnMapFromOutside(bool AutoSave, bool ReturnPlayerPosition, bool UI_Immediate);
	void JsonCounterAdd(int32 EncountAdd, int32 MagatukaNum);
	void BI_SetMapChange(bool IsMapChange, int32 WarpPoint, int32 FromEvent, int32 OtherMapReturn);
	void EnvChange_Play(const struct FST_LightParam& Next, const struct FST_LightParam& Prev);
	void EnvChange_Reverse();
	void BPI_ChangeArea(int32 NextAreaId, int32 WarpPoint, float FadeInTime);
	void BPI_CallEncountForNaviDevil(int32 EncountID, const TArray<int32>& EnemyList, int32 SafeZoneID, bool ManualSafeZone, const struct FChainEncountInfo& ChainEncountInfo, bool Magatsuhi, bool PlayerFirst);
	void BPI_EntryNaviDevillGimmick(class AActor* Actor);
	void BPI_MapStart_SimpleEventEnable();
	void EnvChangeMagatuka_Play(float Alpha);
	void ResetEventBattleActor();
	void BPI_EndTakara_ForSimpleEvent(int32 TakaraID);
	void BPI_ShowObjects_WhenReturnMap();
	void BPI_HideObjects_WhenExitMap();
	void Env_ChangeSpecial_Play(int32 Param_Index, float Alpha);
	void BPI_TokyoLargeMapAddIconTalk(const struct FVector& ActorLocation, class FName InactiveFlag, class AActor* Param_Owner);
	void BPI_TokyoLargeMapDeleteIcon(class AActor* Param_Owner);
	void BPI_CallEncountForDebug(int32 EncountID, const TArray<int32>& EnemyList, int32 SafeZoneID, bool ManualSafeZone, E_BTL_SYMBOL_ENCOUNT EncountType);
	void BPI_CallEventEncount_ForUniqueSymbol(int32 EventEncountId, const struct FTransform& SpawnTransform, bool ManualWhenNotEscape, bool HitMapAttack, E_BTL_SYMBOL_ENCOUNT EncountType);
	void BPI_CallEventEncountForMagatsuka(int32 EventEncountId, int32 SafeZoeID, bool ManualSafeZone, bool HitMapAttack);
	void BPI_NaviGimmickTutorial_ForInner();
	void BPI_NaviGimmickTutorial_ForOuter();
	void BPI_PreSystemLoad(int32 MapId, E_MAP_SYSTEMRESIDENT_ID Enum);
	void BPI_EndMagatsuka_ForSimpleEvent();
	void BPI_TokyoLargeMapShowPlace(int32 DataId);
	void BPI_TokyoLargeMapHidePlace(int32 DataId);
	void BPI_GardenLoad(int32 WarpPoint, float FadeInTime);
	void BPI_GardenUnload(float FadeInTime);
	void BPI_Tokyo_Large_Map_Add_Icon_Mission(const struct FVector& ActorLocation, int32 MissionId, class AActor* Param_Owner);
	void BPI_CallEventEncount_BossRush(int32 EventEncountId, int32 NextEventID, int32 NowEventID, bool Manual, bool ChallengeMode);
	void BPI_RequestNaviDevilVisible(bool Visible);
	void EnvChange_Immediate();
	void BPI_LoadMapBridgeMode(int32 NextMapId, int32 NextAreaId, bool FadeCancel);
	void InitCheck();
	void BPI_AddSpawnEnemyCount();
	void BPI_LoadMap(bool InFadeCancel);
	void BPI_MapPlayerStop(bool Stop, bool Param_Hidden);
	void BPI_SetEncountON();
	void BPI_SetEncountOff();
	void BPI_ReturnFromBtl();
	void BPI_SpawnEncountActor(const TArray<int32>& EnemyIdList, int32 EncountID, const struct FTransform& SpawnTransform, class AActor* EncountPawn, E_BTL_SYMBOL_ENCOUNT SymbolEncountType, bool ManualWhenNotEscape, bool HitMapAttack, const struct FChainEncountInfo& ChainEncountInfo, bool Magatsuhi);
	void BPI_SetMapCommon(class AActor* Actor);
	void OnReady();
	void ExecuteUbergraph_MEH_NextEventStart_Walk(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MEH_NextEventStart_Walk_C">();
	}
	static class AMEH_NextEventStart_Walk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMEH_NextEventStart_Walk_C>();
	}
};
static_assert(alignof(AMEH_NextEventStart_Walk_C) == 0x000008, "Wrong alignment on AMEH_NextEventStart_Walk_C");
static_assert(sizeof(AMEH_NextEventStart_Walk_C) == 0x000408, "Wrong size on AMEH_NextEventStart_Walk_C");
static_assert(offsetof(AMEH_NextEventStart_Walk_C, UberGraphFrame_MEH_NextEventStart_Walk_C) == 0x0003A8, "Member 'AMEH_NextEventStart_Walk_C::UberGraphFrame_MEH_NextEventStart_Walk_C' has a wrong offset!");
static_assert(offsetof(AMEH_NextEventStart_Walk_C, TextRender) == 0x0003B0, "Member 'AMEH_NextEventStart_Walk_C::TextRender' has a wrong offset!");
static_assert(offsetof(AMEH_NextEventStart_Walk_C, Scene_0) == 0x0003B8, "Member 'AMEH_NextEventStart_Walk_C::Scene_0' has a wrong offset!");
static_assert(offsetof(AMEH_NextEventStart_Walk_C, Arrow2) == 0x0003C0, "Member 'AMEH_NextEventStart_Walk_C::Arrow2' has a wrong offset!");
static_assert(offsetof(AMEH_NextEventStart_Walk_C, Arrow1) == 0x0003C8, "Member 'AMEH_NextEventStart_Walk_C::Arrow1' has a wrong offset!");
static_assert(offsetof(AMEH_NextEventStart_Walk_C, PlayerRe) == 0x0003D0, "Member 'AMEH_NextEventStart_Walk_C::PlayerRe' has a wrong offset!");
static_assert(offsetof(AMEH_NextEventStart_Walk_C, Arrow_0) == 0x0003D8, "Member 'AMEH_NextEventStart_Walk_C::Arrow_0' has a wrong offset!");
static_assert(offsetof(AMEH_NextEventStart_Walk_C, BtlPoint) == 0x0003E0, "Member 'AMEH_NextEventStart_Walk_C::BtlPoint' has a wrong offset!");
static_assert(offsetof(AMEH_NextEventStart_Walk_C, ReStartPoint) == 0x0003E8, "Member 'AMEH_NextEventStart_Walk_C::ReStartPoint' has a wrong offset!");
static_assert(offsetof(AMEH_NextEventStart_Walk_C, BattlePoint) == 0x0003F0, "Member 'AMEH_NextEventStart_Walk_C::BattlePoint' has a wrong offset!");
static_assert(offsetof(AMEH_NextEventStart_Walk_C, DebugEventName) == 0x0003F8, "Member 'AMEH_NextEventStart_Walk_C::DebugEventName' has a wrong offset!");
static_assert(offsetof(AMEH_NextEventStart_Walk_C, MapEventID_) == 0x000400, "Member 'AMEH_NextEventStart_Walk_C::MapEventID_' has a wrong offset!");

}
