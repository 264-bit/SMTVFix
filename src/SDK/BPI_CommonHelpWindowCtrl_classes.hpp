#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CommonHelpWindowCtrl

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Project_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CommonHelpWindowCtrl.BPI_CommonHelpWindowCtrl_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CommonHelpWindowCtrl_C final : public IInterface
{
public:
	void ICommonHelpWindowOpen(E_WIDGET_PRIO InPrio);
	void ICommonHelpWindowClose();
	void ICommonHelpWindowIsOpened(bool* OutFinished);
	void ICommonHelpWindowIsClosed(bool* OutFinished);
	void ICommonHelpWindowSetWidgetVisibility(ESlateVisibility InVisibility);
	void ICommonHelpWindowGetWidgetVisibility(ESlateVisibility* Visibility);
	void ICommonHelpWindowExecutionOpen(E_WIDGET_PRIO InPrio);
	void ICommonHelpWindowExecutionClose();
	void ICommonHelpWindowSetRichTextByLabel(class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, bool InChangeAnime, bool InExecutionText, bool InBuildText);
	void ICommonHelpWindowSetRichTextByIndex(class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, bool InChangeAnime, bool InExecutionText, bool InBuildText);
	void ICommonHelpWindowSetExecutionRichText();
	void ICommonHelpWindowSetBuildRichText();
	void ICommonHelpWindowSetSkillId(int32 InSkillId);
	void ICommonHelpWindowSetItemId(int32 InItemId);
	void ICommonHelpWindowSetProgramValue(int32 InIndex, const class FString& InString);
	void ICommonHelpWindowClearRichText(bool InChangeAnime);
	void ICommonHelpWindowSetValueParam(int32 InIndex, int32 InParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CommonHelpWindowCtrl_C">();
	}
	static class IBPI_CommonHelpWindowCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CommonHelpWindowCtrl_C>();
	}
};
static_assert(alignof(IBPI_CommonHelpWindowCtrl_C) == 0x000008, "Wrong alignment on IBPI_CommonHelpWindowCtrl_C");
static_assert(sizeof(IBPI_CommonHelpWindowCtrl_C) == 0x000028, "Wrong size on IBPI_CommonHelpWindowCtrl_C");

}
