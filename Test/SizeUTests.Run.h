#pragma once
#include "SizeUTests.h"

TestState RunSizeUTests() 
{
	auto className = "SizeUTests";
	auto testClass = std::make_shared<GMath::Tests::SizeUTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Constructor_DefaultHasZeros", [&testClass]() { testClass->Constructor_DefaultHasZeros(); });
	state += Soup::Test::RunTest(className, "Constructor_SetValues", [&testClass]() { testClass->Constructor_SetValues(); });
	state += Soup::Test::RunTest(className, "SetWidth_SetsValue", [&testClass]() { testClass->SetWidth_SetsValue(); });
	state += Soup::Test::RunTest(className, "SetHeight_SetsValue", [&testClass]() { testClass->SetHeight_SetsValue(); });
	state += Soup::Test::RunTest(className, "Operator_Equal_SameReturnsTrue", [&testClass]() { testClass->Operator_Equal_SameReturnsTrue(); });
	state += Soup::Test::RunTest(className, "Operator_Equal_WidthNotSameReturnsFalse", [&testClass]() { testClass->Operator_Equal_WidthNotSameReturnsFalse(); });
	state += Soup::Test::RunTest(className, "Operator_Equal_HeightNotSameReturnsFalse", [&testClass]() { testClass->Operator_Equal_HeightNotSameReturnsFalse(); });
	state += Soup::Test::RunTest(className, "Operator_NotEqual_SameReturnsFalse", [&testClass]() { testClass->Operator_NotEqual_SameReturnsFalse(); });
	state += Soup::Test::RunTest(className, "Operator_NotEqual_WidthNotSameReturnsTrue", [&testClass]() { testClass->Operator_NotEqual_WidthNotSameReturnsTrue(); });
	state += Soup::Test::RunTest(className, "Operator_NotEqual_HeightNotSameRetunsTrue", [&testClass]() { testClass->Operator_NotEqual_HeightNotSameRetunsTrue(); });
	state += Soup::Test::RunTest(className, "Operator_PipeStream_SerializeContent", [&testClass]() { testClass->Operator_PipeStream_SerializeContent(); });

	return state;
}