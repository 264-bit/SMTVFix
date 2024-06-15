#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventMessage

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct EventMessage.EventMessage
// 0x0030 (0x0030 - 0x0000)
struct FEventMessage final
{
public:
	int32                                         ID_6_1894EE0A4919A3DD2A2488B87877115E;             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time_7_E0A745634528BC72D75FDDBA71B4D987;           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipBlock_10_089A82EE46C534328D34A88694694A8E;     // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8545[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectID_1_17_9203D6294FFBF4561CEA288792FB1482;    // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectID_2_18_4C62DF4942976DA7411AF2A7222414FF;    // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectID_3_19_EFB0F8A84AC3CCC6584E5BBBAA44EFA0;    // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectID_4_22_B279F7574C96EE1AFF48D8B37E4B6861;    // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          System_24_DB832CCE44A23FEB853E4C90F60B265C;        // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8546[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CharaTag_28_0C38123342EDAC27AC2459B6144ECF4D;      // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceAuto_30_A6DE8B0645C8E32E27BC7A8960472E37;     // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8547[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AutoDelay_33_1C7598A448AC67F466EDE29BF051B2EA;     // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FEventMessage) == 0x000004, "Wrong alignment on FEventMessage");
static_assert(sizeof(FEventMessage) == 0x000030, "Wrong size on FEventMessage");
static_assert(offsetof(FEventMessage, ID_6_1894EE0A4919A3DD2A2488B87877115E) == 0x000000, "Member 'FEventMessage::ID_6_1894EE0A4919A3DD2A2488B87877115E' has a wrong offset!");
static_assert(offsetof(FEventMessage, Time_7_E0A745634528BC72D75FDDBA71B4D987) == 0x000004, "Member 'FEventMessage::Time_7_E0A745634528BC72D75FDDBA71B4D987' has a wrong offset!");
static_assert(offsetof(FEventMessage, SkipBlock_10_089A82EE46C534328D34A88694694A8E) == 0x000008, "Member 'FEventMessage::SkipBlock_10_089A82EE46C534328D34A88694694A8E' has a wrong offset!");
static_assert(offsetof(FEventMessage, SelectID_1_17_9203D6294FFBF4561CEA288792FB1482) == 0x00000C, "Member 'FEventMessage::SelectID_1_17_9203D6294FFBF4561CEA288792FB1482' has a wrong offset!");
static_assert(offsetof(FEventMessage, SelectID_2_18_4C62DF4942976DA7411AF2A7222414FF) == 0x000010, "Member 'FEventMessage::SelectID_2_18_4C62DF4942976DA7411AF2A7222414FF' has a wrong offset!");
static_assert(offsetof(FEventMessage, SelectID_3_19_EFB0F8A84AC3CCC6584E5BBBAA44EFA0) == 0x000014, "Member 'FEventMessage::SelectID_3_19_EFB0F8A84AC3CCC6584E5BBBAA44EFA0' has a wrong offset!");
static_assert(offsetof(FEventMessage, SelectID_4_22_B279F7574C96EE1AFF48D8B37E4B6861) == 0x000018, "Member 'FEventMessage::SelectID_4_22_B279F7574C96EE1AFF48D8B37E4B6861' has a wrong offset!");
static_assert(offsetof(FEventMessage, System_24_DB832CCE44A23FEB853E4C90F60B265C) == 0x00001C, "Member 'FEventMessage::System_24_DB832CCE44A23FEB853E4C90F60B265C' has a wrong offset!");
static_assert(offsetof(FEventMessage, CharaTag_28_0C38123342EDAC27AC2459B6144ECF4D) == 0x000020, "Member 'FEventMessage::CharaTag_28_0C38123342EDAC27AC2459B6144ECF4D' has a wrong offset!");
static_assert(offsetof(FEventMessage, ForceAuto_30_A6DE8B0645C8E32E27BC7A8960472E37) == 0x000028, "Member 'FEventMessage::ForceAuto_30_A6DE8B0645C8E32E27BC7A8960472E37' has a wrong offset!");
static_assert(offsetof(FEventMessage, AutoDelay_33_1C7598A448AC67F466EDE29BF051B2EA) == 0x00002C, "Member 'FEventMessage::AutoDelay_33_1C7598A448AC67F466EDE29BF051B2EA' has a wrong offset!");

}

