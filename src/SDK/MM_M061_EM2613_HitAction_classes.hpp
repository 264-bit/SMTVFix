#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM2613_HitAction

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_EventMissionBase_HitAction_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM2613_HitAction.MM_M061_EM2613_HitAction_C
// 0x00D0 (0x03C8 - 0x02F8)
class AMM_M061_EM2613_HitAction_C final : public ABP_EventMissionBase_HitAction_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM2613_HitAction_C;         // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D7FA[0x4];                                     // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MissionEventBase_C*                 Mission_Event;                                     // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EventHit_Location;                                 // 0x0310(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               EventHit_Rotater;                                  // 0x031C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                EvenrHit_Size;                                     // 0x0328(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D7FB[0x4];                                     // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           Camera;                                            // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATargetPoint*>                   Target;                                            // 0x0350(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	class ACharaBase_C*                           SpawnActor;                                        // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSeq;                                             // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D7FC[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DefaultCamera;                                     // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    SequencerActor;                                    // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATargetPoint*                           BattlePoint;                                       // 0x0380(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharaBase_C*                           SpawnDanu;                                         // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EventScriptFade_C*                  LocalFade;                                         // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Emitter;                                           // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADevilBase_C*                           SpawnDanuFake;                                     // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Emitter2;                                          // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CameraFocusEnd;                                    // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D7FD[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AutoRotateFocus_C*                  Auto_Rot_Ctrl;                                     // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SeqEnd;                                            // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MM_M061_EM2613_HitAction(int32 EntryPoint);
	void EvtDis_FinishComplete();
	void EvtDis_Finish();
	void JoinTalk();
	void EndMission();
	void BattleEnd();
	void OnDestroyed______0(class AActor* DestroyedActor);
	void BattleStandby();
	void QuestExecute();
	void OnLoaded_8163909B41CE6742AEF4CD84D9F675C6(TSubclassOf<class UObject> Loaded);
	void OnLoaded_201A55AE4EB6666528338F857FF04E4E(TSubclassOf<class UObject> Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BCA7FA7CF3(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDADC13872(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD814F8FF8(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD0EDF5992(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD42352111(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD303C657D(class UObject* Loaded);
	void OnLoaded_3C6AF1F04C932527FE31A4875B258984(TSubclassOf<class UObject> Loaded);
	void OnLoaded_3C6AF1F04C932527FE31A487C0B9A660(TSubclassOf<class UObject> Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F75008669(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F77BF0ECE(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FA9B212CF(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F2299937B(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F094B77A0(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F22D83583(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F21FC58B7(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F87E845DB(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F6F77E96D(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F19D30FAC(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FA36E1F75(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F1B41953D(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F3BA335BB(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F206B7A3E(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F1C441881(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F97AA1D34(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F0608378F(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F4B8315E1(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F55A1E649(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F8CD68FDB(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F29A7B7A2(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FABE3D7F6(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F6B37270F(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F550EFC72(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F55AE7A5E(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FA208B5DD(class UObject* Loaded);
	void UserConstructionScript();
	void CallDeactivate();
	void ReceiveBeginPlay();
	void QuestFunctionHit();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM2613_HitAction_C">();
	}
	static class AMM_M061_EM2613_HitAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM2613_HitAction_C>();
	}
};
static_assert(alignof(AMM_M061_EM2613_HitAction_C) == 0x000008, "Wrong alignment on AMM_M061_EM2613_HitAction_C");
static_assert(sizeof(AMM_M061_EM2613_HitAction_C) == 0x0003C8, "Wrong size on AMM_M061_EM2613_HitAction_C");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, UberGraphFrame_MM_M061_EM2613_HitAction_C) == 0x0002F8, "Member 'AMM_M061_EM2613_HitAction_C::UberGraphFrame_MM_M061_EM2613_HitAction_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, SelectIndex) == 0x000300, "Member 'AMM_M061_EM2613_HitAction_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, Mission_Event) == 0x000308, "Member 'AMM_M061_EM2613_HitAction_C::Mission_Event' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, EventHit_Location) == 0x000310, "Member 'AMM_M061_EM2613_HitAction_C::EventHit_Location' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, EventHit_Rotater) == 0x00031C, "Member 'AMM_M061_EM2613_HitAction_C::EventHit_Rotater' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, EvenrHit_Size) == 0x000328, "Member 'AMM_M061_EM2613_HitAction_C::EvenrHit_Size' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, SystemMessageAsset) == 0x000338, "Member 'AMM_M061_EM2613_HitAction_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, MissionMessageAsset) == 0x000340, "Member 'AMM_M061_EM2613_HitAction_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, Camera) == 0x000348, "Member 'AMM_M061_EM2613_HitAction_C::Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, Target) == 0x000350, "Member 'AMM_M061_EM2613_HitAction_C::Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, SpawnActor) == 0x000360, "Member 'AMM_M061_EM2613_HitAction_C::SpawnActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, IsSeq) == 0x000368, "Member 'AMM_M061_EM2613_HitAction_C::IsSeq' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, DefaultCamera) == 0x000370, "Member 'AMM_M061_EM2613_HitAction_C::DefaultCamera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, SequencerActor) == 0x000378, "Member 'AMM_M061_EM2613_HitAction_C::SequencerActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, BattlePoint) == 0x000380, "Member 'AMM_M061_EM2613_HitAction_C::BattlePoint' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, SpawnDanu) == 0x000388, "Member 'AMM_M061_EM2613_HitAction_C::SpawnDanu' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, LocalFade) == 0x000390, "Member 'AMM_M061_EM2613_HitAction_C::LocalFade' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, Emitter) == 0x000398, "Member 'AMM_M061_EM2613_HitAction_C::Emitter' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, SpawnDanuFake) == 0x0003A0, "Member 'AMM_M061_EM2613_HitAction_C::SpawnDanuFake' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, Emitter2) == 0x0003A8, "Member 'AMM_M061_EM2613_HitAction_C::Emitter2' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, CameraFocusEnd) == 0x0003B0, "Member 'AMM_M061_EM2613_HitAction_C::CameraFocusEnd' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, Auto_Rot_Ctrl) == 0x0003B8, "Member 'AMM_M061_EM2613_HitAction_C::Auto_Rot_Ctrl' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2613_HitAction_C, SeqEnd) == 0x0003C0, "Member 'AMM_M061_EM2613_HitAction_C::SeqEnd' has a wrong offset!");

}

