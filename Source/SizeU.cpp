// <copyright file="SizeU.cpp" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

module;
#include <iostream>
export module GMath:SizeU;

export namespace GMath
{
	/// <summary>
	/// The unsigned int size
	/// </summary>
	class SizeU
	{
	private:
		/// <summary>
		/// The values
		/// </summary>
		uint32_t m_width;
		uint32_t m_height;

	public:
		/// <summary>
		/// Initialize a new instance of the SizeU class
		/// </summary>
		SizeU() :
			m_width(0),
			m_height(0)
		{
		}

		SizeU(uint32_t width, uint32_t height) :
			m_width(width),
			m_height(height)
		{
		}

		/// <summary>
		/// Named Access
		/// </summary>
		uint32_t GetWidth() const
		{
			return m_width;
		}

		uint32_t GetHeight() const
		{
			return m_height;
		}

		void SetWidth(uint32_t value)
		{
			m_width = value;
		}

		void SetHeight(uint32_t value)
		{
			m_height = value;
		}

		/// <summary>
		/// Assignment Operators
		/// </summary>
		SizeU& operator=(const SizeU& rhs)
		{
			m_width = rhs.m_width;
			m_height = rhs.m_height;
			return *this;
		}

		/// <summary>
		/// Comparison Operators
		/// </summary>
		bool operator==(const SizeU& rhs) const
		{
			return
				m_width == rhs.m_width &&
				m_height == rhs.m_height;
		}

		bool operator!=(const SizeU& rhs) const
		{
			return
				m_width != rhs.m_width ||
				m_height != rhs.m_height;
		}
	};

	std::wostream& operator<<(std::wostream& stream, const SizeU& value)
	{
		stream << L"["
			<< value.GetWidth() << L", "
			<< value.GetHeight() << L"]";

		return stream;
	}
}

