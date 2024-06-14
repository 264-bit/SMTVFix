#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BtlAI_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BtlAI_Base.BtlAI_Base_C
// 0x0020 (0x0240 - 0x0220)
class ABtlAI_Base_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	E_BTL_AI_STATE                                M_State;                                           // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsCounter;                                       // 0x0231(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_43EF[0x2];                                     // 0x0232(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_ActorIndex;                                      // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          M_IsPartner;                                       // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          M_ActorFix;                                        // 0x0239(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BtlAI_Base(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SetStateFinish();
	void IsFinished(bool* RetValue);
	void Seq_Counter();
	void Seq_Nomal();
	void GetBPIAICommand(TScriptInterface<class IBPI_AICommand_C>* RetValue);
	void Seq_Lot();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BtlAI_Base_C">();
	}
	static class ABtlAI_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABtlAI_Base_C>();
	}
};
static_assert(alignof(ABtlAI_Base_C) == 0x000008, "Wrong alignment on ABtlAI_Base_C");
static_assert(sizeof(ABtlAI_Base_C) == 0x000240, "Wrong size on ABtlAI_Base_C");
static_assert(offsetof(ABtlAI_Base_C, UberGraphFrame) == 0x000220, "Member 'ABtlAI_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABtlAI_Base_C, DefaultSceneRoot) == 0x000228, "Member 'ABtlAI_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABtlAI_Base_C, M_State) == 0x000230, "Member 'ABtlAI_Base_C::M_State' has a wrong offset!");
static_assert(offsetof(ABtlAI_Base_C, M_IsCounter) == 0x000231, "Member 'ABtlAI_Base_C::M_IsCounter' has a wrong offset!");
static_assert(offsetof(ABtlAI_Base_C, M_ActorIndex) == 0x000234, "Member 'ABtlAI_Base_C::M_ActorIndex' has a wrong offset!");
static_assert(offsetof(ABtlAI_Base_C, M_IsPartner) == 0x000238, "Member 'ABtlAI_Base_C::M_IsPartner' has a wrong offset!");
static_assert(offsetof(ABtlAI_Base_C, M_ActorFix) == 0x000239, "Member 'ABtlAI_Base_C::M_ActorFix' has a wrong offset!");

}
