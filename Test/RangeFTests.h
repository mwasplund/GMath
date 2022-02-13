// <copyright file="RangeFTests.h" company="Soup">
// Copyright (c) Soup. All rights reserved.
// </copyright>

#pragma once

namespace GMath::Tests
{
	class RangeFTests
	{
	public:
		// [[Fact]]
		void Constructor_DefaultHasZeros()
		{
			auto uut = RangeF();

			Assert::AreEqual(uut.GetMin(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetMax(), 0.0f, "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_SetValues()
		{
			auto uut = RangeF(1.1f, 2.2f);

			Assert::AreEqual(uut.GetMin(), 1.1f, "Verify expected value.");
			Assert::AreEqual(uut.GetMax(), 2.2f, "Verify expected value.");
		}

		// [[Fact]]
		void SetMin_SetsValue()
		{
			auto uut = RangeF();
			uut.SetMin(1.1f);
			Assert::AreEqual(uut.GetMin(), 1.1f, "Verify expected value.");
			Assert::AreEqual(uut.GetMax(), 0.0f, "Verify expected value.");
		}

		// [[Fact]]
		void SetMax_SetsValue()
		{
			auto uut = RangeF();
			uut.SetMax(1.1f);
			Assert::AreEqual(uut.GetMin(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetMax(), 1.1f, "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Equal_SameReturnsTrue()
		{
			auto uut = RangeF(1.1f, 2.2f);

			Assert::IsTrue(uut == RangeF(1.1f, 2.2f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_WidthNotSameReturnsFalse()
		{
			auto uut = RangeF(1.1f, 2.2f);

			Assert::IsFalse(uut == RangeF(1.2f, 2.2f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_HeightNotSameReturnsFalse()
		{
			auto uut = RangeF(1.1f, 2.2f);

			Assert::IsFalse(uut == RangeF(1.1f, 2.3f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_NotEqual_SameReturnsFalse()
		{
			auto uut = RangeF(1.1f, 2.2f);

			Assert::IsFalse(uut != RangeF(1.1f, 2.2f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_WidthNotSameReturnsTrue()
		{
			auto uut = RangeF(1.1f, 2.2f);

			Assert::IsTrue(uut != RangeF(1.2f, 2.2f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_HeightNotSameRetunsTrue()
		{
			auto uut = RangeF(1.1f, 2.2f);

			Assert::IsTrue(uut != RangeF(1.1f, 2.3f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_PipeStream_SerializeContent()
		{
			auto uut = RangeF(1.1f, 2.2f);
			auto stream = std::stringstream();
			stream << uut;

			Assert::AreEqual(stream.str(), "[1.1, 2.2]", "Verify expected value.");
		}
	};
}
