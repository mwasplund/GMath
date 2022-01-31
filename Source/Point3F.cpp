// <copyright file="Point3F.cpp" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

module;
#include <iostream>
export module GMath:Point3F;

export namespace GMath
{
	/// <summary>
	/// The floating point 3D
	/// </summary>
	class Point3F
	{
	private:
		/// <summary>
		/// The values
		/// </summary>
		float m_x;
		float m_y;
		float m_z;

	public:
		/// <summary>
		/// Defaults
		/// </summary>
		static const Point3F& Zero()
		{
			static auto value = Point3F(0, 0, 0);
			return value;
		}

		static const Point3F& One()
		{
			static auto value = Point3F(1, 1, 1);
			return value;
		}

		static const Point3F& UnitX()
		{
			static auto value = Point3F(1, 0, 0);
			return value;
		}

		static const Point3F& UnitY()
		{
			static auto value = Point3F(0, 1, 0);
			return value;
		}

		static const Point3F& UnitZ()
		{
			static auto value = Point3F(0, 0, 1);
			return value;
		}

	public:
		/// <summary>
		/// Initialize a new instance of the Point3F class
		/// </summary>
		Point3F() :
			m_x(0),
			m_y(0),
			m_z(0)
		{
		}

		Point3F(float x, float y, float z) :
			m_x(x),
			m_y(y),
			m_z(z)
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

		/// <summary>
		/// Assignment Operators
		/// </summary>
		Point3F& operator=(const Point3F& rhs)
		{
			m_x = rhs.m_x;
			m_y = rhs.m_y;
			m_z = rhs.m_z;
			return *this;
		}

		Point3F& operator+=(const Point3F& rhs)
		{
			m_x += rhs.m_x;
			m_y += rhs.m_y;
			m_z += rhs.m_z;
			return *this;
		}

		Point3F& operator-=(const Point3F& rhs)
		{
			m_x -= rhs.m_x;
			m_y -= rhs.m_y;
			m_z -= rhs.m_z;
			return *this;
		}

		Point3F& operator*=(const Point3F& rhs)
		{
			m_x *= rhs.m_x;
			m_y *= rhs.m_y;
			m_z *= rhs.m_z;
			return *this;
		}

		Point3F& operator/=(const Point3F& rhs)
		{
			m_x /= rhs.m_x;
			m_y /= rhs.m_y;
			m_z /= rhs.m_z;
			return *this;
		}

		/// <summary>
		/// Arithmetic Operators
		/// </summary>
		Point3F operator+(const Point3F& rhs) const
		{
			return Point3F(
				m_x + rhs.m_x,
				m_y + rhs.m_y,
				m_z + rhs.m_z);
		}

		Point3F operator-(const Point3F& rhs) const
		{
			return Point3F(
				m_x - rhs.m_x,
				m_y - rhs.m_y,
				m_z - rhs.m_z);
		}

		Point3F operator*(const Point3F& rhs) const
		{
			return Point3F(
				m_x * rhs.m_x,
				m_y * rhs.m_y,
				m_z * rhs.m_z);
		}

		Point3F operator/(const Point3F& rhs) const
		{
			return Point3F(
				m_x / rhs.m_x,
				m_y / rhs.m_y,
				m_z / rhs.m_z);
		}

		/// <summary>
		/// Comparison Operators
		/// </summary>
		bool operator==(const Point3F& rhs) const
		{
			return
				m_x == rhs.m_x &&
				m_y == rhs.m_y &&
				m_z == rhs.m_z;
		}

		bool operator!=(const Point3F& rhs) const
		{
			return
				m_x != rhs.m_x ||
				m_y != rhs.m_y ||
				m_z != rhs.m_z;
		}
	};

	std::wostream& operator<<(std::wostream& stream, const Point3F& value)
	{
		stream << L"["
			<< value.GetX() << L", "
			<< value.GetY() << L", "
			<< value.GetZ() << L"]";

		return stream;
	}
}