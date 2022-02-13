// <copyright file="RangeUTests.h" company="Soup">
// Copyright (c) Soup. All rights reserved.
// </copyright>

#pragma once

namespace GMath::Tests
{
	class RangeUTests
	{
	public:
		// [[Fact]]
		void Constructor_DefaultHasZeros()
		{
			auto uut = RangeU();

			Assert::AreEqual(uut.GetMin(), 0u, "Verify expected value.");
			Assert::AreEqual(uut.GetMax(), 0u, "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_SetValues()
		{
			auto uut = RangeU(1u, 2u);

			Assert::AreEqual(uut.GetMin(), 1u, "Verify expected value.");
			Assert::AreEqual(uut.GetMax(), 2u, "Verify expected value.");
		}

		// [[Fact]]
		void SetMin_SetsValue()
		{
			auto uut = RangeU();
			uut.SetMin(1u);
			Assert::AreEqual(uut.GetMin(), 1u, "Verify expected value.");
			Assert::AreEqual(uut.GetMax(), 0u, "Verify expected value.");
		}

		// [[Fact]]
		void SetMax_SetsValue()
		{
			auto uut = RangeU();
			uut.SetMax(1u);
			Assert::AreEqual(uut.GetMin(), 0u, "Verify expected value.");
			Assert::AreEqual(uut.GetMax(), 1u, "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Equal_SameReturnsTrue()
		{
			auto uut = RangeU(1u, 2u);

			Assert::IsTrue(uut == RangeU(1u, 2u), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_WidthNotSameReturnsFalse()
		{
			auto uut = RangeU(1u, 2u);

			Assert::IsFalse(uut == RangeU(0u, 2u), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_HeightNotSameReturnsFalse()
		{
			auto uut = RangeU(1u, 2u);

			Assert::IsFalse(uut == RangeU(1u, 0u), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_NotEqual_SameReturnsFalse()
		{
			auto uut = RangeU(1u, 2u);

			Assert::IsFalse(uut != RangeU(1u, 2u), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_WidthNotSameReturnsTrue()
		{
			auto uut = RangeU(1u, 2u);

			Assert::IsTrue(uut != RangeU(0u, 2u), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_HeightNotSameRetunsTrue()
		{
			auto uut = RangeU(1u, 2u);

			Assert::IsTrue(uut != RangeU(1u, 0u), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_PipeStream_SerializeContent()
		{
			auto uut = RangeU(1u, 2u);
			auto stream = std::stringstream();
			stream << uut;

			Assert::AreEqual(stream.str(), "[1, 2]", "Verify expected value.");
		}
	};
}
