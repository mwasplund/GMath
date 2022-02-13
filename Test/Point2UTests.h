// <copyright file="Point2UTests.h" company="Soup">
// Copyright (c) Soup. All rights reserved.
// </copyright>

#pragma once

namespace GMath::Tests
{
	class Point2UTests
	{
	public:
		// [[Fact]]
		void Initialize_Zero()
		{
			auto uut = Point2U::Zero();

			Assert::AreEqual(uut, Point2U(0, 0), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_One()
		{
			auto uut = Point2U::One();

			Assert::AreEqual(uut, Point2U(1, 1), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_UnitX()
		{
			auto uut = Point2U::UnitX();

			Assert::AreEqual(uut, Point2U(1, 0), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_UnitY()
		{
			auto uut = Point2U::UnitY();

			Assert::AreEqual(uut, Point2U(0, 1), "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_DefaultHasZeros()
		{
			auto uut = Point2U();

			Assert::AreEqual(uut.GetX(), 0u, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 0u, "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_SetValues()
		{
			auto uut = Point2U(1, 2);

			Assert::AreEqual(uut.GetX(), 1u, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 2u, "Verify expected value.");
		}

		// [[Fact]]
		void SetX_SetsValue()
		{
			auto uut = Point2U();
			uut.SetX(1);
			Assert::AreEqual(uut.GetX(), 1u, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 0u, "Verify expected value.");
		}

		// [[Fact]]
		void SetY_SetsValue()
		{
			auto uut = Point2U();
			uut.SetY(1);
			Assert::AreEqual(uut.GetX(), 0u, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 1u, "Verify expected value.");
		}

		// [[Fact]]
		void Operator_AddEqual_AddsValue()
		{
			auto uut = Point2U(1, 2);
			uut += Point2U(1, 2);

			Assert::AreEqual(uut, Point2U(2, 4), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_MinusEqual_SubtractsValue()
		{
			auto uut = Point2U(2, 4);
			uut -= Point2U(1, 2);

			Assert::AreEqual(uut, Point2U(1, 2), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_MultiplyEqual_MulipliesValue()
		{
			auto uut = Point2U(1, 2);
			uut *= Point2U(2, 3);

			Assert::AreEqual(uut, Point2U(2, 6), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_DivideEqual_DividesValue()
		{
			auto uut = Point2U(2, 6);
			uut /= Point2U(2, 3);

			Assert::AreEqual(uut, Point2U(1, 2), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Add_AddsValue()
		{
			auto uut = Point2U(1, 2);
			auto result = uut + Point2U(1, 2);

			Assert::AreEqual(result, Point2U(2, 4), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Minus_SubtractsValue()
		{
			auto uut = Point2U(1, 2);
			auto result = uut - Point2U(1, 2);

			Assert::AreEqual(result, Point2U(0, 0), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Multiply_MulipliesValue()
		{
			auto uut = Point2U(1, 2);
			auto result = uut * Point2U(2, 3);

			Assert::AreEqual(result, Point2U(2, 6), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Divide_DividesValue()
		{
			auto uut = Point2U(2, 6);
			auto result = uut / Point2U(2, 3);

			Assert::AreEqual(result, Point2U(1, 2), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Equal_SameReturnsTrue()
		{
			auto uut = Point2U(1, 2);

			Assert::IsTrue(uut == Point2U(1, 2), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_XNotSameReturnsFalse()
		{
			auto uut = Point2U(1, 2);

			Assert::IsFalse(uut == Point2U(0, 2), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_YNotSameReturnsFalse()
		{
			auto uut = Point2U(1, 2);

			Assert::IsFalse(uut == Point2U(1, 0), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_NotEqual_SameReturnsFalse()
		{
			auto uut = Point2U(1, 2);

			Assert::IsFalse(uut != Point2U(1, 2), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_XNotSameReturnsTrue()
		{
			auto uut = Point2U(1, 2);

			Assert::IsTrue(uut != Point2U(0, 2), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_YNotSameRetunsTrue()
		{
			auto uut = Point2U(1, 2);

			Assert::IsTrue(uut != Point2U(1, 0), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_PipeStream_SerializeContent()
		{
			auto uut = Point2U(1, 2);
			auto stream = std::stringstream();
			stream << uut;

			Assert::AreEqual(stream.str(), "[1, 2]", "Verify expected value.");
		}
	};
}
