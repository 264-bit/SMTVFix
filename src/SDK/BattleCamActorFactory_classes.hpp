#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleCamActorFactory

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "Project_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleCamActorFactory.BattleCamActorFactory_C
// 0x0160 (0x0210 - 0x00B0)
class UBattleCamActorFactory_C final : public UBattleCamActorFactoryBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_RailActor_C*                        M_CurrentActor;                                    // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             M_PrevTransform;                                   // 0x00C0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<TScriptInterface<class IBPI_CharaBaseAccessor_C>> M_InvestigationUnitList;                           // 0x00F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          M_IsCameraSideBack;                                // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsRandomFB;                                      // 0x0101(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          M_IsUseBack;                                       // 0x0102(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          M_IsDaathEnable;                                   // 0x0103(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DEB[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_RailSightChecker_C*                 M_RailSightChecker;                                // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_PlayRate;                                        // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DEC[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharaBase_C*                           M_TargetUnit;                                      // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleParty_C>    M_IBattlePartySystem;                              // 0x0120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FTransform>                     M_InvestigationUnitTrans;                          // 0x0130(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         M_CommandPartyIndex;                               // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_CommandSelectedIndex;                            // 0x0144(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SKILL_TARGET                                M_CommandTargetType;                               // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DED[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_SkillBeforeTargetPartyIndex;                     // 0x014C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_SkillBeforeIsReversed;                           // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DEE[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                M_BeforeTargetLocation;                            // 0x0154(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_ComnamdYowLimitRate;                             // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_ComnamdPitchLimitRate;                           // 0x0164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FVector>             M_EnemyAveLocations;                               // 0x0168(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FVector>             M_PlayerAveLocations;                              // 0x01B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABattleAnimationCamera_C*               M_AnimCamActor;                                    // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BattleCamActorFactory(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void SpawnRailActor(E_BTL_CAM_TYPE CamType, int32 PartyIndex, class ABP_RailActor_C** RetValue);
	void Spawn_TurnPrevPlayer(bool IsPreview, class ABP_RailActor_C** Output_Get);
	void GetMainWork(TScriptInterface<class IBPI_BattleMain_C>* AsBPI_Battle_Main);
	void GetPartySystem(TScriptInterface<class IBPI_BattleParty_C>* Ret);
	void Spawn_Start(bool IsPrevBattle, const class FString& DevIDOption, class ABP_RailActor_C** RetValue);
	void GetCurrentActor(class ABP_RailActor_C** RetValue);
	void DestroyCurrentActor();
	void Spawn_Command(int32 PartyIndex, bool IsBackOnly, bool IsFrontOnly, class ABP_RailActor_C** RetValue);
	void Spawn_TurnPrevEnemy(class ABP_RailActor_C** RetValue);
	void SpawnRailActorSkill(int32 TargetPartyIndex, E_BTL_SKILL_CAM_TYPE Type, const class FString& Param_Name, int32 ActorPartyIndex, bool IsConsiderActorLocation, bool IsOverrideHokanSpeed, bool IsHokanSpeedMax, bool DoNotResetUnitAveLocation, bool* IsSuccess);
	void Spawn_Result(class ABP_RailActor_C** RetValue);
	void SpawnRailActorPrevBattle(E_BTL_CAM_TYPE CamType, const struct FTransform& OriginTransform, TArray<TScriptInterface<class IBPI_CharaBaseAccessor_C>>& InUnitList, TArray<struct FTransform>& InUnitTrans, const class FString& DevIDOption, class ABP_RailActor_C** RetValue);
	void Spawn_Target(int32 PartyIndex, class ABP_RailActor_C** RetValue);
	void InvestigateSideMaxSize(bool IsPlayerSide, class FString* SizeString);
	void Spawn_Recam(int32 PartyIndex, class ABP_RailActor_C** RetValue);
	void CalcMaxSize(int32 Current_size, const class FString& Cam_category, int32* Calced_size, class FString* Category, bool* IsValid);
	void Debug_IsUseDebugData(const class FString& PathRoot, bool* IsUse);
	void Debug_GetCameraName(const class FString& PathRoot, class FString* CameraName);
	void ToCamera(int32 PartyIndex, bool IsReversed, bool IsEnableCharaDitherCtrl);
	void CalcCameraTransform(E_RIG_RAIL_ORIGIN_TYPE RigRailOrigin, int32 PartyIndex, class FName OriginSocket, bool IsParty, struct FTransform* Ret);
	void RetrieveSocketName(E_SKILL_TARGET Target, class FName Default, class FName* Ret, bool* IsAllSelect);
	void RetrieveGlobalSocketLocation(class FName CamCategoryName, class FName SocketName, struct FVector* GlobalLocation, bool* IsValid);
	void Spawn_BadStatus(int32 PartyIndex, class ABP_RailActor_C** RetValue);
	void Spawn_BadStatus_One(int32 PartyIndex, class ABP_RailActor_C** RetValue);
	void IsLookAtEnemyLine(bool* IsLook);
	void DecideCameraSide_BF(int32* CameraSide);
	void DecideCameraSide_LR(TArray<E_CAMERA_SIDE_LR_TYPE>& InvalidChoice, int32* CameraSide, E_CAMERA_SIDE_LR_TYPE* ChoseType, bool* IsForceDecide);
	void SplitString(const class FString& Source, const class FString& Spliter, TArray<class FString>* SplitedStrings);
	void RetrieveSkillCameraName(const class FString& CameraName, class FName IgnoreCameraName, TArray<class FString>* CameraNames);
	void CamFactoryLog(const class FString& LogString, bool IsErrorLog);
	void Spawn_FusionForm(class ABP_RailActor_C** RetValue);
	void IsSameCameraName(class ABP_RailActor_C*& RailActor, class FString& RowName, bool* IsSame);
	void CalcUpVecOnlyTransform(const struct FTransform& In, struct FTransform* ForDaath);
	void GetOriginUpVec(struct FVector* UpVec);
	void GetOriginRightVec(struct FVector* UpVec);
	void IsLookAtEnemyHeight(bool* IsLook);
	struct FTransform IdentifyTransform();
	void CalcTargetLocation(int32 PartyIndex, class ABP_RailActor_C*& Rail, bool IsReversed, struct FVector* RetVal);
	void CheckSplineSight(int32 TargetPartyIndex, const struct FVector& TargetLocation, const struct FTransform& Position, const struct FTransform& OffsetTransform, TArray<struct FCustomSplinePoint>& SplinePoint, struct FRigRailPlayInfo& PlayInfo, class FName OverrideSocketName, TArray<EObjectTypeQuery>& TraceObject, float AdjustScale, float SightRange, bool* IsClear);
	void InitSightChecker();
	void FinalizeSightChecker();
	void MakeName_TurnPrev(bool IsPlayer, bool IsUnionForm, bool IsHugeBattle, const class FString& DevID, TArray<class FString>* CameraNames);
	void MakeName_Start(bool IsHugeBattle, const class FString& DevIDOption, TArray<class FString>* CameraNames);
	void RetrieveCameraName(const class FString& CoreName, int32 FB_Priority, int32 LR_Priority, bool NoWildCard, class UDataTable* Table, TArray<class FString>* CameraNames);
	void MakeName_Command(const class FString& CameraCategory, bool IsHugeBattle, bool IsBossBattle, bool IsBackOnly, bool IsFrontOnly, bool IsN_, bool IsSelecting, bool IsInvAll, TArray<class FString>* CameraNames);
	void GetPartyUnit(int32 PartyIndex, class ACharaBase_C** RetValue);
	void GetSideFirstIndex(int32* RetValue);
	void ConstGetPartyStart(int32* RetValue);
	void ConstGetEnemyStart(int32* RetValue);
	void ConstGetPartyLoopMax(int32* RetValue);
	void ConstGetEnemyLoopMax(int32* RetValue);
	void IsInField(int32 PartyIndex, bool* RetValue);
	void IsEnemy(int32 Param_Index, bool* RetValue);
	void GetCurrentTargetType(E_SKILL_TARGET* TargetType);
	void CalcLookAtGlobalPos(E_SKILL_TARGET TargetType, class FName SocketName, struct FVector* GlobalPos, bool* IsValid);
	void Spawn_Summon(int32 PartyIndex, class ABP_RailActor_C** RetValue);
	void Spawn_Summon_One(int32 PartyIndex, class ABP_RailActor_C** RetValue);
	struct FTransform AdjustRelativePitch(struct FTransform& A, struct FTransform& B, const struct FVector& A2, float EnemyDistance);
	void CalcLookAtLocalPos(E_SKILL_TARGET TargetType, class FName SocketName, bool* IsValid, struct FVector* GlobalPos);
	void GetOriginTransform(struct FTransform* Ret);
	void GetPartyMaxRelativeScale(int32 PartyIndex, float* Ret);
	void GetPartyMaxRelativeScale_New(int32 PartyIndex, bool IsHugeBattle, float* Ret);
	void SetCamActorPlayRate(float PlayRate);
	void Spawn_N_Command(int32 PartyIndex, bool IsBackOnly, bool IsFrontOnly, float InterpOverride, class ABP_RailActor_C** RetValue);
	void ToCamera_N();
	void PrepareAccessors();
	void GetMainInterface(TScriptInterface<class IBPI_MainInterface>* AsBPI_Main_Interface);
	void GetPartyFlagInterface(TScriptInterface<class IBPI_PTFlagInterface>* AsBPI_PTFlag_Interface);
	void GetPartyUtilInterface(TScriptInterface<class IBPI_PTUtilInterface>* AsBPI_PTUtil_Interface);
	void GetPartyUnitIniterface(TScriptInterface<class IBPI_PTBPInterface_C>* AsBPI_PTBPInterface);
	void InvestigateSideMaxSizeFloat(bool IsPlayerSide, float* Scale);
	void ConsiderSkillCameraRotation(int32 TargetIndex, int32 ActorIndex, const struct FTransform& OriginTrans, E_BTL_SKILL_CAM_TYPE BattleCamType, struct FRotator* Rotation);
	void GetSelectedTargetLocation(class FName SocketName, struct FVector* Location, bool* Valid);
	void GetUnitSocketLocation(class ACharaBase_C* Target, class FName Socket, struct FVector* Locat);
	void EnableMotionBlur(bool Enable);
	void SetCommandCamInfo(int32 CommandTargetParty);
	void ResetCommandCamInfo();
	void CountAliveEnemies(int32* Num);
	struct FTransform CalcSkillCameraTrans(int32 ActorPartyIndex, int32 TargetPartyIndex, class FName RailOffsetOriginSocket, bool IsReverseCamera, const struct FTransform& ConsideredTrans, const class FString& CameraName, E_BTL_SKILL_CAM_TYPE CamType);
	bool IsRangeSkillCamera(const class FString& CameraName);
	void CalcSkillCameraScaleReduction(const struct FTransform& ConsideredTrans, float Range, float* ReductionScale);
	void RetrieveRigRailData(class FName RowName, bool* IsValid, struct FRigRailData* RigRailData);
	void CalcUnitSocketLocation(int32 PartyIndex, class FName SocketName, bool IsForCommandCam, bool IsUseHomeTrans, struct FVector* Root, struct FVector* SocketLocation, struct FRotator* Rotate, bool* Valid);
	void GetCommandCamLocation(class ACharaBase_C* Target, class FName Socket, int32 PartyIndex, struct FVector* Locat);
	void CalcCommandYowRotation(class ACharaBase_C* TargetChara, float InfoFovy, const struct FTransform& RailOffset, class FName OriginSocket, bool IsRecalcRotation, int32 PartyIndex, const struct FVector& LookOffset, float* ImmidiateYaw, float* AfterYaw);
	void CheckCreateCommandCam(int32 CommandTargetParty, const class FString& Category, bool* HaveToDo);
	void CalcCommandPitchRotation(bool Enable, class ACharaBase_C* TargetChara, float InfoFovy, const struct FTransform& RailOffset, class FName OriginSocket, bool IsRecalcRotation, int32 PartyIndex, const struct FVector& LookOffset, float* ImmidiatePitch, float* AfterPitch);
	void GetCommandBoxTrans(struct FTransform* Trans);
	void IsOverrideCommandCamera(bool* IsOverride);
	void IsSelectingTarget(bool* IsSelecting);
	void GetUnitAveLocation(E_BTL_SIDE Side, class FName SocketName, struct FVector* Location);
	void ResetUnitAveLocation();
	struct FVector CalcCameraStartVec(int32 PartyIndex, class ABP_RailActor_C*& Rail, bool IsReversed);
	struct FVector CalcCameraLastVec(int32 PartyIndex, class ABP_RailActor_C*& Rail, bool IsReversed);
	void CalcTargetRotation_SelfOne(float InfoFovy, const struct FTransform& RailTrans, const struct FTransform& RailOffset, class FName OriginSocket, bool IsRecalcRotation, int32 PartyIndex, const struct FVector& LookOffset, float* ImmidiateYaw, float* AfterYaw, float* Pitch);
	void GetHeroIndex(int32* Param_Index);
	void FaceUpDitherSetting(bool IsFaceUpCam, int32 PartyIndex);
	void CheckCurrentCameraName(const class FString& Wildcard, bool* IsInclude);
	void GetRelativeCameraScale(int32 PartyIndex, bool IsHugeBattle, float* RetVal);
	void RegisterAnimCam(class ABattleAnimationCamera_C* AnimCam);
	void UnRegisterAnimCam();
	void Spawn_TiamatHead(int32 PartyIndex, class ABP_RailActor_C** RetValue);
	void BI_SpawnRailActorPrevBattle(E_BTL_CAM_TYPE CamType, const struct FTransform& OriginTransform, TArray<TScriptInterface<class IBPI_CharaBaseAccessor_C>>& UnitList, TArray<struct FTransform>& UnitTrans, const class FString& DevIDOptoin, class ABP_RailActor_C** RetVal);
	void BI_GetCurrentCameraSideType(E_CAMERA_SIDE_BF_TYPE* BF_Type, E_CAMERA_SIDE_LR_TYPE* LR_Type);
	void BI_ToOuterCamera(class ABattleCamera_C* Camera, class ABP_RailActor_C* Rail, TArray<TScriptInterface<class IBPI_CharaBaseAccessor_C>>& TargetUnits, TArray<struct FTransform>& TargetPos, bool IsBossRoom, bool* NoUse);
	void BI_RetrieveGlobalSocketLocation(class FName CamCategoryName, class FName SocketName, struct FVector* GlobalLocation, bool* IsValid);
	void BI_ResetCommandCamInfo(bool* NoUse);
	void BI_SetRailName(const class FString& Param_Name, bool* NoUse);
	void BI_RegisterAnimCam(class ABattleAnimationCamera_C* AnimCam, bool* NoUse);
	void BI_UnregisterAnimCam(bool* NoUse);
	void BI_DestroyCurrentActor(bool* NoUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleCamActorFactory_C">();
	}
	static class UBattleCamActorFactory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleCamActorFactory_C>();
	}
};
static_assert(alignof(UBattleCamActorFactory_C) == 0x000010, "Wrong alignment on UBattleCamActorFactory_C");
static_assert(sizeof(UBattleCamActorFactory_C) == 0x000210, "Wrong size on UBattleCamActorFactory_C");
static_assert(offsetof(UBattleCamActorFactory_C, UberGraphFrame) == 0x0000B0, "Member 'UBattleCamActorFactory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_CurrentActor) == 0x0000B8, "Member 'UBattleCamActorFactory_C::M_CurrentActor' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_PrevTransform) == 0x0000C0, "Member 'UBattleCamActorFactory_C::M_PrevTransform' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_InvestigationUnitList) == 0x0000F0, "Member 'UBattleCamActorFactory_C::M_InvestigationUnitList' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_IsCameraSideBack) == 0x000100, "Member 'UBattleCamActorFactory_C::M_IsCameraSideBack' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_IsRandomFB) == 0x000101, "Member 'UBattleCamActorFactory_C::M_IsRandomFB' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_IsUseBack) == 0x000102, "Member 'UBattleCamActorFactory_C::M_IsUseBack' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_IsDaathEnable) == 0x000103, "Member 'UBattleCamActorFactory_C::M_IsDaathEnable' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_RailSightChecker) == 0x000108, "Member 'UBattleCamActorFactory_C::M_RailSightChecker' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_PlayRate) == 0x000110, "Member 'UBattleCamActorFactory_C::M_PlayRate' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_TargetUnit) == 0x000118, "Member 'UBattleCamActorFactory_C::M_TargetUnit' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_IBattlePartySystem) == 0x000120, "Member 'UBattleCamActorFactory_C::M_IBattlePartySystem' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_InvestigationUnitTrans) == 0x000130, "Member 'UBattleCamActorFactory_C::M_InvestigationUnitTrans' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_CommandPartyIndex) == 0x000140, "Member 'UBattleCamActorFactory_C::M_CommandPartyIndex' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_CommandSelectedIndex) == 0x000144, "Member 'UBattleCamActorFactory_C::M_CommandSelectedIndex' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_CommandTargetType) == 0x000148, "Member 'UBattleCamActorFactory_C::M_CommandTargetType' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_SkillBeforeTargetPartyIndex) == 0x00014C, "Member 'UBattleCamActorFactory_C::M_SkillBeforeTargetPartyIndex' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_SkillBeforeIsReversed) == 0x000150, "Member 'UBattleCamActorFactory_C::M_SkillBeforeIsReversed' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_BeforeTargetLocation) == 0x000154, "Member 'UBattleCamActorFactory_C::M_BeforeTargetLocation' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_ComnamdYowLimitRate) == 0x000160, "Member 'UBattleCamActorFactory_C::M_ComnamdYowLimitRate' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_ComnamdPitchLimitRate) == 0x000164, "Member 'UBattleCamActorFactory_C::M_ComnamdPitchLimitRate' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_EnemyAveLocations) == 0x000168, "Member 'UBattleCamActorFactory_C::M_EnemyAveLocations' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_PlayerAveLocations) == 0x0001B8, "Member 'UBattleCamActorFactory_C::M_PlayerAveLocations' has a wrong offset!");
static_assert(offsetof(UBattleCamActorFactory_C, M_AnimCamActor) == 0x000208, "Member 'UBattleCamActorFactory_C::M_AnimCamActor' has a wrong offset!");

}

