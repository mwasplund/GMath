// <copyright file="RangeF.cpp" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

module;
#include <iostream>
export module GMath:RangeF;

export namespace GMath
{
	/// <summary>
	/// The unsigned int range
	/// </summary>
	class RangeF
	{
	private:
		/// <summary>
		/// The values
		/// </summary>
		float m_min;
		float m_max;

	public:
		/// <summary>
		/// Initialize a new instance of the RangeF class
		/// </summary>
		RangeF() :
			m_min(0),
			m_max(0)
		{
		}

		RangeF(float min, float max) :
			m_min(min),
			m_max(max)
		{
		}

		/// <summary>
		/// Named Access
		/// </summary>
		float GetMin() const
		{
			return m_min;
		}

		float GetMax() const
		{
			return m_max;
		}

		void SetMin(float value)
		{
			m_min = value;
		}

		void SetMax(float value)
		{
			m_max = value;
		}

		/// <summary>
		/// Assignment Operators
		/// </summary>
		RangeF& operator=(const RangeF& rhs)
		{
			m_min = rhs.m_min;
			m_max = rhs.m_max;
			return *this;
		}

		/// <summary>
		/// Comparison Operators
		/// </summary>
		bool operator==(const RangeF& rhs) const
		{
			return
				m_min == rhs.m_min &&
				m_max == rhs.m_max;
		}

		bool operator!=(const RangeF& rhs) const
		{
			return
				m_min != rhs.m_min ||
				m_max != rhs.m_max;
		}
	};

	std::ostream& operator<<(std::ostream& stream, const RangeF& value)
	{
		stream << "["
			<< value.GetMin() << ", "
			<< value.GetMax() << "]";

		return stream;
	}
}