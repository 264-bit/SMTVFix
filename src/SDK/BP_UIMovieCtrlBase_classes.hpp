#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UIMovieCtrlBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CriWareRuntime_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UIMovieCtrlBase.BP_UIMovieCtrlBase_C
// 0x0028 (0x0248 - 0x0220)
class ABP_UIMovieCtrlBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UManaComponent*                         Mana;                                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          M_Loop;                                            // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsPlaying;                                       // 0x0239(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_StopReq;                                         // 0x023A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7098[0x5];                                     // 0x023B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UManaTexture*                           M_MovieTexture2160;                                // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void IsPlaying(bool* Param_IsPlaying);
	void UserConstructionScript();
	void Play(bool Loop);
	void Stop();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_UIMovieCtrlBase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIMovieCtrlBase_C">();
	}
	static class ABP_UIMovieCtrlBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_UIMovieCtrlBase_C>();
	}
};
static_assert(alignof(ABP_UIMovieCtrlBase_C) == 0x000008, "Wrong alignment on ABP_UIMovieCtrlBase_C");
static_assert(sizeof(ABP_UIMovieCtrlBase_C) == 0x000248, "Wrong size on ABP_UIMovieCtrlBase_C");
static_assert(offsetof(ABP_UIMovieCtrlBase_C, UberGraphFrame) == 0x000220, "Member 'ABP_UIMovieCtrlBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_UIMovieCtrlBase_C, Mana) == 0x000228, "Member 'ABP_UIMovieCtrlBase_C::Mana' has a wrong offset!");
static_assert(offsetof(ABP_UIMovieCtrlBase_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_UIMovieCtrlBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_UIMovieCtrlBase_C, M_Loop) == 0x000238, "Member 'ABP_UIMovieCtrlBase_C::M_Loop' has a wrong offset!");
static_assert(offsetof(ABP_UIMovieCtrlBase_C, M_IsPlaying) == 0x000239, "Member 'ABP_UIMovieCtrlBase_C::M_IsPlaying' has a wrong offset!");
static_assert(offsetof(ABP_UIMovieCtrlBase_C, M_StopReq) == 0x00023A, "Member 'ABP_UIMovieCtrlBase_C::M_StopReq' has a wrong offset!");
static_assert(offsetof(ABP_UIMovieCtrlBase_C, M_MovieTexture2160) == 0x000240, "Member 'ABP_UIMovieCtrlBase_C::M_MovieTexture2160' has a wrong offset!");

}
