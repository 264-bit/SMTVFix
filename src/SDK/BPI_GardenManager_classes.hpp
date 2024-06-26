#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GardenManager

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_GardenManager.BPI_GardenManager_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_GardenManager_C final : public IInterface
{
public:
	void StartGardenDevilTalk(class AActor* DevilChara, int32 DevilID, E_CHARA_MOTION_ID IdleMotionID, bool IsHitoshura);
	void StartGardenResult(const struct FGardenResultData& GardenResultData);
	void CheckGardenResultFinished(bool* IsResultFinished);
	void EndGardenDevilTalk();
	void CheckGardenMoveFinished(bool* IsMoveFinished);
	void Set_Visibility_Garden_Devils(bool Visibility, int32 ExcludedDevilID);
	void RespawnGardenDevils(int32 ExcludedDevilID);
	void CheckValidGardenQuest(int32 DevilID, bool* IsValid);
	void SpawnGardenQuestSubLevel(int32 DevilID, class AActor* QuestDevil, bool* SpawnSuccess);
	void CheckGardenQuestFinished(bool* IsQuestFinished);
	void CheckGardenQuestAccepted(bool* IsQuestAccepted);
	void DespawnGardenQuestSublevel(bool* UnloadSuccess);
	void CheckDespawnGardenQuestFinished(bool* IsDespawnFinished);
	void CheckValidTributeTarget(bool* IsValid);
	void SetGardenTributeTarget(const class AActor* TributeTarget);
	void TryActivateTribute();
	void EnableFreeCamera();
	void IsFreeCameraCollisionSwitchFinished(bool* IsFinished);
	void SetFreeCameraMode(bool IsFreeCameraMode);
	void SetUsedSPTList(TArray<struct FGardenSPTData>& New_SPTData, bool* Dummy);
	void GetUsedSPTList(TArray<struct FGardenSPTData>* UsedSPTDataList);
	void SetMessageTalkFlag(E_TALK_TONE_TYPE SpeechType, E_GARDEN_MSG_USE_TYPE ChatMsgType, int32 DevilID, int32 ChatMsgIndex, bool* Dummy);
	void CheckReplacementCharaID(int32 DevilID, int32* ReplacementID, bool* HasReplacement);
	void PlayWalkingMotion();
	void SetVisibilityPlayerTalkGodray(bool bNewVisibility);
	void StartPlayerTalkTutorial(class AActor* GardenPlayer);
	void IsPlayerTalkFinished(bool* IsFinished);
	void UpdatePlayerMapIcon();
	void NeedsCollisionAdjust(int32 DevilID, bool* NeedsAdjust, E_GARDEN_FC_DEVIL_COL_TYPE* AdjustType);
	void GetAdjustRate(int32 DevilID, float* Rate);
	void GetFreeCameraPawn(class ASpectatorPawn** FC_Pawn);
	void GetFreeCameraMS(float* Default_Camera_Movement_Speed, float* Dash_Camera_Movement_Speed, float* Sneak_Camera_Movement_Speed, float* Default_Turn_Input_Scale, float* Dash_Turn_Input_Scale, float* Sneak_Turn_Input_Scale, float* Mouse_Turn_Input_Max);
	void SetFreeCameraMS(float Default_Camera_Movement_Speed, float Dash_Camera_Movement_Speed, float Sneak_Camera_Movement_Speed, float Default_Turn_Input_Scale, float Dash_Turn_Input_Scale, float Sneak_Turn_Input_Scale, float Mouse_Turn_Input_Max, bool* Dummy);
	void GetFCManager(class UActorComponent** FC_Manager);
	void RepickGardenDevils();
	void SetDebugSpawnFlag(bool DebugSpawnOff, bool* Dummy);
	void IncrementMessageCheck(bool* Dummy);
	void CheckMessageLoadDone(bool* AllMessageLoadDone);
	void GetGardenCollisionScale(int32 DevilID, struct FGardenTalkCollision* CollisionVal, bool* Found);
	void GetGardenTalkHeight(int32 DevilID, struct FGardenTalkHeightOverride* CameraParam, bool* Found);
	void IsRespawning(bool* RespawnFlag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_GardenManager_C">();
	}
	static class IBPI_GardenManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_GardenManager_C>();
	}
};
static_assert(alignof(IBPI_GardenManager_C) == 0x000008, "Wrong alignment on IBPI_GardenManager_C");
static_assert(sizeof(IBPI_GardenManager_C) == 0x000028, "Wrong size on IBPI_GardenManager_C");

}

