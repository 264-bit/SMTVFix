#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapEventReturnPoint

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MapEventReturnPoint.MapEventReturnPoint_C
// 0x0048 (0x0268 - 0x0220)
class AMapEventReturnPoint_C final : public AActor
{
public:
	class USceneComponent*                        PlayerRoot;                                        // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    DebugEventName;                                    // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MapEventID;                                        // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapEventReturnPoint_C">();
	}
	static class AMapEventReturnPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMapEventReturnPoint_C>();
	}
};
static_assert(alignof(AMapEventReturnPoint_C) == 0x000008, "Wrong alignment on AMapEventReturnPoint_C");
static_assert(sizeof(AMapEventReturnPoint_C) == 0x000268, "Wrong size on AMapEventReturnPoint_C");
static_assert(offsetof(AMapEventReturnPoint_C, PlayerRoot) == 0x000220, "Member 'AMapEventReturnPoint_C::PlayerRoot' has a wrong offset!");
static_assert(offsetof(AMapEventReturnPoint_C, Box) == 0x000228, "Member 'AMapEventReturnPoint_C::Box' has a wrong offset!");
static_assert(offsetof(AMapEventReturnPoint_C, TextRender) == 0x000230, "Member 'AMapEventReturnPoint_C::TextRender' has a wrong offset!");
static_assert(offsetof(AMapEventReturnPoint_C, ChildActor) == 0x000238, "Member 'AMapEventReturnPoint_C::ChildActor' has a wrong offset!");
static_assert(offsetof(AMapEventReturnPoint_C, Cube) == 0x000240, "Member 'AMapEventReturnPoint_C::Cube' has a wrong offset!");
static_assert(offsetof(AMapEventReturnPoint_C, Arrow) == 0x000248, "Member 'AMapEventReturnPoint_C::Arrow' has a wrong offset!");
static_assert(offsetof(AMapEventReturnPoint_C, DefaultSceneRoot) == 0x000250, "Member 'AMapEventReturnPoint_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AMapEventReturnPoint_C, DebugEventName) == 0x000258, "Member 'AMapEventReturnPoint_C::DebugEventName' has a wrong offset!");
static_assert(offsetof(AMapEventReturnPoint_C, MapEventID) == 0x000260, "Member 'AMapEventReturnPoint_C::MapEventID' has a wrong offset!");

}
