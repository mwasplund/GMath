#pragma once
#include "Point3FTests.h"

TestState RunPoint3FTests() 
{
	auto className = "Point3FTests";
	auto testClass = std::make_shared<GMath::Tests::Point3FTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize_Zero", [&testClass]() { testClass->Initialize_Zero(); });
	state += Soup::Test::RunTest(className, "Initialize_One", [&testClass]() { testClass->Initialize_One(); });
	state += Soup::Test::RunTest(className, "Initialize_UnitX", [&testClass]() { testClass->Initialize_UnitX(); });
	state += Soup::Test::RunTest(className, "Initialize_UnitY", [&testClass]() { testClass->Initialize_UnitY(); });
	state += Soup::Test::RunTest(className, "Initialize_UnitZ", [&testClass]() { testClass->Initialize_UnitZ(); });
	state += Soup::Test::RunTest(className, "Constructor_DefaultHasZeros", [&testClass]() { testClass->Constructor_DefaultHasZeros(); });
	state += Soup::Test::RunTest(className, "Constructor_SetValues", [&testClass]() { testClass->Constructor_SetValues(); });
	state += Soup::Test::RunTest(className, "SetX_SetsValue", [&testClass]() { testClass->SetX_SetsValue(); });
	state += Soup::Test::RunTest(className, "SetY_SetsValue", [&testClass]() { testClass->SetY_SetsValue(); });
	state += Soup::Test::RunTest(className, "SetZ_SetsValue", [&testClass]() { testClass->SetZ_SetsValue(); });
	state += Soup::Test::RunTest(className, "Operator_AddEqual_AddsValue", [&testClass]() { testClass->Operator_AddEqual_AddsValue(); });
	state += Soup::Test::RunTest(className, "Operator_MinusEqual_SubtractsValue", [&testClass]() { testClass->Operator_MinusEqual_SubtractsValue(); });
	state += Soup::Test::RunTest(className, "Operator_MultiplyEqual_MulipliesValue", [&testClass]() { testClass->Operator_MultiplyEqual_MulipliesValue(); });
	state += Soup::Test::RunTest(className, "Operator_DivideEqual_DividesValue", [&testClass]() { testClass->Operator_DivideEqual_DividesValue(); });
	state += Soup::Test::RunTest(className, "Operator_Add_AddsValue", [&testClass]() { testClass->Operator_Add_AddsValue(); });
	state += Soup::Test::RunTest(className, "Operator_Minus_SubtractsValue", [&testClass]() { testClass->Operator_Minus_SubtractsValue(); });
	state += Soup::Test::RunTest(className, "Operator_Multiply_MulipliesValue", [&testClass]() { testClass->Operator_Multiply_MulipliesValue(); });
	state += Soup::Test::RunTest(className, "Operator_Divide_DividesValue", [&testClass]() { testClass->Operator_Divide_DividesValue(); });
	state += Soup::Test::RunTest(className, "Operator_Equal_SameReturnsTrue", [&testClass]() { testClass->Operator_Equal_SameReturnsTrue(); });
	state += Soup::Test::RunTest(className, "Operator_Equal_XNotSameReturnsFalse", [&testClass]() { testClass->Operator_Equal_XNotSameReturnsFalse(); });
	state += Soup::Test::RunTest(className, "Operator_Equal_YNotSameReturnsFalse", [&testClass]() { testClass->Operator_Equal_YNotSameReturnsFalse(); });
	state += Soup::Test::RunTest(className, "Operator_Equal_ZNotSameReturnsFalse", [&testClass]() { testClass->Operator_Equal_ZNotSameReturnsFalse(); });
	state += Soup::Test::RunTest(className, "Operator_NotEqual_SameReturnsFalse", [&testClass]() { testClass->Operator_NotEqual_SameReturnsFalse(); });
	state += Soup::Test::RunTest(className, "Operator_NotEqual_XNotSameReturnsTrue", [&testClass]() { testClass->Operator_NotEqual_XNotSameReturnsTrue(); });
	state += Soup::Test::RunTest(className, "Operator_NotEqual_YNotSameRetunsTrue", [&testClass]() { testClass->Operator_NotEqual_YNotSameRetunsTrue(); });
	state += Soup::Test::RunTest(className, "Operator_NotEqual_ZNotSameRetunsTrue", [&testClass]() { testClass->Operator_NotEqual_ZNotSameRetunsTrue(); });
	state += Soup::Test::RunTest(className, "Operator_PipeStream_SerializeContent", [&testClass]() { testClass->Operator_PipeStream_SerializeContent(); });

	return state;
}