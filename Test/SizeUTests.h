// <copyright file="SizeUTests.h" company="Soup">
// Copyright (c) Soup. All rights reserved.
// </copyright>

#pragma once

namespace GMath::Tests
{
	class SizeUTests
	{
	public:
		// [[Fact]]
		void Constructor_DefaultHasZeros()
		{
			auto uut = SizeU();

			Assert::AreEqual(uut.GetWidth(), 0u, "Verify expected value.");
			Assert::AreEqual(uut.GetHeight(), 0u, "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_SetValues()
		{
			auto uut = SizeU(1u, 2u);

			Assert::AreEqual(uut.GetWidth(), 1u, "Verify expected value.");
			Assert::AreEqual(uut.GetHeight(), 2u, "Verify expected value.");
		}

		// [[Fact]]
		void SetWidth_SetsValue()
		{
			auto uut = SizeU();
			uut.SetWidth(1u);
			Assert::AreEqual(uut.GetWidth(), 1u, "Verify expected value.");
			Assert::AreEqual(uut.GetHeight(), 0u, "Verify expected value.");
		}

		// [[Fact]]
		void SetHeight_SetsValue()
		{
			auto uut = SizeU();
			uut.SetHeight(1u);
			Assert::AreEqual(uut.GetWidth(), 0u, "Verify expected value.");
			Assert::AreEqual(uut.GetHeight(), 1u, "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Equal_SameReturnsTrue()
		{
			auto uut = SizeU(1u, 2u);

			Assert::IsTrue(uut == SizeU(1u, 2u), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_WidthNotSameReturnsFalse()
		{
			auto uut = SizeU(1u, 2u);

			Assert::IsFalse(uut == SizeU(0u, 2u), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_HeightNotSameReturnsFalse()
		{
			auto uut = SizeU(1u, 2u);

			Assert::IsFalse(uut == SizeU(1u, 0u), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_NotEqual_SameReturnsFalse()
		{
			auto uut = SizeU(1u, 2u);

			Assert::IsFalse(uut != SizeU(1u, 2u), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_WidthNotSameReturnsTrue()
		{
			auto uut = SizeU(1u, 2u);

			Assert::IsTrue(uut != SizeU(0u, 2u), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_HeightNotSameRetunsTrue()
		{
			auto uut = SizeU(1u, 2u);

			Assert::IsTrue(uut != SizeU(1u, 0u), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_PipeStream_SerializeContent()
		{
			auto uut = SizeU(1u, 2u);
			auto stream = std::stringstream();
			stream << uut;

			Assert::AreEqual(stream.str(), "[1, 2]", "Verify expected value.");
		}
	};
}
