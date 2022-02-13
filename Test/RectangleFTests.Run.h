#pragma once
#include "RectangleFTests.h"

TestState RunRectangleFTests() 
{
	auto className = "RectangleFTests";
	auto testClass = std::make_shared<GMath::Tests::RectangleFTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Constructor_DefaultHasZeros", [&testClass]() { testClass->Constructor_DefaultHasZeros(); });
	state += Soup::Test::RunTest(className, "Constructor_SetValues", [&testClass]() { testClass->Constructor_SetValues(); });
	state += Soup::Test::RunTest(className, "GetSize", [&testClass]() { testClass->GetSize(); });
	state += Soup::Test::RunTest(className, "SetTopLeft_SetsValue", [&testClass]() { testClass->SetTopLeft_SetsValue(); });
	state += Soup::Test::RunTest(className, "SetBottomRight_SetsValue", [&testClass]() { testClass->SetBottomRight_SetsValue(); });
	state += Soup::Test::RunTest(className, "Operator_Equal_SameReturnsTrue", [&testClass]() { testClass->Operator_Equal_SameReturnsTrue(); });
	state += Soup::Test::RunTest(className, "Operator_Equal_TopLeftNotSameReturnsFalse", [&testClass]() { testClass->Operator_Equal_TopLeftNotSameReturnsFalse(); });
	state += Soup::Test::RunTest(className, "Operator_Equal_BottomRightNotSameReturnsFalse", [&testClass]() { testClass->Operator_Equal_BottomRightNotSameReturnsFalse(); });
	state += Soup::Test::RunTest(className, "Operator_NotEqual_SameReturnsFalse", [&testClass]() { testClass->Operator_NotEqual_SameReturnsFalse(); });
	state += Soup::Test::RunTest(className, "Operator_NotEqual_TopLeftNotSameReturnsTrue", [&testClass]() { testClass->Operator_NotEqual_TopLeftNotSameReturnsTrue(); });
	state += Soup::Test::RunTest(className, "Operator_NotEqual_BottomRightNotSameRetunsTrue", [&testClass]() { testClass->Operator_NotEqual_BottomRightNotSameRetunsTrue(); });
	state += Soup::Test::RunTest(className, "Operator_PipeStream_SerializeContent", [&testClass]() { testClass->Operator_PipeStream_SerializeContent(); });

	return state;
}