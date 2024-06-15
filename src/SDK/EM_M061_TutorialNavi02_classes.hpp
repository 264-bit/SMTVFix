#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EM_M061_TutorialNavi02

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventMissionBase_Direct_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EM_M061_TutorialNavi02.EM_M061_TutorialNavi02_C
// 0x0070 (0x0330 - 0x02C0)
class AEM_M061_TutorialNavi02_C final : public ABP_EventMissionBase_Direct_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_EM_M061_TutorialNavi02_C;           // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E8C[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   Camera;                                            // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class ACameraActor*                           CameraSeq;                                         // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATargetPoint*>                   Target;                                            // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class APawn*                                  NaviDevil;                                         // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EventCameraBlend_C*                 CameraBlender;                                     // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Default_View_Target;                               // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADevilBase_C*                           SpawnYoko;                                         // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    SequencerActor;                                    // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EM_M061_TutorialNavi02(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void MoveEnd();
	void QuestExecute();
	void OnLoaded_CB9020AC4CD849D2676153AA5988EA36(TSubclassOf<class UObject> Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC49D5B471(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD1FDF086D(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC03EE7DE1(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDB0662523(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD6403FBD1(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD9DBE2936(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F1AA59644(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD470E45E1(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F81C5B4E5(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FD8ACB319(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD8E96F8C2(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F7B65F9BB(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FC5990823(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F940F3911(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FA09B4E51(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD220918DF(class UObject* Loaded);
	void CallDeactivate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EM_M061_TutorialNavi02_C">();
	}
	static class AEM_M061_TutorialNavi02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEM_M061_TutorialNavi02_C>();
	}
};
static_assert(alignof(AEM_M061_TutorialNavi02_C) == 0x000008, "Wrong alignment on AEM_M061_TutorialNavi02_C");
static_assert(sizeof(AEM_M061_TutorialNavi02_C) == 0x000330, "Wrong size on AEM_M061_TutorialNavi02_C");
static_assert(offsetof(AEM_M061_TutorialNavi02_C, UberGraphFrame_EM_M061_TutorialNavi02_C) == 0x0002C0, "Member 'AEM_M061_TutorialNavi02_C::UberGraphFrame_EM_M061_TutorialNavi02_C' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialNavi02_C, SelectIndex) == 0x0002C8, "Member 'AEM_M061_TutorialNavi02_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialNavi02_C, SystemMessageAsset) == 0x0002D0, "Member 'AEM_M061_TutorialNavi02_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialNavi02_C, MissionMessageAsset) == 0x0002D8, "Member 'AEM_M061_TutorialNavi02_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialNavi02_C, Camera) == 0x0002E0, "Member 'AEM_M061_TutorialNavi02_C::Camera' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialNavi02_C, CameraSeq) == 0x0002F0, "Member 'AEM_M061_TutorialNavi02_C::CameraSeq' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialNavi02_C, Target) == 0x0002F8, "Member 'AEM_M061_TutorialNavi02_C::Target' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialNavi02_C, NaviDevil) == 0x000308, "Member 'AEM_M061_TutorialNavi02_C::NaviDevil' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialNavi02_C, CameraBlender) == 0x000310, "Member 'AEM_M061_TutorialNavi02_C::CameraBlender' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialNavi02_C, Default_View_Target) == 0x000318, "Member 'AEM_M061_TutorialNavi02_C::Default_View_Target' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialNavi02_C, SpawnYoko) == 0x000320, "Member 'AEM_M061_TutorialNavi02_C::SpawnYoko' has a wrong offset!");
static_assert(offsetof(AEM_M061_TutorialNavi02_C, SequencerActor) == 0x000328, "Member 'AEM_M061_TutorialNavi02_C::SequencerActor' has a wrong offset!");

}

