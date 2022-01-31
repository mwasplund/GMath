// <copyright file="Point2U.cpp" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

module;
#include <iostream>
export module GMath:Point2U;

export namespace GMath
{
	/// <summary>
	/// The unsigned integer point 2D
	/// </summary>
	class Point2U
	{
	private:
		/// <summary>
		/// The values
		/// </summary>
		uint32_t m_x;
		uint32_t m_y;

	public:
		/// <summary>
		/// Defaults
		/// </summary>
		static const Point2U& Zero()
		{
			static auto value = Point2U(0, 0);
			return value;
		}

		static const Point2U& One()
		{
			static auto value = Point2U(1, 1);
			return value;
		}

		static const Point2U& UnitX()
		{
			static auto value = Point2U(1, 0);
			return value;
		}

		static const Point2U& UnitY()
		{
			static auto value = Point2U(0, 1);
			return value;
		}

	public:
		/// <summary>
		/// Initialize a new instance of the Point2U class
		/// </summary>
		Point2U() :
			m_x(0),
			m_y(0)
		{
		}

		Point2U(uint32_t x, uint32_t y) :
			m_x(x),
			m_y(y)
		{
		}

		/// <summary>
		/// Named Access
		/// </summary>
		uint32_t GetX() const
		{
			return m_x;
		}

		uint32_t GetY() const
		{
			return m_y;
		}

		void SetX(uint32_t value)
		{
			m_x = value;
		}

		void SetY(uint32_t value)
		{
			m_y = value;
		}

		/// <summary>
		/// Assignment Operators
		/// </summary>
		Point2U& operator=(const Point2U& rhs)
		{
			m_x = rhs.m_x;
			m_y = rhs.m_y;
			return *this;
		}

		Point2U& operator+=(const Point2U& rhs)
		{
			m_x += rhs.m_x;
			m_y += rhs.m_y;
			return *this;
		}

		Point2U& operator-=(const Point2U& rhs)
		{
			m_x -= rhs.m_x;
			m_y -= rhs.m_y;
			return *this;
		}

		Point2U& operator*=(const Point2U& rhs)
		{
			m_x *= rhs.m_x;
			m_y *= rhs.m_y;
			return *this;
		}
		
		Point2U& operator/=(const Point2U& rhs)
		{
			m_x /= rhs.m_x;
			m_y /= rhs.m_y;
			return *this;
		}

		/// <summary>
		/// Arithmetic Operators
		/// </summary>
		Point2U operator+(const Point2U& rhs) const
		{
			return Point2U(
				m_x + rhs.m_x,
				m_y + rhs.m_y);
		}

		Point2U operator-(const Point2U& rhs) const
		{
			return Point2U(
				m_x - rhs.m_x,
				m_y - rhs.m_y);
		}

		Point2U operator*(const Point2U& rhs) const
		{
			return Point2U(
				m_x * rhs.m_x,
				m_y * rhs.m_y);
		}

		Point2U operator/(const Point2U& rhs) const
		{
			return Point2U(
				m_x / rhs.m_x,
				m_y / rhs.m_y);
		}

		/// <summary>
		/// Comparison Operators
		/// </summary>
		bool operator==(const Point2U& rhs) const
		{
			return
				m_x == rhs.m_x &&
				m_y == rhs.m_y;
		}

		bool operator!=(const Point2U& rhs) const
		{
			return
				m_x != rhs.m_x ||
				m_y != rhs.m_y;
		}
	};
	
	std::wostream& operator<<(std::wostream& stream, const Point2U& value)
	{
		stream << L"["
			<< value.GetX() << L", "
			<< value.GetY() << L"]";

		return stream;
	}
}

