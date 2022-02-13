// <copyright file="Point3FTests.h" company="Soup">
// Copyright (c) Soup. All rights reserved.
// </copyright>

#pragma once

namespace GMath::Tests
{
	class Point3FTests
	{
	public:
		// [[Fact]]
		void Initialize_Zero()
		{
			auto uut = Point3F::Zero();

			Assert::AreEqual(uut, Point3F(0.0f, 0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_One()
		{
			auto uut = Point3F::One();

			Assert::AreEqual(uut, Point3F(1.0f, 1.0f, 1.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_UnitX()
		{
			auto uut = Point3F::UnitX();

			Assert::AreEqual(uut, Point3F(1.0f, 0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_UnitY()
		{
			auto uut = Point3F::UnitY();

			Assert::AreEqual(uut, Point3F(0.0f, 1.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_UnitZ()
		{
			auto uut = Point3F::UnitZ();

			Assert::AreEqual(uut, Point3F(0.0f, 0.0f, 1.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_DefaultHasZeros()
		{
			auto uut = Point3F();

			Assert::AreEqual(uut.GetX(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetZ(), 0.0f, "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_SetValues()
		{
			auto uut = Point3F(1.1f, 2.2f, 3.0f);

			Assert::AreEqual(uut.GetX(), 1.1f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 2.2f, "Verify expected value.");
			Assert::AreEqual(uut.GetZ(), 3.0f, "Verify expected value.");
		}

		// [[Fact]]
		void SetX_SetsValue()
		{
			auto uut = Point3F();
			uut.SetX(1.1f);
			Assert::AreEqual(uut.GetX(), 1.1f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetZ(), 0.0f, "Verify expected value.");
		}

		// [[Fact]]
		void SetY_SetsValue()
		{
			auto uut = Point3F();
			uut.SetY(1.1f);
			Assert::AreEqual(uut.GetX(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 1.1f, "Verify expected value.");
			Assert::AreEqual(uut.GetZ(), 0.0f, "Verify expected value.");
		}

		// [[Fact]]
		void SetZ_SetsValue()
		{
			auto uut = Point3F();
			uut.SetZ(1.1f);
			Assert::AreEqual(uut.GetX(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetZ(), 1.1f, "Verify expected value.");
		}

		// [[Fact]]
		void Operator_AddEqual_AddsValue()
		{
			auto uut = Point3F(1.1f, 2.1f, 3.1f);
			uut += Point3F(1, 2, 3);

			Assert::AreEqual(uut, Point3F(2.1f, 4.1f, 6.1f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_MinusEqual_SubtractsValue()
		{
			auto uut = Point3F(1.0f, 2.0f, 3.0f);
			uut -= Point3F(1, 2, 3);

			Assert::AreEqual(uut, Point3F(0.0f, 0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_MultiplyEqual_MulipliesValue()
		{
			auto uut = Point3F(1.0f, 2.0f, 3.0f);
			uut *= Point3F(2, 3, 4);

			Assert::AreEqual(uut, Point3F(2.0f, 6.0f, 12.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_DivideEqual_DividesValue()
		{
			auto uut = Point3F(2.0f, 6.0f, 12.0f);
			uut /= Point3F(2, 3, 4);

			Assert::AreEqual(uut, Point3F(1.0f, 2.0f, 3.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Add_AddsValue()
		{
			auto uut = Point3F(1.1f, 2.1f, 3.1f);
			auto result = uut + Point3F(1, 2, 3);

			Assert::AreEqual(result, Point3F(2.1f, 4.1f, 6.1f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Minus_SubtractsValue()
		{
			auto uut = Point3F(1.0f, 2.0f, 3.0f);
			auto result = uut - Point3F(1, 2, 3);

			Assert::AreEqual(result, Point3F(0.0f, 0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Multiply_MulipliesValue()
		{
			auto uut = Point3F(1.0f, 2.0f, 3.0f);
			auto result = uut * Point3F(2, 3, 4);

			Assert::AreEqual(result, Point3F(2.0f, 6.0f, 12.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Divide_DividesValue()
		{
			auto uut = Point3F(2.0f, 6.0f, 12.0f);
			auto result = uut / Point3F(2, 3, 4);

			Assert::AreEqual(result, Point3F(1.0f, 2.0f, 3.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Equal_SameReturnsTrue()
		{
			auto uut = Point3F(1.1f, 2.1f, 3.1f);

			Assert::IsTrue(uut == Point3F(1.1f, 2.1f, 3.1f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_XNotSameReturnsFalse()
		{
			auto uut = Point3F(1.1f, 2.1f, 3.1f);

			Assert::IsFalse(uut == Point3F(1.2f, 2.1f, 3.1f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Equal_YNotSameReturnsFalse()
		{
			auto uut = Point3F(1.1f, 2.1f, 3.1f);

			Assert::IsFalse(uut == Point3F(1.1f, 2.2f, 3.1f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_ZNotSameReturnsFalse()
		{
			auto uut = Point3F(1.1f, 2.1f, 3.1f);

			Assert::IsFalse(uut == Point3F(1.1f, 2.1f, 3.2f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_NotEqual_SameReturnsFalse()
		{
			auto uut = Point3F(1.1f, 2.1f, 3.1f);

			Assert::IsFalse(uut != Point3F(1.1f, 2.1f, 3.1f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_XNotSameReturnsTrue()
		{
			auto uut = Point3F(1.1f, 2.1f, 3.1f);

			Assert::IsTrue(uut != Point3F(1.2f, 2.1f, 3.1f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_YNotSameRetunsTrue()
		{
			auto uut = Point3F(1.1f, 2.1f, 3.1f);

			Assert::IsTrue(uut != Point3F(1.1f, 2.2f, 3.1f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_NotEqual_ZNotSameRetunsTrue()
		{
			auto uut = Point3F(1.1f, 2.1f, 3.1f);

			Assert::IsTrue(uut != Point3F(1.1f, 2.1f, 3.2f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_PipeStream_SerializeContent()
		{
			auto uut = Point3F(1.1f, 2.1f, 3.1f);
			auto stream = std::stringstream();
			stream << uut;

			Assert::AreEqual(stream.str(), "[1.1, 2.1, 3.1]", "Verify expected value.");
		}
	};
}
