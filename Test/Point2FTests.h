// <copyright file="Point2FTests.h" company="Soup">
// Copyright (c) Soup. All rights reserved.
// </copyright>

#pragma once

namespace GMath::Tests
{
	class Point2FTests
	{
	public:
		// [[Fact]]
		void Initialize_Zero()
		{
			auto uut = Point2F::Zero();

			Assert::AreEqual(uut, Point2F(0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_One()
		{
			auto uut = Point2F::One();

			Assert::AreEqual(uut, Point2F(1.0f, 1.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_UnitX()
		{
			auto uut = Point2F::UnitX();

			Assert::AreEqual(uut, Point2F(1.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_UnitY()
		{
			auto uut = Point2F::UnitY();

			Assert::AreEqual(uut, Point2F(0.0f, 1.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_DefaultHasZeros()
		{
			auto uut = Point2F();

			Assert::AreEqual(uut.GetX(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 0.0f, "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_SetValues()
		{
			auto uut = Point2F(1.1f, 2.2f);

			Assert::AreEqual(uut.GetX(), 1.1f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 2.2f, "Verify expected value.");
		}

		// [[Fact]]
		void SetX_SetsValue()
		{
			auto uut = Point2F();
			uut.SetX(1.1f);
			Assert::AreEqual(uut.GetX(), 1.1f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 0.0f, "Verify expected value.");
		}

		// [[Fact]]
		void SetY_SetsValue()
		{
			auto uut = Point2F();
			uut.SetY(1.1f);
			Assert::AreEqual(uut.GetX(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 1.1f, "Verify expected value.");
		}

		// [[Fact]]
		void Operator_AddEqual_AddsValue()
		{
			auto uut = Point2F(1.1f, 2.2f);
			uut += Point2F(1, 2);

			Assert::AreEqual(uut, Point2F(2.1f, 4.2f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_MinusEqual_SubtractsValue()
		{
			auto uut = Point2F(1.0f, 2.0f);
			uut -= Point2F(1, 2);

			Assert::AreEqual(uut, Point2F(0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_MultiplyEqual_MulipliesValue()
		{
			auto uut = Point2F(1.0f, 2.0f);
			uut *= Point2F(2, 3);

			Assert::AreEqual(uut, Point2F(2.0f, 6.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_DivideEqual_DividesValue()
		{
			auto uut = Point2F(2.2f, 6.6f);
			uut /= Point2F(2, 3);

			Assert::AreEqual(uut, Point2F(1.1f, 2.2f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Add_AddsValue()
		{
			auto uut = Point2F(1.1f, 2.2f);
			auto result = uut + Point2F(1, 2);

			Assert::AreEqual(result, Point2F(2.1f, 4.2f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Minus_SubtractsValue()
		{
			auto uut = Point2F(1.0f, 2.0f);
			auto result = uut - Point2F(1, 2);

			Assert::AreEqual(result, Point2F(0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Multiply_MulipliesValue()
		{
			auto uut = Point2F(1.0f, 2.0f);
			auto result = uut * Point2F(2, 3);

			Assert::AreEqual(result, Point2F(2.0f, 6.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Divide_DividesValue()
		{
			auto uut = Point2F(2.2f, 6.6f);
			auto result = uut / Point2F(2, 3);

			Assert::AreEqual(result, Point2F(1.1f, 2.2f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Equal_SameReturnsTrue()
		{
			auto uut = Point2F(1.1f, 2.2f);

			Assert::IsTrue(uut == Point2F(1.1f, 2.2f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_XNotSameReturnsFalse()
		{
			auto uut = Point2F(1.1f, 2.2f);

			Assert::IsFalse(uut == Point2F(1.2f, 2.2f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_YNotSameReturnsFalse()
		{
			auto uut = Point2F(1.1f, 2.2f);

			Assert::IsFalse(uut == Point2F(1.1f, 2.3f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_NotEqual_SameReturnsFalse()
		{
			auto uut = Point2F(1.1f, 2.2f);

			Assert::IsFalse(uut != Point2F(1.1f, 2.2f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_XNotSameReturnsTrue()
		{
			auto uut = Point2F(1.1f, 2.2f);

			Assert::IsTrue(uut != Point2F(1.2f, 2.2f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_YNotSameRetunsTrue()
		{
			auto uut = Point2F(1.1f, 2.2f);

			Assert::IsTrue(uut != Point2F(1.1f, 2.3f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_PipeStream_SerializeContent()
		{
			auto uut = Point2F(1.1f, 2.2f);
			auto stream = std::stringstream();
			stream << uut;

			Assert::AreEqual(stream.str(), "[1.1, 2.2]", "Verify expected value.");
		}
	};
}
