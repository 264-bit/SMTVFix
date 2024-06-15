#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Gimic_Chest_Piece

#include "Basic.hpp"

#include "BP_Gimic_Chest_Piece_classes.hpp"
#include "BP_Gimic_Chest_Piece_parameters.hpp"


namespace SDK
{

// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.EvtDis_End__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::EvtDis_End__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "EvtDis_End__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.EvtDis_StartCollect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::EvtDis_StartCollect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "EvtDis_StartCollect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.EvtDis_EndCollectEffect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::EvtDis_EndCollectEffect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "EvtDis_EndCollectEffect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.EvtDis_EndInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::EvtDis_EndInfo__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "EvtDis_EndInfo__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.ExecuteUbergraph_BP_Gimic_Chest_Piece
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Gimic_Chest_Piece_C::ExecuteUbergraph_BP_Gimic_Chest_Piece(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "ExecuteUbergraph_BP_Gimic_Chest_Piece");

	Params::BP_Gimic_Chest_Piece_C_ExecuteUbergraph_BP_Gimic_Chest_Piece Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.BndEvt__BP_Gimic_Chest_Piece_SphereHit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Gimic_Chest_Piece_C::BndEvt__BP_Gimic_Chest_Piece_SphereHit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "BndEvt__BP_Gimic_Chest_Piece_SphereHit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_Gimic_Chest_Piece_C_BndEvt__BP_Gimic_Chest_Piece_SphereHit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.ParticleStopCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::ParticleStopCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "ParticleStopCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.BPI_SetStopTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_StopTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Gimic_Chest_Piece_C::BPI_SetStopTime(bool Param_StopTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "BPI_SetStopTime");

	Params::BP_Gimic_Chest_Piece_C_BPI_SetStopTime Parms{};

	Parms.Param_StopTime = Param_StopTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.OnRotateFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSkipped                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Gimic_Chest_Piece_C::OnRotateFinished(bool IsSkipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "OnRotateFinished");

	Params::BP_Gimic_Chest_Piece_C_OnRotateFinished Parms{};

	Parms.IsSkipped = IsSkipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.OnRotateStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::OnRotateStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "OnRotateStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.GetGodPointPiece
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Get                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Gimic_Chest_Piece_C::GetGodPointPiece(bool Get, bool Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "GetGodPointPiece");

	Params::BP_Gimic_Chest_Piece_C_GetGodPointPiece Parms{};

	Parms.Get = Get;
	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.GetHpCurePiece
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::GetHpCurePiece()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "GetHpCurePiece");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.GetMpCurePiece
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::GetMpCurePiece()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "GetMpCurePiece");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.BPI_HideGimmick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MapGimmickHideReason                  Param_HideReason                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Gimic_Chest_Piece_C::BPI_HideGimmick(E_MapGimmickHideReason Param_HideReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "BPI_HideGimmick");

	Params::BP_Gimic_Chest_Piece_C_BPI_HideGimmick Parms{};

	Parms.Param_HideReason = Param_HideReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.BPI_ShowGimmick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MapGimmickHideReason                  Param_HideReason                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Gimic_Chest_Piece_C::BPI_ShowGimmick(E_MapGimmickHideReason Param_HideReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "BPI_ShowGimmick");

	Params::BP_Gimic_Chest_Piece_C_BPI_ShowGimmick Parms{};

	Parms.Param_HideReason = Param_HideReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.GetMagatsuhiPiece
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::GetMagatsuhiPiece()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "GetMagatsuhiPiece");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.DecalFadeIn
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::DecalFadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "DecalFadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.DecalFadeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::DecalFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "DecalFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.SilentMoon
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::SilentMoon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "SilentMoon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.WaitSilentMoon
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::WaitSilentMoon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "WaitSilentMoon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.CallUnPause_
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::CallUnPause_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "CallUnPause_");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.EvtDis_EndNotInfo_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::EvtDis_EndNotInfo_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "EvtDis_EndNotInfo_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.EvtDis_EndInfo_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::EvtDis_EndInfo_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "EvtDis_EndInfo_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.EvtDis_Hide_
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::EvtDis_Hide_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "EvtDis_Hide_");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.EvtDis_Show_
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::EvtDis_Show_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "EvtDis_Show_");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.EndCollectEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::EndCollectEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "EndCollectEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.StartCollectEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::StartCollectEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "StartCollectEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.OverlapPiece
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::OverlapPiece()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "OverlapPiece");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.EventHitAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::EventHitAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "EventHitAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.OpenNotHaveItemInfo
// (BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::OpenNotHaveItemInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "OpenNotHaveItemInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.GetMakkaPiece
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Get                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Gimic_Chest_Piece_C::GetMakkaPiece(bool Get, bool Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "GetMakkaPiece");

	Params::BP_Gimic_Chest_Piece_C_GetMakkaPiece Parms{};

	Parms.Get = Get;
	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.GetItemPiece
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Get                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Gimic_Chest_Piece_C::GetItemPiece(bool Get, bool Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "GetItemPiece");

	Params::BP_Gimic_Chest_Piece_C_GetItemPiece Parms{};

	Parms.Get = Get;
	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.OnLoaded_000CEC1647E4F09283905AA617AF2AAC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_Gimic_Chest_Piece_C::OnLoaded_000CEC1647E4F09283905AA617AF2AAC(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "OnLoaded_000CEC1647E4F09283905AA617AF2AAC");

	Params::BP_Gimic_Chest_Piece_C_OnLoaded_000CEC1647E4F09283905AA617AF2AAC Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.Timeline_DecalFadeIn__UpdateFunc
// (BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::Timeline_DecalFadeIn__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "Timeline_DecalFadeIn__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.Timeline_DecalFadeIn__FinishedFunc
// (BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::Timeline_DecalFadeIn__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "Timeline_DecalFadeIn__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.�����_1__UpdateFunc
// (BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::_______1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "�����_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.�����_1__FinishedFunc
// (BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::_______1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "�����_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.InitEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::InitEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "InitEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.RebornPiece
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::RebornPiece()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "RebornPiece");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.EndPiece
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::EndPiece()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "EndPiece");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.CureHp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::CureHp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "CureHp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.CureMp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::CureMp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "CureMp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.SpawnCureEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PIECE_TYPE                            PieceType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Gimic_Chest_Piece_C::SpawnCureEffect(E_PIECE_TYPE PieceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "SpawnCureEffect");

	Params::BP_Gimic_Chest_Piece_C_SpawnCureEffect Parms{};

	Parms.PieceType = PieceType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.GetTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Gimic_Chest_Piece_C::GetTargetLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "GetTargetLocation");

	Params::BP_Gimic_Chest_Piece_C_GetTargetLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.GetPlayerHPMPMax
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_PLAYER_TYPE                           PlayerType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   HpMax                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MpMax                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Gimic_Chest_Piece_C::GetPlayerHPMPMax(E_PLAYER_TYPE PlayerType, int32* HpMax, int32* MpMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "GetPlayerHPMPMax");

	Params::BP_Gimic_Chest_Piece_C_GetPlayerHPMPMax Parms{};

	Parms.PlayerType = PlayerType;

	UObject::ProcessEvent(Func, &Parms);

	if (HpMax != nullptr)
		*HpMax = Parms.HpMax;

	if (MpMax != nullptr)
		*MpMax = Parms.MpMax;
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.GetNkmHPMPMax
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   NkmIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   HpMax                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MpMax                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Gimic_Chest_Piece_C::GetNkmHPMPMax(int32 NkmIndex, int32* HpMax, int32* MpMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "GetNkmHPMPMax");

	Params::BP_Gimic_Chest_Piece_C_GetNkmHPMPMax Parms{};

	Parms.NkmIndex = NkmIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (HpMax != nullptr)
		*HpMax = Parms.HpMax;

	if (MpMax != nullptr)
		*MpMax = Parms.MpMax;
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.SetPieceData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPieceData                       Param_PieceData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_Gimic_Chest_Piece_C::SetPieceData(const struct FPieceData& Param_PieceData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "SetPieceData");

	Params::BP_Gimic_Chest_Piece_C_SetPieceData Parms{};

	Parms.Param_PieceData = std::move(Param_PieceData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.TriggerSilentMoon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::TriggerSilentMoon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "TriggerSilentMoon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.CheckHaveLimitOver
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPieceData                       Param_PieceData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    LimitOver                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   GetNum                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Gimic_Chest_Piece_C::CheckHaveLimitOver(const struct FPieceData& Param_PieceData, bool* LimitOver, int32* GetNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "CheckHaveLimitOver");

	Params::BP_Gimic_Chest_Piece_C_CheckHaveLimitOver Parms{};

	Parms.Param_PieceData = std::move(Param_PieceData);

	UObject::ProcessEvent(Func, &Parms);

	if (LimitOver != nullptr)
		*LimitOver = Parms.LimitOver;

	if (GetNum != nullptr)
		*GetNum = Parms.GetNum;
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.ShowDecal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Execution                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Gimic_Chest_Piece_C::ShowDecal(bool Show, bool Execution)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "ShowDecal");

	Params::BP_Gimic_Chest_Piece_C_ShowDecal Parms{};

	Parms.Show = Show;
	Parms.Execution = Execution;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.Stop_MovePiece
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::Stop_MovePiece()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "Stop_MovePiece");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.InitDecal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::InitDecal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "InitDecal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.ShowMainParticle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Gimic_Chest_Piece_C::ShowMainParticle(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "ShowMainParticle");

	Params::BP_Gimic_Chest_Piece_C_ShowMainParticle Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.ShowLineParticle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Gimic_Chest_Piece_C::ShowLineParticle(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "ShowLineParticle");

	Params::BP_Gimic_Chest_Piece_C_ShowLineParticle Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.SetRoomRotator
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADG_RoomRotator*                  Param_RoomRotator                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_Gimic_Chest_Piece_C::SetRoomRotator(class ADG_RoomRotator* Param_RoomRotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "SetRoomRotator");

	Params::BP_Gimic_Chest_Piece_C_SetRoomRotator Parms{};

	Parms.Param_RoomRotator = Param_RoomRotator;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.GetRoomRotator
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADG_RoomRotator*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ADG_RoomRotator* ABP_Gimic_Chest_Piece_C::GetRoomRotator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "GetRoomRotator");

	Params::BP_Gimic_Chest_Piece_C_GetRoomRotator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Gimic_Chest_Piece.BP_Gimic_Chest_Piece_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Gimic_Chest_Piece_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Gimic_Chest_Piece_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

