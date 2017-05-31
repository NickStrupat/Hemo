#ifndef HEMO_SYSTEM_BOOLEAN_HPP_INCLUDED
#define HEMO_SYSTEM_BOOLEAN_HPP_INCLUDED

#include "Object.hpp"
#include "String.hpp"
#include "SizeType.hpp"

namespace System {
	class Boolean : public Object {
		bool value;
	public:
		explicit Boolean();
		explicit Boolean(bool const value);
		explicit operator bool() const;
		String ToString() const override;

		static String const FalseString;
		static String const TrueString;
	};
}

#endif