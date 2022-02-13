// <copyright file="Point4FTests.h" company="Soup">
// Copyright (c) Soup. All rights reserved.
// </copyright>

#pragma once

namespace GMath::Tests
{
	class Point4FTests
	{
	public:
		// [[Fact]]
		void Initialize_Zero()
		{
			auto uut = Point4F::Zero();

			Assert::AreEqual(uut, Point4F(0.0f, 0.0f, 0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_One()
		{
			auto uut = Point4F::One();

			Assert::AreEqual(uut, Point4F(1.0f, 1.0f, 1.0f, 1.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_UnitX()
		{
			auto uut = Point4F::UnitX();

			Assert::AreEqual(uut, Point4F(1.0f, 0.0f, 0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_UnitY()
		{
			auto uut = Point4F::UnitY();

			Assert::AreEqual(uut, Point4F(0.0f, 1.0f, 0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_UnitZ()
		{
			auto uut = Point4F::UnitZ();

			Assert::AreEqual(uut, Point4F(0.0f, 0.0f, 1.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Initialize_UnitW()
		{
			auto uut = Point4F::UnitW();

			Assert::AreEqual(uut, Point4F(0.0f, 0.0f, 0.0f, 1.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_DefaultHasZeros()
		{
			auto uut = Point4F();

			Assert::AreEqual(uut.GetX(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetZ(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetW(), 0.0f, "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_SetValues()
		{
			auto uut = Point4F(1.1f, 2.2f, 3.0f, 4.0f);

			Assert::AreEqual(uut.GetX(), 1.1f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 2.2f, "Verify expected value.");
			Assert::AreEqual(uut.GetZ(), 3.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetW(), 4.0f, "Verify expected value.");
		}

		// [[Fact]]
		void SetX_SetsValue()
		{
			auto uut = Point4F();
			uut.SetX(1.1f);
			Assert::AreEqual(uut.GetX(), 1.1f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetZ(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetW(), 0.0f, "Verify expected value.");
		}

		// [[Fact]]
		void SetY_SetsValue()
		{
			auto uut = Point4F();
			uut.SetY(1.1f);
			Assert::AreEqual(uut.GetX(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 1.1f, "Verify expected value.");
			Assert::AreEqual(uut.GetZ(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetW(), 0.0f, "Verify expected value.");
		}

		// [[Fact]]
		void SetZ_SetsValue()
		{
			auto uut = Point4F();
			uut.SetZ(1.1f);
			Assert::AreEqual(uut.GetX(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetZ(), 1.1f, "Verify expected value.");
			Assert::AreEqual(uut.GetW(), 0.0f, "Verify expected value.");
		}

		// [[Fact]]
		void SetW_SetsValue()
		{
			auto uut = Point4F();
			uut.SetW(1.1f);
			Assert::AreEqual(uut.GetX(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetY(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetZ(), 0.0f, "Verify expected value.");
			Assert::AreEqual(uut.GetW(), 1.1f, "Verify expected value.");
		}

		// [[Fact]]
		void Operator_AddEqual_AddsValue()
		{
			auto uut = Point4F(1.1f, 2.1f, 3.1f, 4.1f);
			uut += Point4F(1, 2, 3, 4);

			Assert::AreEqual(uut, Point4F(2.1f, 4.1f, 6.1f, 8.1f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_MinusEqual_SubtractsValue()
		{
			auto uut = Point4F(1.0f, 2.0f, 3.0f, 4.0f);
			uut -= Point4F(1, 2, 3, 4);

			Assert::AreEqual(uut, Point4F(0.0f, 0.0f, 0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_MultiplyEqual_MulipliesValue()
		{
			auto uut = Point4F(1.0f, 2.0f, 3.0f, 4.0f);
			uut *= Point4F(2, 3, 4, 5);

			Assert::AreEqual(uut, Point4F(2.0f, 6.0f, 12.0f, 20.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_DivideEqual_DividesValue()
		{
			auto uut = Point4F(2.0f, 6.0f, 12.0f, 20.0f);
			uut /= Point4F(2, 3, 4, 5);

			Assert::AreEqual(uut, Point4F(1.0f, 2.0f, 3.0f, 4.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Add_AddsValue()
		{
			auto uut = Point4F(1.1f, 2.1f, 3.1f, 4.1f);
			auto result = uut + Point4F(1, 2, 3, 4);

			Assert::AreEqual(result, Point4F(2.1f, 4.1f, 6.1f, 8.1f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Minus_SubtractsValue()
		{
			auto uut = Point4F(1.0f, 2.0f, 3.0f, 4.0f);
			auto result = uut - Point4F(1, 2, 3, 4);

			Assert::AreEqual(result, Point4F(0.0f, 0.0f, 0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Multiply_MulipliesValue()
		{
			auto uut = Point4F(1.0f, 2.0f, 3.0f, 4.0f);
			auto result = uut * Point4F(2, 3, 4, 5);

			Assert::AreEqual(result, Point4F(2.0f, 6.0f, 12.0f, 20.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Divide_DividesValue()
		{
			auto uut = Point4F(2.0f, 6.0f, 12.0f, 20.0f);
			auto result = uut / Point4F(2, 3, 4, 5);

			Assert::AreEqual(result, Point4F(1.0f, 2.0f, 3.0f, 4.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Equal_SameReturnsTrue()
		{
			auto uut = Point4F(1.1f, 2.1f, 3.1f, 4.1f);

			Assert::IsTrue(uut == Point4F(1.1f, 2.1f, 3.1f, 4.1f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_XNotSameReturnsFalse()
		{
			auto uut = Point4F(1.1f, 2.1f, 3.1f, 4.1f);

			Assert::IsFalse(uut == Point4F(1.2f, 2.1f, 3.1f, 4.1f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Equal_YNotSameReturnsFalse()
		{
			auto uut = Point4F(1.1f, 2.1f, 3.1f, 4.1f);

			Assert::IsFalse(uut == Point4F(1.1f, 2.2f, 3.1f, 4.1f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_ZNotSameReturnsFalse()
		{
			auto uut = Point4F(1.1f, 2.1f, 3.1f, 4.1f);

			Assert::IsFalse(uut == Point4F(1.1f, 2.1f, 3.2f, 4.1f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_WNotSameReturnsFalse()
		{
			auto uut = Point4F(1.1f, 2.1f, 3.1f, 4.1f);

			Assert::IsFalse(uut == Point4F(1.1f, 2.1f, 3.1f, 4.2f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_NotEqual_SameReturnsFalse()
		{
			auto uut = Point4F(1.1f, 2.1f, 3.1f, 4.1f);

			Assert::IsFalse(uut != Point4F(1.1f, 2.1f, 3.1f, 4.1f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_XNotSameReturnsTrue()
		{
			auto uut = Point4F(1.1f, 2.1f, 3.1f, 4.1f);

			Assert::IsTrue(uut != Point4F(1.2f, 2.1f, 3.1f, 4.1f), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_YNotSameRetunsTrue()
		{
			auto uut = Point4F(1.1f, 2.1f, 3.1f, 4.1f);

			Assert::IsTrue(uut != Point4F(1.1f, 2.2f, 3.1f, 4.1f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_NotEqual_ZNotSameRetunsTrue()
		{
			auto uut = Point4F(1.1f, 2.1f, 3.1f, 4.1f);

			Assert::IsTrue(uut != Point4F(1.1f, 2.1f, 3.2f, 4.1f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_NotEqual_WNotSameRetunsTrue()
		{
			auto uut = Point4F(1.1f, 2.1f, 3.1f, 4.1f);

			Assert::IsTrue(uut != Point4F(1.1f, 2.1f, 3.1f, 4.2f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_PipeStream_SerializeContent()
		{
			auto uut = Point4F(1.1f, 2.1f, 3.1f, 4.1f);
			auto stream = std::stringstream();
			stream << uut;

			Assert::AreEqual(stream.str(), "[1.1, 2.1, 3.1, 4.1]", "Verify expected value.");
		}
	};
}
