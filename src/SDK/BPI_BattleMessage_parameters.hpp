#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleMessage

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BPI_BattleMessage.BPI_BattleMessage_C.IBattleMessageShow
// 0x0018 (0x0018 - 0x0000)
struct BPI_BattleMessage_C_IBattleMessageShow final
{
public:
	int32                                         InMessageId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShowPos;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkillOrItemName;                                 // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3189[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SkillId;                                           // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillAptitude;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemId;                                            // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleMessage_C_IBattleMessageShow) == 0x000004, "Wrong alignment on BPI_BattleMessage_C_IBattleMessageShow");
static_assert(sizeof(BPI_BattleMessage_C_IBattleMessageShow) == 0x000018, "Wrong size on BPI_BattleMessage_C_IBattleMessageShow");
static_assert(offsetof(BPI_BattleMessage_C_IBattleMessageShow, InMessageId) == 0x000000, "Member 'BPI_BattleMessage_C_IBattleMessageShow::InMessageId' has a wrong offset!");
static_assert(offsetof(BPI_BattleMessage_C_IBattleMessageShow, ShowPos) == 0x000004, "Member 'BPI_BattleMessage_C_IBattleMessageShow::ShowPos' has a wrong offset!");
static_assert(offsetof(BPI_BattleMessage_C_IBattleMessageShow, IsSkillOrItemName) == 0x000008, "Member 'BPI_BattleMessage_C_IBattleMessageShow::IsSkillOrItemName' has a wrong offset!");
static_assert(offsetof(BPI_BattleMessage_C_IBattleMessageShow, SkillId) == 0x00000C, "Member 'BPI_BattleMessage_C_IBattleMessageShow::SkillId' has a wrong offset!");
static_assert(offsetof(BPI_BattleMessage_C_IBattleMessageShow, SkillAptitude) == 0x000010, "Member 'BPI_BattleMessage_C_IBattleMessageShow::SkillAptitude' has a wrong offset!");
static_assert(offsetof(BPI_BattleMessage_C_IBattleMessageShow, ItemId) == 0x000014, "Member 'BPI_BattleMessage_C_IBattleMessageShow::ItemId' has a wrong offset!");

// Function BPI_BattleMessage.BPI_BattleMessage_C.IBattleMessageSetProgramString
// 0x0018 (0x0018 - 0x0000)
struct BPI_BattleMessage_C_IBattleMessageSetProgramString final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_318A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InStr;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleMessage_C_IBattleMessageSetProgramString) == 0x000008, "Wrong alignment on BPI_BattleMessage_C_IBattleMessageSetProgramString");
static_assert(sizeof(BPI_BattleMessage_C_IBattleMessageSetProgramString) == 0x000018, "Wrong size on BPI_BattleMessage_C_IBattleMessageSetProgramString");
static_assert(offsetof(BPI_BattleMessage_C_IBattleMessageSetProgramString, InIndex) == 0x000000, "Member 'BPI_BattleMessage_C_IBattleMessageSetProgramString::InIndex' has a wrong offset!");
static_assert(offsetof(BPI_BattleMessage_C_IBattleMessageSetProgramString, InStr) == 0x000008, "Member 'BPI_BattleMessage_C_IBattleMessageSetProgramString::InStr' has a wrong offset!");

// Function BPI_BattleMessage.BPI_BattleMessage_C.IBattleMessageVisibility
// 0x0001 (0x0001 - 0x0000)
struct BPI_BattleMessage_C_IBattleMessageVisibility final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleMessage_C_IBattleMessageVisibility) == 0x000001, "Wrong alignment on BPI_BattleMessage_C_IBattleMessageVisibility");
static_assert(sizeof(BPI_BattleMessage_C_IBattleMessageVisibility) == 0x000001, "Wrong size on BPI_BattleMessage_C_IBattleMessageVisibility");
static_assert(offsetof(BPI_BattleMessage_C_IBattleMessageVisibility, InVisibility) == 0x000000, "Member 'BPI_BattleMessage_C_IBattleMessageVisibility::InVisibility' has a wrong offset!");

// Function BPI_BattleMessage.BPI_BattleMessage_C.IBattleMessageSetIconElement
// 0x0004 (0x0004 - 0x0000)
struct BPI_BattleMessage_C_IBattleMessageSetIconElement final
{
public:
	int32                                         Elementnumber;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleMessage_C_IBattleMessageSetIconElement) == 0x000004, "Wrong alignment on BPI_BattleMessage_C_IBattleMessageSetIconElement");
static_assert(sizeof(BPI_BattleMessage_C_IBattleMessageSetIconElement) == 0x000004, "Wrong size on BPI_BattleMessage_C_IBattleMessageSetIconElement");
static_assert(offsetof(BPI_BattleMessage_C_IBattleMessageSetIconElement, Elementnumber) == 0x000000, "Member 'BPI_BattleMessage_C_IBattleMessageSetIconElement::Elementnumber' has a wrong offset!");

}

