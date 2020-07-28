#pragma once

#include "SpreadsheetCell.h"

namespace ProfessionalCPlusPlus
{
	class StringSpreadsheetCell : public SpreadsheetCell
	{
	public:
		StringSpreadsheetCell() : value_("#NO_VALUE")
		{
		}

		virtual void Set(const std::string& string) override
		{
			value_ = string;
		}

		virtual std::string GetString() const override
		{
			return value_;
		}

	private:
		std::string value_;
	};
}
