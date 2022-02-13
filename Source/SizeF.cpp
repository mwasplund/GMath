// <copyright file="SizeF.cpp" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

module;
#include <iostream>
export module GMath:SizeF;

export namespace GMath
{
	/// <summary>
	/// The floating point size 2D
	/// </summary>
	class SizeF
	{
	private:
		/// <summary>
		/// The values
		/// </summary>
		float m_width;
		float m_height;

	public:
		/// <summary>
		/// Initialize a new instance of the SizeF class
		/// </summary>
		SizeF() :
			m_width(0),
			m_height(0)
		{
		}

		SizeF(float width, float height) :
			m_width(width),
			m_height(height)
		{
		}

		/// <summary>
		/// Named Access
		/// </summary>
		float GetWidth() const
		{
			return m_width;
		}

		float GetHeight() const
		{
			return m_height;
		}

		void SetWidth(float value)
		{
			m_width = value;
		}

		void SetHeight(float value)
		{
			m_height = value;
		}

		/// <summary>
		/// Assignment Operators
		/// </summary>
		SizeF& operator=(const SizeF& rhs)
		{
			m_width = rhs.m_width;
			m_height = rhs.m_height;
			return *this;
		}

		/// <summary>
		/// Comparison Operators
		/// </summary>
		bool operator==(const SizeF& rhs) const
		{
			return
				m_width == rhs.m_width &&
				m_height == rhs.m_height;
		}

		bool operator!=(const SizeF& rhs) const
		{
			return
				m_width != rhs.m_width ||
				m_height != rhs.m_height;
		}
	};
	
	std::ostream& operator<<(std::ostream& stream, const SizeF& value)
	{
		stream << "["
			<< value.GetWidth() << ", "
			<< value.GetHeight() << "]";

		return stream;
	}
}