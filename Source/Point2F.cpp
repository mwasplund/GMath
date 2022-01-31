// <copyright file="Point2F.cpp" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

module;
#include <iostream>
export module GMath:Point2F;

export namespace GMath
{
	/// <summary>
	/// The floating point 2D
	/// </summary>
	class Point2F
	{
	private:
		/// <summary>
		/// The values
		/// </summary>
		float m_x;
		float m_y;

	public:
		/// <summary>
		/// Defaults
		/// </summary>
		static const Point2F& Zero()
		{
			static auto value = Point2F(0, 0);
			return value;
		}

		static Point2F& One()
		{
			static auto value = Point2F(1, 1);
			return value;
		}

		static const Point2F& UnitX()
		{
			static auto value = Point2F(1, 0);
			return value;
		}

		static const Point2F& UnitY()
		{
			static auto value = Point2F(0, 1);
			return value;
		}

	public:
		/// <summary>
		/// Initialize a new instance of the Point2F class
		/// </summary>
		Point2F() :
			m_x(0),
			m_y(0)
		{
		}

		Point2F(float x, float y) :
			m_x(x),
			m_y(y)
		{
		}

		/// <summary>
		/// Named Access
		/// </summary>
		float GetX() const
		{
			return m_x;
		}

		float GetY() const
		{
			return m_y;
		}

		void SetX(float value)
		{
			m_x = value;
		}

		void SetY(float value)
		{
			m_y = value;
		}

		/// <summary>
		/// Assignment Operators
		/// </summary>
		Point2F& operator=(const Point2F& rhs)
		{
			m_x = rhs.m_x;
			m_y = rhs.m_y;
			return *this;
		}

		Point2F& operator+=(const Point2F& rhs)
		{
			m_x += rhs.m_x;
			m_y += rhs.m_y;
			return *this;
		}

		Point2F& operator-=(const Point2F& rhs)
		{
			m_x -= rhs.m_x;
			m_y -= rhs.m_y;
			return *this;
		}

		Point2F& operator*=(const Point2F& rhs)
		{
			m_x *= rhs.m_x;
			m_y *= rhs.m_y;
			return *this;
		}

		Point2F& operator/=(const Point2F& rhs)
		{
			m_x /= rhs.m_x;
			m_y /= rhs.m_y;
			return *this;
		}

		/// <summary>
		/// Arithmetic Operators
		/// </summary>
		Point2F operator+(const Point2F& rhs) const
		{
			return Point2F(
				m_x + rhs.m_x,
				m_y + rhs.m_y);
		}

		Point2F operator-(const Point2F& rhs) const
		{
			return Point2F(
				m_x - rhs.m_x,
				m_y - rhs.m_y);
		}

		Point2F operator*(const Point2F& rhs) const
		{
			return Point2F(
				m_x * rhs.m_x,
				m_y * rhs.m_y);
		}

		Point2F operator/(const Point2F& rhs) const
		{
			return Point2F(
				m_x / rhs.m_x,
				m_y / rhs.m_y);
		}

		/// <summary>
		/// Comparison Operators
		/// </summary>
		bool operator==(const Point2F& rhs) const
		{
			return
				m_x == rhs.m_x &&
				m_y == rhs.m_y;
		}

		bool operator!=(const Point2F& rhs) const
		{
			return
				m_x != rhs.m_x ||
				m_y != rhs.m_y;
		}
	};

	std::wostream& operator<<(std::wostream& stream, const Point2F& value)
	{
		stream << L"["
			<< value.GetX() << L", "
			<< value.GetY() << L"]";

		return stream;
	}
}