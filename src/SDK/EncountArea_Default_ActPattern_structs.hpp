#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EncountArea_Default_ActPattern

#include "Basic.hpp"

#include "SymbolActPattern_structs.hpp"


namespace SDK
{

// UserDefinedStruct EncountArea_Default_ActPattern.EncountArea_Default_ActPattern
// 0x0020 (0x0020 - 0x0000)
struct FEncountArea_Default_ActPattern final
{
public:
	TArray<struct FSymbolActPattern>              FirstActPattern_38_66D1C9EF4F1AEDCCACB558A3F3934A54; // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSymbolActPattern>              SecondActPattern_39_535BCE3A4EB301CF8457FA91FFE08D2F; // 0x0010(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FEncountArea_Default_ActPattern) == 0x000008, "Wrong alignment on FEncountArea_Default_ActPattern");
static_assert(sizeof(FEncountArea_Default_ActPattern) == 0x000020, "Wrong size on FEncountArea_Default_ActPattern");
static_assert(offsetof(FEncountArea_Default_ActPattern, FirstActPattern_38_66D1C9EF4F1AEDCCACB558A3F3934A54) == 0x000000, "Member 'FEncountArea_Default_ActPattern::FirstActPattern_38_66D1C9EF4F1AEDCCACB558A3F3934A54' has a wrong offset!");
static_assert(offsetof(FEncountArea_Default_ActPattern, SecondActPattern_39_535BCE3A4EB301CF8457FA91FFE08D2F) == 0x000010, "Member 'FEncountArea_Default_ActPattern::SecondActPattern_39_535BCE3A4EB301CF8457FA91FFE08D2F' has a wrong offset!");

}

