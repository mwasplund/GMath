// <copyright file="Point4F.cpp" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

module;
#include <iostream>
export module GMath:Point4F;

export namespace GMath
{
	/// <summary>
	/// The floating point 4D
	/// </summary>
	class Point4F
	{
	private:
		/// <summary>
		/// The values
		/// </summary>
		float m_x;
		float m_y;
		float m_z;
		float m_w;

	public:
		/// <summary>
		/// Defaults
		/// </summary>
		static const Point4F& Zero()
		{
			static Point4F value = Point4F(0, 0, 0, 0);
			return value;
		}

		static const Point4F& One()
		{
			static Point4F value = Point4F(1, 1, 1, 1);
			return value;
		}

		static const Point4F& UnitX()
		{
			static Point4F value = Point4F(1, 0, 0, 0);
			return value;
		}

		static const Point4F& UnitY()
		{
			static Point4F value = Point4F(0, 1, 0, 0);
			return value;
		}

		static const Point4F& UnitZ()
		{
			static Point4F value = Point4F(0, 0, 1, 0);
			return value;
		}

		static const Point4F& UnitW()
		{
			static Point4F value = Point4F(0, 0, 0, 1);
			return value;
		}

	public:
		/// <summary>
		/// Initialize a new instance of the Point4F class
		/// </summary>
		Point4F() :
			m_x(0),
			m_y(0),
			m_z(0),
			m_w(0)
		{
		}

		Point4F(float x, float y, float z, float w) :
			m_x(x),
			m_y(y),
			m_z(z),
			m_w(w)
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

		float GetZ() const
		{
			return m_z;
		}

		float GetW() const
		{
			return m_w;
		}

		void SetX(float value)
		{
			m_x = value;
		}

		void SetY(float value)
		{
			m_y = value;
		}

		void SetZ(float value)
		{
			m_z = value;
		}

		void SetW(float value)
		{
			m_w = value;
		}

		/// <summary>
		/// Assignment Operators
		/// </summary>
		Point4F& operator=(const Point4F& rhs)
		{
			m_x = rhs.m_x;
			m_y = rhs.m_y;
			m_z = rhs.m_z;
			m_w = rhs.m_w;
			return *this;
		}

		Point4F& operator+=(const Point4F& rhs)
		{
			m_x += rhs.m_x;
			m_y += rhs.m_y;
			m_z += rhs.m_z;
			m_w += rhs.m_w;
			return *this;
		}

		Point4F& operator-=(const Point4F& rhs)
		{
			m_x -= rhs.m_x;
			m_y -= rhs.m_y;
			m_z -= rhs.m_z;
			m_w -= rhs.m_w;
			return *this;
		}

		Point4F& operator*=(const Point4F& rhs)
		{
			m_x *= rhs.m_x;
			m_y *= rhs.m_y;
			m_z *= rhs.m_z;
			m_w *= rhs.m_w;
			return *this;
		}

		Point4F& operator/=(const Point4F& rhs)
		{
			m_x /= rhs.m_x;
			m_y /= rhs.m_y;
			m_z /= rhs.m_z;
			m_w /= rhs.m_w;
			return *this;
		}

		/// <summary>
		/// Arithmetic Operators
		/// </summary>
		Point4F operator+(const Point4F& rhs) const
		{
			return Point4F(
				m_x + rhs.m_x,
				m_y + rhs.m_y,
				m_z + rhs.m_z,
				m_w + rhs.m_w);
		}

		Point4F operator-(const Point4F& rhs) const
		{
			return Point4F(
				m_x - rhs.m_x,
				m_y - rhs.m_y,
				m_z - rhs.m_z,
				m_w - rhs.m_w);
		}

		Point4F operator*(const Point4F& rhs) const
		{
			return Point4F(
				m_x * rhs.m_x,
				m_y * rhs.m_y,
				m_z * rhs.m_z,
				m_w * rhs.m_w);
		}

		Point4F operator/(const Point4F& rhs) const
		{
			return Point4F(
				m_x / rhs.m_x,
				m_y / rhs.m_y,
				m_z / rhs.m_z,
				m_w / rhs.m_w);
		}

		/// <summary>
		/// Comparison Operators
		/// </summary>
		bool operator==(const Point4F& rhs) const
		{
			return
				m_x == rhs.m_x &&
				m_y == rhs.m_y &&
				m_z == rhs.m_z &&
				m_w == rhs.m_w;
		}

		bool operator!=(const Point4F& rhs) const
		{
			return
				m_x != rhs.m_x ||
				m_y != rhs.m_y ||
				m_z != rhs.m_z ||
				m_w != rhs.m_w;
		}
	};
	
	std::ostream& operator<<(std::ostream& stream, const Point4F& value)
	{
		stream << "["
			<< value.GetX() << ", "
			<< value.GetY() << ", "
			<< value.GetZ() << ", "
			<< value.GetW() << "]";

		return stream;
	}
}