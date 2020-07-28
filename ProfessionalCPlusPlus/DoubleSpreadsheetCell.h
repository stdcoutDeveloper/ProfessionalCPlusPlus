#pragma once

#include "SpreadsheetCell.h"
#include <limits>

namespace ProfessionalCPlusPlus
{
	class DoubleSpreadsheetCell : public SpreadsheetCell
	{
	public:
		DoubleSpreadsheetCell() : value_(std::numeric_limits<double>::quiet_NaN()) // "quiet not-a-number"
		{
		}

		virtual void Set(double value)
		{
			value_ = value;
		}

		virtual void Set(const std::string& string) override
		{
			value_ = StringToDouble(string);
		}

		virtual std::string GetString() const override
		{
			return DoubleToString(value_);
		}

	private:
		double value_;

		static std::string DoubleToString(double value)
		{
			return std::to_string(value);
		}

		static double StringToDouble(const std::string& value)
		{
			return std::stod(value);
		}
	};
}



