// <copyright file="RectangleU.cpp" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

module;
#include <iostream>
export module GMath:RectangleU;

import :Point2U;
import :SizeU;

export namespace GMath
{
	/// <summary>
	/// The rectangle unsigned integer
	/// </summary>
	class RectangleU
	{
	private:
		Point2U m_topLeft;
		Point2U m_bottomRight;

	public:
		/// <summary>
		/// Initialize a new instance of the RectangleL class
		/// </summary>
		RectangleU() :
			m_topLeft(Point2U::Zero()),
			m_bottomRight(Point2U::Zero())
		{
		}

		RectangleU(const Point2U& topLeft, const Point2U& bottomRight) :
			m_topLeft(topLeft),
			m_bottomRight(bottomRight)
		{
		}

		RectangleU(const Point2U& topLeft, const SizeU& size) :
			m_topLeft(topLeft),
			m_bottomRight(topLeft.GetX() + size.GetWidth(), topLeft.GetY() + size.GetHeight())
		{
		}

		/// <summary>
		/// Named Access
		/// </summary>
		const Point2U& GetTopLeft() const
		{
			return m_topLeft;
		}

		const Point2U& GetBottomRight() const
		{
			return m_bottomRight;
		}

		SizeU GetSize() const
		{
			return SizeU(
				m_bottomRight.GetX() - m_topLeft.GetX(),
				m_bottomRight.GetY() - m_topLeft.GetY());
		}

		void SetTopLeft(const Point2U& value)
		{
			m_topLeft = value;
		}

		void SetBottomRight(const Point2U& value)
		{
			m_bottomRight = value;
		}

		/// <summary>
		/// Assignment Operators
		/// </summary>
		RectangleU& operator=(const RectangleU& rhs)
		{
			m_topLeft = rhs.m_topLeft;
			m_bottomRight = rhs.m_bottomRight;
			return *this;
		}

		/// <summary>
		/// Comparison Operators
		/// </summary>
		bool operator==(const RectangleU& rhs) const
		{
			return
				m_topLeft == rhs.m_topLeft &&
				m_bottomRight == rhs.m_bottomRight;
		}

		bool operator!=(const RectangleU& rhs) const
		{
			return
				m_topLeft != rhs.m_topLeft ||
				m_bottomRight != rhs.m_bottomRight;
		}
	};
	
	std::wostream& operator<<(std::wostream& stream, const RectangleU& value)
	{
		stream << L"["
			<< value.GetTopLeft() << L", "
			<< value.GetBottomRight() << L"]";

		return stream;
	}
}