// <copyright file="SizeFTests.h" company="Soup">
// Copyright (c) Soup. All rights reserved.
// </copyright>

#pragma once

namespace GMath::Tests
{
	class SizeFTests
	{
	public:
		// [[Fact]]
		void Constructor_DefaultHasZeros()
		{
			auto uut = SizeF();

			Assert::AreEqual(uut.GetWidth(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetHeight(), 0.0f, "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_SetValues()
		{
			auto uut = SizeF(1.1f, 2.2f);

			Assert::AreEqual(uut.GetWidth(), 1.1f, "Verify expected value.");
			Assert::AreEqual(uut.GetHeight(), 2.2f, "Verify expected value.");
		}

		// [[Fact]]
		void SetWidth_SetsValue()
		{
			auto uut = SizeF();
			uut.SetWidth(1.1f);
			Assert::AreEqual(uut.GetWidth(), 1.1f, "Verify expected value.");
			Assert::AreEqual(uut.GetHeight(), 0.0f, "Verify expected value.");
		}

		// [[Fact]]
		void SetHeight_SetsValue()
		{
			auto uut = SizeF();
			uut.SetHeight(1.1f);
			Assert::AreEqual(uut.GetWidth(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetHeight(), 1.1f, "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Equal_SameReturnsTrue()
		{
			auto uut = SizeF(1.1f, 2.2f);

			Assert::IsTrue(uut == SizeF(1.1f, 2.2f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_WidthNotSameReturnsFalse()
		{
			auto uut = SizeF(1.1f, 2.2f);

			Assert::IsFalse(uut == SizeF(1.2f, 2.2f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_HeightNotSameReturnsFalse()
		{
			auto uut = SizeF(1.1f, 2.2f);

			Assert::IsFalse(uut == SizeF(1.1f, 2.3f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_NotEqual_SameReturnsFalse()
		{
			auto uut = SizeF(1.1f, 2.2f);

			Assert::IsFalse(uut != SizeF(1.1f, 2.2f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_WidthNotSameReturnsTrue()
		{
			auto uut = SizeF(1.1f, 2.2f);

			Assert::IsTrue(uut != SizeF(1.2f, 2.2f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_HeightNotSameRetunsTrue()
		{
			auto uut = SizeF(1.1f, 2.2f);

			Assert::IsTrue(uut != SizeF(1.1f, 2.3f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_PipeStream_SerializeContent()
		{
			auto uut = SizeF(1.1f, 2.2f);
			auto stream = std::stringstream();
			stream << uut;

			Assert::AreEqual(stream.str(), "[1.1, 2.2]", "Verify expected value.");
		}
	};
}
