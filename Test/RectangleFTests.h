// <copyright file="RectangleFTests.h" company="Soup">
// Copyright (c) Soup. All rights reserved.
// </copyright>

#pragma once

namespace GMath::Tests
{
	class RectangleFTests
	{
	public:
		// [[Fact]]
		void Constructor_DefaultHasZeros()
		{
			auto uut = RectangleF();

			Assert::AreEqual(uut.GetTopLeft(), Point2F(0.0f, 0.0f), "Verify expected value.");
			Assert::AreEqual(uut.GetBottomRight(), Point2F(0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_SetValues()
		{
			auto uut = RectangleF(Point2F(1.0f, 2.0f), Point2F(3.0f, 4.0f));

			Assert::AreEqual(uut.GetTopLeft(), Point2F(1.0f, 2.0f), "Verify expected value.");
			Assert::AreEqual(uut.GetBottomRight(), Point2F(3.0f, 4.0f), "Verify expected value.");
		}

		// [[Fact]]
		void GetSize()
		{
			auto uut = RectangleF(Point2F(1.0f, 2.0f), Point2F(3.0f, 5.0f));

			Assert::AreEqual(uut.GetSize(), SizeF(2.0f, 3.0f),"Verify expected value.");
		}

		// [[Fact]]
		void SetTopLeft_SetsValue()
		{
			auto uut = RectangleF();
			uut.SetTopLeft(Point2F(1.0f, 2.0f));
			Assert::AreEqual(uut.GetTopLeft(), Point2F(1.0f, 2.0f), "Verify expected value.");
			Assert::AreEqual(uut.GetBottomRight(), Point2F(0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void SetBottomRight_SetsValue()
		{
			auto uut = RectangleF();
			uut.SetBottomRight(Point2F(1.0f, 2.0f));
			Assert::AreEqual(uut.GetTopLeft(), Point2F(0.0f, 0.0f), "Verify expected value.");
			Assert::AreEqual(uut.GetBottomRight(), Point2F(1.0f, 2.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Equal_SameReturnsTrue()
		{
			auto uut = RectangleF(Point2F(1.0f, 2.0f), Point2F(3.0f, 4.0f));

			Assert::IsTrue(uut == RectangleF(Point2F(1.0f, 2.0f), Point2F(3.0f, 4.0f)), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_TopLeftNotSameReturnsFalse()
		{
			auto uut = RectangleF(Point2F(1.0f, 2.0f), Point2F(3.0f, 4.0f));

			Assert::IsFalse(uut == RectangleF(Point2F(0.0f, 2.0f), Point2F(3.0f, 4.0f)), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_BottomRightNotSameReturnsFalse()
		{
			auto uut = RectangleF(Point2F(1.0f, 2.0f), Point2F(3.0f, 4.0f));

			Assert::IsFalse(uut == RectangleF(Point2F(1.0f, 2.0f), Point2F(4.0f, 4.0f)), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_NotEqual_SameReturnsFalse()
		{
			auto uut = RectangleF(Point2F(1.0f, 2.0f), Point2F(3.0f, 4.0f));

			Assert::IsFalse(uut != RectangleF(Point2F(1.0f, 2.0f), Point2F(3.0f, 4.0f)), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_TopLeftNotSameReturnsTrue()
		{
			auto uut = RectangleF(Point2F(1.0f, 2.0f), Point2F(3.0f, 4.0f));

			Assert::IsTrue(uut != RectangleF(Point2F(0.0f, 2.0f), Point2F(3.0f, 4.0f)), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_BottomRightNotSameRetunsTrue()
		{
			auto uut = RectangleF(Point2F(1.0f, 2.0f), Point2F(3.0f, 4.0f));

			Assert::IsTrue(uut != RectangleF(Point2F(1.0f, 2.0f), Point2F(4.0f, 4.0f)), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_PipeStream_SerializeContent()
		{
			auto uut = RectangleF(Point2F(1.1f, 2.1f), Point2F(3.1f, 4.1f));
			auto stream = std::stringstream();
			stream << uut;

			Assert::AreEqual(stream.str(), "[[1.1, 2.1], [3.1, 4.1]]", "Verify expected value.");
		}
	};
}
