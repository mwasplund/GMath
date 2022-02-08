// <copyright file="QuaternionF.cpp" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

module;
#include <iostream>
export module GMath:QuaternionF;

export namespace GMath
{
	/// <summary>
	/// The floating point quaternion 4D
	/// </summary>
	class QuaternionF
	{
	private:
		/// <summary>
		/// The values
		/// </summary>
		SimdVector m_values;

	public:
		/// <summary>
		/// Get a reference to the identity quaternion
		/// </summary>
		static QuaternionF Identity()
		{
			return XMQuaternionIdentity();
		}

	public:
		/// <summary>
		/// Initialize a new instance of the QuaternionF class
		/// </summary>
		QuaternionF() :
			m_values()
		{
		}

		QuaternionF(float pitch, float yaw, float roll) :
			m_values(XMQuaternionRotationRollPitchYaw(pitch, yaw, roll))
		{
		}

		QuaternionF(const Vector3F& axis, float angle) :
			m_values(XMQuaternionRotationAxis(axis, angle))
		{
		}

	public:
		/// <summary>
		/// Named Access
		/// TODO : PROLY REMOVE
		/// </summary>
		float GetX() const
		{
			return XMVectorGetX(m_values);
		}

		float GetY() const
		{
			return XMVectorGetY(m_values);
		}

		float GetZ() const
		{
			return XMVectorGetZ(m_values);
		}

		float GetW() const
		{
			return XMVectorGetW(m_values);
		}

		/// <summary>
		/// Assignment Operators
		/// </summary>
		QuaternionF& operator=(const QuaternionF& rhs)
		{
			m_values = rhs.m_values;
			return *this;
		}

		QuaternionF& operator*=(const QuaternionF& rhs)
		{
			*this = *this * rhs;
			return *this;
		}

		/// <summary>
		/// Arithmetic Operators
		/// </summary>
		QuaternionF operator~() const
		{
			return XMQuaternionConjugate(m_values);
		}

		QuaternionF operator-() const
		{
			return XMVectorNegate(m_values);
		}

		QuaternionF operator*(const QuaternionF& rhs) const
		{
			return XMQuaternionMultiply(m_values, rhs);
		}

		Vector3F operator*(const Vector3F& rhs) const
		{
			return XMVector3Rotate(rhs, m_values);
		}

		/// <summary>
		/// Comparison Operators
		/// </summary>
		bool operator==(const QuaternionF& rhs) const
		{
			return XMQuaternionEqual(m_values, rhs);
		}

		bool operator!=(const QuaternionF& rhs) const
		{
			return XMQuaternionNotEqual(m_values, rhs);
		}

	private:
		/// <summary>
		/// Raw Access
		/// </summary>
		QuaternionF(SimdVector values) :
			m_values(values)
		{
		}

		operator SimdVector() const
		{
			return m_values;
		}
	};
	
	std::wostream& operator<<(std::wostream& stream, const QuaternionF& value)
	{
		stream << L"["
			<< value.GetX() << L", "
			<< value.GetY() << L","
			<< value.GetZ() << L", "
			<< value.GetW() << L"]";

		return stream;
	}
}