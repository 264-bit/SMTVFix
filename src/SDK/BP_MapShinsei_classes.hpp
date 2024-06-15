#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapShinsei

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_MapGimmickHideReason_structs.hpp"
#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MapEventHit_Type_AAction_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapShinsei.BP_MapShinsei_C
// 0x00E0 (0x04B0 - 0x03D0)
class ABP_MapShinsei_C final : public AMapEventHit_Type_AAction_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MapShinsei_C;                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   ConeCollision;                                     // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        GazePos;                                           // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_ResidentSound_C*                   BPC_ResidentSound;                                 // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        GetEffectStartPos;                                 // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_MapGimmickAreaEntry_C*             BPC_MapGimmickAreaEntry;                           // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Material_Alpha_3AFE6FF542D61869355715A419AB343F; // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_Material__Direction_3AFE6FF542D61869355715A419AB343F; // 0x041C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F99[0x3];                                     // 0x041D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_Material;                                 // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ShinseiKind                                 ShinseiKind;                                       // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F9A[0x3];                                     // 0x0429(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FShinseiData                           ShinseiData;                                       // 0x042C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         SaveId;                                            // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CalcSaveID;                                        // 0x0434(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F9B[0x3];                                     // 0x0435(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SaveID_Start;                                      // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowOnMasked;                                      // 0x043C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F9C[0x3];                                     // 0x043D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Num;                                               // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F9D[0x4];                                     // 0x0444(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DMI;                                               // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MeshEnd;                                           // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EffectEnd;                                         // 0x0451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F9E[0x6];                                     // 0x0452(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               GetEffect;                                         // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GetEffectEnd;                                      // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InfoEnd;                                           // 0x0461(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F9F[0x2];                                     // 0x0462(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LightIntensity;                                    // 0x0464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HideReason;                                        // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Gaze;                                              // 0x046C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FA0[0x3];                                     // 0x046D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PrevMiitsu;                                        // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Step;                                              // 0x0474(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 MsgCtrl;                                           // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MsgEnd;                                            // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FA1[0x7];                                     // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 WalkTarget;                                        // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GimmickDir_Plane;                                  // 0x0490(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FA2[0x4];                                     // 0x049C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        ParticleTemplate;                                  // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WalkedIn;                                          // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GetEnd;                                            // 0x04A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MotionEnd;                                         // 0x04AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_MapShinsei(int32 EntryPoint);
	void EvtDis_Show_WalkedIn_(bool Param_WalkedIn);
	void MoveEnd();
	void ProcMiitsuGetEvent();
	void ReceiveBeginPlay();
	void EventHitAction();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void AnimOut();
	void CallTaskEnd_();
	void BPI_HideGimmick(E_MapGimmickHideReason Param_HideReason);
	void BPI_ShowGimmick(E_MapGimmickHideReason Param_HideReason);
	void OnDestroyed______0(class AActor* DestroyedActor);
	void EvtDis_Hide_();
	void OnSystemFinished_(class UParticleSystemComponent* PSystem);
	void Timeline_Material__UpdateFunc();
	void Timeline_Material__FinishedFunc();
	void UserConstructionScript();
	void CalcSave();
	void CheckExist(bool* Exist);
	void ShowParticle(bool Show, bool Param_WalkedIn);
	void SetMinimapIconTableRow(int32 Param_Index, struct FMinimapIconTableRow* OutRow, bool* NeedToAddMore);

	EGazeTargetType GetGazeTargetType() const;
	struct FVector GetGazeTargetLocation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapShinsei_C">();
	}
	static class ABP_MapShinsei_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapShinsei_C>();
	}
};
static_assert(alignof(ABP_MapShinsei_C) == 0x000008, "Wrong alignment on ABP_MapShinsei_C");
static_assert(sizeof(ABP_MapShinsei_C) == 0x0004B0, "Wrong size on ABP_MapShinsei_C");
static_assert(offsetof(ABP_MapShinsei_C, UberGraphFrame_BP_MapShinsei_C) == 0x0003D0, "Member 'ABP_MapShinsei_C::UberGraphFrame_BP_MapShinsei_C' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, ConeCollision) == 0x0003D8, "Member 'ABP_MapShinsei_C::ConeCollision' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, GazePos) == 0x0003E0, "Member 'ABP_MapShinsei_C::GazePos' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, BPC_ResidentSound) == 0x0003E8, "Member 'ABP_MapShinsei_C::BPC_ResidentSound' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, GetEffectStartPos) == 0x0003F0, "Member 'ABP_MapShinsei_C::GetEffectStartPos' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, PointLight) == 0x0003F8, "Member 'ABP_MapShinsei_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, StaticMesh) == 0x000400, "Member 'ABP_MapShinsei_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, BPC_MapGimmickAreaEntry) == 0x000408, "Member 'ABP_MapShinsei_C::BPC_MapGimmickAreaEntry' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, ParticleSystem) == 0x000410, "Member 'ABP_MapShinsei_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, Timeline_Material_Alpha_3AFE6FF542D61869355715A419AB343F) == 0x000418, "Member 'ABP_MapShinsei_C::Timeline_Material_Alpha_3AFE6FF542D61869355715A419AB343F' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, Timeline_Material__Direction_3AFE6FF542D61869355715A419AB343F) == 0x00041C, "Member 'ABP_MapShinsei_C::Timeline_Material__Direction_3AFE6FF542D61869355715A419AB343F' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, Timeline_Material) == 0x000420, "Member 'ABP_MapShinsei_C::Timeline_Material' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, ShinseiKind) == 0x000428, "Member 'ABP_MapShinsei_C::ShinseiKind' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, ShinseiData) == 0x00042C, "Member 'ABP_MapShinsei_C::ShinseiData' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, SaveId) == 0x000430, "Member 'ABP_MapShinsei_C::SaveId' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, CalcSaveID) == 0x000434, "Member 'ABP_MapShinsei_C::CalcSaveID' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, SaveID_Start) == 0x000438, "Member 'ABP_MapShinsei_C::SaveID_Start' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, ShowOnMasked) == 0x00043C, "Member 'ABP_MapShinsei_C::ShowOnMasked' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, Num) == 0x000440, "Member 'ABP_MapShinsei_C::Num' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, DMI) == 0x000448, "Member 'ABP_MapShinsei_C::DMI' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, MeshEnd) == 0x000450, "Member 'ABP_MapShinsei_C::MeshEnd' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, EffectEnd) == 0x000451, "Member 'ABP_MapShinsei_C::EffectEnd' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, GetEffect) == 0x000458, "Member 'ABP_MapShinsei_C::GetEffect' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, GetEffectEnd) == 0x000460, "Member 'ABP_MapShinsei_C::GetEffectEnd' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, InfoEnd) == 0x000461, "Member 'ABP_MapShinsei_C::InfoEnd' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, LightIntensity) == 0x000464, "Member 'ABP_MapShinsei_C::LightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, HideReason) == 0x000468, "Member 'ABP_MapShinsei_C::HideReason' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, Gaze) == 0x00046C, "Member 'ABP_MapShinsei_C::Gaze' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, PrevMiitsu) == 0x000470, "Member 'ABP_MapShinsei_C::PrevMiitsu' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, Step) == 0x000474, "Member 'ABP_MapShinsei_C::Step' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, MsgCtrl) == 0x000478, "Member 'ABP_MapShinsei_C::MsgCtrl' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, MsgEnd) == 0x000480, "Member 'ABP_MapShinsei_C::MsgEnd' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, WalkTarget) == 0x000488, "Member 'ABP_MapShinsei_C::WalkTarget' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, GimmickDir_Plane) == 0x000490, "Member 'ABP_MapShinsei_C::GimmickDir_Plane' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, ParticleTemplate) == 0x0004A0, "Member 'ABP_MapShinsei_C::ParticleTemplate' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, WalkedIn) == 0x0004A8, "Member 'ABP_MapShinsei_C::WalkedIn' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, GetEnd) == 0x0004A9, "Member 'ABP_MapShinsei_C::GetEnd' has a wrong offset!");
static_assert(offsetof(ABP_MapShinsei_C, MotionEnd) == 0x0004AA, "Member 'ABP_MapShinsei_C::MotionEnd' has a wrong offset!");

}

