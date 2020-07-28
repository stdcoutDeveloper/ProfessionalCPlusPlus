#pragma once

#include <string>

namespace ProfessionalCPlusPlus
{
	class SpreadsheetCell
	{
	public:
		SpreadsheetCell() = default;

		virtual ~SpreadsheetCell()
		{
		}

		virtual void Set(const std::string& string) = 0;

		virtual std::string GetString() const = 0;
	};
}
