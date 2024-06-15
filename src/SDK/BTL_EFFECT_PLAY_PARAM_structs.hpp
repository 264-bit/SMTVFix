#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTL_EFFECT_PLAY_PARAM

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct BTL_EFFECT_PLAY_PARAM.BTL_EFFECT_PLAY_PARAM
// 0x00B0 (0x00B0 - 0x0000)
struct FBTL_EFFECT_PLAY_PARAM final
{
public:
	int32                                         WaitCommand_34_4D6A4E3C494E92D8AB7293B80A89DE65;   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D7A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillActionEffect                     HitEffect_2_99AB91BE48769EBF6CFA658697FBF944;      // 0x0008(0x0038)(Edit, BlueprintVisible)
	class FString                                 SocketName_37_1F5A67884A576DC3A7AD3DAA0D31D61B;    // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FTransform                             RelativeTrans_5_F4837E8D474F4D51DA92909098CACEBA;  // 0x0050(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                          IsWorldRelative_8_728EB3944D254D5C2882598A72E14A6D; // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D7B[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LifeSec_11_62304C6C4ACEE43F2184E0BA5A4767EB;       // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TranslucencyPriority_14_4968CF4E48EC9D0FEE62E0BCAD9BE1A9; // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotYawRandMin_17_88A172624C7674D0804AC8A908077657; // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotYawRandMax_19_B179EFB14DB7EDF7D089749A67C50B86; // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ApplyBlur_22_AEA3869143F233989EF8B3893D84BEC4;     // 0x0094(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D7C[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartBlurAmount_25_24A674414FCCB46985A855AAF732CA31; // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndBlurAmount_27_FC24ACE74DB48BA72770088BADF93154; // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlurStartKeepSec_29_A30DA4A942E80BBF5CC0DB9C943088DA; // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlurLerpSec_31_50C9D9264A0A61F6049CB5BBF1A3CE93;   // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FBTL_EFFECT_PLAY_PARAM) == 0x000010, "Wrong alignment on FBTL_EFFECT_PLAY_PARAM");
static_assert(sizeof(FBTL_EFFECT_PLAY_PARAM) == 0x0000B0, "Wrong size on FBTL_EFFECT_PLAY_PARAM");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, WaitCommand_34_4D6A4E3C494E92D8AB7293B80A89DE65) == 0x000000, "Member 'FBTL_EFFECT_PLAY_PARAM::WaitCommand_34_4D6A4E3C494E92D8AB7293B80A89DE65' has a wrong offset!");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, HitEffect_2_99AB91BE48769EBF6CFA658697FBF944) == 0x000008, "Member 'FBTL_EFFECT_PLAY_PARAM::HitEffect_2_99AB91BE48769EBF6CFA658697FBF944' has a wrong offset!");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, SocketName_37_1F5A67884A576DC3A7AD3DAA0D31D61B) == 0x000040, "Member 'FBTL_EFFECT_PLAY_PARAM::SocketName_37_1F5A67884A576DC3A7AD3DAA0D31D61B' has a wrong offset!");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, RelativeTrans_5_F4837E8D474F4D51DA92909098CACEBA) == 0x000050, "Member 'FBTL_EFFECT_PLAY_PARAM::RelativeTrans_5_F4837E8D474F4D51DA92909098CACEBA' has a wrong offset!");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, IsWorldRelative_8_728EB3944D254D5C2882598A72E14A6D) == 0x000080, "Member 'FBTL_EFFECT_PLAY_PARAM::IsWorldRelative_8_728EB3944D254D5C2882598A72E14A6D' has a wrong offset!");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, LifeSec_11_62304C6C4ACEE43F2184E0BA5A4767EB) == 0x000084, "Member 'FBTL_EFFECT_PLAY_PARAM::LifeSec_11_62304C6C4ACEE43F2184E0BA5A4767EB' has a wrong offset!");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, TranslucencyPriority_14_4968CF4E48EC9D0FEE62E0BCAD9BE1A9) == 0x000088, "Member 'FBTL_EFFECT_PLAY_PARAM::TranslucencyPriority_14_4968CF4E48EC9D0FEE62E0BCAD9BE1A9' has a wrong offset!");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, RotYawRandMin_17_88A172624C7674D0804AC8A908077657) == 0x00008C, "Member 'FBTL_EFFECT_PLAY_PARAM::RotYawRandMin_17_88A172624C7674D0804AC8A908077657' has a wrong offset!");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, RotYawRandMax_19_B179EFB14DB7EDF7D089749A67C50B86) == 0x000090, "Member 'FBTL_EFFECT_PLAY_PARAM::RotYawRandMax_19_B179EFB14DB7EDF7D089749A67C50B86' has a wrong offset!");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, ApplyBlur_22_AEA3869143F233989EF8B3893D84BEC4) == 0x000094, "Member 'FBTL_EFFECT_PLAY_PARAM::ApplyBlur_22_AEA3869143F233989EF8B3893D84BEC4' has a wrong offset!");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, StartBlurAmount_25_24A674414FCCB46985A855AAF732CA31) == 0x000098, "Member 'FBTL_EFFECT_PLAY_PARAM::StartBlurAmount_25_24A674414FCCB46985A855AAF732CA31' has a wrong offset!");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, EndBlurAmount_27_FC24ACE74DB48BA72770088BADF93154) == 0x00009C, "Member 'FBTL_EFFECT_PLAY_PARAM::EndBlurAmount_27_FC24ACE74DB48BA72770088BADF93154' has a wrong offset!");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, BlurStartKeepSec_29_A30DA4A942E80BBF5CC0DB9C943088DA) == 0x0000A0, "Member 'FBTL_EFFECT_PLAY_PARAM::BlurStartKeepSec_29_A30DA4A942E80BBF5CC0DB9C943088DA' has a wrong offset!");
static_assert(offsetof(FBTL_EFFECT_PLAY_PARAM, BlurLerpSec_31_50C9D9264A0A61F6049CB5BBF1A3CE93) == 0x0000A4, "Member 'FBTL_EFFECT_PLAY_PARAM::BlurLerpSec_31_50C9D9264A0A61F6049CB5BBF1A3CE93' has a wrong offset!");

}

