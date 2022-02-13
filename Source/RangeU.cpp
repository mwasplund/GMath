// <copyright file="RangeU.cpp" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

module;
#include <iostream>
export module GMath:RangeU;

export namespace GMath
{
	/// <summary>
	/// The unsigned int range
	/// </summary>
	class RangeU
	{
	private:
		/// <summary>
		/// The values
		/// </summary>
		uint32_t m_min;
		uint32_t m_max;

	public:
		/// <summary>
		/// Initialize a new instance of the RangeU class
		/// </summary>
		RangeU() :
			m_min(0),
			m_max(0)
		{
		}

		RangeU(uint32_t min, uint32_t max) :
			m_min(min),
			m_max(max)
		{
		}

		/// <summary>
		/// Named Access
		/// </summary>
		uint32_t GetMin() const
		{
			return m_min;
		}

		uint32_t GetMax() const
		{
			return m_max;
		}

		void SetMin(uint32_t value)
		{
			m_min = value;
		}

		void SetMax(uint32_t value)
		{
			m_max = value;
		}

		/// <summary>
		/// Assignment Operators
		/// </summary>
		RangeU& operator=(const RangeU& rhs)
		{
			m_min = rhs.m_min;
			m_max = rhs.m_max;
			return *this;
		}

		/// <summary>
		/// Comparison Operators
		/// </summary>
		bool operator==(const RangeU& rhs) const
		{
			return
				m_min == rhs.m_min &&
				m_max == rhs.m_max;
		}

		bool operator!=(const RangeU& rhs) const
		{
			return
				m_min != rhs.m_min ||
				m_max != rhs.m_max;
		}
	};

	std::ostream& operator<<(std::ostream& stream, const RangeU& value)
	{
		stream << "["
			<< value.GetMin() << ", "
			<< value.GetMax() << "]";

		return stream;
	}
}