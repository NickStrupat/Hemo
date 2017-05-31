#ifndef HEMO_SYSTEM_INTEGER_HPP_INCLUDED
#define HEMO_SYSTEM_INTEGER_HPP_INCLUDED

#include <cstdint>

#include "Object.hpp"
#include "String.hpp"

namespace System {
	template<typename T>
	class Integer : public Object {
		T value;
	public:
		explicit Integer(T const value) : value(value) {}
		operator T() const { return value; }
		String ToString() { return String(std::to_wstring(this->value).c_str()); }
	};
}

#endif