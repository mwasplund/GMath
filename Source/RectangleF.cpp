// <copyright file="RectangleF.cpp" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

module;
#include <iostream>
export module GMath:RectangleF;

import :Point2F;
import :SizeF;

export namespace GMath
{
	/// <summary>
	/// The rectangle floating point
	/// </summary>
	class RectangleF
	{
	private:
		Point2F m_topLeft;
		Point2F m_bottomRight;

	public:
		/// <summary>
		/// Initialize a new instance of the RectangleL class
		/// </summary>
		RectangleF() :
			m_topLeft(Point2F::Zero()),
			m_bottomRight(Point2F::Zero())
		{
		}

		RectangleF(const Point2F& topLeft, const Point2F& bottomRight) :
			m_topLeft(topLeft),
			m_bottomRight(bottomRight)
		{
		}

		RectangleF(const Point2F& topLeft, const SizeF& size) :
			m_topLeft(topLeft),
			m_bottomRight(topLeft.GetX() + size.GetWidth(), topLeft.GetY() + size.GetHeight())
		{
		}

		/// <summary>
		/// Named Access
		/// </summary>
		const Point2F& GetTopLeft() const
		{
			return m_topLeft;
		}

		const Point2F& GetBottomRight() const
		{
			return m_bottomRight;
		}

		SizeF GetSize() const
		{
			return SizeF(
				m_bottomRight.GetX() - m_topLeft.GetX(),
				m_bottomRight.GetY() - m_topLeft.GetY());
		}

		void SetTopLeft(const Point2F& value)
		{
			m_topLeft = value;
		}

		void SetBottomRight(const Point2F& value)
		{
			m_bottomRight = value;
		}

		/// <summary>
		/// Assignment Operators
		/// </summary>
		RectangleF& operator=(const RectangleF& rhs)
		{
			m_topLeft = rhs.m_topLeft;
			m_bottomRight = rhs.m_bottomRight;
			return *this;
		}

		/// <summary>
		/// Comparison Operators
		/// </summary>
		bool operator==(const RectangleF& rhs) const
		{
			return
				m_topLeft == rhs.m_topLeft &&
				m_bottomRight == rhs.m_bottomRight;
		}

		bool operator!=(const RectangleF& rhs) const
		{
			return
				m_topLeft != rhs.m_topLeft ||
				m_bottomRight != rhs.m_bottomRight;
		}
	};
	
	std::ostream& operator<<(std::ostream& stream, const RectangleF& value)
	{
		stream << "["
			<< value.GetTopLeft() << ", "
			<< value.GetBottomRight() << "]";

		return stream;
	}
}