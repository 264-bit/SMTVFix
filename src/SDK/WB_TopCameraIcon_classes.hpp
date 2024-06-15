#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TopCameraIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_TopCameraIcon.WB_TopCameraIcon_C
// 0x0050 (0x02B0 - 0x0260)
class UWB_TopCameraIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 PlayerCenterImage;                                 // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerDirectionImage;                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TopCameraIconOverlay;                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         MAX_ICON_NUM;                                      // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D82[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         ImageArray;                                        // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UMaterialInstance*                      IconMI;                                            // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HalfImageSize;                                     // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayerRotateZ;                                     // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayerImageSize;                                   // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ImageIndex;                                        // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_TopCameraIcon(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void CreateData();
	void UpdateImage();
	void UpdateBuffer(const struct FVector& CameraLocation, const struct FRotator& CameraRotate, const struct FVector& HeroLocation, const struct FRotator& HeroRotate);
	void InitPlayer();
	void UpdatePlayer();
	void RequestImage(class UImage** Image);
	void UpdatePlayerImage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_TopCameraIcon_C">();
	}
	static class UWB_TopCameraIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_TopCameraIcon_C>();
	}
};
static_assert(alignof(UWB_TopCameraIcon_C) == 0x000008, "Wrong alignment on UWB_TopCameraIcon_C");
static_assert(sizeof(UWB_TopCameraIcon_C) == 0x0002B0, "Wrong size on UWB_TopCameraIcon_C");
static_assert(offsetof(UWB_TopCameraIcon_C, UberGraphFrame) == 0x000260, "Member 'UWB_TopCameraIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_TopCameraIcon_C, PlayerCenterImage) == 0x000268, "Member 'UWB_TopCameraIcon_C::PlayerCenterImage' has a wrong offset!");
static_assert(offsetof(UWB_TopCameraIcon_C, PlayerDirectionImage) == 0x000270, "Member 'UWB_TopCameraIcon_C::PlayerDirectionImage' has a wrong offset!");
static_assert(offsetof(UWB_TopCameraIcon_C, TopCameraIconOverlay) == 0x000278, "Member 'UWB_TopCameraIcon_C::TopCameraIconOverlay' has a wrong offset!");
static_assert(offsetof(UWB_TopCameraIcon_C, MAX_ICON_NUM) == 0x000280, "Member 'UWB_TopCameraIcon_C::MAX_ICON_NUM' has a wrong offset!");
static_assert(offsetof(UWB_TopCameraIcon_C, ImageArray) == 0x000288, "Member 'UWB_TopCameraIcon_C::ImageArray' has a wrong offset!");
static_assert(offsetof(UWB_TopCameraIcon_C, IconMI) == 0x000298, "Member 'UWB_TopCameraIcon_C::IconMI' has a wrong offset!");
static_assert(offsetof(UWB_TopCameraIcon_C, HalfImageSize) == 0x0002A0, "Member 'UWB_TopCameraIcon_C::HalfImageSize' has a wrong offset!");
static_assert(offsetof(UWB_TopCameraIcon_C, PlayerRotateZ) == 0x0002A4, "Member 'UWB_TopCameraIcon_C::PlayerRotateZ' has a wrong offset!");
static_assert(offsetof(UWB_TopCameraIcon_C, PlayerImageSize) == 0x0002A8, "Member 'UWB_TopCameraIcon_C::PlayerImageSize' has a wrong offset!");
static_assert(offsetof(UWB_TopCameraIcon_C, ImageIndex) == 0x0002AC, "Member 'UWB_TopCameraIcon_C::ImageIndex' has a wrong offset!");

}

