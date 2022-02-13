// <copyright file="RectangleUTests.h" company="Soup">
// Copyright (c) Soup. All rights reserved.
// </copyright>

#pragma once

namespace GMath::Tests
{
	class RectangleUTests
	{
	public:
		// [[Fact]]
		void Constructor_DefaultHasZeros()
		{
			auto uut = RectangleU();

			Assert::AreEqual(uut.GetTopLeft(), Point2U(0.0f, 0.0f), "Verify expected value.");
			Assert::AreEqual(uut.GetBottomRight(), Point2U(0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void Constructor_SetValues()
		{
			auto uut = RectangleU(Point2U(1u, 2u), Point2U(3u, 4u));

			Assert::AreEqual(uut.GetTopLeft(), Point2U(1u, 2u), "Verify expected value.");
			Assert::AreEqual(uut.GetBottomRight(), Point2U(3u, 4u), "Verify expected value.");
		}

		// [[Fact]]
		void GetSize()
		{
			auto uut = RectangleU(Point2U(1u, 2u), Point2U(3u, 5u));

			Assert::AreEqual(uut.GetSize(), SizeU(2u, 3u),"Verify expected value.");
		}

		// [[Fact]]
		void SetTopLeft_SetsValue()
		{
			auto uut = RectangleU();
			uut.SetTopLeft(Point2U(1u, 2u));
			Assert::AreEqual(uut.GetTopLeft(), Point2U(1u, 2u), "Verify expected value.");
			Assert::AreEqual(uut.GetBottomRight(), Point2U(0.0f, 0.0f), "Verify expected value.");
		}

		// [[Fact]]
		void SetBottomRight_SetsValue()
		{
			auto uut = RectangleU();
			uut.SetBottomRight(Point2U(1u, 2u));
			Assert::AreEqual(uut.GetTopLeft(), Point2U(0.0f, 0.0f), "Verify expected value.");
			Assert::AreEqual(uut.GetBottomRight(), Point2U(1u, 2u), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_Equal_SameReturnsTrue()
		{
			auto uut = RectangleU(Point2U(1u, 2u), Point2U(3u, 4u));

			Assert::IsTrue(uut == RectangleU(Point2U(1u, 2u), Point2U(3u, 4u)), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_TopLeftNotSameReturnsFalse()
		{
			auto uut = RectangleU(Point2U(1u, 2u), Point2U(3u, 4u));

			Assert::IsFalse(uut == RectangleU(Point2U(0.0f, 2u), Point2U(3u, 4u)), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_Equal_BottomRightNotSameReturnsFalse()
		{
			auto uut = RectangleU(Point2U(1u, 2u), Point2U(3u, 4u));

			Assert::IsFalse(uut == RectangleU(Point2U(1u, 2u), Point2U(4u, 4u)), "Verify expected value.");
		}

		// [[Fact]]
		void Operator_NotEqual_SameReturnsFalse()
		{
			auto uut = RectangleU(Point2U(1u, 2u), Point2U(3u, 4u));

			Assert::IsFalse(uut != RectangleU(Point2U(1u, 2u), Point2U(3u, 4u)), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_TopLeftNotSameReturnsTrue()
		{
			auto uut = RectangleU(Point2U(1u, 2u), Point2U(3u, 4u));

			Assert::IsTrue(uut != RectangleU(Point2U(0.0f, 2u), Point2U(3u, 4u)), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_NotEqual_BottomRightNotSameRetunsTrue()
		{
			auto uut = RectangleU(Point2U(1u, 2u), Point2U(3u, 4u));

			Assert::IsTrue(uut != RectangleU(Point2U(1u, 2u), Point2U(4u, 4u)), "Verify expected value.");
		}
		
		// [[Fact]]
		void Operator_PipeStream_SerializeContent()
		{
			auto uut = RectangleU(Point2U(1u, 2u), Point2U(3u, 4u));
			auto stream = std::stringstream();
			stream << uut;

			Assert::AreEqual(stream.str(), "[[1, 2], [3, 4]]", "Verify expected value.");
		}
	};
}
